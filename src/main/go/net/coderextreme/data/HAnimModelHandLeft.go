
package main

import (
	"encoding/xml"
	"fmt"
	"io"
	"log"
	"net/http"
	"os"

	"gox3d/x3d" // Assumes your module is named x3d-go-tester

	// Imports for the CGo-based libxml2 wrapper
	"github.com/lestrrat-go/libxml2"
	"github.com/lestrrat-go/libxml2/xsd"
)

// ... (Helper functions remain the same) ...
func stringPtr(s string) *string { return &s }
func floatPtr(f float32) *float32 { return &f }
func doublePtr(d float64) *float64 { return &d }
func boolPtr(b bool) *bool       { return &b }
func int32Ptr(i int32) *int32    { return &i }

func downloadSchemaIfNotExists(url, filepath string) error {
	// ... (function is correct, no changes) ...
	if _, err := os.Stat(filepath); err == nil {
		fmt.Printf("Schema file '%s' already exists. Skipping download.\n", filepath)
		return nil
	}
	fmt.Printf("Downloading X3D schema from %s to %s...\n", url, filepath)
	resp, err := http.Get(url)
	if err != nil { return fmt.Errorf("failed to download schema: %w", err) }
	defer resp.Body.Close()
	if resp.StatusCode != http.StatusOK { return fmt.Errorf("bad status: %s", resp.Status) }
	out, err := os.Create(filepath)
	if err != nil { return fmt.Errorf("failed to create schema file: %w", err) }
	defer out.Close()
	_, err = io.Copy(out, resp.Body)
	if err != nil { return fmt.Errorf("failed to save schema: %w", err) }
	fmt.Println("Schema downloaded successfully.")
	return nil
}

// Updated validation function to print detailed errors
func validateXMLWithSchema(xmlData []byte, schemaPath string) error {
	schema, err := xsd.ParseFromFile(schemaPath)
	if err != nil { return fmt.Errorf("failed to parse schema file %s: %w", schemaPath, err) }
	defer schema.Free()
	doc, err := libxml2.Parse(xmlData)
	if err != nil { return fmt.Errorf("failed to parse XML data: %w", err) }
	defer doc.Free()

	validationErr := schema.Validate(doc)
	if validationErr != nil {
		errorLog := ""
		if schemaErrors, ok := validationErr.(xsd.SchemaValidationError); ok {
			for i, e := range schemaErrors.Errors() {
				errorLog += fmt.Sprintf("Error %d: %s\n", i+1, e.Error())
			}
			return fmt.Errorf("schema validation failed with %d errors:\n%s", len(schemaErrors.Errors()), errorLog)
		}
		return fmt.Errorf("schema validation failed: %w", validationErr)
	}
	return nil
}

func main() {
	fmt.Println("--- Building and Testing an X3D Scene in Go ---")

	const schemaURL = "https://www.web3d.org/specifications/x3d-4.1.xsd"
	const schemaFilename = "x3d-4.1.xsd"
	if err := downloadSchemaIfNotExists(schemaURL, schemaFilename); err != nil {
		log.Fatalf("Could not prepare schema file: %v", err)
	}
    sceneRoot := &x3d.X3D{
        Profile: stringPtr("Immersive"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("HAnim"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("HAnimModelHandLeft.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Left hand, using high-fidelity definitions for HAnim version 2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Kwan-Hee YOO, Don Brutzman and Joe Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("26 January 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("23 December 2021"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("HAnimModelHandRightSegmentVisualizationError.png"),
            },
            &x3d.Meta{
                Name: stringPtr("error"),
                Content: stringPtr("not yet to scale, also relatively flat"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/working-groups/humanoid-animation-HAnim"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("X3D HAnim humanoid animation"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("Integrate and confirm Segment/Joint names, Viewpoints."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.WorldInfo{
                    Title: stringPtr("HAnimModelHandLeft.x3d"),
                },
                &x3d.HAnimHumanoid{
                    Name: stringPtr("Hand_Left"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_Hand_Left"),
                    },
                    Loa: int32Ptr(4),
                    Version: stringPtr("2.0"),
//original HAnimHumanoid info='"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"'
                    Metadata: &x3d.MetadataSet{
                        Name: stringPtr("HAnimHumanoid.info"),
                        Reference: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                        &x3d.MetadataString{
                            Name: stringPtr("authorName"),
                            Value: x3d.MFString{"Kwan-Hee YOO, Don Brutzman and Joe Williams"},
                        },
                    },
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            Name: stringPtr("humanoid_root"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("hanim_humanoid_root"),
                            },
                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("l_radiocarpal"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_l_radiocarpal"),
                                    },
                                    Description: stringPtr("connection joint of hand to leg above"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("l_carpal"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_carpal"),
                                            },
                                            &x3d.Transform{
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("HAnimJointShape"),
                                                        },
                                                        Geometry: &x3d.Sphere{
                                                            Radius: floatPtr(0.025),
                                                        },
                                                        Appearance: &x3d.Appearance{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("HAnimJointAppearanceBlue"),
                                                            },
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                    },
                                                },
                                                Geometry: &x3d.IndexedLineSet{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("RCToMC12"),
                                                    },
                                                    CoordIndex: []int32{0, 1},
                                                    Coord: &x3d.Coordinate{
                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.1,0.1,0.0}},
                                                    },
                                                },
                                            },
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                    },
                                                },
                                                Geometry: &x3d.IndexedLineSet{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("RCToMC3"),
                                                    },
                                                    CoordIndex: []int32{0, 1},
                                                    Coord: &x3d.Coordinate{
                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.07,0.0}},
                                                    },
                                                },
                                            },
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                    },
                                                },
                                                Geometry: &x3d.IndexedLineSet{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("RCToMC45"),
                                                    },
                                                    CoordIndex: []int32{0, 1},
                                                    Coord: &x3d.Coordinate{
                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{-0.1,0.1,0.0}},
                                                    },
                                                },
                                            },
                                    },
//MC1
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            Name: stringPtr("l_midcarpal_1"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_midcarpal_1"),
                                            },
                                            Center: &x3d.SFVec3f{0.14, 0.09, 0.0},
                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    Name: stringPtr("l_trapezium"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_trapezium"),
                                                    },
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.14, 0.09, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("HAnimNewJointShape"),
                                                                },
                                                                Geometry: &x3d.Sphere{
                                                                    Radius: floatPtr(0.025),
                                                                },
                                                                Appearance: &x3d.Appearance{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("HAnimJointAppearanceRed"),
                                                                    },
                                                                    Material: &x3d.Material{
                                                                        DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                                    },
                                                                },
                                                            },
                                                        },
                                                    },
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            },
                                                        },
                                                        Geometry: &x3d.IndexedLineSet{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("MC12toCMC1"),
                                                            },
                                                            CoordIndex: []int32{0, 1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.1,0.1,0.0},[3]float32{0.2,0.15,0.0}},
                                                            },
                                                        },
                                                    },
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            },
                                                        },
                                                        Geometry: &x3d.IndexedLineSet{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("MC1toCMC1"),
                                                            },
                                                            CoordIndex: []int32{0, 1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.1,0.1,0.0},[3]float32{0.1,0.2,0.0}},
                                                            },
                                                        },
                                                    },
                                            },
//thumb finger
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    Name: stringPtr("l_carpometacarpal_1"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_carpometacarpal_1"),
                                                    },
                                                    Center: &x3d.SFVec3f{0.2, 0.15, 0.0},
                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            Name: stringPtr("l_metacarpal_1"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_metacarpal_1"),
                                                            },
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.2, 0.15, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("HAnimJointShape"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.Shape{
                                                                Appearance: &x3d.Appearance{
                                                                    Material: &x3d.Material{
                                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                    },
                                                                },
                                                                Geometry: &x3d.IndexedLineSet{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("CMC1toMCP1"),
                                                                    },
                                                                    CoordIndex: []int32{0, 1},
                                                                    Coord: &x3d.Coordinate{
                                                                        Point: &x3d.MFVec3f{[3]float32{0.2,0.15,0.0},[3]float32{0.3,0.3,0.0}},
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            Name: stringPtr("l_metacarpophalangeal_1"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_metacarpophalangeal_1"),
                                                            },
                                                            Center: &x3d.SFVec3f{0.3, 0.3, 0.0},
                                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    Name: stringPtr("l_carpal_proximal_phalanx_1"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_carpal_proximal_phalanx_1"),
                                                                    },
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{0.3, 0.3, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Shape{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("HAnimJointShape"),
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.Shape{
                                                                        Appearance: &x3d.Appearance{
                                                                            Material: &x3d.Material{
                                                                                EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                            },
                                                                        },
                                                                        Geometry: &x3d.IndexedLineSet{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("MCP11toIP1"),
                                                                            },
                                                                            CoordIndex: []int32{0, 1},
                                                                            Coord: &x3d.Coordinate{
                                                                                Point: &x3d.MFVec3f{[3]float32{0.3,0.3,0.0},[3]float32{0.35,0.4,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    Name: stringPtr("l_carpal_interphalangeal_1"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_carpal_interphalangeal_1"),
                                                                    },
                                                                    Center: &x3d.SFVec3f{0.35, 0.4, 0.0},
                                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            Name: stringPtr("l_carpal_distal_phalanx_1"),
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_carpal_distal_phalanx_1"),
                                                                            },
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{0.35, 0.4, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.Shape{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            USE: stringPtr("HAnimJointShape"),
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                            &x3d.Shape{
                                                                                Appearance: &x3d.Appearance{
                                                                                    Material: &x3d.Material{
                                                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                    },
                                                                                },
                                                                                Geometry: &x3d.IndexedLineSet{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("fingertip_l_carpal_interphalangeal_1"),
                                                                                    },
                                                                                    CoordIndex: []int32{0, 1},
                                                                                    Coord: &x3d.Coordinate{
                                                                                        Point: &x3d.MFVec3f{[3]float32{0.35,0.4,0.0},[3]float32{0.36,0.45,0.0}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                            },
                                                    },
                                            },
                                    },
//MC2
                                    &x3d.HAnimJoint{
                                        Name: stringPtr("l_midcarpal_2"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_midcarpal_2"),
                                        },
                                        Center: &x3d.SFVec3f{0.07, 0.07, 0.0},
                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                Name: stringPtr("l_trapezoid"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_trapezoid"),
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.07, 0.07, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimNewJointShape"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedLineSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("MC2toCMC2"),
                                                        },
                                                        CoordIndex: []int32{0, 1},
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{-0.1,0.1,0.0},[3]float32{-0.1,0.2,0.0}},
                                                        },
                                                    },
                                                },
                                        },
//index finger
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                Name: stringPtr("l_carpometacarpal_2"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_carpometacarpal_2"),
                                                },
                                                Center: &x3d.SFVec3f{0.1, 0.2, 0.0},
                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        Name: stringPtr("l_metacarpal_2"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_metacarpal_2"),
                                                        },
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{0.1, 0.2, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                },
                                                            },
                                                            Geometry: &x3d.IndexedLineSet{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("CMC2toMCP2"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.1,0.2,0.0},[3]float32{0.15,0.5,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        Name: stringPtr("l_metacarpophalangeal_2"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_metacarpophalangeal_2"),
                                                        },
                                                        Center: &x3d.SFVec3f{0.15, 0.5, 0.0},
                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                Name: stringPtr("l_carpal_proximal_phalanx_2"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal_proximal_phalanx_2"),
                                                                },
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{0.15, 0.5, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimJointShape"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.Shape{
                                                                    Appearance: &x3d.Appearance{
                                                                        Material: &x3d.Material{
                                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                        },
                                                                    },
                                                                    Geometry: &x3d.IndexedLineSet{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("MCP2toPIP2"),
                                                                        },
                                                                        CoordIndex: []int32{0, 1},
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.15,0.5,0.0},[3]float32{0.2,0.7,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_2"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_2"),
                                                                },
                                                                Center: &x3d.SFVec3f{0.2, 0.7, 0.0},
                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        Name: stringPtr("l_carpal_middle_phalanx_2"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_carpal_middle_phalanx_2"),
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{0.2, 0.7, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimJointShape"),
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                        &x3d.Shape{
                                                                            Appearance: &x3d.Appearance{
                                                                                Material: &x3d.Material{
                                                                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                },
                                                                            },
                                                                            Geometry: &x3d.IndexedLineSet{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("PIP2toDIP2"),
                                                                                },
                                                                                CoordIndex: []int32{0, 1},
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.2,0.7,0.0},[3]float32{0.24,0.87,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_2"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_2"),
                                                                        },
                                                                        Center: &x3d.SFVec3f{0.24, 0.87, 0.0},
                                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                Name: stringPtr("l_carpal_distal_phalanx_2"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_carpal_distal_phalanx_2"),
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{0.24, 0.87, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Shape{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                USE: stringPtr("HAnimJointShape"),
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                                &x3d.Shape{
                                                                                    Appearance: &x3d.Appearance{
                                                                                        Material: &x3d.Material{
                                                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                        },
                                                                                    },
                                                                                    Geometry: &x3d.IndexedLineSet{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("fingertip_l_carpal_distal_interphalangeal_2"),
                                                                                        },
                                                                                        CoordIndex: []int32{0, 1},
                                                                                        Coord: &x3d.Coordinate{
                                                                                            Point: &x3d.MFVec3f{[3]float32{0.24,0.87,0.0},[3]float32{0.26,0.93,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                        },
                                    },
//MC3
                                    &x3d.HAnimJoint{
                                        Name: stringPtr("l_midcarpal_3"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_midcarpal_3"),
                                        },
                                        Center: &x3d.SFVec3f{0.0, 0.07, 0.0},
                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                Name: stringPtr("l_capitate"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_capitate"),
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0, 0.07, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimNewJointShape"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedLineSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("MC3toCMC3"),
                                                        },
                                                        CoordIndex: []int32{0, 1},
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.07,0.0},[3]float32{0.0,0.2,0.0}},
                                                        },
                                                    },
                                                },
                                        },
//Middle fingle
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                Name: stringPtr("l_carpometacarpal_3"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_carpometacarpal_3"),
                                                },
                                                Center: &x3d.SFVec3f{0.0, 0.2, 0.0},
                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        Name: stringPtr("l_metacarpal_3"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_metacarpal_3"),
                                                        },
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{0.0, 0.2, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                },
                                                            },
                                                            Geometry: &x3d.IndexedLineSet{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("CMC3toMCP3"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.2,0.0},[3]float32{0.03,0.5,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        Name: stringPtr("l_metacarpophalangeal_3"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_metacarpophalangeal_3"),
                                                        },
                                                        Center: &x3d.SFVec3f{0.03, 0.5, 0.0},
                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                Name: stringPtr("l_carpal_proximal_phalanx_3"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal_proximal_phalanx_3"),
                                                                },
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{0.03, 0.5, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimJointShape"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.Shape{
                                                                    Appearance: &x3d.Appearance{
                                                                        Material: &x3d.Material{
                                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                        },
                                                                    },
                                                                    Geometry: &x3d.IndexedLineSet{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("MCP3toPIP3"),
                                                                        },
                                                                        CoordIndex: []int32{0, 1},
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.03,0.5,0.0},[3]float32{0.05,0.75,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_3"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_3"),
                                                                },
                                                                Center: &x3d.SFVec3f{0.05, 0.75, 0.0},
                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        Name: stringPtr("l_carpal_middle_phalanx_3"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_carpal_middle_phalanx_3"),
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{0.05, 0.75, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimJointShape"),
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                        &x3d.Shape{
                                                                            Appearance: &x3d.Appearance{
                                                                                Material: &x3d.Material{
                                                                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                },
                                                                            },
                                                                            Geometry: &x3d.IndexedLineSet{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("PIP3toDIP3"),
                                                                                },
                                                                                CoordIndex: []int32{0, 1},
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.05,0.75,0.0},[3]float32{0.08,0.96,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_3"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_3"),
                                                                        },
                                                                        Center: &x3d.SFVec3f{0.08, 0.96, 0.0},
                                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                Name: stringPtr("l_carpal_distal_phalanx_3"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_carpal_distal_phalanx_3"),
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{0.08, 0.96, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Shape{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                USE: stringPtr("HAnimJointShape"),
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                                &x3d.Shape{
                                                                                    Appearance: &x3d.Appearance{
                                                                                        Material: &x3d.Material{
                                                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                        },
                                                                                    },
                                                                                    Geometry: &x3d.IndexedLineSet{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("fingertip_l_carpal_distal_interphalangeal_3"),
                                                                                        },
                                                                                        CoordIndex: []int32{0, 1},
                                                                                        Coord: &x3d.Coordinate{
                                                                                            Point: &x3d.MFVec3f{[3]float32{0.08,0.96,0.0},[3]float32{0.09,1.05,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                        },
                                    },
//MC45
                                    &x3d.HAnimJoint{
                                        Name: stringPtr("l_midcarpal_4_5"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_midcarpal_4_5"),
                                        },
                                        Center: &x3d.SFVec3f{-0.1, 0.1, 0.0},
                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                Name: stringPtr("l_hamate"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_hamate"),
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-0.1, 0.1, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimNewJointShape"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedLineSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("MC45toCMC4"),
                                                        },
                                                        CoordIndex: []int32{0, 1},
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{-0.1,0.1,0.0},[3]float32{-0.1,0.2,0.0}},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedLineSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("MC45toCMC5"),
                                                        },
                                                        CoordIndex: []int32{0, 1},
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{-0.1,0.1,0.0},[3]float32{-0.15,0.17,0.0}},
                                                        },
                                                    },
                                                },
                                        },
//ring finger
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                Name: stringPtr("l_carpometacarpal_4"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_carpometacarpal_4"),
                                                },
                                                Center: &x3d.SFVec3f{-0.1, 0.2, 0.0},
                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        Name: stringPtr("l_metacarpal_4"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_metacarpal_4"),
                                                        },
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-0.1, 0.2, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                },
                                                            },
                                                            Geometry: &x3d.IndexedLineSet{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("CMC4toMCP4"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{-0.1,0.2,0.0},[3]float32{-0.1,0.47,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        Name: stringPtr("l_metacarpophalangeal_4"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_metacarpophalangeal_4"),
                                                        },
                                                        Center: &x3d.SFVec3f{-0.1, 0.47, 0.0},
                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                Name: stringPtr("l_carpal_proximal_phalanx_4"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal_proximal_phalanx_4"),
                                                                },
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.1, 0.47, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimJointShape"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.Shape{
                                                                    Appearance: &x3d.Appearance{
                                                                        Material: &x3d.Material{
                                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                        },
                                                                    },
                                                                    Geometry: &x3d.IndexedLineSet{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("MCP4toPIP4"),
                                                                        },
                                                                        CoordIndex: []int32{0, 1},
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{-0.1,0.47,0.0},[3]float32{-0.1,0.7,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_4"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_4"),
                                                                },
                                                                Center: &x3d.SFVec3f{-0.1, 0.7, 0.0},
                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        Name: stringPtr("l_carpal_middle_phalanx_4"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_carpal_middle_phalanx_4"),
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-0.1, 0.7, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimJointShape"),
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                        &x3d.Shape{
                                                                            Appearance: &x3d.Appearance{
                                                                                Material: &x3d.Material{
                                                                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                },
                                                                            },
                                                                            Geometry: &x3d.IndexedLineSet{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("PIP4toDIP4"),
                                                                                },
                                                                                CoordIndex: []int32{0, 1},
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.1,0.7,0.0},[3]float32{-0.1,0.93,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_4"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_4"),
                                                                        },
                                                                        Center: &x3d.SFVec3f{-0.1, 0.93, 0.0},
                                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                Name: stringPtr("l_carpal_distal_phalanx_4"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_carpal_distal_phalanx_4"),
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{-0.1, 0.93, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Shape{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                USE: stringPtr("HAnimJointShape"),
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                                &x3d.Shape{
                                                                                    Appearance: &x3d.Appearance{
                                                                                        Material: &x3d.Material{
                                                                                            EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                        },
                                                                                    },
                                                                                    Geometry: &x3d.IndexedLineSet{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("fingertip_l_carpal_distal_interphalangeal_4"),
                                                                                        },
                                                                                        CoordIndex: []int32{0, 1},
                                                                                        Coord: &x3d.Coordinate{
                                                                                            Point: &x3d.MFVec3f{[3]float32{-0.1,0.93,0.0},[3]float32{-0.1,1.0,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                        },
//pinky finger
                                        &x3d.HAnimJoint{
                                            Name: stringPtr("l_carpometacarpal_5"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_carpometacarpal_5"),
                                            },
                                            Center: &x3d.SFVec3f{-0.15, 0.17, 0.0},
                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    Name: stringPtr("l_metacarpal_5"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_metacarpal_5"),
                                                    },
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{-0.15, 0.17, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("HAnimJointShape"),
                                                                },
                                                            },
                                                        },
                                                    },
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            },
                                                        },
                                                        Geometry: &x3d.IndexedLineSet{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("CMC5toMCP5"),
                                                            },
                                                            CoordIndex: []int32{0, 1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{-0.15,0.17,0.0},[3]float32{-0.2,0.4,0.0}},
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    Name: stringPtr("l_metacarpophalangeal_5"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_metacarpophalangeal_5"),
                                                    },
                                                    Center: &x3d.SFVec3f{-0.2, 0.4, 0.0},
                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            Name: stringPtr("l_carpal_proximal_phalanx_5"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_carpal_proximal_phalanx_5"),
                                                            },
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{-0.2, 0.4, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("HAnimJointShape"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.Shape{
                                                                Appearance: &x3d.Appearance{
                                                                    Material: &x3d.Material{
                                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                    },
                                                                },
                                                                Geometry: &x3d.IndexedLineSet{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("MCP5toPIP5"),
                                                                    },
                                                                    CoordIndex: []int32{0, 1},
                                                                    Coord: &x3d.Coordinate{
                                                                        Point: &x3d.MFVec3f{[3]float32{-0.2,0.4,0.0},[3]float32{-0.23,0.63,0.0}},
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            Name: stringPtr("l_carpal_proximal_interphalangeal_5"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_5"),
                                                            },
                                                            Center: &x3d.SFVec3f{-0.23, 0.63, 0.0},
                                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    Name: stringPtr("l_carpal_middle_phalanx_5"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_carpal_middle_phalanx_5"),
                                                                    },
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{-0.23, 0.63, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Shape{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("HAnimJointShape"),
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.Shape{
                                                                        Appearance: &x3d.Appearance{
                                                                            Material: &x3d.Material{
                                                                                EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                            },
                                                                        },
                                                                        Geometry: &x3d.IndexedLineSet{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("PIP5toDIP5"),
                                                                            },
                                                                            CoordIndex: []int32{0, 1},
                                                                            Coord: &x3d.Coordinate{
                                                                                Point: &x3d.MFVec3f{[3]float32{-0.23,0.63,0.0},[3]float32{-0.25,0.79,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    Name: stringPtr("l_carpal_distal_interphalangeal_5"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_5"),
                                                                    },
                                                                    Center: &x3d.SFVec3f{-0.25, 0.79, 0.0},
                                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            Name: stringPtr("l_carpal_distal_phalanx_5"),
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_carpal_distal_phalanx_5"),
                                                                            },
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{-0.25, 0.79, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.Shape{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            USE: stringPtr("HAnimJointShape"),
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                            &x3d.Shape{
                                                                                Appearance: &x3d.Appearance{
                                                                                    Material: &x3d.Material{
                                                                                        EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                    },
                                                                                },
                                                                                Geometry: &x3d.IndexedLineSet{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("fingertip_l_carpal_distal_interphalangeal_5"),
                                                                                    },
                                                                                    CoordIndex: []int32{0, 1},
                                                                                    Coord: &x3d.Coordinate{
                                                                                        Point: &x3d.MFVec3f{[3]float32{-0.25,0.79,0.0},[3]float32{-0.26,0.85,0.0}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                            },
                                                    },
                                            },
                                        },
                                    },
                            },
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_humanoid_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_4_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_radiocarpal"),
                        },
                    },
                },
            },
        },
    }


	fmt.Println("\n--- Validating the generated scene (internal logic) ---")
	err := sceneRoot.Scene.Validate()
	if err != nil {
		log.Fatalf("Scene validation failed: %v", err)
	}
	fmt.Println("✅ Internal scene validation successful!")
	fmt.Println("\n--- Serializing scene to XML ---")
	output, err := xml.MarshalIndent(sceneRoot, "", "  ")

	if err != nil {
		log.Fatalf("XML Marshaling failed: %v", err)
	}
	/*
	fmt.Println("\n--- Validating XML against X3D 4.1 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.1 schema!")
	*/
	filename := "../data/HAnimModelHandLeft.new.go.x3d"
	file, err := os.OpenFile(filename, os.O_CREATE|os.O_WRONLY, 0644)
	if err != nil {
		fmt.Printf("Error opening file: %v\n", err)
		return
	}
	defer file.Close() // Ensure the file is closed when the function exits

	// Write the string content to the file
	header := "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<!DOCTYPE X3D PUBLIC \"ISO//Web3D//DTD X3D 4.1//EN\" \"https://www.web3d.org/specifications/x3d-4.1.dtd\">\n"
	_, err = file.WriteString(header)
	if err != nil {
		fmt.Printf("Error writing header to file: %v\n", err)
		return
	}

	_, err = file.Write(output)
	if err != nil {
		fmt.Printf("Error writing bytes to file: %v\n", err)
		return
	}

	fmt.Printf("\n✅ Scene successfully written to %s\n", filename)
	fmt.Printf("   You can view the generated XML below:\n\n%s\n", string(output))
}