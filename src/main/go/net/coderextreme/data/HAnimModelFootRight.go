
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

	const schemaURL = "https://www.web3d.org/specifications/x3d-4.0.xsd"
	const schemaFilename = "x3d-4.0.xsd"
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
                    Content: stringPtr("HAnimModelFootRight.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Right foot, using high-fidelity definitions for HAnim version 2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Kwan Hee YOO, Don Brutzman and Joe Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("26 January 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:09 GMT"),
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
                Name: stringPtr("TODO"),
                Content: stringPtr("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("Add links to figures"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("Add Viewpoints to enable inspection"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("Integrate and confirm Segment/Joint names, Viewpoints."),
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
                Content: stringPtr("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("X3D HAnim humanoid animation"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("HAnimModelFootRight.x3d"),
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_Foot_Right"),
                    },
                    Name: stringPtr("Foot_Right"),
                    Loa: int32Ptr(4),
                    Metadata: &x3d.MetadataSet{
                        Name: stringPtr("HAnimHumanoid.info"),
                        Reference: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                        &x3d.MetadataString{
                            Name: stringPtr("authorName"),
                        },
                    },
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("hanim_humanoid_root"),
                            },
                            Name: stringPtr("humanoid_root"),
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_r_talocrural"),
                                    },
                                    Description: stringPtr("connection joint of foot to leg above"),
                                    Name: stringPtr("r_talocrural"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_r_talus"),
                                            },
                                            Name: stringPtr("r_talus"),
                                            &x3d.Transform{
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("HAnimJointShape"),
                                                        },
                                                        Appearance: &x3d.Appearance{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("HAnimJointAppearance"),
                                                            },
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                            },
                                                        },
                                                        Geometry: &x3d.Sphere{
                                                            Radius: floatPtr(0.025),
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
                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{-0.2,0.3,0.0}},
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_r_talocalcaneonavicular"),
                                            },
                                            Name: stringPtr("r_talocalcaneonavicular"),
                                            Center: &x3d.SFVec3f{0.0, -0.3, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_navicular"),
                                                    },
                                                    Name: stringPtr("r_navicular"),
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
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,-0.3,0.0},[3]float32{0.1,-0.45,0.0}},
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
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,-0.3,0.0},[3]float32{-0.1,-0.4,0.0}},
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_cuneonavicular_1"),
                                                    },
                                                    Name: stringPtr("r_cuneonavicular_1"),
                                                    Center: &x3d.SFVec3f{0.1, -0.45, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_r_cuneiform_1"),
                                                            },
                                                            Name: stringPtr("r_cuneiform_1"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.1, -0.45, 0.0},
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
                                                                        Point: &x3d.MFVec3f{[3]float32{0.1,-0.45,0.0},[3]float32{0.1,-0.6,0.0}},
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_r_tarsometatarsal_1"),
                                                            },
                                                            Name: stringPtr("r_tarsometatarsal_1"),
                                                            Center: &x3d.SFVec3f{0.1, -0.6, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_metatarsal_1"),
                                                                    },
                                                                    Name: stringPtr("r_metatarsal_1"),
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{0.1, -0.6, 0.0},
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
                                                                                Point: &x3d.MFVec3f{[3]float32{0.1,-0.6,0.0},[3]float32{0.1,-0.9,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_metatarsophalangeal_1"),
                                                                    },
                                                                    Name: stringPtr("r_metatarsophalangeal_1"),
                                                                    Center: &x3d.SFVec3f{0.1, -0.9, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsal_proximal_phalanx_1"),
                                                                            },
                                                                            Name: stringPtr("r_tarsal_proximal_phalanx_1"),
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{0.1, -0.9, 0.0},
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
                                                                                        Point: &x3d.MFVec3f{[3]float32{0.1,-0.9,0.0},[3]float32{0.1,-1.05,0.0}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsal_interphalangeal_1"),
                                                                            },
                                                                            Name: stringPtr("r_tarsal_interphalangeal_1"),
                                                                            Center: &x3d.SFVec3f{0.1, -1.05, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_tarsal_distal_phalanx_1"),
                                                                                    },
                                                                                    Name: stringPtr("r_tarsal_distal_phalanx_1"),
                                                                                    &x3d.Transform{
                                                                                            Translation: &x3d.SFVec3f{0.1, -1.05, 0.0},
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
                                                                                                DEF: stringPtr("tiptoe_r_interphalangeal_"),
                                                                                            },
                                                                                            CoordIndex: []int32{0, 1},
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{0.1,-1.05,0.0},[3]float32{0.1,-1.1,0.0}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                            },
                                                                    },
                                                            },
                                                    },
                                            },
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_cuneonavicular_2"),
                                                },
                                                Name: stringPtr("r_cuneonavicular_2"),
                                                Center: &x3d.SFVec3f{0.0, -0.45, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_cuneiform_2"),
                                                        },
                                                        Name: stringPtr("r_cuneiform_2"),
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
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,-0.45,0.0},[3]float32{-0.05,-0.6,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_tarsometatarsal_2"),
                                                        },
                                                        Name: stringPtr("r_tarsometatarsal_2"),
                                                        Center: &x3d.SFVec3f{-0.05, -0.6, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsal_2"),
                                                                },
                                                                Name: stringPtr("r_metatarsal_2"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.05, -0.6, 0.0},
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
                                                                            Point: &x3d.MFVec3f{[3]float32{-0.05,-0.6,0.0},[3]float32{-0.05,-0.9,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsophalangeal_2"),
                                                                },
                                                                Name: stringPtr("r_metatarsophalangeal_2"),
                                                                Center: &x3d.SFVec3f{-0.05, -0.9, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_phalanx_2"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_phalanx_2"),
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-0.05, -0.9, 0.0},
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
                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.05,-0.9,0.0},[3]float32{-0.05,-1.05,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_2"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_interphalangeal_2"),
                                                                        Center: &x3d.SFVec3f{-0.05, -1.05, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsal_middle_phalanx_2"),
                                                                                },
                                                                                Name: stringPtr("r_tarsal_middle_phalanx_2"),
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{-0.05, -1.05, 0.0},
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
                                                                                            Point: &x3d.MFVec3f{[3]float32{-0.05,-1.05,0.0},[3]float32{-0.05,-1.12,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_2"),
                                                                                },
                                                                                Name: stringPtr("r_tarsal_distal_interphalangeal_2"),
                                                                                Center: &x3d.SFVec3f{-0.05, -1.12, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_tarsal_distal_phalanx_2"),
                                                                                        },
                                                                                        Name: stringPtr("r_tarsal_distal_phalanx_2"),
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{-0.05, -1.12, 0.0},
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
                                                                                                    DEF: stringPtr("tiptoe_r_tarsal_distal_interphalangeal_2"),
                                                                                                },
                                                                                                CoordIndex: []int32{0, 1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.05,-1.12,0.0},[3]float32{-0.05,-1.16,0.0}},
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                            },
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_cuneonavicular_3"),
                                                },
                                                Name: stringPtr("r_cuneonavicular_3"),
                                                Center: &x3d.SFVec3f{-0.1, -0.4, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_cuneiform_3"),
                                                        },
                                                        Name: stringPtr("r_cuneiform_3"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-0.1, -0.4, 0.0},
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
                                                                    Point: &x3d.MFVec3f{[3]float32{-0.1,-0.4,0.0},[3]float32{-0.15,-0.6,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_tarsometatarsal_3"),
                                                        },
                                                        Name: stringPtr("r_tarsometatarsal_3"),
                                                        Center: &x3d.SFVec3f{-0.15, -0.6, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsal_3"),
                                                                },
                                                                Name: stringPtr("r_metatarsal_3"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.15, -0.6, 0.0},
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
                                                                            Point: &x3d.MFVec3f{[3]float32{-0.15,-0.6,0.0},[3]float32{-0.15,-0.9,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsophalangeal_3"),
                                                                },
                                                                Name: stringPtr("r_metatarsophalangeal_3"),
                                                                Center: &x3d.SFVec3f{-0.15, -0.9, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_phalanx_3"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_phalanx_3"),
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-0.15, -0.9, 0.0},
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
                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.15,-0.9,0.0},[3]float32{-0.15,-1.05,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_3"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_interphalangeal_3"),
                                                                        Center: &x3d.SFVec3f{-0.15, -1.05, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsal_middle_phalanx_3"),
                                                                                },
                                                                                Name: stringPtr("r_tarsal_middle_phalanx_3"),
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{-0.15, -1.05, 0.0},
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
                                                                                            Point: &x3d.MFVec3f{[3]float32{-0.15,-1.05,0.0},[3]float32{-0.15,-1.13,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_3"),
                                                                                },
                                                                                Name: stringPtr("r_tarsal_distal_interphalangeal_3"),
                                                                                Center: &x3d.SFVec3f{-0.15, -1.13, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_tarsal_distal_phalanx_3"),
                                                                                        },
                                                                                        Name: stringPtr("r_tarsal_distal_phalanx_3"),
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{-0.15, -1.13, 0.0},
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
                                                                                                    DEF: stringPtr("tiptoe_r_tarsal_distal_interphalangeal_3"),
                                                                                                },
                                                                                                CoordIndex: []int32{0, 1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.15,-1.13,0.0},[3]float32{-0.15,-1.16,0.0}},
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
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_r_calcaneocuboid"),
                                        },
                                        Name: stringPtr("r_calcaneocuboid"),
                                        Center: &x3d.SFVec3f{-0.2, 0.3, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_calcaneus"),
                                                },
                                                Name: stringPtr("r_calcaneus"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-0.2, 0.3, 0.0},
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
                                                            Point: &x3d.MFVec3f{[3]float32{-0.2,0.3,0.0},[3]float32{-0.21,-0.3,0.0}},
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_transversetarsal"),
                                                },
                                                Name: stringPtr("r_transversetarsal"),
                                                Center: &x3d.SFVec3f{-0.21, -0.3, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_cuboid"),
                                                        },
                                                        Name: stringPtr("r_cuboid"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-0.21, -0.3, 0.0},
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
                                                                    Point: &x3d.MFVec3f{[3]float32{-0.21,-0.3,0.0},[3]float32{-0.25,-0.58,0.0}},
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
                                                                    Point: &x3d.MFVec3f{[3]float32{-0.21,-0.3,0.0},[3]float32{-0.33,-0.52,0.0}},
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_tarsometatarsal_4"),
                                                        },
                                                        Name: stringPtr("r_tarsometatarsal_4"),
                                                        Center: &x3d.SFVec3f{-0.25, -0.58, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsal_4"),
                                                                },
                                                                Name: stringPtr("r_metatarsal_4"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.25, -0.58, 0.0},
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
                                                                            Point: &x3d.MFVec3f{[3]float32{-0.25,-0.58,0.0},[3]float32{-0.25,-0.87,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsophalangeal_4"),
                                                                },
                                                                Name: stringPtr("r_metatarsophalangeal_4"),
                                                                Center: &x3d.SFVec3f{-0.25, -0.87, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_phalanx_4"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_phalanx_4"),
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-0.25, -0.87, 0.0},
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
                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.25,-0.87,0.0},[3]float32{-0.25,-1.0,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_4"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_interphalangeal_4"),
                                                                        Center: &x3d.SFVec3f{-0.25, -1.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsal_middle_phalanx_4"),
                                                                                },
                                                                                Name: stringPtr("r_tarsal_middle_phalanx_4"),
                                                                                &x3d.Transform{
                                                                                        Translation: &x3d.SFVec3f{-0.25, -1.0, 0.0},
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
                                                                                            Point: &x3d.MFVec3f{[3]float32{-0.25,-1.0,0.0},[3]float32{-0.25,-1.1,0.0}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_4"),
                                                                                },
                                                                                Name: stringPtr("r_tarsal_distal_interphalangeal_4"),
                                                                                Center: &x3d.SFVec3f{-0.25, -1.1, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_tarsal_distal_phalanx_4"),
                                                                                        },
                                                                                        Name: stringPtr("r_tarsal_distal_phalanx_4"),
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{-0.25, -1.1, 0.0},
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
                                                                                                    DEF: stringPtr("tiptoe_r_tarsal_distal_interphalangeal_4"),
                                                                                                },
                                                                                                CoordIndex: []int32{0, 1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.25,-1.1,0.0},[3]float32{-0.25,-1.15,0.0}},
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_tarsometatarsal_5"),
                                                    },
                                                    Name: stringPtr("r_tarsometatarsal_5"),
                                                    Center: &x3d.SFVec3f{-0.33, -0.52, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_r_metatarsal_5"),
                                                            },
                                                            Name: stringPtr("r_metatarsal_5"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{-0.33, -0.52, 0.0},
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
                                                                        Point: &x3d.MFVec3f{[3]float32{-0.33,-0.52,0.0},[3]float32{-0.34,-0.8,0.0}},
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_r_metatarsophalangeal_5"),
                                                            },
                                                            Name: stringPtr("r_metatarsophalangeal_5"),
                                                            Center: &x3d.SFVec3f{-0.34, -0.8, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_tarsal_proximal_phalanx_5"),
                                                                    },
                                                                    Name: stringPtr("r_tarsal_proximal_phalanx_5"),
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{-0.34, -0.8, 0.0},
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
                                                                                Point: &x3d.MFVec3f{[3]float32{-0.34,-0.8,0.0},[3]float32{-0.34,-0.95,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_5"),
                                                                    },
                                                                    Name: stringPtr("r_tarsal_proximal_interphalangeal_5"),
                                                                    Center: &x3d.SFVec3f{-0.34, -0.95, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsal_middle_phalanx_5"),
                                                                            },
                                                                            Name: stringPtr("r_tarsal_middle_phalanx_5"),
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{-0.34, -0.95, 0.0},
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
                                                                                        Point: &x3d.MFVec3f{[3]float32{-0.34,-0.95,0.0},[3]float32{-0.34,-1.05,0.0}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_5"),
                                                                            },
                                                                            Name: stringPtr("r_tarsal_distal_interphalangeal_5"),
                                                                            Center: &x3d.SFVec3f{-0.34, -1.05, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_tarsal_distal_phalanx_5"),
                                                                                    },
                                                                                    Name: stringPtr("r_tarsal_distal_phalanx_5"),
                                                                                    &x3d.Transform{
                                                                                            Translation: &x3d.SFVec3f{-0.34, -1.05, 0.0},
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
                                                                                                DEF: stringPtr("tiptoe_r_tarsal_distal_interphalangeal_5"),
                                                                                            },
                                                                                            CoordIndex: []int32{0, 1},
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{-0.34,-1.05,0.0},[3]float32{-0.34,-1.08,0.0}},
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
                            USE: stringPtr("hanim_r_calcaneocuboid"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneonavicular_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneonavicular_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneonavicular_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talocalcaneonavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talocrural"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_transversetarsal"),
                        },
                    },
                    Segments: []x3d.X3DNode{
                        &x3d.HAnimSegment{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_r_calcaneus"),
                            },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuboid"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneiform_1"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneiform_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneiform_3"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_1"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_3"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_4"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_5"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_navicular"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talus"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_phalanx_1"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_phalanx_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_phalanx_3"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_phalanx_4"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_phalanx_5"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_middle_phalanx_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_middle_phalanx_3"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_middle_phalanx_4"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_middle_phalanx_5"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_phalanx_1"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_phalanx_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_phalanx_3"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_phalanx_4"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_phalanx_5"),
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
	fmt.Println("\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")
	*/
	filename := "../data/HAnimModelFootRight.new.go.x3d"
	file, err := os.OpenFile(filename, os.O_CREATE|os.O_WRONLY, 0644)
	if err != nil {
		fmt.Printf("Error opening file: %v\n", err)
		return
	}
	defer file.Close() // Ensure the file is closed when the function exits

	// Write the string content to the file
	header := "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<!DOCTYPE X3D PUBLIC \"ISO//Web3D//DTD X3D 4.0//EN\" \"https://www.web3d.org/specifications/x3d-4.0.dtd\">\n"
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