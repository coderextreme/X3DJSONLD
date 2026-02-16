
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
                    Content: stringPtr("HAnimModelFootLeft.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Left foot, using high-fidelity definitions for HAnim version 2.0"),
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
                Name: stringPtr("warning"),
                Content: stringPtr("not yet to scale"),
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
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"),
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
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"),
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
                    Title: stringPtr("HAnimModelFootLeft.x3d"),
                },
                &x3d.HAnimHumanoid{
                    Name: stringPtr("Foot_Left"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_Foot_Left"),
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
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("l_talocrural"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_l_talocrural"),
                                    },
                                    Description: stringPtr("connection joint of foot to leg above"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("l_talus"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_talus"),
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
                                                                DEF: stringPtr("HAnimJointAppearance"),
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
                                                        DEF: stringPtr("TCtoTCN"),
                                                    },
                                                    CoordIndex: []int32{0, 1},
                                                    Coord: &x3d.Coordinate{
                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.3,0.0}},
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
                                                        DEF: stringPtr("TCtoCC"),
                                                    },
                                                    CoordIndex: []int32{0, 1},
                                                    Coord: &x3d.Coordinate{
                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.2,0.3,0.0}},
                                                    },
                                                },
                                            },
                                    },
//TCN
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            Name: stringPtr("l_talocalcaneonavicular"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_talocalcaneonavicular"),
                                            },
                                            Center: &x3d.SFVec3f{0.0, -0.3, 0.0},
                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    Name: stringPtr("l_navicular"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_navicular"),
                                                    },
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.0, -0.3, 0.0},
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
                                                                DEF: stringPtr("TCNtoCN1"),
                                                            },
                                                            CoordIndex: []int32{0, 1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,-0.3,0.0},[3]float32{-0.1,-0.45,0.0}},
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
                                                                DEF: stringPtr("TCNtoCN2"),
                                                            },
                                                            CoordIndex: []int32{0, 1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,-0.3,0.0},[3]float32{0.0,-0.45,0.0}},
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
                                                                DEF: stringPtr("TCNtoCN3"),
                                                            },
                                                            CoordIndex: []int32{0, 1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,-0.3,0.0},[3]float32{0.1,-0.4,0.0}},
                                                            },
                                                        },
                                                    },
                                            },
//CN1
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    Name: stringPtr("l_cuneonavicular_1"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_cuneonavicular_1"),
                                                    },
                                                    Center: &x3d.SFVec3f{-0.1, -0.45, 0.0},
                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            Name: stringPtr("l_cuneiform_1"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_cuneiform_1"),
                                                            },
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{-0.1, -0.45, 0.0},
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
                                                                        DEF: stringPtr("CN1toTMT1"),
                                                                    },
                                                                    CoordIndex: []int32{0, 1},
                                                                    Coord: &x3d.Coordinate{
                                                                        Point: &x3d.MFVec3f{[3]float32{-0.1,-0.45,0.0},[3]float32{-0.1,-0.6,0.0}},
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            Name: stringPtr("l_tarsometatarsal_1"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_tarsometatarsal_1"),
                                                            },
                                                            Center: &x3d.SFVec3f{-0.1, -0.6, 0.0},
                                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    Name: stringPtr("l_metatarsal_1"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_metatarsal_1"),
                                                                    },
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{-0.1, -0.6, 0.0},
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
                                                                                DEF: stringPtr("TMT1toMTP1"),
                                                                            },
                                                                            CoordIndex: []int32{0, 1},
                                                                            Coord: &x3d.Coordinate{
                                                                                Point: &x3d.MFVec3f{[3]float32{-0.1,-0.6,0.0},[3]float32{-0.1,-0.9,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    Name: stringPtr("l_metatarsophalangeal_1"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_metatarsophalangeal_1"),
                                                                    },
                                                                    Center: &x3d.SFVec3f{-0.1, -0.9, 0.0},
                                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            Name: stringPtr("l_tarsal_proximal_phalanx_1"),
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_tarsal_proximal_phalanx_1"),
                                                                            },
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{-0.1, -0.9, 0.0},
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
                                                                                        DEF: stringPtr("MTP1toIP1"),
                                                                                    },
                                                                                    CoordIndex: []int32{0, 1},
                                                                                    Coord: &x3d.Coordinate{
                                                                                        Point: &x3d.MFVec3f{[3]float32{-0.1,-0.9,0.0},[3]float32{-0.1,-1.05,0.0}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            Name: stringPtr("l_tarsal_interphalangeal_1"),
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_tarsal_interphalangeal_1"),
                                                                            },
                                                                            Center: &x3d.SFVec3f{-0.1, -1.05, 0.0},
                                                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    Name: stringPtr("l_tarsal_distal_phalanx_1"),
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_l_tarsal_distal_phalanx_1"),
                                                                                    },
                                                                                    &x3d.Transform{
                                                                                            Translation: &x3d.SFVec3f{-0.1, -1.05, 0.0},
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
                                                                                                DEF: stringPtr("tiptoe_l_tarsal_distal_interphalangeal_1"),
                                                                                            },
                                                                                            CoordIndex: []int32{0, 1},
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{-0.1,-1.05,0.0},[3]float32{-0.1,-1.1,0.0}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                            },
                                                                    },
                                                            },
                                                    },
                                            },
//CN2
                                            &x3d.HAnimJoint{
                                                Name: stringPtr("l_cuneonavicular_2"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_cuneonavicular_2"),
                                                },
                                                Center: &x3d.SFVec3f{0.0, -0.45, 0.0},
                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        Name: stringPtr("l_cuneiform_2"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_cuneiform_2"),
                                                        },
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{0.0, -0.45, 0.0},
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
                                                                    DEF: stringPtr("CN2toTMT2"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,-0.45,0.0},[3]float32{0.05,-0.6,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        Name: stringPtr("l_tarsometatarsal_2"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_tarsometatarsal_2"),
                                                        },
                                                        Center: &x3d.SFVec3f{0.05, -0.6, 0.0},
                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                Name: stringPtr("l_metatarsal_2"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_metatarsal_2"),
                                                                },
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{0.05, -0.6, 0.0},
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
                                                                            DEF: stringPtr("TMT2toMTP2"),
                                                                        },
                                                                        CoordIndex: []int32{0, 1},
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.05,-0.6,0.0},[3]float32{0.05,-0.9,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                Name: stringPtr("l_metatarsophalangeal_2"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_metatarsophalangeal_2"),
                                                                },
                                                                Center: &x3d.SFVec3f{0.05, -0.9, 0.0},
                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        Name: stringPtr("l_tarsal_proximal_phalanx_2"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_tarsal_proximal_phalanx_2"),
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{0.05, -0.9, 0.0},
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
                                                                                    DEF: stringPtr("MTP2toPIP2"),
                                                                                },
                                                                                CoordIndex: []int32{0, 1},
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.05,-0.9,0.0},[3]float32{0.05,-1.05,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        Name: stringPtr("l_tarsal_proximal_interphalangeal_2"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_2"),
                                                                        },
                                                                        Center: &x3d.SFVec3f{0.05, -1.05, 0.0},
                                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                Name: stringPtr("l_tarsal_middle_phalanx_2"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_middle_phalanx_2"),
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{0.05, -1.05, 0.0},
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
                                                                                            Point: &x3d.MFVec3f{[3]float32{0.05,-1.05,0.0},[3]float32{0.05,-1.12,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                Name: stringPtr("l_tarsal_distal_interphalangeal_2"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_2"),
                                                                                },
                                                                                Center: &x3d.SFVec3f{0.05, -1.12, 0.0},
                                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        Name: stringPtr("l_tarsal_distal_phalanx_2"),
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_tarsal_distal_phalanx_2"),
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.05, -1.12, 0.0},
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
                                                                                                    DEF: stringPtr("tiptoe_l_tarsal_distal_phalanx_2"),
                                                                                                },
                                                                                                CoordIndex: []int32{0, 1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{0.05,-1.12,0.0},[3]float32{0.05,-1.16,0.0}},
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                            },
//CN3
                                            &x3d.HAnimJoint{
                                                Name: stringPtr("l_cuneonavicular_3"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_cuneonavicular_3"),
                                                },
                                                Center: &x3d.SFVec3f{0.1, -0.4, 0.0},
                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        Name: stringPtr("l_cuneiform_3"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_cuneiform_3"),
                                                        },
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{0.1, -0.4, 0.0},
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
                                                                    DEF: stringPtr("CN3toTMT3"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.1,-0.4,0.0},[3]float32{0.15,-0.6,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        Name: stringPtr("l_tarsometatarsal_3"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_tarsometatarsal_3"),
                                                        },
                                                        Center: &x3d.SFVec3f{0.15, -0.6, 0.0},
                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                Name: stringPtr("l_metatarsal_3"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_metatarsal_3"),
                                                                },
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{0.15, -0.6, 0.0},
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
                                                                            DEF: stringPtr("TMT3toMTP3"),
                                                                        },
                                                                        CoordIndex: []int32{0, 1},
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.15,-0.6,0.0},[3]float32{0.15,-0.9,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                Name: stringPtr("l_metatarsophalangeal_3"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_metatarsophalangeal_3"),
                                                                },
                                                                Center: &x3d.SFVec3f{0.15, -0.9, 0.0},
                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        Name: stringPtr("l_tarsal_proximal_phalanx_3"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_tarsal_proximal_phalanx_3"),
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{0.15, -0.9, 0.0},
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
                                                                                    DEF: stringPtr("MTP3toPIP3"),
                                                                                },
                                                                                CoordIndex: []int32{0, 1},
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.15,-0.9,0.0},[3]float32{0.15,-1.05,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        Name: stringPtr("l_tarsal_proximal_interphalangeal_3"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_3"),
                                                                        },
                                                                        Center: &x3d.SFVec3f{0.15, -1.05, 0.0},
                                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                Name: stringPtr("l_tarsal_middle_phalanx_3"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_middle_phalanx_3"),
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{0.15, -1.05, 0.0},
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
                                                                                            Point: &x3d.MFVec3f{[3]float32{0.15,-1.05,0.0},[3]float32{0.15,-1.13,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                Name: stringPtr("l_tarsal_distal_interphalangeal_3"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_3"),
                                                                                },
                                                                                Center: &x3d.SFVec3f{0.15, -1.13, 0.0},
                                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        Name: stringPtr("l_tarsal_distal_phalanx_3"),
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_tarsal_distal_phalanx_3"),
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.15, -1.13, 0.0},
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
                                                                                                    DEF: stringPtr("tiptoe_l_tarsal_distal_interphalangeal_3"),
                                                                                                },
                                                                                                CoordIndex: []int32{0, 1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{0.15,-1.13,0.0},[3]float32{0.15,-1.16,0.0}},
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
//CC
                                    &x3d.HAnimJoint{
                                        Name: stringPtr("l_calcaneocuboid"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_calcaneocuboid"),
                                        },
                                        Center: &x3d.SFVec3f{0.2, 0.3, 0.0},
                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                Name: stringPtr("l_calcaneus"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_calcaneus"),
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.2, 0.3, 0.0},
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
                                                            DEF: stringPtr("CCtoTT"),
                                                        },
                                                        CoordIndex: []int32{0, 1},
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{0.2,0.3,0.0},[3]float32{0.21,-0.3,0.0}},
                                                        },
                                                    },
                                                },
                                        },
//TT
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                Name: stringPtr("l_transversetarsal"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_transversetarsal"),
                                                },
                                                Center: &x3d.SFVec3f{0.21, -0.3, 0.0},
                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        Name: stringPtr("l_cuboid"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_cuboid"),
                                                        },
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{0.21, -0.3, 0.0},
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
                                                                    DEF: stringPtr("TTtoTMT4"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.21,-0.3,0.0},[3]float32{0.25,-0.58,0.0}},
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
                                                                    DEF: stringPtr("TTtoTMT5"),
                                                                },
                                                                CoordIndex: []int32{0, 1},
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.21,-0.3,0.0},[3]float32{0.33,-0.52,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
//TMT4
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        Name: stringPtr("l_tarsometatarsal_4"),
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_tarsometatarsal_4"),
                                                        },
                                                        Center: &x3d.SFVec3f{0.25, -0.58, 0.0},
                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                Name: stringPtr("l_metatarsal_4"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_metatarsal_4"),
                                                                },
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{0.25, -0.58, 0.0},
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
                                                                            DEF: stringPtr("TMT4toMTP4"),
                                                                        },
                                                                        CoordIndex: []int32{0, 1},
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.25,-0.58,0.0},[3]float32{0.25,-0.87,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                Name: stringPtr("l_metatarsophalangeal_4"),
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_metatarsophalangeal_4"),
                                                                },
                                                                Center: &x3d.SFVec3f{0.25, -0.87, 0.0},
                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        Name: stringPtr("l_tarsal_proximal_phalanx_4"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_tarsal_proximal_phalanx_4"),
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{0.25, -0.87, 0.0},
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
                                                                                    DEF: stringPtr("MTP4toPIP4"),
                                                                                },
                                                                                CoordIndex: []int32{0, 1},
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.25,-0.87,0.0},[3]float32{0.25,-1.0,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        Name: stringPtr("l_tarsal_proximal_interphalangeal_4"),
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_4"),
                                                                        },
                                                                        Center: &x3d.SFVec3f{0.25, -1.0, 0.0},
                                                                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                Name: stringPtr("l_tarsal_middle_phalanx_4"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_middle_phalanx_4"),
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{0.25, -1.0, 0.0},
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
                                                                                            Point: &x3d.MFVec3f{[3]float32{0.25,-1.0,0.0},[3]float32{0.25,-1.1,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                Name: stringPtr("l_tarsal_distal_interphalangeal_4"),
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_4"),
                                                                                },
                                                                                Center: &x3d.SFVec3f{0.25, -1.1, 0.0},
                                                                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        Name: stringPtr("l_tarsal_distal_phalanx_4"),
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_tarsal_distal_phalanx_4"),
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.25, -1.1, 0.0},
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
                                                                                                    DEF: stringPtr("tiptoe_l_tarsal_distal_interphalangeal_4"),
                                                                                                },
                                                                                                CoordIndex: []int32{0, 1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{0.25,-1.1,0.0},[3]float32{0.25,-1.15,0.0}},
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
//TMT5
                                                &x3d.HAnimJoint{
                                                    Name: stringPtr("l_tarsometatarsal_5"),
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_tarsometatarsal_5"),
                                                    },
                                                    Center: &x3d.SFVec3f{0.33, -0.52, 0.0},
                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            Name: stringPtr("l_metatarsal_5"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_metatarsal_5"),
                                                            },
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.33, -0.52, 0.0},
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
                                                                        DEF: stringPtr("TMT5toMTP5"),
                                                                    },
                                                                    CoordIndex: []int32{0, 1},
                                                                    Coord: &x3d.Coordinate{
                                                                        Point: &x3d.MFVec3f{[3]float32{0.33,-0.52,0.0},[3]float32{0.34,-0.8,0.0}},
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            Name: stringPtr("l_metatarsophalangeal_5"),
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_metatarsophalangeal_5"),
                                                            },
                                                            Center: &x3d.SFVec3f{0.34, -0.8, 0.0},
                                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    Name: stringPtr("l_tarsal_proximal_phalanx_5"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_tarsal_proximal_phalanx_5"),
                                                                    },
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{0.34, -0.8, 0.0},
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
                                                                                DEF: stringPtr("MTP5toPIP5"),
                                                                            },
                                                                            CoordIndex: []int32{0, 1},
                                                                            Coord: &x3d.Coordinate{
                                                                                Point: &x3d.MFVec3f{[3]float32{0.34,-0.8,0.0},[3]float32{0.34,-0.95,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    Name: stringPtr("l_tarsal_proximal_interphalangeal_5"),
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_5"),
                                                                    },
                                                                    Center: &x3d.SFVec3f{0.34, -0.95, 0.0},
                                                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            Name: stringPtr("l_tarsal_middle_phalanx_5"),
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_tarsal_middle_phalanx_5"),
                                                                            },
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{0.34, -0.95, 0.0},
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
                                                                                        Point: &x3d.MFVec3f{[3]float32{0.34,-0.95,0.0},[3]float32{0.34,-1.05,0.0}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            Name: stringPtr("l_tarsal_distal_interphalangeal_5"),
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_5"),
                                                                            },
                                                                            Center: &x3d.SFVec3f{0.34, -1.05, 0.0},
                                                                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    Name: stringPtr("l_tarsal_distal_phalanx_5"),
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_l_tarsal_distal_phalanx_5"),
                                                                                    },
                                                                                    &x3d.Transform{
                                                                                            Translation: &x3d.SFVec3f{0.34, -1.05, 0.0},
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
                                                                                                DEF: stringPtr("tiptoe_l_tarsal_distal_interphalangeal_5"),
                                                                                            },
                                                                                            CoordIndex: []int32{0, 1},
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{0.34,-1.05,0.0},[3]float32{0.34,-1.08,0.0}},
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
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_humanoid_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_calcaneocuboid"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_cuneonavicular_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_cuneonavicular_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_cuneonavicular_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_talocalcaneonavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_talocrural"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_transversetarsal"),
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
	filename := "../data/HAnimModelFootLeft.new.go.x3d"
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