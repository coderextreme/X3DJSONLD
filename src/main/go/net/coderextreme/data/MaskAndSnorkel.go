
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("MaskAndSnorkel.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Diving mask and snorkel tube."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Etsuko Lippi"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("January 24, 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:52:34 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("MaskAndSnorkel.x3d"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.0,0.0,0.9}},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("maskAndSnorkel"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("maskFrame"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("frameColor"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        Solid: boolPtr(false),
                                        CreaseAngle: floatPtr(1.45),
                                        CoordIndex: []int32{0, 1, 13, 12, 0, -1, 1, 2, 14, 13, 1, -1, 2, 3, 15, 14, 2, -1, 3, 4, 16, 15, 3, -1, 4, 5, 17, 16, 4, -1, 5, 6, 18, 17, 5, -1, 18, 6, 25, 19, 0, 12, 18, -1, 0, 19, 20, 11, 0, -1, 10, 11, 20, 21, 10, -1, 9, 10, 21, 22, 9, -1, 8, 9, 22, 23, 8, -1, 23, 24, 7, 8, 23, -1, 6, 7, 24, 25, 6, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.08,0.0},[3]float32{0.02,0.05,0.0},[3]float32{0.05,0.05,0.0},[3]float32{0.06,0.06,0.0},[3]float32{0.06,0.09,0.0},[3]float32{0.05,0.1,0.0},[3]float32{0.0,0.1,0.0},[3]float32{-0.05,0.1,0.0},[3]float32{-0.06,0.09,0.0},[3]float32{-0.06,0.06,0.0},[3]float32{-0.05,0.05,0.0},[3]float32{-0.02,0.05,0.0},[3]float32{0.005,0.08,0.0},[3]float32{0.02,0.055,0.0},[3]float32{0.05,0.055,0.0},[3]float32{0.055,0.06,0.0},[3]float32{0.055,0.09,0.0},[3]float32{0.045,0.095,0.0},[3]float32{0.005,0.095,0.0},[3]float32{-0.005,0.08,0.0},[3]float32{-0.02,0.055,0.0},[3]float32{-0.05,0.055,0.0},[3]float32{-0.055,0.06,0.0},[3]float32{-0.055,0.09,0.0},[3]float32{-0.045,0.095,0.0},[3]float32{-0.005,0.095,0.0}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("snorkelHoldRing"),
                                },
                                Translation: &x3d.SFVec3f{0.075, 0.075, -0.02},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("frameColor"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
                                        Height: floatPtr(0.003),
                                        Radius: floatPtr(0.015),
                                    },
                                },
                            },
                        },
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("snorkel"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, -0.02, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.035, -0.07, -0.02},
                                                Scale: &x3d.SFVec3f{0.9, 0.9, 0.9},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("snorkelTube"),
                                                            },
                                                            DiffuseColor: &x3d.SFColor{0.678, 1.0, 0.184},
                                                            Transparency: floatPtr(0.4),
                                                        },
                                                    },
                                                    Geometry: &x3d.Extrusion{
                                                        CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.013},[2]float32{0.00494,0.01196},[2]float32{0.00923,0.00923},[2]float32{0.01196,0.00494},[2]float32{0.013,0.0},[2]float32{0.01196,-0.00494},[2]float32{0.00923,-0.00923},[2]float32{0.00494,-0.01196},[2]float32{0.0,0.013},[2]float32{-0.00494,-0.01196},[2]float32{-0.00923,-0.00923},[2]float32{-0.01196,-0.00494},[2]float32{-0.013,0.0},[2]float32{-0.01196,0.00494},[2]float32{-0.00923,0.00923},[2]float32{-0.00494,0.01196},[2]float32{0.0,0.013}},
                                                        Spine: &x3d.MFVec3f{[3]float32{-0.01,-0.04,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.03,0.05,0.0},[3]float32{0.05,0.2,0.0},[3]float32{0.03,0.4,0.03}},
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.01, -0.04, -0.02},
                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                Scale: &x3d.SFVec3f{0.9, 0.9, 0.9},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Mouthpiece"),
                                                            },
                                                            DiffuseColor: &x3d.SFColor{0.678, 1.0, 0.8},
                                                            Transparency: floatPtr(0.4),
                                                        },
                                                    },
                                                    Geometry: &x3d.Extrusion{
                                                        CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.013},[2]float32{0.00494,0.01196},[2]float32{0.00923,0.00923},[2]float32{0.01196,0.00494},[2]float32{0.013,0.0},[2]float32{0.01196,-0.00494},[2]float32{0.00923,-0.00923},[2]float32{0.00494,-0.01196},[2]float32{0.0,0.013},[2]float32{-0.00494,-0.01196},[2]float32{-0.00923,-0.00923},[2]float32{-0.01196,-0.00494},[2]float32{-0.013,0.0},[2]float32{-0.01196,0.00494},[2]float32{-0.00923,0.00923},[2]float32{-0.00494,0.01196},[2]float32{0.0,0.013}},
                                                        Spine: &x3d.MFVec3f{[3]float32{-0.01,-0.03,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.02,0.01,0.0}},
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.005, -0.01, -0.02},
                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -0.85},
                                                Scale: &x3d.SFVec3f{0.9, 0.9, 0.9},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Mouthpiece"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Extrusion{
                                                        CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.013},[2]float32{0.00494,0.01196},[2]float32{0.00923,0.00923},[2]float32{0.01196,0.00494},[2]float32{0.013,0.0},[2]float32{0.01196,-0.00494},[2]float32{0.00923,-0.00923},[2]float32{0.00494,-0.01196},[2]float32{0.0,0.013}},
                                                        Spine: &x3d.MFVec3f{[3]float32{-0.02,-0.03,0.0},[3]float32{-0.01,-0.03,0.0},[3]float32{0.0,-0.0175,0.0},[3]float32{0.0,-0.0135,0.0},[3]float32{-0.01,0.0,0.0},[3]float32{-0.02,0.0,0.0}},
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("maskLensR"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("plastic"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.941, 0.973, 1.0},
                                            Transparency: floatPtr(0.8),
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        Solid: boolPtr(false),
                                        CreaseAngle: floatPtr(1.45),
                                        CoordIndex: []int32{12, 13, 14, 15, 16, 17, 18, 12, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.08,0.0},[3]float32{0.02,0.05,0.0},[3]float32{0.05,0.05,0.0},[3]float32{0.06,0.06,0.0},[3]float32{0.06,0.09,0.0},[3]float32{0.05,0.1,0.0},[3]float32{0.0,0.1,0.0},[3]float32{-0.05,0.1,0.0},[3]float32{-0.06,0.09,0.0},[3]float32{-0.06,0.06,0.0},[3]float32{-0.05,0.05,0.0},[3]float32{-0.02,0.05,0.0},[3]float32{0.005,0.08,0.0},[3]float32{0.02,0.055,0.0},[3]float32{0.05,0.055,0.0},[3]float32{0.055,0.06,0.0},[3]float32{0.055,0.09,0.0},[3]float32{0.045,0.095,0.0},[3]float32{0.005,0.095,0.0},[3]float32{-0.005,0.08,0.0},[3]float32{-0.02,0.055,0.0},[3]float32{-0.05,0.055,0.0},[3]float32{-0.055,0.06,0.0},[3]float32{-0.055,0.09,0.0},[3]float32{-0.045,0.095,0.0},[3]float32{-0.005,0.095,0.0}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("maskLensL"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("plastic"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        Solid: boolPtr(false),
                                        CreaseAngle: floatPtr(1.45),
                                        CoordIndex: []int32{19, 20, 21, 22, 23, 24, 25, 19, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.08,0.0},[3]float32{0.02,0.05,0.0},[3]float32{0.05,0.05,0.0},[3]float32{0.06,0.06,0.0},[3]float32{0.06,0.09,0.0},[3]float32{0.05,0.1,0.0},[3]float32{0.0,0.1,0.0},[3]float32{-0.05,0.1,0.0},[3]float32{-0.06,0.09,0.0},[3]float32{-0.06,0.06,0.0},[3]float32{-0.05,0.05,0.0},[3]float32{-0.02,0.05,0.0},[3]float32{0.005,0.08,0.0},[3]float32{0.02,0.055,0.0},[3]float32{0.05,0.055,0.0},[3]float32{0.055,0.06,0.0},[3]float32{0.055,0.09,0.0},[3]float32{0.045,0.095,0.0},[3]float32{0.005,0.095,0.0},[3]float32{-0.005,0.08,0.0},[3]float32{-0.02,0.055,0.0},[3]float32{-0.05,0.055,0.0},[3]float32{-0.055,0.06,0.0},[3]float32{-0.055,0.09,0.0},[3]float32{-0.045,0.095,0.0},[3]float32{-0.005,0.095,0.0}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("nose"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("plasticFit"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.678, 1.0, 0.184},
                                            Transparency: floatPtr(0.7),
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        Solid: boolPtr(false),
                                        CreaseAngle: floatPtr(1.45),
                                        CoordIndex: []int32{0, 37, 26, 0, -1, 0, 36, 26, 0, -1, 36, 37, 26, 36, -1, 0, 1, 37, 0, -1, 0, 11, 36, 0, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.08,0.0},[3]float32{0.02,0.05,0.0},[3]float32{0.05,0.05,0.0},[3]float32{0.06,0.06,0.0},[3]float32{0.06,0.09,0.0},[3]float32{0.05,0.1,0.0},[3]float32{0.0,0.1,0.0},[3]float32{-0.05,0.1,0.0},[3]float32{-0.06,0.09,0.0},[3]float32{-0.06,0.06,0.0},[3]float32{-0.05,0.05,0.0},[3]float32{-0.02,0.05,0.0},[3]float32{0.005,0.08,0.0},[3]float32{0.02,0.055,0.0},[3]float32{0.05,0.055,0.0},[3]float32{0.055,0.06,0.0},[3]float32{0.055,0.09,0.0},[3]float32{0.045,0.095,0.0},[3]float32{0.005,0.095,0.0},[3]float32{-0.005,0.08,0.0},[3]float32{-0.02,0.055,0.0},[3]float32{-0.05,0.055,0.0},[3]float32{-0.055,0.06,0.0},[3]float32{-0.055,0.09,0.0},[3]float32{-0.045,0.095,0.0},[3]float32{-0.005,0.095,0.0},[3]float32{0.0,0.04,0.015},[3]float32{0.05,0.04,-0.03},[3]float32{0.06,0.05,-0.03},[3]float32{0.07,0.095,-0.03},[3]float32{0.055,0.11,-0.03},[3]float32{0.0,0.11,-0.02},[3]float32{-0.055,0.11,-0.03},[3]float32{-0.07,0.095,-0.03},[3]float32{-0.06,0.05,-0.03},[3]float32{-0.05,0.04,-0.03},[3]float32{-0.02,0.04,-0.02},[3]float32{0.02,0.04,-0.02}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("faceFit"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("plasticFit"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        Solid: boolPtr(false),
                                        CreaseAngle: floatPtr(1.45),
                                        CoordIndex: []int32{1, 2, 27, 37, 1, -1, 2, 3, 28, 27, 2, -1, 3, 4, 29, 28, 3, -1, 4, 5, 30, 29, 4, -1, 5, 6, 31, 30, 5, -1, 6, 7, 32, 31, 6, -1, 7, 8, 33, 32, 7, -1, 8, 9, 34, 33, 8, -1, 9, 10, 35, 34, 9, -1, 10, 11, 36, 35, 10, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.08,0.0},[3]float32{0.02,0.05,0.0},[3]float32{0.05,0.05,0.0},[3]float32{0.06,0.06,0.0},[3]float32{0.06,0.09,0.0},[3]float32{0.05,0.1,0.0},[3]float32{0.0,0.1,0.0},[3]float32{-0.05,0.1,0.0},[3]float32{-0.06,0.09,0.0},[3]float32{-0.06,0.06,0.0},[3]float32{-0.05,0.05,0.0},[3]float32{-0.02,0.05,0.0},[3]float32{0.005,0.08,0.0},[3]float32{0.02,0.055,0.0},[3]float32{0.05,0.055,0.0},[3]float32{0.055,0.06,0.0},[3]float32{0.055,0.09,0.0},[3]float32{0.045,0.095,0.0},[3]float32{0.005,0.095,0.0},[3]float32{-0.005,0.08,0.0},[3]float32{-0.02,0.055,0.0},[3]float32{-0.05,0.055,0.0},[3]float32{-0.055,0.06,0.0},[3]float32{-0.055,0.09,0.0},[3]float32{-0.045,0.095,0.0},[3]float32{-0.005,0.095,0.0},[3]float32{0.0,0.05,0.015},[3]float32{0.05,0.04,-0.03},[3]float32{0.06,0.05,-0.03},[3]float32{0.07,0.095,-0.03},[3]float32{0.055,0.11,-0.03},[3]float32{0.0,0.11,-0.02},[3]float32{-0.055,0.11,-0.03},[3]float32{-0.07,0.095,-0.03},[3]float32{-0.06,0.05,-0.03},[3]float32{-0.05,0.04,-0.03},[3]float32{-0.02,0.04,-0.02},[3]float32{0.02,0.04,-0.02}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("belt"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("plastic"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        Solid: boolPtr(false),
                                        CreaseAngle: floatPtr(1.45),
                                        CoordIndex: []int32{3, 4, 39, 38, 3, -1, 8, 9, 40, 41, 8, -1, 38, 39, 42, 43, 38, -1, 40, 41, 44, 45, 40, -1, 42, 43, 47, 46, 42, -1, 44, 45, 47, 46, 44, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.08,0.0},[3]float32{0.02,0.05,0.0},[3]float32{0.05,0.05,0.0},[3]float32{0.06,0.06,0.0},[3]float32{0.06,0.09,0.0},[3]float32{0.05,0.1,0.0},[3]float32{0.0,0.1,0.0},[3]float32{-0.05,0.1,0.0},[3]float32{-0.06,0.09,0.0},[3]float32{-0.06,0.06,0.0},[3]float32{-0.05,0.05,0.0},[3]float32{-0.02,0.05,0.0},[3]float32{0.005,0.08,0.0},[3]float32{0.02,0.055,0.0},[3]float32{0.05,0.055,0.0},[3]float32{0.055,0.06,0.0},[3]float32{0.055,0.09,0.0},[3]float32{0.045,0.095,0.0},[3]float32{0.005,0.095,0.0},[3]float32{-0.005,0.08,0.0},[3]float32{-0.02,0.055,0.0},[3]float32{-0.05,0.055,0.0},[3]float32{-0.055,0.06,0.0},[3]float32{-0.055,0.09,0.0},[3]float32{-0.045,0.095,0.0},[3]float32{-0.005,0.095,0.0},[3]float32{0.0,0.05,0.015},[3]float32{0.05,0.04,-0.03},[3]float32{0.06,0.05,-0.03},[3]float32{0.07,0.095,-0.03},[3]float32{0.055,0.11,-0.03},[3]float32{0.0,0.11,-0.02},[3]float32{-0.055,0.11,-0.03},[3]float32{-0.07,0.095,-0.03},[3]float32{-0.06,0.05,-0.03},[3]float32{-0.05,0.04,-0.03},[3]float32{-0.02,0.04,-0.02},[3]float32{0.02,0.04,-0.02},[3]float32{0.075,0.06,-0.135},[3]float32{0.075,0.09,-0.135},[3]float32{-0.075,0.06,-0.135},[3]float32{-0.075,0.09,-0.135},[3]float32{0.06,0.09,-0.165},[3]float32{0.06,0.06,-0.165},[3]float32{-0.06,0.09,-0.165},[3]float32{-0.06,0.06,-0.165},[3]float32{0.0,0.09,-0.2},[3]float32{0.0,0.06,-0.175}},
                                        },
                                    },
                                },
                            },
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
	filename := "../data/MaskAndSnorkel.new.go.x3d"
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