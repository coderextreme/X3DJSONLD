
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
                    Content: stringPtr("JohnJoint.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("An attempt at a standard LOA-4 skeleton"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("h6.pl"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("AxisLinesShape"),
                            },
                            Geometry: &x3d.IndexedLineSet{
                                ColorPerVertex: boolPtr(false),
                                ColorIndex: []int32{0, 1, 2},
                                CoordIndex: []int32{0, 1, -1, 0, 2, -1, 0, 3, -1},
                                Color: &x3d.Color{
                                    Color: &x3d.MFColor{[3]float32{1.0,0.0,0.0},[3]float32{0.0,0.6,0.0},[3]float32{0.0,0.0,1.0}},
                                },
                                Coord: &x3d.Coordinate{
                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.1,0.0,0.0},[3]float32{0.0,0.1,0.0},[3]float32{0.0,0.0,0.1}},
                                },
                            },
                        },
                    },
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 2.1, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HAnimJointShape"),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HAnimJointMaterial"),
                                                    },
                                                    DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.8},
                                                    Transparency: floatPtr(0.3),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                Radius: floatPtr(0.02),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 2.05, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HAnimSegmentLine"),
                                            },
                                            Geometry: &x3d.LineSet{
                                                VertexCount: []int32{2},
                                                Color: &x3d.ColorRGBA{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HAnimSegmentLineColorRGBA"),
                                                    },
                                                    Color: &x3d.MFColorRGBA{[4]float32{1.0,1.0,0.0,1.0},[4]float32{1.0,1.0,0.0,0.1}},
                                                },
                                                Coord: &x3d.Coordinate{
                                                    Point: &x3d.MFVec3f{[3]float32{-0.05,0.0,0.0},[3]float32{0.05,0.0,0.0}},
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.NavigationInfo{
                    Speed: floatPtr(1.5),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("default"),
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_HAnim"),
                    },
                    Name: stringPtr("HAnim"),
                    Info: x3d.MFString{"humanoidVersion=2.0"},
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("hanim_humanoid_root"),
                            },
                            Name: stringPtr("humanoid_root"),
                            Center: &x3d.SFVec3f{0.0, 0.824, 0.0277},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_sacroiliac"),
                                    },
                                    Name: stringPtr("sacroiliac"),
                                    Center: &x3d.SFVec3f{0.0, 0.9149, 0.0016},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_hip"),
                                            },
                                            Name: stringPtr("l_hip"),
                                            Center: &x3d.SFVec3f{0.0961, 0.9124, -0.0001},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_knee"),
                                                    },
                                                    Name: stringPtr("l_knee"),
                                                    Center: &x3d.SFVec3f{0.104, 0.4867, 0.0308},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_talocrural"),
                                                            },
                                                            Name: stringPtr("l_talocrural"),
                                                            Center: &x3d.SFVec3f{0.1101, 0.0656, -0.0736},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_talocalcaneonavicular"),
                                                                    },
                                                                    Name: stringPtr("l_talocalcaneonavicular"),
                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_cuneonavicular_1"),
                                                                            },
                                                                            Name: stringPtr("l_cuneonavicular_1"),
                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_l_tarsometatarsal_1"),
                                                                                    },
                                                                                    Name: stringPtr("l_tarsometatarsal_1"),
                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_l_metatarsophalangeal_1"),
                                                                                            },
                                                                                            Name: stringPtr("l_metatarsophalangeal_1"),
                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.HAnimJoint{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("hanim_l_tarsal_interphalangeal_1"),
                                                                                                    },
                                                                                                    Name: stringPtr("l_tarsal_interphalangeal_1"),
                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            },
                                                                                    },
                                                                            },
                                                                    },
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_cuneonavicular_2"),
                                                                        },
                                                                        Name: stringPtr("l_cuneonavicular_2"),
                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsometatarsal_2"),
                                                                                },
                                                                                Name: stringPtr("l_tarsometatarsal_2"),
                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_metatarsophalangeal_2"),
                                                                                        },
                                                                                        Name: stringPtr("l_metatarsophalangeal_2"),
                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_2"),
                                                                                                },
                                                                                                Name: stringPtr("l_tarsal_proximal_interphalangeal_2"),
                                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.HAnimJoint{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_2"),
                                                                                                        },
                                                                                                        Name: stringPtr("l_tarsal_distal_interphalangeal_2"),
                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                },
                                                                                        },
                                                                                },
                                                                        },
                                                                    },
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_cuneonavicular_3"),
                                                                        },
                                                                        Name: stringPtr("l_cuneonavicular_3"),
                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsometatarsal_3"),
                                                                                },
                                                                                Name: stringPtr("l_tarsometatarsal_3"),
                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_metatarsophalangeal_3"),
                                                                                        },
                                                                                        Name: stringPtr("l_metatarsophalangeal_3"),
                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_3"),
                                                                                                },
                                                                                                Name: stringPtr("l_tarsal_proximal_interphalangeal_3"),
                                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.HAnimJoint{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_3"),
                                                                                                        },
                                                                                                        Name: stringPtr("l_tarsal_distal_interphalangeal_3"),
                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                },
                                                                                        },
                                                                                },
                                                                        },
                                                                    },
                                                            },
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_calcaneocuboid"),
                                                                },
                                                                Name: stringPtr("l_calcaneocuboid"),
                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_transversetarsal"),
                                                                        },
                                                                        Name: stringPtr("l_transversetarsal"),
                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsometatarsal_4"),
                                                                                },
                                                                                Name: stringPtr("l_tarsometatarsal_4"),
                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_metatarsophalangeal_4"),
                                                                                        },
                                                                                        Name: stringPtr("l_metatarsophalangeal_4"),
                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_4"),
                                                                                                },
                                                                                                Name: stringPtr("l_tarsal_proximal_interphalangeal_4"),
                                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.HAnimJoint{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_4"),
                                                                                                        },
                                                                                                        Name: stringPtr("l_tarsal_distal_interphalangeal_4"),
                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                },
                                                                                        },
                                                                                },
                                                                        },
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_tarsometatarsal_5"),
                                                                            },
                                                                            Name: stringPtr("l_tarsometatarsal_5"),
                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_l_metatarsophalangeal_5"),
                                                                                    },
                                                                                    Name: stringPtr("l_metatarsophalangeal_5"),
                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_l_tarsal_proximal_interphalangeal_5"),
                                                                                            },
                                                                                            Name: stringPtr("l_tarsal_proximal_interphalangeal_5"),
                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.HAnimJoint{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("hanim_l_tarsal_distal_interphalangeal_5"),
                                                                                                    },
                                                                                                    Name: stringPtr("l_tarsal_distal_interphalangeal_5"),
                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
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
                                            DEF: stringPtr("hanim_r_hip"),
                                        },
                                        Name: stringPtr("r_hip"),
                                        Center: &x3d.SFVec3f{-0.095, 0.9171, 0.0029},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_knee"),
                                                },
                                                Name: stringPtr("r_knee"),
                                                Center: &x3d.SFVec3f{-0.0867, 0.4913, 0.0318},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_talocrural"),
                                                        },
                                                        Name: stringPtr("r_talocrural"),
                                                        Center: &x3d.SFVec3f{-0.0801, 0.0712, -0.0766},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_talocalcaneonavicular"),
                                                                },
                                                                Name: stringPtr("r_talocalcaneonavicular"),
                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_cuneonavicular_1"),
                                                                        },
                                                                        Name: stringPtr("r_cuneonavicular_1"),
                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_tarsometatarsal_1"),
                                                                                },
                                                                                Name: stringPtr("r_tarsometatarsal_1"),
                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_metatarsophalangeal_1"),
                                                                                        },
                                                                                        Name: stringPtr("r_metatarsophalangeal_1"),
                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_r_tarsal_interphalangeal_1"),
                                                                                                },
                                                                                                Name: stringPtr("r_tarsal_interphalangeal_1"),
                                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                        },
                                                                                },
                                                                        },
                                                                },
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_cuneonavicular_2"),
                                                                    },
                                                                    Name: stringPtr("r_cuneonavicular_2"),
                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsometatarsal_2"),
                                                                            },
                                                                            Name: stringPtr("r_tarsometatarsal_2"),
                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_metatarsophalangeal_2"),
                                                                                    },
                                                                                    Name: stringPtr("r_metatarsophalangeal_2"),
                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_2"),
                                                                                            },
                                                                                            Name: stringPtr("r_tarsal_proximal_interphalangeal_2"),
                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.HAnimJoint{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_2"),
                                                                                                    },
                                                                                                    Name: stringPtr("r_tarsal_distal_interphalangeal_2"),
                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
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
                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsometatarsal_3"),
                                                                            },
                                                                            Name: stringPtr("r_tarsometatarsal_3"),
                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_metatarsophalangeal_3"),
                                                                                    },
                                                                                    Name: stringPtr("r_metatarsophalangeal_3"),
                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_3"),
                                                                                            },
                                                                                            Name: stringPtr("r_tarsal_proximal_interphalangeal_3"),
                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.HAnimJoint{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_3"),
                                                                                                    },
                                                                                                    Name: stringPtr("r_tarsal_distal_interphalangeal_3"),
                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
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
                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_transversetarsal"),
                                                                    },
                                                                    Name: stringPtr("r_transversetarsal"),
                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsometatarsal_4"),
                                                                            },
                                                                            Name: stringPtr("r_tarsometatarsal_4"),
                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_metatarsophalangeal_4"),
                                                                                    },
                                                                                    Name: stringPtr("r_metatarsophalangeal_4"),
                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_4"),
                                                                                            },
                                                                                            Name: stringPtr("r_tarsal_proximal_interphalangeal_4"),
                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.HAnimJoint{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_4"),
                                                                                                    },
                                                                                                    Name: stringPtr("r_tarsal_distal_interphalangeal_4"),
                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                            },
                                                                                    },
                                                                            },
                                                                    },
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsometatarsal_5"),
                                                                        },
                                                                        Name: stringPtr("r_tarsometatarsal_5"),
                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_metatarsophalangeal_5"),
                                                                                },
                                                                                Name: stringPtr("r_metatarsophalangeal_5"),
                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_interphalangeal_5"),
                                                                                        },
                                                                                        Name: stringPtr("r_tarsal_proximal_interphalangeal_5"),
                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_r_tarsal_distal_interphalangeal_5"),
                                                                                                },
                                                                                                Name: stringPtr("r_tarsal_distal_interphalangeal_5"),
                                                                                                Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
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
                                    DEF: stringPtr("hanim_vl5"),
                                },
                                Name: stringPtr("vl5"),
                                Center: &x3d.SFVec3f{0.0028, 1.0568, -0.0776},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_vl4"),
                                        },
                                        Name: stringPtr("vl4"),
                                        Center: &x3d.SFVec3f{0.0035, 1.0925, -0.0787},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_vl3"),
                                                },
                                                Name: stringPtr("vl3"),
                                                Center: &x3d.SFVec3f{0.0041, 1.1276, -0.0796},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_vl2"),
                                                        },
                                                        Name: stringPtr("vl2"),
                                                        Center: &x3d.SFVec3f{0.0045, 1.1546, -0.08},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_vl1"),
                                                                },
                                                                Name: stringPtr("vl1"),
                                                                Center: &x3d.SFVec3f{0.0048, 1.1912, -0.0805},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_vt12"),
                                                                        },
                                                                        Name: stringPtr("vt12"),
                                                                        Center: &x3d.SFVec3f{0.0051, 1.2278, -0.0808},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_vt11"),
                                                                                },
                                                                                Name: stringPtr("vt11"),
                                                                                Center: &x3d.SFVec3f{0.0053, 1.2679, -0.081},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_vt10"),
                                                                                        },
                                                                                        Name: stringPtr("vt10"),
                                                                                        Center: &x3d.SFVec3f{0.0056, 1.2848, -0.0822},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_vt9"),
                                                                                                },
                                                                                                Name: stringPtr("vt9"),
                                                                                                Center: &x3d.SFVec3f{0.0057, 1.3126, -0.0838},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.HAnimJoint{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("hanim_vt8"),
                                                                                                        },
                                                                                                        Name: stringPtr("vt8"),
                                                                                                        Center: &x3d.SFVec3f{0.0057, 1.3382, -0.0845},
                                                                                                        Children: []x3d.X3DNode{
                                                                                                            &x3d.HAnimJoint{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("hanim_vt7"),
                                                                                                                },
                                                                                                                Name: stringPtr("vt7"),
                                                                                                                Center: &x3d.SFVec3f{0.0058, 1.3625, -0.0833},
                                                                                                                Children: []x3d.X3DNode{
                                                                                                                    &x3d.HAnimJoint{
                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                            DEF: stringPtr("hanim_vt6"),
                                                                                                                        },
                                                                                                                        Name: stringPtr("vt6"),
                                                                                                                        Center: &x3d.SFVec3f{0.0059, 1.3866, -0.08},
                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                    DEF: stringPtr("hanim_vt5"),
                                                                                                                                },
                                                                                                                                Name: stringPtr("vt5"),
                                                                                                                                Center: &x3d.SFVec3f{0.006, 1.4102, -0.0745},
                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                            DEF: stringPtr("hanim_vt4"),
                                                                                                                                        },
                                                                                                                                        Name: stringPtr("vt4"),
                                                                                                                                        Center: &x3d.SFVec3f{0.0061, 1.432, -0.0675},
                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                    DEF: stringPtr("hanim_vt3"),
                                                                                                                                                },
                                                                                                                                                Name: stringPtr("vt3"),
                                                                                                                                                Center: &x3d.SFVec3f{0.0062, 1.4583, -0.057},
                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                            DEF: stringPtr("hanim_vt2"),
                                                                                                                                                        },
                                                                                                                                                        Name: stringPtr("vt2"),
                                                                                                                                                        Center: &x3d.SFVec3f{0.0063, 1.4761, -0.0484},
                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                    DEF: stringPtr("hanim_vt1"),
                                                                                                                                                                },
                                                                                                                                                                Name: stringPtr("vt1"),
                                                                                                                                                                Center: &x3d.SFVec3f{0.0065, 1.4951, -0.0387},
                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                            DEF: stringPtr("hanim_vc7"),
                                                                                                                                                                        },
                                                                                                                                                                        Name: stringPtr("vc7"),
                                                                                                                                                                        Center: &x3d.SFVec3f{0.0066, 1.5132, -0.0301},
                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                    DEF: stringPtr("hanim_vc6"),
                                                                                                                                                                                },
                                                                                                                                                                                Name: stringPtr("vc6"),
                                                                                                                                                                                Center: &x3d.SFVec3f{0.0066, 1.5357, -0.0143},
                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                            DEF: stringPtr("hanim_vc5"),
                                                                                                                                                                                        },
                                                                                                                                                                                        Name: stringPtr("vc5"),
                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0066, 1.552, -0.0082},
                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                    DEF: stringPtr("hanim_vc4"),
                                                                                                                                                                                                },
                                                                                                                                                                                                Name: stringPtr("vc4"),
                                                                                                                                                                                                Center: &x3d.SFVec3f{0.0066, 1.5662, -0.0084},
                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_vc3"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("vc3"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0066, 1.58, -0.0103},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_vc2"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("vc2"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.0066, 1.5928, -0.0103},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_vc1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("vc1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0066, 1.6144, -0.0034},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_skullbase"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("skullbase"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.0044, 1.6209, 0.0236},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_eyelid_joint"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_eyelid_joint"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_eyelid_joint"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("r_eyelid_joint"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_l_eyeball_joint"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_eyeball_joint"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_eyeball_joint"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("r_eyeball_joint"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_l_eyebrow_joint"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_eyebrow_joint"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_eyebrow_joint"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("r_eyebrow_joint"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_temporomandibular"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("temporomandibular"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
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
                                                                                                                                                                        DEF: stringPtr("hanim_l_sternoclavicular"),
                                                                                                                                                                    },
                                                                                                                                                                    Name: stringPtr("l_sternoclavicular"),
                                                                                                                                                                    Center: &x3d.SFVec3f{0.082, 1.4488, -0.0353},
                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                DEF: stringPtr("hanim_l_acromioclavicular"),
                                                                                                                                                                            },
                                                                                                                                                                            Name: stringPtr("l_acromioclavicular"),
                                                                                                                                                                            Center: &x3d.SFVec3f{0.0962, 1.4269, -0.0424},
                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                        DEF: stringPtr("hanim_l_shoulder"),
                                                                                                                                                                                    },
                                                                                                                                                                                    Name: stringPtr("l_shoulder"),
                                                                                                                                                                                    Center: &x3d.SFVec3f{0.2029, 1.4376, -0.0387},
                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                DEF: stringPtr("hanim_l_elbow"),
                                                                                                                                                                                            },
                                                                                                                                                                                            Name: stringPtr("l_elbow"),
                                                                                                                                                                                            Center: &x3d.SFVec3f{0.2014, 1.1357, -0.0682},
                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                        DEF: stringPtr("hanim_l_radiocarpal"),
                                                                                                                                                                                                    },
                                                                                                                                                                                                    Name: stringPtr("l_radiocarpal"),
                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1984, 0.8663, -0.0583},
                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("hanim_l_midcarpal_1"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("l_midcarpal_1"),
                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("hanim_l_carpometacarpal_1"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("l_carpometacarpal_1"),
                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1924, 0.8472, -0.0534},
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("hanim_l_metacarpophalangeal_1"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("l_metacarpophalangeal_1"),
                                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.1951, 0.8226, 0.0246},
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_l_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1955, 0.8159, 0.0464},
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                    },
                                                                                                                                                                                                            },
                                                                                                                                                                                                    },
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_l_midcarpal_2"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("l_midcarpal_2"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_l_carpometacarpal_2"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_carpometacarpal_2"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1983, 0.8024, -0.028},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_metacarpophalangeal_2"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_metacarpophalangeal_2"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1983, 0.7815, -0.028},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.2017, 0.7363, -0.0248},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.2028, 0.7139, -0.0236},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                        },
                                                                                                                                                                                                    },
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_l_midcarpal_3"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("l_midcarpal_3"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_l_carpometacarpal_3"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_carpometacarpal_3"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1987, 0.8029, -0.053},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_metacarpophalangeal_3"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_metacarpophalangeal_3"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1987, 0.7818, -0.053},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.2013, 0.7273, -0.0503},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.2026, 0.7011, -0.0494},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                        },
                                                                                                                                                                                                    },
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_l_midcarpal_4_5"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("l_midcarpal_4_5"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_l_carpometacarpal_4"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_carpometacarpal_4"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1956, 0.8019, -0.0794},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_metacarpophalangeal_4"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_metacarpophalangeal_4"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1956, 0.7815, -0.0794},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1973, 0.7287, -0.0777},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1983, 0.7045, -0.0767},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                        },
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("hanim_l_carpometacarpal_5"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("l_carpometacarpal_5"),
                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.1925, 0.8066, -0.1036},
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("hanim_l_metacarpophalangeal_5"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("l_metacarpophalangeal_5"),
                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1925, 0.7866, -0.1036},
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("hanim_l_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("l_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.1938, 0.7452, -0.1024},
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_l_carpal_distal_interphalangeal_5"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_carpal_distal_interphalangeal_5"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1948, 0.7277, -0.1017},
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
                                                                                                                                                                        DEF: stringPtr("hanim_r_sternoclavicular"),
                                                                                                                                                                    },
                                                                                                                                                                    Name: stringPtr("r_sternoclavicular"),
                                                                                                                                                                    Center: &x3d.SFVec3f{-0.0694, 1.46, -0.033},
                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                DEF: stringPtr("hanim_r_acromioclavicular"),
                                                                                                                                                                            },
                                                                                                                                                                            Name: stringPtr("r_acromioclavicular"),
                                                                                                                                                                            Center: &x3d.SFVec3f{-0.0836, 1.4281, -0.0401},
                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                        DEF: stringPtr("hanim_r_shoulder"),
                                                                                                                                                                                    },
                                                                                                                                                                                    Name: stringPtr("r_shoulder"),
                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.1907, 1.4407, -0.0325},
                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                DEF: stringPtr("hanim_r_elbow"),
                                                                                                                                                                                            },
                                                                                                                                                                                            Name: stringPtr("r_elbow"),
                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.1949, 1.1388, -0.062},
                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                        DEF: stringPtr("hanim_r_radiocarpal"),
                                                                                                                                                                                                    },
                                                                                                                                                                                                    Name: stringPtr("r_radiocarpal"),
                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.1959, 0.8694, -0.0521},
                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("hanim_r_midcarpal_1"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("r_midcarpal_1"),
                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_carpometacarpal_1"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("r_carpometacarpal_1"),
                                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.1899, 0.8502, -0.0473},
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("hanim_r_metacarpophalangeal_1"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("r_metacarpophalangeal_1"),
                                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.1874, 0.8256, 0.0306},
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("r_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.1864, 0.819, 0.0506},
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                    },
                                                                                                                                                                                                            },
                                                                                                                                                                                                    },
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_r_midcarpal_2"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("r_midcarpal_2"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_r_carpometacarpal_2"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_carpometacarpal_2"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.1961, 0.8055, -0.0218},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_r_metacarpophalangeal_2"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_metacarpophalangeal_2"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.1961, 0.7846, -0.0218},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.1954, 0.7393, -0.0185},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_r_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.1945, 0.7169, -0.0173},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                        },
                                                                                                                                                                                                    },
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_r_midcarpal_3"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("r_midcarpal_3"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_r_carpometacarpal_3"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_carpometacarpal_3"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.1972, 0.806, -0.0468},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_r_metacarpophalangeal_3"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_metacarpophalangeal_3"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.1972, 0.7849, -0.0468},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.195, 0.7304, -0.0441},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_r_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.1939, 0.7042, -0.0432},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                        },
                                                                                                                                                                                                    },
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("hanim_r_midcarpal_4_5"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("r_midcarpal_4_5"),
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("hanim_r_carpometacarpal_4"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_carpometacarpal_4"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.1951, 0.8049, -0.0732},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("hanim_r_metacarpophalangeal_4"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_metacarpophalangeal_4"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.1951, 0.7845, -0.0732},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("hanim_r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.192, 0.7318, -0.0716},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("hanim_r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.1908, 0.7077, -0.0706},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                        },
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("hanim_r_carpometacarpal_5"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("r_carpometacarpal_5"),
                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.1926, 0.8096, -0.0975},
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_metacarpophalangeal_5"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("r_metacarpophalangeal_5"),
                                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.1926, 0.7896, -0.0975},
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("hanim_r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.1902, 0.7483, -0.0963},
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("hanim_r_carpal_distal_interphalangeal_5"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("r_carpal_distal_interphalangeal_5"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.1908, 0.754, -0.096},
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
                            USE: stringPtr("hanim_sacroiliac"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_talocrural"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_talocalcaneonavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_cuneonavicular_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_cuneonavicular_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_cuneonavicular_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_calcaneocuboid"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_transversetarsal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsometatarsal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talocrural"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talocalcaneonavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneonavicular_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneonavicular_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_cuneonavicular_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_calcaneocuboid"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_transversetarsal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsometatarsal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt12"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt11"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt10"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt9"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt8"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt7"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt6"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc7"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc6"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_skullbase"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_eyelid_joint"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_eyelid_joint"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_eyeball_joint"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_eyeball_joint"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_eyebrow_joint"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_eyebrow_joint"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_temporomandibular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_sternoclavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_acromioclavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_radiocarpal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_midcarpal_4_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpometacarpal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal_distal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_sternoclavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_acromioclavicular"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_radiocarpal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_midcarpal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpometacarpal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpophalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_interphalangeal_1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_midcarpal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpometacarpal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_proximal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_distal_interphalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_midcarpal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpometacarpal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpophalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_proximal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_distal_interphalangeal_3"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_midcarpal_4_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpometacarpal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpophalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_proximal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_distal_interphalangeal_4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpometacarpal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpophalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_proximal_interphalangeal_5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal_distal_interphalangeal_5"),
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
	filename := "../data/JohnJoint.new.go.x3d"
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