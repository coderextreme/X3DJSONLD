
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
                    Content: stringPtr("NancyDiving.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Nancy having fun scuba diving!"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Etsuko Lippi"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Tom Miller"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("17 December 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:12 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("convert to HAnim 2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("error"),
                Content: stringPtr("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"),
            },
            &x3d.Meta{
                Name: stringPtr("hint"),
                Content: stringPtr("Default orientation along X axis (vice HAnim required Y axis) since diving posture is typically prone."),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("problem with left arm animation"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Viewpoint nodes need to be made child nodes under HAnimHumanoid with containerField='viewpoints'."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyDiving.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.0,0.4,1.0}},
                    GroundColor: &x3d.MFColor{[3]float32{0.0,0.4,1.0}},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("DefaultViewpoint"),
                    },
                    Description: stringPtr("Nancy diving, view from right side"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 3.0},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("HighResolution"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Group{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Viewpoints"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Nancy diving, view from below"),
                                                    Position: &x3d.SFVec3f{0.0, 0.0, 4.0},
                                                },
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Nancy diving, view from ahead"),
                                                    Position: &x3d.SFVec3f{0.0, 3.0, 0.0},
                                                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                                                },
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Nancy diving, view from left side"),
                                                    Position: &x3d.SFVec3f{3.0, 0.0, 0.0},
                                                    Orientation: &x3d.SFRotation{-0.58, 0.58, -0.58, 2.09},
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0, -3.0, -0.8},
                                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Viewpoint{
                                                            Description: stringPtr("Nancy diving view from behind"),
                                                            Position: &x3d.SFVec3f{0.0, 0.0, 0.0},
                                                            Orientation: &x3d.SFRotation{0.0, 0.0, 1.0, 3.14},
                                                        },
                                                    },
                                                },
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Nancy diving view from above"),
                                                    Position: &x3d.SFVec3f{0.0, 0.0, -4.0},
                                                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14},
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0, 0.45, -0.04},
                                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Viewpoint{
                                                            Description: stringPtr("Nancy diving, view through her goggles"),
                                                            Position: &x3d.SFVec3f{0.0, 0.0, 0.0},
                                                            Orientation: &x3d.SFRotation{0.0, 0.0, 1.0, 3.14},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, -1.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimHumanoid{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_Nancy"),
                                                    },
                                                    Name: stringPtr("Nancy"),
                                                    Version: stringPtr("1.0"),
                                                    Skeleton: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_humanoid_root"),
                                                            },
                                                            Name: stringPtr("humanoid_root"),
                                                            Center: &x3d.SFVec3f{-0.00405, 0.855, -0.000113},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_sacroiliac"),
                                                                    },
                                                                    Name: stringPtr("sacroiliac"),
                                                                    Center: &x3d.SFVec3f{0.0, 1.01, -0.0204},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_pelvis"),
                                                                            },
                                                                            Name: stringPtr("pelvis"),
                                                                            &x3d.Shape{
                                                                                Appearance: &x3d.Appearance{
                                                                                    Material: &x3d.Material{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("Pants_Color"),
                                                                                        },
                                                                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.502},
                                                                                    },
                                                                                },
                                                                                Geometry: &x3d.IndexedFaceSet{
                                                                                    CreaseAngle: floatPtr(1.14),
                                                                                    CoordIndex: []int32{0, 1, 40, -1, 1, 2, 40, -1, 2, 3, 40, -1, 3, 4, 40, -1, 4, 5, 40, -1, 5, 4, 9, -1, 4, 3, 8, -1, 3, 2, 8, -1, 2, 1, 6, -1, 0, 7, 1, -1, 7, 6, 1, -1, 6, 8, 2, -1, 9, 4, 10, -1, 4, 8, 10, -1, 8, 6, 12, -1, 7, 0, 47, -1, 50, 5, 9, -1, 7, 47, 55, -1, 55, 13, 7, -1, 50, 9, 56, -1, 9, 10, 14, -1, 10, 11, 15, -1, 11, 12, 16, -1, 12, 13, 19, -1, 13, 55, 17, -1, 60, 17, 55, -1, 17, 19, 13, -1, 19, 16, 12, -1, 16, 15, 11, -1, 15, 18, 10, -1, 14, 56, 9, -1, 56, 14, 64, -1, 17, 60, 20, -1, 20, 19, 17, -1, 21, 64, 14, -1, 14, 22, 21, -1, 15, 16, 24, -1, 16, 19, 24, -1, 19, 20, 26, -1, 24, 23, 15, -1, 64, 21, 69, -1, 21, 22, 29, -1, 19, 26, 25, -1, 20, 63, 27, -1, 27, 26, 20, -1, 25, 24, 19, -1, 30, 29, 22, -1, 29, 28, 21, -1, 28, 69, 21, -1, 27, 34, 26, -1, 69, 28, 79, -1, 29, 30, 32, -1, 30, 23, 33, -1, 23, 24, 37, -1, 25, 26, 34, -1, 83, 27, 77, -1, 37, 33, 23, -1, 33, 32, 30, -1, 31, 79, 28, -1, 79, 31, 84, -1, 32, 33, 36, -1, 24, 25, 37, -1, 34, 27, 83, -1, 83, 38, 34, -1, 34, 37, 25, -1, 37, 36, 33, -1, 36, 35, 32, -1, 84, 31, 89, -1, 31, 35, 89, -1, 35, 36, 39, -1, 36, 37, 39, -1, 38, 83, 89, -1, 89, 39, 38, -1, 39, 89, 35, -1, 40, 41, 0, -1, 40, 42, 41, -1, 40, 43, 42, -1, 40, 44, 43, -1, 40, 45, 44, -1, 49, 44, 45, -1, 48, 43, 44, -1, 48, 42, 43, -1, 46, 41, 42, -1, 41, 47, 0, -1, 41, 46, 47, -1, 42, 48, 46, -1, 51, 44, 49, -1, 51, 48, 44, -1, 48, 52, 53, -1, 49, 45, 50, -1, 56, 49, 50, -1, 57, 51, 49, -1, 58, 53, 52, -1, 59, 54, 53, -1, 62, 55, 54, -1, 55, 62, 60, -1, 54, 59, 62, -1, 53, 58, 59, -1, 51, 61, 58, -1, 49, 56, 57, -1, 64, 57, 56, -1, 67, 59, 58, -1, 68, 62, 59, -1, 60, 63, 20, -1, 60, 62, 63, -1, 59, 67, 68, -1, 58, 61, 67, -1, 57, 64, 65, -1, 65, 66, 57, -1, 71, 63, 62, -1, 69, 65, 64, -1, 74, 66, 65, -1, 78, 68, 67, -1, 70, 71, 62, -1, 63, 72, 27, -1, 63, 71, 72, -1, 68, 78, 76, -1, 67, 75, 78, -1, 66, 74, 75, -1, 65, 73, 74, -1, 65, 69, 73, -1, 77, 27, 72, -1, 71, 82, 72, -1, 79, 73, 69, -1, 81, 75, 74, -1, 82, 71, 70, -1, 77, 72, 83, -1, 73, 79, 80, -1, 84, 80, 79, -1, 86, 75, 81, -1, 83, 72, 82, -1, 82, 88, 83, -1, 70, 87, 82, -1, 81, 85, 86, -1, 89, 80, 84, -1, 89, 85, 80, -1, 90, 86, 85, -1, 90, 87, 86, -1, 89, 83, 88, -1, 88, 90, 89, -1, 85, 89, 90, -1, 50, 45, 5, -1, 45, 40, 5, -1, 10, 8, 11, -1, 8, 12, 11, -1, 18, 22, 10, -1, 22, 14, 10, -1, 57, 66, 51, -1, 66, 61, 51, -1, 51, 58, 48, -1, 58, 52, 48, -1, 48, 53, 46, -1, 53, 54, 46, -1, 76, 70, 68, -1, 70, 62, 68, -1, 29, 32, 28, -1, 28, 32, 31, -1, 32, 35, 31, -1, 85, 81, 80, -1, 81, 73, 80, -1, 81, 74, 73, -1, 39, 37, 38, -1, 37, 34, 38, -1, 82, 87, 88, -1, 87, 90, 88, -1, 87, 78, 86, -1, 78, 75, 86, -1, 61, 66, 67, -1, 66, 75, 67, -1, 22, 18, 15, -1, 23, 30, 15, -1, 30, 22, 15, -1, 13, 12, 7, -1, 12, 6, 7, -1, 46, 54, 47, -1, 54, 55, 47, -1, 87, 76, 78, -1, 87, 70, 76, -1},
                                                                                    Coord: &x3d.Coordinate{
                                                                                        Point: &x3d.MFVec3f{[3]float32{0.0,1.06,0.0218},[3]float32{0.0561,1.07,0.00726},[3]float32{0.0851,1.07,-0.0115},[3]float32{0.104,1.07,-0.0497},[3]float32{0.0851,1.07,-0.0851},[3]float32{0.032,1.06,-0.0985},[3]float32{0.0873,1.04,0.0078},[3]float32{0.033,1.04,0.0395},[3]float32{0.123,1.05,-0.0405},[3]float32{0.0609,1.02,-0.106},[3]float32{0.0894,0.996,-0.106},[3]float32{0.143,1.0,-0.0309},[3]float32{0.117,1.0,0.0164},[3]float32{0.0314,0.999,0.0502},[3]float32{0.0314,0.96,-0.13},[3]float32{0.156,0.966,-0.0405},[3]float32{0.156,0.968,-0.00724},[3]float32{0.0341,0.954,0.0513},[3]float32{0.115,0.96,-0.0916},[3]float32{0.121,0.926,0.0352},[3]float32{0.0357,0.92,0.0497},[3]float32{0.0314,0.91,-0.146},[3]float32{0.0991,0.91,-0.131},[3]float32{0.169,0.883,-0.0448},[3]float32{0.169,0.885,-0.00939},[3]float32{0.123,0.873,0.0384},[3]float32{0.0926,0.872,0.047},[3]float32{0.0325,0.873,0.0287},[3]float32{0.0293,0.866,-0.142},[3]float32{0.102,0.869,-0.131},[3]float32{0.129,0.868,-0.103},[3]float32{0.0314,0.84,-0.125},[3]float32{0.101,0.844,-0.122},[3]float32{0.133,0.846,-0.0878},[3]float32{0.0653,0.835,0.0132},[3]float32{0.0615,0.824,-0.111},[3]float32{0.0985,0.823,-0.101},[3]float32{0.132,0.826,-0.0448},[3]float32{0.0609,0.821,-0.0158},[3]float32{0.0599,0.812,-0.0545},[3]float32{0.0,1.08,-0.0266},[3]float32{-0.0561,1.07,0.00726},[3]float32{-0.0851,1.07,-0.0115},[3]float32{-0.104,1.07,-0.0497},[3]float32{-0.0851,1.07,-0.0851},[3]float32{-0.032,1.06,-0.0985},[3]float32{-0.0873,1.04,0.0078},[3]float32{-0.033,1.04,0.0395},[3]float32{-0.123,1.05,-0.0405},[3]float32{-0.0609,1.02,-0.106},[3]float32{0.0,1.02,-0.108},[3]float32{-0.0894,0.996,-0.106},[3]float32{-0.143,1.0,-0.0309},[3]float32{-0.144,1.0,-0.011},[3]float32{-0.117,1.0,0.0164},[3]float32{-0.0314,0.999,0.0502},[3]float32{0.0,0.961,-0.123},[3]float32{-0.0314,0.96,-0.13},[3]float32{-0.156,0.966,-0.0405},[3]float32{-0.156,0.968,-0.00724},[3]float32{-0.0341,0.954,0.0513},[3]float32{-0.115,0.96,-0.0916},[3]float32{-0.121,0.926,0.0352},[3]float32{-0.0357,0.92,0.0497},[3]float32{0.0,0.91,-0.127},[3]float32{-0.0314,0.91,-0.146},[3]float32{-0.0991,0.91,-0.131},[3]float32{-0.167,0.911,-0.0448},[3]float32{-0.167,0.912,-0.00671},[3]float32{0.0,0.883,-0.129},[3]float32{-0.123,0.873,0.0384},[3]float32{-0.0926,0.872,0.047},[3]float32{-0.0325,0.873,0.0287},[3]float32{-0.0293,0.866,-0.142},[3]float32{-0.102,0.869,-0.131},[3]float32{-0.129,0.868,-0.103},[3]float32{-0.166,0.863,-0.0148},[3]float32{0.0,0.863,-0.00456},[3]float32{-0.166,0.862,-0.0459},[3]float32{0.0,0.858,-0.1},[3]float32{-0.0314,0.84,-0.125},[3]float32{-0.101,0.844,-0.122},[3]float32{-0.0653,0.835,0.0132},[3]float32{0.0,0.839,-0.0217},[3]float32{0.0,0.835,-0.0867},[3]float32{-0.0615,0.824,-0.111},[3]float32{-0.0985,0.823,-0.101},[3]float32{-0.132,0.826,-0.0448},[3]float32{-0.0609,0.821,-0.0158},[3]float32{0.0,0.831,-0.0626},[3]float32{-0.0599,0.812,-0.0545}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_hip"),
                                                                            },
                                                                            Name: stringPtr("l_hip"),
                                                                            Center: &x3d.SFVec3f{0.122, 0.888271, -0.0693267},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_l_thigh"),
                                                                                    },
                                                                                    Name: stringPtr("l_thigh"),
                                                                                    &x3d.Shape{
                                                                                        Appearance: &x3d.Appearance{
                                                                                            Material: &x3d.Material{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    USE: stringPtr("Pants_Color"),
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        Geometry: &x3d.IndexedFaceSet{
                                                                                            CreaseAngle: floatPtr(1.32),
                                                                                            CoordIndex: []int32{0, 4, 5, -1, 3, 4, 0, -1, 0, 7, 1, -1, 0, 8, 7, -1, 0, 6, 8, -1, 0, 5, 6, -1, 0, 2, 3, -1, 0, 1, 2, -1, 9, 2, 1, -1, 10, 3, 2, -1, 11, 4, 3, -1, 12, 5, 4, -1, 13, 6, 5, -1, 15, 7, 8, -1, 9, 1, 7, -1, 7, 15, 9, -1, 8, 14, 15, -1, 5, 16, 13, -1, 5, 12, 16, -1, 4, 11, 12, -1, 3, 10, 11, -1, 2, 9, 10, -1, 20, 13, 16, -1, 18, 11, 10, -1, 19, 12, 11, -1, 20, 16, 12, -1, 23, 15, 14, -1, 15, 23, 24, -1, 12, 19, 20, -1, 11, 18, 19, -1, 10, 17, 18, -1, 26, 18, 17, -1, 27, 19, 18, -1, 27, 20, 19, -1, 28, 21, 20, -1, 29, 23, 22, -1, 23, 29, 30, -1, 20, 32, 28, -1, 20, 27, 32, -1, 18, 26, 27, -1, 17, 25, 26, -1, 25, 31, 30, -1, 30, 29, 26, -1, 30, 26, 25, -1, 29, 28, 27, -1, 29, 27, 26, -1, 28, 32, 27, -1, 22, 23, 14, -1, 20, 21, 13, -1, 21, 22, 13, -1, 22, 14, 13, -1, 9, 15, 24, -1, 10, 9, 17, -1, 9, 24, 17, -1, 6, 13, 8, -1, 13, 14, 8, -1, 28, 29, 21, -1, 29, 22, 21, -1, 24, 31, 17, -1, 31, 25, 17, -1, 30, 31, 23, -1, 31, 24, 23, -1},
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{0.0969,0.804,-0.0486},[3]float32{0.101,0.876,0.0336},[3]float32{0.17,0.894,-0.00778},[3]float32{0.17,0.891,-0.076},[3]float32{0.124,0.858,-0.129},[3]float32{0.076,0.843,-0.143},[3]float32{0.025,0.819,-0.0889},[3]float32{0.0507,0.847,0.0196},[3]float32{0.00349,0.826,-0.0287},[3]float32{0.0991,0.808,0.0406},[3]float32{0.161,0.814,-0.00187},[3]float32{0.165,0.808,-0.0755},[3]float32{0.122,0.788,-0.126},[3]float32{0.00993,0.762,-0.0937},[3]float32{0.00993,0.762,-0.0309},[3]float32{0.0491,0.777,0.0185},[3]float32{0.0755,0.766,-0.139},[3]float32{0.13,0.597,-0.00618},[3]float32{0.132,0.6,-0.0593},[3]float32{0.108,0.603,-0.105},[3]float32{0.0722,0.601,-0.118},[3]float32{0.0314,0.59,-0.0953},[3]float32{0.0239,0.566,-0.0427},[3]float32{0.047,0.566,0.0051},[3]float32{0.0878,0.581,0.0217},[3]float32{0.114,0.499,-0.0132},[3]float32{0.116,0.488,-0.061},[3]float32{0.103,0.567,-0.0991},[3]float32{0.0362,0.557,-0.0926},[3]float32{0.025,0.486,-0.047},[3]float32{0.0507,0.497,-0.00188},[3]float32{0.0862,0.513,0.018},[3]float32{0.0733,0.579,-0.108}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                            },
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_l_knee"),
                                                                                    },
                                                                                    Name: stringPtr("l_knee"),
                                                                                    Center: &x3d.SFVec3f{0.0738, 0.517, -0.0284},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimSegment{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_l_calf"),
                                                                                            },
                                                                                            Name: stringPtr("l_calf"),
                                                                                            &x3d.Shape{
                                                                                                Appearance: &x3d.Appearance{
                                                                                                    Material: &x3d.Material{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            USE: stringPtr("Pants_Color"),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                Geometry: &x3d.IndexedFaceSet{
                                                                                                    CreaseAngle: floatPtr(1.57),
                                                                                                    CoordIndex: []int32{2, 1, 0, -1, 2, 3, 1, -1, 2, 4, 3, -1, 2, 5, 4, -1, 2, 6, 5, -1, 2, 7, 6, -1, 2, 8, 7, -1, 2, 0, 8, -1, 9, 8, 0, -1, 10, 6, 7, -1, 11, 5, 6, -1, 12, 4, 5, -1, 12, 3, 4, -1, 13, 1, 3, -1, 1, 13, 14, -1, 3, 12, 13, -1, 5, 11, 12, -1, 6, 10, 11, -1, 8, 9, 15, -1, 22, 13, 12, -1, 13, 22, 14, -1, 17, 15, 9, -1, 20, 12, 11, -1, 21, 22, 12, -1, 23, 9, 14, -1, 9, 23, 16, -1, 14, 22, 23, -1, 12, 20, 21, -1, 15, 17, 18, -1, 9, 16, 17, -1, 24, 17, 16, -1, 25, 18, 17, -1, 26, 19, 18, -1, 27, 20, 19, -1, 28, 21, 20, -1, 29, 22, 21, -1, 30, 23, 22, -1, 31, 16, 23, -1, 23, 30, 31, -1, 22, 29, 30, -1, 21, 28, 29, -1, 20, 27, 28, -1, 19, 26, 27, -1, 18, 25, 26, -1, 17, 24, 25, -1, 16, 31, 24, -1, 33, 26, 25, -1, 36, 29, 28, -1, 37, 31, 30, -1, 29, 36, 30, -1, 25, 24, 33, -1, 31, 37, 24, -1, 32, 33, 24, -1, 24, 37, 32, -1, 38, 37, 30, -1, 30, 36, 38, -1, 41, 33, 32, -1, 42, 39, 34, -1, 44, 36, 35, -1, 45, 38, 36, -1, 46, 37, 38, -1, 38, 45, 46, -1, 36, 44, 45, -1, 35, 43, 44, -1, 39, 42, 47, -1, 32, 40, 41, -1, 40, 46, 45, -1, 41, 40, 45, -1, 41, 45, 44, -1, 44, 43, 42, -1, 44, 42, 41, -1, 43, 47, 42, -1, 39, 35, 28, -1, 35, 36, 28, -1, 34, 39, 27, -1, 39, 28, 27, -1, 33, 34, 26, -1, 34, 27, 26, -1, 33, 41, 34, -1, 41, 42, 34, -1, 40, 32, 46, -1, 32, 37, 46, -1, 10, 19, 11, -1, 19, 20, 11, -1, 14, 9, 1, -1, 9, 0, 1, -1, 8, 15, 7, -1, 7, 15, 10, -1, 15, 19, 10, -1, 15, 18, 19, -1, 43, 35, 47, -1, 35, 39, 47, -1},
                                                                                                    Coord: &x3d.Coordinate{
                                                                                                        Point: &x3d.MFVec3f{[3]float32{0.0883,0.532,-0.00349},[3]float32{0.0609,0.533,-0.00833},[3]float32{0.0814,0.55,-0.0395},[3]float32{0.0529,0.536,-0.0368},[3]float32{0.0577,0.544,-0.0577},[3]float32{0.0722,0.546,-0.0717},[3]float32{0.0975,0.54,-0.0647},[3]float32{0.105,0.539,-0.0438},[3]float32{0.104,0.539,-0.0223},[3]float32{0.0862,0.506,0.0158},[3]float32{0.101,0.51,-0.0798},[3]float32{0.0706,0.51,-0.101},[3]float32{0.0406,0.513,-0.0744},[3]float32{0.0368,0.51,-0.0357},[3]float32{0.0556,0.506,-0.000272},[3]float32{0.117,0.508,-0.0169},[3]float32{0.0878,0.361,-0.0126},[3]float32{0.123,0.363,-0.04},[3]float32{0.123,0.363,-0.0663},[3]float32{0.107,0.367,-0.107},[3]float32{0.0588,0.365,-0.122},[3]float32{0.0228,0.358,-0.0926},[3]float32{0.0239,0.358,-0.0475},[3]float32{0.0497,0.358,-0.0234},[3]float32{0.118,0.311,-0.0411},[3]float32{0.118,0.309,-0.0685},[3]float32{0.105,0.31,-0.108},[3]float32{0.0572,0.308,-0.123},[3]float32{0.0201,0.309,-0.0937},[3]float32{0.0191,0.311,-0.0508},[3]float32{0.0475,0.307,-0.0282},[3]float32{0.0883,0.309,-0.018},[3]float32{0.0959,0.124,-0.04},[3]float32{0.0905,0.12,-0.0647},[3]float32{0.0738,0.117,-0.0814},[3]float32{0.0373,0.121,-0.0636},[3]float32{0.0416,0.124,-0.0416},[3]float32{0.0744,0.13,-0.0212},[3]float32{0.0561,0.13,-0.0245},[3]float32{0.0529,0.121,-0.0873},[3]float32{0.0948,0.0897,-0.0368},[3]float32{0.0916,0.0779,-0.0604},[3]float32{0.0717,0.0854,-0.0765},[3]float32{0.0406,0.0918,-0.0626},[3]float32{0.0384,0.0881,-0.0363},[3]float32{0.054,0.0972,-0.0175},[3]float32{0.0765,0.11,-0.0169},[3]float32{0.0486,0.0999,-0.0835}},
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                    },
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_l_ankle"),
                                                                                            },
                                                                                            Name: stringPtr("l_ankle"),
                                                                                            Center: &x3d.SFVec3f{0.0645, 0.0719, -0.048},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.HAnimSegment{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("hanim_l_hindfoot"),
                                                                                                    },
                                                                                                    Name: stringPtr("l_hindfoot"),
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("Shoe_Color"),
                                                                                                                },
                                                                                                                AmbientIntensity: floatPtr(0.25),
                                                                                                                DiffuseColor: &x3d.SFColor{0.753, 1.0, 0.243},
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.IndexedFaceSet{
                                                                                                            CreaseAngle: floatPtr(1.57),
                                                                                                            CoordIndex: []int32{2, 1, 0, -1, 4, 3, 1, -1, 2, 4, 1, -1, 3, 6, 5, -1, 1, 3, 5, -1, 6, 8, 7, -1, 5, 6, 7, -1, 8, 10, 9, -1, 7, 8, 9, -1, 10, 12, 11, -1, 9, 10, 11, -1, 12, 14, 13, -1, 11, 12, 13, -1, 14, 16, 15, -1, 13, 14, 15, -1, 16, 18, 17, -1, 15, 16, 17, -1, 18, 20, 19, -1, 17, 18, 19, -1, 20, 22, 21, -1, 19, 20, 21, -1, 22, 24, 23, -1, 21, 22, 23, -1, 24, 25, 0, -1, 23, 24, 0, -1, 25, 4, 2, -1, 0, 25, 2, -1, 18, 26, 20, -1, 16, 26, 18, -1, 27, 26, 16, -1, 14, 27, 16, -1, 12, 27, 14, -1, 28, 27, 12, -1, 29, 28, 12, -1, 10, 29, 12, -1, 8, 29, 10, -1, 6, 37, 8, -1, 24, 30, 25, -1, 31, 30, 24, -1, 22, 31, 24, -1, 32, 31, 22, -1, 20, 32, 22, -1, 33, 32, 20, -1, 26, 33, 20, -1, 34, 33, 26, -1, 27, 34, 26, -1, 35, 34, 27, -1, 28, 35, 27, -1, 29, 35, 28, -1, 36, 35, 29, -1, 8, 36, 29, -1, 37, 36, 8, -1, 6, 38, 37, -1, 3, 38, 6, -1, 39, 38, 3, -1, 30, 39, 25, -1, 41, 40, 30, -1, 31, 41, 30, -1, 42, 41, 31, -1, 32, 42, 31, -1, 43, 42, 32, -1, 33, 43, 32, -1, 44, 43, 33, -1, 34, 44, 33, -1, 45, 44, 34, -1, 35, 45, 34, -1, 46, 45, 35, -1, 36, 46, 35, -1, 47, 46, 36, -1, 37, 47, 36, -1, 38, 47, 37, -1, 48, 47, 38, -1, 49, 48, 38, -1, 39, 49, 38, -1, 40, 49, 39, -1, 30, 40, 39, -1, 48, 49, 50, -1, 47, 48, 50, -1, 46, 47, 50, -1, 45, 46, 50, -1, 44, 45, 50, -1, 43, 44, 50, -1, 42, 43, 50, -1, 41, 42, 50, -1, 40, 41, 50, -1, 49, 40, 50, -1, 11, 13, 15, -1, 11, 15, 17, -1, 9, 11, 17, -1, 9, 17, 19, -1, 7, 9, 19, -1, 7, 19, 21, -1, 5, 7, 21, -1, 5, 21, 23, -1, 5, 23, 0, -1, 1, 5, 0, -1, 3, 4, 39, -1, 4, 25, 39, -1},
                                                                                                            Coord: &x3d.Coordinate{
                                                                                                                Point: &x3d.MFVec3f{[3]float32{0.0529,0.0,-0.0923},[3]float32{0.0863,0.0,-0.0862},[3]float32{0.0727,0.0,-0.0994},[3]float32{0.0863,0.0219,-0.0862},[3]float32{0.0727,0.0219,-0.0994},[3]float32{0.1,0.0,-0.0594},[3]float32{0.1,0.0219,-0.0594},[3]float32{0.113,0.0,0.0645},[3]float32{0.113,0.0219,0.0645},[3]float32{0.112,0.0,0.117},[3]float32{0.112,0.0156,0.117},[3]float32{0.0701,0.0,0.146},[3]float32{0.0701,0.0156,0.146},[3]float32{0.0468,0.0,0.153},[3]float32{0.0468,0.0156,0.153},[3]float32{0.0215,0.0,0.146},[3]float32{0.0215,0.0156,0.146},[3]float32{0.0165,0.0,0.125},[3]float32{0.0165,0.0156,0.125},[3]float32{0.0211,0.0,0.0377},[3]float32{0.0211,0.0219,0.0377},[3]float32{0.0393,0.0,-0.0129},[3]float32{0.0393,0.0219,-0.0129},[3]float32{0.0433,0.0,-0.0534},[3]float32{0.0433,0.0219,-0.0534},[3]float32{0.0529,0.0219,-0.0923},[3]float32{0.0305,0.0253,0.0938},[3]float32{0.0505,0.0253,0.099},[3]float32{0.0854,0.0253,0.0834},[3]float32{0.102,0.0253,0.0707},[3]float32{0.0568,0.0573,-0.0918},[3]float32{0.0492,0.0573,-0.0497},[3]float32{0.0435,0.0573,-0.0225},[3]float32{0.0442,0.0573,0.0235},[3]float32{0.0623,0.0573,0.0366},[3]float32{0.0911,0.0573,0.0159},[3]float32{0.0962,0.0573,-0.0121},[3]float32{0.0911,0.0573,-0.0482},[3]float32{0.0758,0.0573,-0.0899},[3]float32{0.0676,0.0573,-0.0962},[3]float32{0.0578,0.0953,-0.0896},[3]float32{0.0489,0.0953,-0.0757},[3]float32{0.0447,0.0953,-0.0432},[3]float32{0.0451,0.0953,-0.0128},[3]float32{0.0624,0.0953,-0.00466},[3]float32{0.0857,0.0953,-0.0134},[3]float32{0.0953,0.0953,-0.038},[3]float32{0.0843,0.0953,-0.0803},[3]float32{0.0761,0.0953,-0.0889},[3]float32{0.0682,0.0953,-0.0929},[3]float32{0.0675,0.13,-0.0608}},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                    &x3d.Transform{
                                                                                                            Scale: &x3d.SFVec3f{0.015, 0.015, 0.015},
                                                                                                        Children: []x3d.X3DNode{
                                                                                                            &x3d.Transform{
                                                                                                                    Translation: &x3d.SFVec3f{6.0, -0.5, -7.5},
                                                                                                                    Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                                                                Children: []x3d.X3DNode{
                                                                                                                    &x3d.Shape{
                                                                                                                        Appearance: &x3d.Appearance{
                                                                                                                            Material: &x3d.Material{
                                                                                                                                DiffuseColor: &x3d.SFColor{0.753, 1.0, 0.243},
                                                                                                                            },
                                                                                                                        },
                                                                                                                        Geometry: &x3d.Extrusion{
                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                DEF: stringPtr("FinExtrusionLeft"),
                                                                                                                            },
                                                                                                                            Ccw: boolPtr(false),
                                                                                                                            CreaseAngle: floatPtr(3.14),
                                                                                                                            CrossSection: &x3d.MFVec2f{[2]float32{-1.0,0.0},[2]float32{-0.8,2.0},[2]float32{-0.7,3.0},[2]float32{0.0,5.2},[2]float32{0.7,3.0},[2]float32{0.8,2.0},[2]float32{1.0,0.0},[2]float32{0.8,-2.0},[2]float32{0.7,-3.0},[2]float32{0.0,-5.2},[2]float32{-0.7,-3.0},[2]float32{-0.8,-2.0},[2]float32{-1.0,0.0}},
                                                                                                                            Scale: &x3d.MFVec2f{[2]float32{0.25,0.25},[2]float32{0.5,0.75},[2]float32{0.5,1.2},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35}},
                                                                                                                            Spine: &x3d.MFVec3f{[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,5.0},[3]float32{0.0,0.0,8.0},[3]float32{0.0,0.0,12.0},[3]float32{0.0,0.0,15.0},[3]float32{0.5,0.0,18.0},[3]float32{1.5,0.0,25.0},[3]float32{2.5,0.0,30.0},[3]float32{4.0,0.0,34.0}},
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
                                                                            DEF: stringPtr("hanim_r_hip"),
                                                                        },
                                                                        Name: stringPtr("r_hip"),
                                                                        Center: &x3d.SFVec3f{-0.11, 0.892362, -0.0732533},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_thigh"),
                                                                                },
                                                                                Name: stringPtr("r_thigh"),
                                                                                &x3d.Shape{
                                                                                    Appearance: &x3d.Appearance{
                                                                                        Material: &x3d.Material{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                USE: stringPtr("Pants_Color"),
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                    Geometry: &x3d.IndexedFaceSet{
                                                                                        CreaseAngle: floatPtr(1.61),
                                                                                        CoordIndex: []int32{5, 4, 0, -1, 0, 4, 3, -1, 1, 7, 0, -1, 7, 8, 0, -1, 8, 6, 0, -1, 6, 5, 0, -1, 3, 2, 0, -1, 2, 1, 0, -1, 1, 2, 9, -1, 2, 3, 10, -1, 3, 4, 11, -1, 4, 5, 12, -1, 5, 6, 13, -1, 8, 7, 15, -1, 7, 1, 9, -1, 9, 15, 7, -1, 15, 14, 8, -1, 13, 16, 5, -1, 16, 12, 5, -1, 12, 11, 4, -1, 11, 10, 3, -1, 10, 9, 2, -1, 12, 16, 20, -1, 13, 14, 22, -1, 14, 15, 23, -1, 24, 23, 15, -1, 23, 22, 14, -1, 20, 19, 12, -1, 17, 18, 26, -1, 18, 19, 27, -1, 19, 20, 27, -1, 20, 21, 28, -1, 22, 23, 29, -1, 30, 29, 23, -1, 27, 26, 18, -1, 26, 25, 17, -1, 30, 31, 25, -1, 25, 26, 29, -1, 25, 29, 30, -1, 26, 27, 28, -1, 26, 28, 29, -1, 27, 20, 28, -1, 24, 15, 9, -1, 22, 21, 13, -1, 29, 28, 22, -1, 28, 21, 22, -1, 24, 31, 23, -1, 31, 30, 23, -1, 25, 31, 17, -1, 31, 24, 17, -1, 17, 24, 10, -1, 24, 9, 10, -1, 18, 10, 11, -1, 18, 17, 10, -1, 18, 12, 19, -1, 18, 11, 12, -1, 21, 20, 13, -1, 20, 16, 13, -1, 14, 13, 8, -1, 13, 6, 8, -1},
                                                                                        Coord: &x3d.Coordinate{
                                                                                            Point: &x3d.MFVec3f{[3]float32{-0.0969,0.804,-0.0486},[3]float32{-0.101,0.876,0.0336},[3]float32{-0.17,0.894,-0.00778},[3]float32{-0.17,0.891,-0.076},[3]float32{-0.124,0.858,-0.129},[3]float32{-0.076,0.843,-0.143},[3]float32{-0.025,0.819,-0.0889},[3]float32{-0.0507,0.847,0.0196},[3]float32{-0.00349,0.826,-0.0287},[3]float32{-0.0991,0.808,0.0406},[3]float32{-0.161,0.814,-0.00187},[3]float32{-0.165,0.808,-0.0755},[3]float32{-0.122,0.788,-0.126},[3]float32{-0.00993,0.762,-0.0937},[3]float32{-0.00993,0.762,-0.0309},[3]float32{-0.0491,0.777,0.0185},[3]float32{-0.0755,0.766,-0.139},[3]float32{-0.13,0.597,-0.00618},[3]float32{-0.132,0.6,-0.0593},[3]float32{-0.108,0.603,-0.105},[3]float32{-0.0722,0.601,-0.118},[3]float32{-0.0314,0.59,-0.0953},[3]float32{-0.0239,0.566,-0.0427},[3]float32{-0.047,0.566,0.0051},[3]float32{-0.0878,0.581,0.0217},[3]float32{-0.114,0.499,-0.0132},[3]float32{-0.116,0.488,-0.061},[3]float32{-0.103,0.567,-0.0991},[3]float32{-0.0362,0.557,-0.0926},[3]float32{-0.025,0.486,-0.047},[3]float32{-0.0507,0.497,-0.00188},[3]float32{-0.0862,0.513,0.018}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_r_knee"),
                                                                                },
                                                                                Name: stringPtr("r_knee"),
                                                                                Center: &x3d.SFVec3f{-0.0699, 0.51, -0.0166},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_calf"),
                                                                                        },
                                                                                        Name: stringPtr("r_calf"),
                                                                                        &x3d.Shape{
                                                                                            Appearance: &x3d.Appearance{
                                                                                                Material: &x3d.Material{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        USE: stringPtr("Pants_Color"),
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            Geometry: &x3d.IndexedFaceSet{
                                                                                                CreaseAngle: floatPtr(1.57),
                                                                                                CoordIndex: []int32{14, 25, 18, -1, 25, 32, 18, -1, 32, 27, 18, -1, 27, 22, 18, -1, 22, 10, 18, -1, 10, 6, 18, -1, 6, 8, 18, -1, 8, 14, 18, -1, 14, 8, 17, -1, 6, 10, 9, -1, 10, 22, 24, -1, 22, 27, 39, -1, 27, 32, 39, -1, 32, 25, 42, -1, 25, 14, 30, -1, 17, 30, 14, -1, 30, 42, 25, -1, 42, 39, 32, -1, 39, 24, 22, -1, 24, 9, 10, -1, 4, 17, 8, -1, 39, 42, 43, -1, 30, 43, 42, -1, 17, 4, 1, -1, 24, 39, 26, -1, 39, 43, 44, -1, 30, 17, 34, -1, 16, 34, 17, -1, 34, 43, 30, -1, 44, 26, 39, -1, 0, 1, 4, -1, 1, 16, 17, -1, 16, 1, 3, -1, 1, 0, 2, -1, 0, 5, 7, -1, 5, 26, 28, -1, 26, 44, 45, -1, 44, 43, 46, -1, 43, 34, 36, -1, 34, 16, 15, -1, 15, 36, 34, -1, 36, 46, 43, -1, 46, 45, 44, -1, 45, 28, 26, -1, 28, 7, 5, -1, 7, 2, 0, -1, 2, 3, 1, -1, 3, 15, 16, -1, 45, 46, 37, -1, 36, 15, 20, -1, 36, 37, 46, -1, 13, 2, 7, -1, 3, 20, 15, -1, 3, 2, 13, -1, 36, 20, 29, -1, 29, 37, 36, -1, 13, 21, 23, -1, 21, 33, 23, -1, 41, 37, 40, -1, 37, 29, 31, -1, 29, 20, 19, -1, 19, 31, 29, -1, 31, 40, 37, -1, 40, 38, 41, -1, 35, 23, 33, -1, 23, 12, 13, -1, 12, 11, 13, -1, 31, 19, 11, -1, 40, 31, 11, -1, 40, 11, 12, -1, 12, 23, 38, -1, 12, 38, 40, -1, 23, 35, 38, -1, 28, 21, 7, -1, 21, 13, 7, -1, 45, 33, 28, -1, 33, 21, 28, -1, 33, 45, 41, -1, 45, 37, 41, -1, 33, 41, 35, -1, 41, 38, 35, -1, 20, 3, 47, -1, 11, 19, 47, -1, 19, 20, 47, -1, 13, 47, 3, -1, 13, 11, 47, -1, 4, 8, 6, -1, 26, 5, 24, -1, 5, 9, 24, -1, 6, 9, 4, -1, 9, 0, 4, -1, 9, 5, 0, -1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{-0.123,0.363,-0.0663},[3]float32{-0.123,0.363,-0.04},[3]float32{-0.118,0.309,-0.0685},[3]float32{-0.118,0.311,-0.0411},[3]float32{-0.117,0.508,-0.0169},[3]float32{-0.107,0.367,-0.107},[3]float32{-0.105,0.539,-0.0438},[3]float32{-0.105,0.31,-0.108},[3]float32{-0.104,0.539,-0.0223},[3]float32{-0.101,0.51,-0.0798},[3]float32{-0.0975,0.54,-0.0647},[3]float32{-0.0948,0.0897,-0.0368},[3]float32{-0.0916,0.0779,-0.0604},[3]float32{-0.0905,0.12,-0.0647},[3]float32{-0.0883,0.532,-0.00349},[3]float32{-0.0883,0.309,-0.018},[3]float32{-0.0878,0.361,-0.0126},[3]float32{-0.0862,0.506,0.0158},[3]float32{-0.0814,0.55,-0.0395},[3]float32{-0.0765,0.11,-0.0169},[3]float32{-0.0744,0.13,-0.0212},[3]float32{-0.0738,0.117,-0.0814},[3]float32{-0.0722,0.546,-0.0717},[3]float32{-0.0717,0.0854,-0.0765},[3]float32{-0.0706,0.51,-0.101},[3]float32{-0.0609,0.533,-0.00833},[3]float32{-0.0588,0.365,-0.122},[3]float32{-0.0577,0.544,-0.0577},[3]float32{-0.0572,0.308,-0.123},[3]float32{-0.0561,0.13,-0.0245},[3]float32{-0.0556,0.506,-0.000272},[3]float32{-0.054,0.0972,-0.0175},[3]float32{-0.0529,0.536,-0.0368},[3]float32{-0.0529,0.121,-0.0873},[3]float32{-0.0497,0.358,-0.0234},[3]float32{-0.0486,0.0999,-0.0835},[3]float32{-0.0475,0.307,-0.0282},[3]float32{-0.0416,0.124,-0.0416},[3]float32{-0.0406,0.0918,-0.0626},[3]float32{-0.0406,0.513,-0.0744},[3]float32{-0.0384,0.0881,-0.0363},[3]float32{-0.0373,0.121,-0.0636},[3]float32{-0.0368,0.51,-0.0357},[3]float32{-0.0239,0.358,-0.0475},[3]float32{-0.0228,0.358,-0.0926},[3]float32{-0.0201,0.309,-0.0937},[3]float32{-0.0191,0.311,-0.0508},[3]float32{-0.0985,0.125,-0.0375}},
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                },
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_r_ankle"),
                                                                                        },
                                                                                        Name: stringPtr("r_ankle"),
                                                                                        Center: &x3d.SFVec3f{-0.064, 0.0753, -0.0412},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimSegment{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_r_hindfoot"),
                                                                                                },
                                                                                                Name: stringPtr("r_hindfoot"),
                                                                                                &x3d.Shape{
                                                                                                    Appearance: &x3d.Appearance{
                                                                                                        Material: &x3d.Material{
                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                USE: stringPtr("Shoe_Color"),
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                    Geometry: &x3d.IndexedFaceSet{
                                                                                                        CreaseAngle: floatPtr(1.57),
                                                                                                        CoordIndex: []int32{6, 50, 0, -1, 50, 8, 7, -1, 50, 7, 0, -1, 1, 9, 8, -1, 1, 8, 50, -1, 49, 10, 9, -1, 49, 9, 1, -1, 46, 11, 10, -1, 46, 10, 49, -1, 2, 12, 11, -1, 2, 11, 46, -1, 3, 13, 12, -1, 3, 12, 2, -1, 4, 14, 13, -1, 4, 13, 3, -1, 45, 14, 4, -1, 47, 15, 45, -1, 19, 15, 47, -1, 48, 18, 19, -1, 5, 16, 18, -1, 5, 18, 48, -1, 6, 17, 16, -1, 6, 16, 5, -1, 0, 7, 17, -1, 0, 17, 6, -1, 14, 20, 21, -1, 14, 21, 13, -1, 13, 21, 12, -1, 12, 21, 22, -1, 12, 22, 11, -1, 11, 22, 10, -1, 17, 23, 16, -1, 16, 23, 24, -1, 16, 24, 18, -1, 18, 24, 25, -1, 18, 25, 19, -1, 19, 25, 26, -1, 19, 26, 15, -1, 15, 26, 20, -1, 20, 26, 27, -1, 20, 27, 21, -1, 21, 27, 28, -1, 21, 28, 22, -1, 22, 28, 29, -1, 10, 30, 9, -1, 9, 30, 31, -1, 9, 31, 8, -1, 8, 31, 32, -1, 17, 32, 23, -1, 23, 33, 34, -1, 23, 34, 35, -1, 23, 35, 24, -1, 24, 35, 36, -1, 24, 36, 25, -1, 25, 36, 37, -1, 25, 37, 26, -1, 26, 37, 38, -1, 26, 38, 27, -1, 27, 38, 39, -1, 27, 39, 28, -1, 28, 39, 40, -1, 28, 40, 29, -1, 29, 40, 41, -1, 29, 41, 30, -1, 30, 41, 42, -1, 30, 42, 31, -1, 31, 42, 43, -1, 31, 43, 32, -1, 32, 43, 33, -1, 32, 33, 23, -1, 44, 43, 42, -1, 44, 42, 41, -1, 44, 41, 40, -1, 44, 40, 39, -1, 44, 39, 38, -1, 44, 38, 37, -1, 44, 37, 36, -1, 44, 36, 35, -1, 44, 35, 34, -1, 44, 34, 33, -1, 44, 33, 43, -1, 4, 3, 2, -1, 45, 4, 2, -1, 45, 2, 46, -1, 47, 45, 46, -1, 48, 46, 49, -1, 5, 48, 49, -1, 5, 49, 1, -1, 6, 5, 1, -1, 6, 1, 50, -1, 30, 10, 29, -1, 10, 22, 29, -1, 17, 7, 32, -1, 7, 8, 32, -1, 19, 47, 48, -1, 47, 46, 48, -1, 20, 14, 15, -1, 14, 45, 15, -1},
                                                                                                        Coord: &x3d.Coordinate{
                                                                                                            Point: &x3d.MFVec3f{[3]float32{-0.0727,0.0,-0.0994},[3]float32{-0.1,0.0,-0.0594},[3]float32{-0.0701,0.0,0.146},[3]float32{-0.0468,0.0,0.153},[3]float32{-0.0215,0.0,0.146},[3]float32{-0.0433,0.0,-0.0534},[3]float32{-0.0529,0.0,-0.0923},[3]float32{-0.0727,0.0219,-0.0994},[3]float32{-0.0863,0.0219,-0.0862},[3]float32{-0.1,0.0219,-0.0594},[3]float32{-0.108,0.0219,-0.00479},[3]float32{-0.112,0.0156,0.117},[3]float32{-0.0701,0.0156,0.146},[3]float32{-0.0468,0.0156,0.153},[3]float32{-0.0215,0.0156,0.146},[3]float32{-0.0165,0.017,0.0777},[3]float32{-0.0433,0.0219,-0.0534},[3]float32{-0.0529,0.0219,-0.0923},[3]float32{-0.0445,0.0273,-0.0189},[3]float32{-0.0265,0.0253,0.0549},[3]float32{-0.0305,0.0253,0.0938},[3]float32{-0.069,0.0253,0.0938},[3]float32{-0.102,0.0253,0.0707},[3]float32{-0.0568,0.0573,-0.0918},[3]float32{-0.0492,0.0573,-0.0497},[3]float32{-0.0424,0.0573,-0.00142},[3]float32{-0.0478,0.0573,0.0341},[3]float32{-0.0623,0.0573,0.0366},[3]float32{-0.0864,0.0573,0.0245},[3]float32{-0.0962,0.0573,-0.0121},[3]float32{-0.0845,0.0573,-0.0764},[3]float32{-0.0758,0.0573,-0.0899},[3]float32{-0.0676,0.0573,-0.0962},[3]float32{-0.0578,0.0953,-0.0896},[3]float32{-0.0489,0.0953,-0.0757},[3]float32{-0.0459,0.0953,-0.0615},[3]float32{-0.0435,0.0953,-0.0292},[3]float32{-0.0485,0.0953,-0.00582},[3]float32{-0.0624,0.0953,-0.00466},[3]float32{-0.0857,0.0953,-0.0134},[3]float32{-0.0953,0.0953,-0.038},[3]float32{-0.0843,0.0953,-0.0803},[3]float32{-0.0761,0.0953,-0.0889},[3]float32{-0.0682,0.0953,-0.0929},[3]float32{-0.0675,0.13,-0.0608},[3]float32{-0.0165,0.0,0.125},[3]float32{-0.112,0.0,0.117},[3]float32{-0.0165,0.0,0.0777},[3]float32{-0.0393,0.0,-0.0129},[3]float32{-0.108,0.0,-0.00479},[3]float32{-0.0863,0.0,-0.0862}},
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Scale: &x3d.SFVec3f{0.015, 0.015, 0.015},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Transform{
                                                                                                                Translation: &x3d.SFVec3f{-5.0, -0.5, -7.5},
                                                                                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                                                            Children: []x3d.X3DNode{
                                                                                                                &x3d.Shape{
                                                                                                                    Appearance: &x3d.Appearance{
                                                                                                                        Material: &x3d.Material{
                                                                                                                            DiffuseColor: &x3d.SFColor{0.753, 1.0, 0.243},
                                                                                                                        },
                                                                                                                    },
                                                                                                                    Geometry: &x3d.Extrusion{
                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                            DEF: stringPtr("FinExtrusionRight"),
                                                                                                                        },
                                                                                                                        Ccw: boolPtr(false),
                                                                                                                        CreaseAngle: floatPtr(3.14),
                                                                                                                        CrossSection: &x3d.MFVec2f{[2]float32{-1.0,0.0},[2]float32{-0.8,2.0},[2]float32{-0.7,3.0},[2]float32{0.0,5.2},[2]float32{0.7,3.0},[2]float32{0.8,2.0},[2]float32{1.0,0.0},[2]float32{0.8,-2.0},[2]float32{0.7,-3.0},[2]float32{0.0,-5.2},[2]float32{-0.7,-3.0},[2]float32{-0.8,-2.0},[2]float32{-1.0,0.0}},
                                                                                                                        Scale: &x3d.MFVec2f{[2]float32{0.25,0.25},[2]float32{0.5,0.75},[2]float32{0.5,1.2},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35},[2]float32{0.5,1.35}},
                                                                                                                        Spine: &x3d.MFVec3f{[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,5.0},[3]float32{0.0,0.0,8.0},[3]float32{0.0,0.0,12.0},[3]float32{0.0,0.0,15.0},[3]float32{0.5,0.0,18.0},[3]float32{1.5,0.0,25.0},[3]float32{2.5,0.0,30.0},[3]float32{4.0,0.0,34.0}},
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
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_vl1"),
                                                                },
                                                                Name: stringPtr("vl1"),
                                                                Center: &x3d.SFVec3f{-0.00405, 1.07, -0.0275},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l1"),
                                                                        },
                                                                        Name: stringPtr("l1"),
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-0.00405, 1.07, -0.0275},
                                                                                Scale: &x3d.SFVec3f{1.05, 1.05, 1.05},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    Appearance: &x3d.Appearance{
                                                                                        Material: &x3d.Material{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("WetShirtColor"),
                                                                                            },
                                                                                            AmbientIntensity: floatPtr(0.25),
                                                                                            DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.502},
                                                                                        },
                                                                                        Texture: &x3d.ImageTexture{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("small_logo_Tex"),
                                                                                            },
                                                                                            Url: x3d.MFString{"small_logo.gif", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"},
                                                                                        },
                                                                                    },
                                                                                    Geometry: &x3d.IndexedFaceSet{
                                                                                        CreaseAngle: floatPtr(1.59),
                                                                                        CoordIndex: []int32{0, 1, 2, -1, 3, 0, 2, -1, 4, 5, 6, -1, 6, 7, 4, -1, 8, 7, 6, -1, 6, 9, 8, -1, 9, 10, 8, -1, 6, 5, 11, -1, 9, 6, 12, -1, 11, 12, 6, -1, 12, 10, 9, -1, 7, 8, 13, -1, 13, 4, 7, -1, 14, 15, 16, -1, 15, 17, 13, -1, 4, 13, 17, -1, 17, 15, 18, -1, 13, 19, 15, -1, 19, 13, 8, -1, 19, 16, 15, -1, 16, 19, 8, -1, 17, 20, 4, -1, 5, 4, 20, -1, 18, 21, 17, -1, 20, 17, 21, -1, 16, 22, 14, -1, 22, 16, 23, -1, 8, 23, 16, -1, 23, 8, 10, -1, 24, 25, 26, -1, 26, 27, 24, -1, 25, 28, 26, -1, 28, 29, 30, -1, 30, 26, 28, -1, 31, 32, 33, -1, 32, 25, 33, -1, 25, 24, 34, -1, 33, 25, 34, -1, 24, 35, 34, -1, 27, 35, 24, -1, 33, 36, 31, -1, 27, 26, 37, -1, 37, 26, 30, -1, 38, 37, 30, -1, 33, 34, 39, -1, 39, 34, 35, -1, 39, 35, 40, -1, 41, 38, 30, -1, 35, 27, 42, -1, 37, 42, 27, -1, 40, 35, 42, -1, 42, 37, 43, -1, 37, 38, 44, -1, 44, 43, 37, -1, 36, 45, 46, -1, 36, 33, 45, -1, 40, 42, 47, -1, 43, 47, 42, -1, 47, 48, 40, -1, 39, 40, 48, -1, 47, 43, 49, -1, 43, 44, 49, -1, 50, 49, 44, -1, 51, 46, 52, -1, 46, 45, 52, -1, 52, 45, 53, -1, 33, 53, 45, -1, 33, 39, 53, -1, 49, 54, 47, -1, 48, 47, 54, -1, 55, 56, 52, -1, 57, 52, 53, -1, 57, 55, 52, -1, 58, 57, 53, -1, 59, 58, 53, -1, 53, 39, 59, -1, 39, 48, 59, -1, 59, 48, 54, -1, 58, 59, 60, -1, 54, 49, 61, -1, 59, 54, 61, -1, 60, 59, 61, -1, 49, 50, 62, -1, 63, 62, 50, -1, 62, 61, 49, -1, 64, 63, 50, -1, 63, 64, 65, -1, 65, 62, 63, -1, 66, 60, 61, -1, 62, 65, 67, -1, 68, 67, 65, -1, 64, 69, 70, -1, 64, 70, 65, -1, 70, 68, 65, -1, 69, 71, 72, -1, 72, 70, 69, -1, 73, 74, 75, -1, 66, 76, 60, -1, 67, 77, 62, -1, 62, 77, 61, -1, 77, 66, 61, -1, 66, 77, 78, -1, 77, 67, 79, -1, 79, 67, 68, -1, 79, 78, 77, -1, 68, 70, 80, -1, 70, 72, 80, -1, 80, 79, 68, -1, 74, 73, 81, -1, 73, 76, 82, -1, 82, 81, 73, -1, 76, 66, 83, -1, 78, 83, 66, -1, 83, 82, 76, -1, 78, 79, 84, -1, 79, 80, 84, -1, 84, 85, 78, -1, 86, 84, 80, -1, 81, 82, 87, -1, 87, 88, 81, -1, 82, 83, 89, -1, 83, 78, 89, -1, 89, 87, 82, -1, 78, 85, 89, -1, 90, 91, 92, -1, 92, 93, 90, -1, 90, 94, 91, -1, 95, 96, 94, -1, 94, 90, 95, -1, 29, 96, 97, -1, 96, 95, 97, -1, 97, 30, 29, -1, 30, 97, 41, -1, 41, 97, 95, -1, 98, 99, 100, -1, 98, 91, 99, -1, 101, 92, 91, -1, 98, 101, 91, -1, 101, 102, 92, -1, 92, 102, 93, -1, 36, 103, 31, -1, 51, 103, 36, 46, -1, 103, 100, 31, -1, 100, 103, 98, -1, 104, 90, 93, -1, 90, 104, 95, -1, 95, 105, 41, -1, 104, 105, 95, -1, 106, 101, 98, -1, 102, 101, 106, -1, 107, 93, 102, -1, 93, 107, 104, -1, 108, 104, 107, -1, 107, 109, 108, -1, 110, 105, 104, -1, 104, 108, 110, -1, 109, 107, 111, -1, 107, 102, 111, -1, 111, 102, 106, -1, 111, 112, 109, -1, 106, 112, 111, -1, 113, 110, 108, -1, 110, 113, 114, -1, 51, 52, 115, -1, 116, 115, 117, -1, 117, 106, 116, -1, 118, 109, 112, -1, 119, 108, 109, -1, 108, 119, 113, -1, 109, 118, 119, -1, 120, 113, 119, -1, 119, 121, 120, -1, 52, 56, 122, -1, 122, 115, 52, -1, 115, 122, 123, -1, 117, 124, 125, -1, 106, 117, 125, -1, 118, 112, 106, 125, -1, 119, 118, 125, -1, 121, 119, 125, -1, 126, 124, 123, -1, 127, 114, 113, -1, 114, 127, 128, -1, 113, 120, 127, -1, 114, 128, 129, -1, 130, 126, 123, -1, 122, 130, 123, -1, 131, 120, 121, -1, 131, 127, 120, -1, 132, 129, 128, -1, 128, 127, 132, -1, 74, 81, 133, -1, 81, 134, 133, -1, 121, 135, 131, -1, 136, 132, 127, -1, 132, 136, 137, -1, 138, 71, 129, -1, 138, 129, 132, -1, 137, 138, 132, -1, 139, 72, 71, -1, 72, 139, 80, -1, 71, 138, 139, -1, 140, 135, 121, -1, 140, 121, 125, -1, 141, 127, 131, -1, 127, 141, 136, -1, 131, 135, 141, -1, 142, 141, 135, -1, 143, 136, 141, -1, 136, 143, 137, -1, 141, 142, 143, -1, 144, 138, 137, -1, 144, 139, 138, -1, 143, 144, 137, -1, 145, 146, 134, -1, 145, 140, 146, -1, 134, 81, 145, -1, 147, 135, 140, -1, 135, 147, 142, -1, 140, 145, 147, -1, 148, 80, 139, -1, 80, 148, 86, -1, 139, 144, 148, -1, 149, 143, 142, -1, 149, 144, 143, -1, 142, 150, 149, -1, 151, 148, 144, -1, 144, 149, 151, -1, 152, 145, 81, -1, 81, 88, 152, -1, 153, 147, 145, -1, 153, 142, 147, -1, 145, 152, 153, -1, 153, 150, 142, -1, 154, 86, 148, -1, 148, 151, 154, -1, 155, 28, 25, -1, 155, 29, 28, -1, 155, 25, 32, -1, 155, 32, 31, -1, 155, 31, 100, -1, 155, 100, 99, -1, 155, 99, 91, -1, 155, 91, 94, -1, 155, 94, 96, -1, 155, 96, 29, -1, 156, 151, 149, -1, 156, 154, 151, -1, 156, 149, 150, -1, 156, 150, 153, -1, 156, 153, 152, -1, 156, 152, 88, -1, 156, 88, 87, -1, 156, 87, 89, -1, 156, 89, 85, -1, 156, 85, 84, -1, 156, 84, 86, -1, 156, 86, 154, -1, 76, 157, 60, -1, 76, 73, 158, 157, -1, 159, 158, 73, 75, 160, -1, 161, 56, 55, -1, 60, 162, 58, -1, 162, 60, 157, -1, 161, 55, 163, -1, 57, 164, 163, 55, -1, 160, 163, 164, -1, 160, 164, 159, -1, 164, 57, 165, -1, 164, 165, 159, -1, 57, 58, 166, 165, -1, 166, 58, 162, -1, 165, 166, 159, -1, 166, 162, 157, 158, 159, -1, 140, 125, 167, -1, 124, 168, 125, -1, 168, 167, 125, -1, 124, 169, 168, -1, 146, 140, 167, 170, -1, 168, 170, 167, -1, 168, 169, 170, -1, 146, 170, 171, -1, 169, 171, 170, -1, 172, 134, 146, 171, -1, 134, 172, 130, -1, 169, 124, 126, 173, -1, 173, 126, 130, -1, 169, 173, 172, 171, -1, 173, 130, 172, -1, 122, 74, 133, 174, -1, 133, 134, 174, -1, 130, 122, 174, -1, 134, 130, 174, -1, 122, 56, 175, 74, -1, 74, 175, 176, -1, 175, 56, 161, 176, -1, 74, 176, 75, -1, 176, 161, 163, -1, 176, 160, 75, -1, 176, 163, 160, -1, 115, 116, 177, 51, -1, 106, 98, 177, 116, -1, 51, 177, 103, -1, 177, 98, 103, -1},
                                                                                        TexCoord: &x3d.TextureCoordinate{
                                                                                            Point: &x3d.MFVec2f{[2]float32{0.1611,-0.02056},[2]float32{0.9468,-0.02056},[2]float32{0.9739,0.9344},[2]float32{-0.137,1.094},[2]float32{0.1973,0.6424},[2]float32{0.2231,0.04876},[2]float32{0.5054,0.2466},[2]float32{0.5054,0.5929},[2]float32{0.8135,0.6424},[2]float32{0.6282,0.1972},[2]float32{0.7876,0.04876},[2]float32{0.5054,-0.05018},[2]float32{0.6282,-0.05018},[2]float32{0.5054,0.8403},[2]float32{0.7989,1.038},[2]float32{0.5054,1.038},[2]float32{0.8248,0.7908},[2]float32{0.186,0.7908},[2]float32{0.2118,1.038},[2]float32{0.6427,0.7908},[2]float32{-0.01977,0.5929},[2]float32{-0.03324,0.7908},[2]float32{1.044,0.7908},[2]float32{1.031,0.5929},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0}},
                                                                                        },
                                                                                        Coord: &x3d.Coordinate{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("pointValues"),
                                                                                            },
                                                                                            Point: &x3d.MFVec3f{[3]float32{0.043,1.25,0.0614},[3]float32{0.101,1.25,0.0614},[3]float32{0.103,1.31,0.0195},[3]float32{0.021,1.32,0.0276},[3]float32{0.0572,1.27,-0.153},[3]float32{0.0524,1.15,-0.134},[3]float32{0.0,1.19,-0.14},[3]float32{0.0,1.26,-0.147},[3]float32{-0.0572,1.27,-0.153},[3]float32{-0.0228,1.18,-0.14},[3]float32{-0.0524,1.15,-0.134},[3]float32{0.0,1.13,-0.126},[3]float32{-0.0228,1.13,-0.124},[3]float32{0.0,1.31,-0.146},[3]float32{-0.0545,1.35,-0.138},[3]float32{0.0,1.35,-0.136},[3]float32{-0.0593,1.3,-0.151},[3]float32{0.0593,1.3,-0.151},[3]float32{0.0545,1.35,-0.138},[3]float32{-0.0255,1.3,-0.146},[3]float32{0.0975,1.26,-0.15},[3]float32{0.1,1.3,-0.148},[3]float32{-0.1,1.3,-0.148},[3]float32{-0.0975,1.26,-0.15},[3]float32{-0.117,1.41,-0.0395},[3]float32{-0.0674,1.45,-0.0314},[3]float32{-0.0926,1.41,-0.0937},[3]float32{-0.124,1.4,-0.0706},[3]float32{-0.0583,1.44,-0.0615},[3]float32{-0.0228,1.46,-0.0872},[3]float32{-0.0534,1.42,-0.112},[3]float32{-0.0228,1.42,0.00351},[3]float32{-0.0593,1.43,-0.0185},[3]float32{-0.0787,1.39,-0.00293},[3]float32{-0.112,1.4,-0.0131},[3]float32{-0.164,1.39,-0.0373},[3]float32{-0.0153,1.39,0.0159},[3]float32{-0.0953,1.35,-0.136},[3]float32{-0.0545,1.35,-0.138},[3]float32{-0.139,1.34,0.00297},[3]float32{-0.137,1.34,-0.0368},[3]float32{0.0,1.35,-0.136},[3]float32{-0.156,1.35,-0.0915},[3]float32{-0.132,1.29,-0.127},[3]float32{-0.1,1.3,-0.148},[3]float32{-0.0418,1.35,0.0168},[3]float32{-0.013,1.37,0.0167},[3]float32{-0.151,1.28,-0.0878},[3]float32{-0.136,1.32,-0.0406},[3]float32{-0.124,1.26,-0.125},[3]float32{-0.0975,1.26,-0.15},[3]float32{0.00228,1.37,0.0167},[3]float32{-0.00959,1.32,0.0276},[3]float32{-0.0918,1.31,0.0195},[3]float32{-0.141,1.25,-0.0744},[3]float32{-0.0316,1.25,0.0614},[3]float32{-0.00261,1.25,0.0458},[3]float32{-0.0611,1.25,0.0668},[3]float32{-0.0896,1.25,0.0614},[3]float32{-0.126,1.24,0.012},[3]float32{-0.126,1.22,0.0141},[3]float32{-0.129,1.17,-0.0523},[3]float32{-0.115,1.16,-0.105},[3]float32{-0.0851,1.18,-0.134},[3]float32{-0.0524,1.15,-0.134},[3]float32{-0.083,1.13,-0.122},[3]float32{-0.117,1.15,-0.018},[3]float32{-0.11,1.1,-0.0846},[3]float32{-0.0808,1.1,-0.111},[3]float32{-0.0228,1.13,-0.124},[3]float32{-0.0524,1.1,-0.119},[3]float32{0.0,1.13,-0.126},[3]float32{-0.0228,1.1,-0.116},[3]float32{-0.0563,1.15,0.0377},[3]float32{-0.00476,1.18,0.0458},[3]float32{-0.0343,1.18,0.0485},[3]float32{-0.0966,1.15,-0.00413},[3]float32{-0.12,1.1,-0.0373},[3]float32{-0.121,1.07,-0.0356},[3]float32{-0.106,1.07,-0.0711},[3]float32{-0.0475,1.06,-0.105},[3]float32{0.0,1.08,0.0556},[3]float32{-0.0787,1.08,0.0347},[3]float32{-0.103,1.08,0.00296},[3]float32{-0.0975,1.01,-0.0873},[3]float32{-0.134,0.998,-0.0314},[3]float32{-0.0475,1.02,-0.109},[3]float32{-0.0325,1.02,0.0529},[3]float32{0.0,1.02,0.0422},[3]float32{-0.0975,1.02,0.0132},[3]float32{0.0926,1.41,-0.0937},[3]float32{0.0674,1.45,-0.0314},[3]float32{0.117,1.41,-0.0395},[3]float32{0.124,1.4,-0.0706},[3]float32{0.0583,1.44,-0.0615},[3]float32{0.0534,1.42,-0.112},[3]float32{0.0228,1.46,-0.0872},[3]float32{0.0,1.4,-0.112},[3]float32{0.0787,1.39,-0.00293},[3]float32{0.0593,1.43,-0.0185},[3]float32{0.0228,1.42,0.00351},[3]float32{0.112,1.4,-0.0131},[3]float32{0.164,1.39,-0.0373},[3]float32{0.0153,1.39,0.0159},[3]float32{0.0953,1.35,-0.136},[3]float32{0.0545,1.35,-0.138},[3]float32{0.139,1.34,0.00297},[3]float32{0.156,1.35,-0.0915},[3]float32{0.132,1.29,-0.127},[3]float32{0.151,1.28,-0.0878},[3]float32{0.1,1.3,-0.148},[3]float32{0.137,1.34,-0.0368},[3]float32{0.147,1.32,-0.0406},[3]float32{0.124,1.26,-0.125},[3]float32{0.0975,1.26,-0.15},[3]float32{0.021,1.32,0.0276},[3]float32{0.0532,1.35,0.0168},[3]float32{0.103,1.31,0.0195},[3]float32{0.135,1.29,-0.0406},[3]float32{0.141,1.25,-0.0744},[3]float32{0.132,1.18,-0.083},[3]float32{0.134,1.19,-0.0572},[3]float32{0.014,1.25,0.0458},[3]float32{0.043,1.25,0.0614},[3]float32{0.101,1.25,0.0614},[3]float32{0.138,1.24,0.012},[3]float32{0.065,1.23,0.0743},[3]float32{0.115,1.16,-0.105},[3]float32{0.0851,1.18,-0.134},[3]float32{0.0524,1.15,-0.134},[3]float32{0.043,1.2,0.0641},[3]float32{0.127,1.14,-0.0427},[3]float32{0.083,1.13,-0.122},[3]float32{0.0162,1.18,0.0458},[3]float32{0.0457,1.18,0.0485},[3]float32{0.117,1.15,-0.018},[3]float32{0.11,1.1,-0.0846},[3]float32{0.0808,1.1,-0.111},[3]float32{0.0524,1.1,-0.119},[3]float32{0.0228,1.1,-0.116},[3]float32{0.108,1.15,-0.00413},[3]float32{0.12,1.1,-0.0373},[3]float32{0.121,1.07,-0.0356},[3]float32{0.106,1.07,-0.0711},[3]float32{0.0475,1.06,-0.105},[3]float32{0.0787,1.08,0.0347},[3]float32{0.0844,1.15,0.0297},[3]float32{0.103,1.08,0.00296},[3]float32{0.0,1.07,-0.11},[3]float32{0.0975,1.01,-0.0873},[3]float32{0.134,0.998,-0.0475},[3]float32{0.0475,1.02,-0.109},[3]float32{0.0325,1.02,0.0529},[3]float32{0.0975,1.02,0.0132},[3]float32{0.0,1.02,-0.117},[3]float32{0.0,1.44,-0.0389},[3]float32{0.0,1.01,-0.0259},[3]float32{-0.104,1.19,0.0423},[3]float32{-0.0778,1.19,0.0642},[3]float32{-0.078,1.19,0.0644},[3]float32{-0.0493,1.2,0.0664},[3]float32{-0.0281,1.22,0.0587},[3]float32{-0.104,1.2,0.0568},[3]float32{-0.0484,1.21,0.0692},[3]float32{-0.0549,1.21,0.0708},[3]float32{-0.0806,1.21,0.0713},[3]float32{-0.0852,1.21,0.0703},[3]float32{0.116,1.19,0.043},[3]float32{0.114,1.21,0.0572},[3]float32{0.0967,1.21,0.0701},[3]float32{0.11,1.19,0.0502},[3]float32{0.093,1.19,0.0622},[3]float32{0.0832,1.19,0.0662},[3]float32{0.0863,1.21,0.0728},[3]float32{0.0154,1.21,0.0458},[3]float32{-0.00393,1.21,0.0458},[3]float32{-0.0145,1.2,0.0512},[3]float32{0.0534,1.35,0.0168}},
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-0.00405, 1.07, -0.0275},
                                                                                Scale: &x3d.SFVec3f{1.25, 1.1, 1.3},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Group{
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.0, -1.2, 0.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Shape{
                                                                                                    Appearance: &x3d.Appearance{
                                                                                                        Material: &x3d.Material{
                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                DEF: stringPtr("BCLColor"),
                                                                                                            },
                                                                                                            AmbientIntensity: floatPtr(0.25),
                                                                                                            DiffuseColor: &x3d.SFColor{0.0588, 0.0588, 0.0588},
                                                                                                            Shininess: floatPtr(0.5),
                                                                                                        },
                                                                                                    },
                                                                                                    Geometry: &x3d.IndexedFaceSet{
                                                                                                        Solid: boolPtr(false),
                                                                                                        CreaseAngle: floatPtr(1.59),
                                                                                                        CoordIndex: []int32{4, 5, 6, -1, 6, 7, 4, -1, 8, 7, 6, -1, 6, 9, 8, -1, 9, 10, 8, -1, 6, 5, 11, -1, 9, 6, 12, -1, 11, 12, 6, -1, 12, 10, 9, -1, 7, 8, 13, -1, 13, 4, 7, -1, 14, 15, 16, -1, 15, 17, 13, -1, 4, 13, 17, -1, 17, 15, 18, -1, 13, 19, 15, -1, 19, 13, 8, -1, 19, 16, 15, -1, 16, 19, 8, -1, 17, 20, 4, -1, 5, 4, 20, -1, 18, 21, 17, -1, 20, 17, 21, -1, 16, 22, 14, -1, 22, 16, 23, -1, 8, 23, 16, -1, 23, 8, 10, -1, 24, 25, 26, -1, 26, 27, 24, -1, 25, 28, 26, -1, 28, 29, 30, -1, 30, 26, 28, -1, 25, 24, 34, -1, 33, 25, 34, -1, 24, 35, 34, -1, 27, 35, 24, -1, 27, 26, 37, -1, 37, 26, 30, -1, 38, 37, 30, -1, 33, 34, 39, -1, 39, 34, 35, -1, 41, 38, 30, -1, 35, 27, 42, -1, 37, 42, 27, -1, 42, 37, 43, -1, 37, 38, 44, -1, 44, 43, 37, -1, 43, 47, 42, -1, 47, 43, 49, -1, 43, 44, 49, -1, 50, 49, 44, -1, 33, 39, 53, -1, 49, 54, 47, -1, 59, 58, 53, -1, 53, 39, 59, -1, 58, 59, 60, -1, 54, 49, 61, -1, 49, 50, 62, -1, 63, 62, 50, -1, 62, 61, 49, -1, 64, 63, 50, -1, 63, 64, 65, -1, 65, 62, 63, -1, 66, 60, 61, -1, 62, 65, 67, -1, 68, 67, 65, -1, 64, 69, 70, -1, 64, 70, 65, -1, 70, 68, 65, -1, 69, 71, 72, -1, 72, 70, 69, -1, 66, 76, 60, -1, 67, 77, 62, -1, 62, 77, 61, -1, 77, 66, 61, -1, 66, 77, 78, -1, 77, 67, 79, -1, 79, 67, 68, -1, 79, 78, 77, -1, 68, 70, 80, -1, 70, 72, 80, -1, 80, 79, 68, -1, 73, 76, 82, -1, 76, 66, 83, -1, 78, 83, 66, -1, 83, 82, 76, -1, 78, 79, 84, -1, 79, 80, 84, -1, 84, 85, 78, -1, 86, 84, 80, -1, 82, 83, 89, -1, 83, 78, 89, -1, 89, 87, 82, -1, 78, 85, 89, -1, 90, 91, 92, -1, 92, 93, 90, -1, 90, 94, 91, -1, 95, 96, 94, -1, 94, 90, 95, -1, 29, 96, 97, -1, 96, 95, 97, -1, 97, 30, 29, -1, 30, 97, 41, -1, 41, 97, 95, -1, 101, 92, 91, -1, 98, 101, 91, -1, 101, 102, 92, -1, 92, 102, 93, -1, 104, 90, 93, -1, 90, 104, 95, -1, 95, 105, 41, -1, 104, 105, 95, -1, 106, 101, 98, -1, 102, 101, 106, -1, 107, 93, 102, -1, 93, 107, 104, -1, 108, 104, 107, -1, 107, 109, 108, -1, 110, 105, 104, -1, 104, 108, 110, -1, 113, 110, 108, -1, 110, 113, 114, -1, 119, 108, 109, -1, 108, 119, 113, -1, 120, 113, 119, -1, 119, 121, 120, -1, 117, 124, 125, -1, 106, 117, 125, -1, 127, 114, 113, -1, 114, 127, 128, -1, 113, 120, 127, -1, 114, 128, 129, -1, 131, 120, 121, -1, 131, 127, 120, -1, 132, 129, 128, -1, 128, 127, 132, -1, 121, 135, 131, -1, 136, 132, 127, -1, 132, 136, 137, -1, 138, 71, 129, -1, 138, 129, 132, -1, 137, 138, 132, -1, 139, 72, 71, -1, 72, 139, 80, -1, 71, 138, 139, -1, 140, 135, 121, -1, 140, 121, 125, -1, 141, 127, 131, -1, 127, 141, 136, -1, 131, 135, 141, -1, 142, 141, 135, -1, 143, 136, 141, -1, 136, 143, 137, -1, 141, 142, 143, -1, 144, 138, 137, -1, 144, 139, 138, -1, 143, 144, 137, -1, 145, 140, 146, -1, 147, 135, 140, -1, 135, 147, 142, -1, 140, 145, 147, -1, 148, 80, 139, -1, 80, 148, 86, -1, 139, 144, 148, -1, 149, 143, 142, -1, 149, 144, 143, -1, 142, 150, 149, -1, 151, 148, 144, -1, 144, 149, 151, -1, 153, 147, 145, -1, 153, 142, 147, -1, 145, 152, 153, -1, 153, 150, 142, -1, 154, 86, 148, -1, 148, 151, 154, -1, 76, 157, 60, -1, 76, 73, 158, 157, -1, 60, 162, 58, -1, 162, 60, 157, -1, 166, 58, 162, -1, 165, 166, 159, -1, 166, 162, 157, 158, 159, -1, 140, 125, 167, -1, 124, 168, 125, -1, 168, 167, 125, -1, 124, 169, 168, -1, 146, 140, 167, 170, -1, 168, 170, 167, -1, 168, 169, 170, -1, 146, 170, 171, -1, 169, 171, 170, -1, 98, 117, 106, -1},
                                                                                                        TexCoord: &x3d.TextureCoordinate{
                                                                                                            Point: &x3d.MFVec2f{[2]float32{0.1611,-0.02056},[2]float32{0.9468,-0.02056},[2]float32{0.9739,0.9344},[2]float32{-0.137,1.094},[2]float32{0.1973,0.6424},[2]float32{0.2231,0.04876},[2]float32{0.5054,0.2466},[2]float32{0.5054,0.5929},[2]float32{0.8135,0.6424},[2]float32{0.6282,0.1972},[2]float32{0.7876,0.04876},[2]float32{0.5054,-0.05018},[2]float32{0.6282,-0.05018},[2]float32{0.5054,0.8403},[2]float32{0.7989,1.038},[2]float32{0.5054,1.038},[2]float32{0.8248,0.7908},[2]float32{0.186,0.7908},[2]float32{0.2118,1.038},[2]float32{0.6427,0.7908},[2]float32{-0.01977,0.5929},[2]float32{-0.03324,0.7908},[2]float32{1.044,0.7908},[2]float32{1.031,0.5929},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0},[2]float32{0.0,0.0}},
                                                                                                        },
                                                                                                        Coord: &x3d.Coordinate{
                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                USE: stringPtr("pointValues"),
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.13, 0.22, -0.1},
                                                                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                                                Scale: &x3d.SFVec3f{2.0, 1.5, 1.5},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Transform{
                                                                                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.4},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                DEF: stringPtr("BCLSnorkelPad"),
                                                                                                            },
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                Material: &x3d.Material{
                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                        USE: stringPtr("BCLColor"),
                                                                                                                    },
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Extrusion{
                                                                                                                CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.013},[2]float32{0.00494,0.01196},[2]float32{0.00923,0.00923},[2]float32{0.01196,0.00494},[2]float32{0.013,0.0},[2]float32{0.01196,-0.00494},[2]float32{0.00923,-0.00923},[2]float32{0.00494,-0.01196},[2]float32{0.0,0.013}},
                                                                                                                Spine: &x3d.MFVec3f{[3]float32{-0.03,0.01,0.0},[3]float32{-0.005,0.04,0.0},[3]float32{0.0,0.06,0.0},[3]float32{-0.01,0.075,0.0}},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.07, 0.08, 0.125},
                                                                                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.8},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Shape{
                                                                                                    Appearance: &x3d.Appearance{
                                                                                                        Material: &x3d.Material{
                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                DEF: stringPtr("BCLSnorkel"),
                                                                                                            },
                                                                                                            DiffuseColor: &x3d.SFColor{0.25, 0.25, 0.25},
                                                                                                            Shininess: floatPtr(0.5),
                                                                                                            Transparency: floatPtr(0.1),
                                                                                                        },
                                                                                                    },
                                                                                                    Geometry: &x3d.Extrusion{
                                                                                                        CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.013},[2]float32{0.00494,0.01196},[2]float32{0.00923,0.00923},[2]float32{0.01196,0.00494},[2]float32{0.013,0.0},[2]float32{0.01196,-0.00494},[2]float32{0.00923,-0.00923},[2]float32{0.00494,-0.01196},[2]float32{0.0,0.013},[2]float32{-0.00494,-0.01196},[2]float32{-0.00923,-0.00923},[2]float32{-0.01196,-0.00494},[2]float32{-0.013,0.0},[2]float32{-0.01196,0.00494},[2]float32{-0.00923,0.00923},[2]float32{-0.00494,0.01196},[2]float32{0.0,0.013}},
                                                                                                        Scale: &x3d.MFVec2f{[2]float32{0.8,0.8},[2]float32{1.0,1.0}},
                                                                                                        Spine: &x3d.MFVec3f{[3]float32{0.03,0.03,-0.05},[3]float32{0.05,0.2,0.0}},
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        &x3d.Group{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("buckle"),
                                                                                                },
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{-0.08, 0.1, 0.029},
                                                                                                        Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.68},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("buckleHolder"),
                                                                                                                },
                                                                                                                Material: &x3d.Material{
                                                                                                                    DiffuseColor: &x3d.SFColor{0.25, 0.25, 0.25},
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Box{
                                                                                                                Size: &x3d.SFVec3f{0.03, 0.03, 0.005},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{0.03, 0.1, 0.027},
                                                                                                        Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.68},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("buckleHolder"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Box{
                                                                                                                Size: &x3d.SFVec3f{0.15, 0.03, 0.001},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{-0.045, 0.1, 0.028},
                                                                                                        Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.68},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("pin"),
                                                                                                                },
                                                                                                                Material: &x3d.Material{
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Box{
                                                                                                                Size: &x3d.SFVec3f{0.02, 0.028, 0.005},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{-0.06, 0.1, 0.029},
                                                                                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("pin"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Cylinder{
                                                                                                                Height: floatPtr(0.02),
                                                                                                                Radius: floatPtr(0.0024),
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{-0.06, 0.109, 0.0217},
                                                                                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("pin"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Cylinder{
                                                                                                                Height: floatPtr(0.02),
                                                                                                                Radius: floatPtr(0.0024),
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{-0.06, 0.091, 0.036},
                                                                                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("pin"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Cylinder{
                                                                                                                Height: floatPtr(0.02),
                                                                                                                Radius: floatPtr(0.0024),
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        &x3d.Group{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("buckleBelt"),
                                                                                                },
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{-0.07, -0.12, 0.038},
                                                                                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -0.68},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("buckleHolder"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Box{
                                                                                                                Size: &x3d.SFVec3f{0.04, 0.1, 0.005},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{0.005, -0.12, 0.053},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("buckleHolder"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Box{
                                                                                                                Size: &x3d.SFVec3f{0.12, 0.11, 0.001},
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                &x3d.Transform{
                                                                                                        Translation: &x3d.SFVec3f{0.075, -0.12, 0.038},
                                                                                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.68},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("buckleHolder"),
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.Box{
                                                                                                                Size: &x3d.SFVec3f{0.04, 0.1, 0.005},
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
                                                                        &x3d.Transform{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("ScubaTank"),
                                                                                },
                                                                                Translation: &x3d.SFVec3f{-0.00405, 1.07, -0.0275},
                                                                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14},
                                                                                Scale: &x3d.SFVec3f{0.8, 0.8, 0.8},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Inline{
                                                                                    Global: boolPtr(true),
                                                                                    Url: x3d.MFString{"ScubaTank.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d", "ScubaTank.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.wrl"},
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_shoulder"),
                                                                        },
                                                                        Name: stringPtr("l_shoulder"),
                                                                        Center: &x3d.SFVec3f{0.167, 1.36, -0.0518},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimSegment{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_upperarm"),
                                                                                },
                                                                                Name: stringPtr("l_upperarm"),
                                                                                &x3d.Transform{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("l_upperarm_adjust"),
                                                                                        },
                                                                                        Translation: &x3d.SFVec3f{0.167, 1.36, -0.0518},
                                                                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 0.119},
                                                                                        Center: &x3d.SFVec3f{0.182, 1.22, -0.047},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Shape{
                                                                                            Appearance: &x3d.Appearance{
                                                                                                Material: &x3d.Material{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        USE: stringPtr("WetShirtColor"),
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            Geometry: &x3d.IndexedFaceSet{
                                                                                                CreaseAngle: floatPtr(1.65),
                                                                                                CoordIndex: []int32{2, 1, 0, -1, 2, 3, 1, -1, 2, 4, 3, -1, 2, 0, 5, -1, 6, 5, 0, -1, 7, 2, 5, -1, 8, 4, 2, -1, 8, 3, 4, -1, 9, 1, 3, -1, 10, 0, 1, -1, 0, 10, 6, -1, 1, 9, 10, -1, 3, 8, 9, -1, 2, 7, 8, -1, 5, 6, 7, -1, 11, 7, 6, -1, 14, 9, 8, -1, 15, 10, 9, -1, 11, 6, 10, -1, 10, 15, 11, -1, 9, 14, 15, -1, 8, 13, 14, -1, 8, 16, 13, -1, 7, 11, 12, -1, 21, 15, 14, -1, 15, 17, 11, -1, 15, 21, 17, -1, 16, 19, 13, -1, 13, 19, 20, -1, 21, 14, 20, -1, 14, 13, 20, -1, 12, 17, 18, -1, 12, 11, 17, -1, 12, 18, 16, -1, 18, 19, 16, -1, 12, 16, 7, -1, 16, 8, 7, -1, 19, 18, 17, -1, 20, 19, 21, -1, 19, 17, 21, -1},
                                                                                                Coord: &x3d.Coordinate{
                                                                                                    Point: &x3d.MFVec3f{[3]float32{0.174,1.37,-0.0625},[3]float32{0.185,1.38,-0.0395},[3]float32{0.156,1.39,-0.0464},[3]float32{0.174,1.37,-0.0158},[3]float32{0.154,1.37,-0.0185},[3]float32{0.157,1.38,-0.0733},[3]float32{0.182,1.33,-0.0728},[3]float32{0.151,1.33,-0.0937},[3]float32{0.15,1.34,-0.000787},[3]float32{0.185,1.33,-0.00025},[3]float32{0.201,1.33,-0.0411},[3]float32{0.189,1.26,-0.0808},[3]float32{0.155,1.26,-0.0867},[3]float32{0.151,1.26,-0.000789},[3]float32{0.19,1.26,-0.00401},[3]float32{0.209,1.26,-0.0427},[3]float32{0.141,1.26,-0.0421},[3]float32{0.203,1.08,-0.0744},[3]float32{0.162,1.05,-0.0561},[3]float32{0.169,1.08,-0.00885},[3]float32{0.208,1.07,-0.00133},[3]float32{0.221,1.08,-0.0352}},
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                        },
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_elbow"),
                                                                                },
                                                                                Name: stringPtr("l_elbow"),
                                                                                Center: &x3d.SFVec3f{0.196, 1.07, -0.0518},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimSegment{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_forearm"),
                                                                                        },
                                                                                        Name: stringPtr("l_forearm"),
                                                                                        &x3d.Transform{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("l_forearm_adjust"),
                                                                                                },
                                                                                                Translation: &x3d.SFVec3f{0.196, 1.07, -0.0518},
                                                                                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.1},
                                                                                                Center: &x3d.SFVec3f{0.198, 0.961, -0.0405},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Shape{
                                                                                                    Appearance: &x3d.Appearance{
                                                                                                        Material: &x3d.Material{
                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                USE: stringPtr("WetShirtColor"),
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                    Geometry: &x3d.IndexedFaceSet{
                                                                                                        CreaseAngle: floatPtr(1.75),
                                                                                                        CoordIndex: []int32{2, 1, 0, -1, 2, 3, 1, -1, 2, 4, 3, -1, 2, 5, 4, -1, 2, 6, 5, -1, 2, 0, 6, -1, 7, 6, 0, -1, 8, 5, 6, -1, 9, 4, 5, -1, 9, 3, 4, -1, 10, 1, 3, -1, 11, 0, 1, -1, 0, 11, 7, -1, 1, 10, 11, -1, 3, 9, 10, -1, 5, 12, 9, -1, 5, 8, 12, -1, 6, 7, 8, -1, 17, 16, 15, -1, 14, 17, 15, -1, 14, 18, 17, -1, 13, 18, 14, -1, 16, 17, 10, -1, 16, 10, 9, -1, 15, 16, 9, -1, 15, 9, 12, -1, 18, 13, 7, -1, 18, 7, 11, -1, 13, 14, 8, -1, 13, 8, 7, -1, 14, 15, 8, -1, 15, 12, 8, -1, 17, 18, 10, -1, 18, 11, 10, -1},
                                                                                                        Coord: &x3d.Coordinate{
                                                                                                            Point: &x3d.MFVec3f{[3]float32{0.177,1.09,-0.0609},[3]float32{0.202,1.1,-0.0566},[3]float32{0.189,1.1,-0.0395},[3]float32{0.213,1.1,-0.025},[3]float32{0.203,1.1,-0.0158},[3]float32{0.182,1.09,-0.00563},[3]float32{0.167,1.09,-0.0325},[3]float32{0.176,1.08,-0.0781},[3]float32{0.16,1.06,-0.0373},[3]float32{0.214,1.07,-0.00402},[3]float32{0.228,1.07,-0.0319},[3]float32{0.208,1.08,-0.0765},[3]float32{0.179,1.07,-0.00294},[3]float32{0.21,0.818,-0.0615},[3]float32{0.201,0.82,-0.0405},[3]float32{0.205,0.819,-0.00832},[3]float32{0.224,0.818,-0.00778},[3]float32{0.237,0.82,-0.0282},[3]float32{0.231,0.819,-0.0609}},
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                },
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("hanim_l_wrist"),
                                                                                        },
                                                                                        Name: stringPtr("l_wrist"),
                                                                                        Center: &x3d.SFVec3f{0.213, 0.811, -0.0338},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimSegment{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("hanim_l_hand"),
                                                                                                },
                                                                                                Name: stringPtr("l_hand"),
                                                                                                &x3d.Transform{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("l_hand_adjust"),
                                                                                                        },
                                                                                                        Translation: &x3d.SFVec3f{0.213, 0.811, -0.0338},
                                                                                                        Rotation: &x3d.SFRotation{-0.06361, -0.9967, 0.04988, 1.333},
                                                                                                        Center: &x3d.SFVec3f{0.213, 0.811, -0.0338},
                                                                                                    Children: []x3d.X3DNode{
                                                                                                        &x3d.Shape{
                                                                                                            Appearance: &x3d.Appearance{
                                                                                                                Material: &x3d.Material{
                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                        DEF: stringPtr("Skin_Color"),
                                                                                                                    },
                                                                                                                    AmbientIntensity: floatPtr(0.25),
                                                                                                                    DiffuseColor: &x3d.SFColor{0.749, 0.601, 0.462},
                                                                                                                },
                                                                                                            },
                                                                                                            Geometry: &x3d.IndexedFaceSet{
                                                                                                                CreaseAngle: floatPtr(1.48),
                                                                                                                CoordIndex: []int32{2, 1, 0, -1, 5, 4, 3, -1, 3, 7, 6, -1, 2, 3, 6, -1, 7, 9, 8, -1, 6, 7, 8, -1, 9, 11, 10, -1, 8, 9, 10, -1, 11, 13, 12, -1, 10, 11, 12, -1, 13, 15, 14, -1, 12, 13, 14, -1, 15, 17, 16, -1, 14, 15, 16, -1, 17, 19, 18, -1, 16, 17, 18, -1, 19, 21, 20, -1, 18, 19, 20, -1, 31, 4, 1, -1, 4, 5, 0, -1, 1, 4, 0, -1, 5, 3, 2, -1, 0, 5, 2, -1, 26, 25, 24, -1, 26, 24, 23, -1, 27, 26, 23, -1, 28, 27, 23, -1, 28, 23, 22, -1, 29, 28, 22, -1, 29, 22, 21, -1, 30, 29, 21, -1, 15, 13, 11, -1, 17, 15, 11, -1, 19, 17, 11, -1, 19, 11, 9, -1, 31, 19, 9, -1, 31, 9, 7, -1, 4, 31, 7, -1, 4, 7, 3, -1, 30, 21, 19, -1, 31, 30, 19, -1, 12, 14, 16, -1, 10, 12, 16, -1, 10, 16, 18, -1, 8, 10, 18, -1, 6, 8, 1, -1, 2, 6, 1, -1, 39, 38, 37, -1, 37, 38, 40, -1, 37, 40, 36, -1, 36, 40, 41, -1, 36, 41, 35, -1, 35, 41, 42, -1, 35, 42, 34, -1, 34, 42, 43, -1, 34, 43, 33, -1, 33, 43, 44, -1, 33, 44, 32, -1, 20, 32, 44, -1, 20, 44, 45, -1, 20, 45, 46, -1, 47, 8, 18, -1, 47, 18, 20, -1, 47, 20, 46, -1, 8, 47, 1, -1, 22, 33, 32, -1, 23, 35, 34, -1, 23, 36, 35, -1, 37, 24, 25, -1, 40, 38, 27, -1, 29, 43, 42, -1, 45, 44, 30, -1, 47, 31, 1, -1, 47, 46, 31, -1, 29, 30, 43, -1, 30, 44, 43, -1, 45, 31, 46, -1, 45, 30, 31, -1, 28, 29, 41, -1, 29, 42, 41, -1, 28, 40, 27, -1, 28, 41, 40, -1, 26, 27, 39, -1, 27, 38, 39, -1, 25, 39, 37, -1, 25, 26, 39, -1, 24, 36, 23, -1, 24, 37, 36, -1, 23, 34, 22, -1, 34, 33, 22, -1, 22, 32, 21, -1, 32, 20, 21, -1},
                                                                                                                Coord: &x3d.Coordinate{
                                                                                                                    Point: &x3d.MFVec3f{[3]float32{0.211,0.828,-0.0434},[3]float32{0.194,0.81,-0.0445},[3]float32{0.237,0.82,-0.0425},[3]float32{0.236,0.82,-0.0237},[3]float32{0.194,0.81,-0.0254},[3]float32{0.21,0.828,-0.0247},[3]float32{0.252,0.801,-0.0424},[3]float32{0.252,0.801,-0.0231},[3]float32{0.269,0.765,-0.0426},[3]float32{0.268,0.765,-0.0225},[3]float32{0.273,0.732,-0.0395},[3]float32{0.272,0.732,-0.0223},[3]float32{0.27,0.704,-0.0342},[3]float32{0.27,0.704,-0.0224},[3]float32{0.262,0.703,-0.0345},[3]float32{0.261,0.703,-0.0227},[3]float32{0.256,0.717,-0.0389},[3]float32{0.256,0.717,-0.023},[3]float32{0.255,0.738,-0.0408},[3]float32{0.255,0.738,-0.023},[3]float32{0.251,0.734,-0.0406},[3]float32{0.251,0.734,-0.0232},[3]float32{0.251,0.692,-0.0232},[3]float32{0.248,0.657,-0.0233},[3]float32{0.24,0.645,-0.0236},[3]float32{0.226,0.637,-0.0241},[3]float32{0.213,0.639,-0.0246},[3]float32{0.197,0.652,-0.0253},[3]float32{0.188,0.669,-0.0256},[3]float32{0.184,0.697,-0.0258},[3]float32{0.183,0.73,-0.0258},[3]float32{0.187,0.77,-0.0257},[3]float32{0.244,0.696,-0.0375},[3]float32{0.244,0.692,-0.0372},[3]float32{0.242,0.661,-0.0345},[3]float32{0.241,0.658,-0.0343},[3]float32{0.241,0.656,-0.0341},[3]float32{0.231,0.646,-0.0336},[3]float32{0.206,0.65,-0.0349},[3]float32{0.218,0.644,-0.034},[3]float32{0.205,0.652,-0.0352},[3]float32{0.198,0.667,-0.0367},[3]float32{0.195,0.691,-0.039},[3]float32{0.194,0.696,-0.0395},[3]float32{0.193,0.725,-0.042},[3]float32{0.193,0.731,-0.0425},[3]float32{0.197,0.765,-0.0449},[3]float32{0.197,0.77,-0.0453}},
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
                                                                        DEF: stringPtr("hanim_r_shoulder"),
                                                                    },
                                                                    Name: stringPtr("r_shoulder"),
                                                                    Center: &x3d.SFVec3f{-0.167, 1.36, -0.0458},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_upperarm"),
                                                                            },
                                                                            Name: stringPtr("r_upperarm"),
                                                                            &x3d.Transform{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("r_upperarm_adjust"),
                                                                                    },
                                                                                    Translation: &x3d.SFVec3f{-0.167, 1.36, -0.0458},
                                                                                    Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 0.0836},
                                                                                    Center: &x3d.SFVec3f{-0.182, 1.22, -0.047},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.Shape{
                                                                                        Appearance: &x3d.Appearance{
                                                                                            Material: &x3d.Material{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    USE: stringPtr("WetShirtColor"),
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        Geometry: &x3d.IndexedFaceSet{
                                                                                            CreaseAngle: floatPtr(1.53),
                                                                                            CoordIndex: []int32{14, 10, 20, -1, 10, 13, 20, -1, 13, 22, 20, -1, 19, 14, 20, -1, 14, 19, 12, -1, 19, 20, 24, -1, 20, 22, 25, -1, 22, 13, 25, -1, 13, 10, 11, -1, 10, 14, 5, -1, 12, 5, 14, -1, 5, 11, 10, -1, 11, 25, 13, -1, 25, 24, 20, -1, 24, 12, 19, -1, 12, 24, 9, -1, 25, 11, 8, -1, 11, 5, 2, -1, 5, 12, 9, -1, 9, 2, 5, -1, 2, 8, 11, -1, 8, 23, 25, -1, 23, 27, 25, -1, 21, 9, 24, -1, 9, 21, 7, -1, 27, 23, 18, -1, 23, 8, 18, -1, 8, 2, 6, -1, 2, 9, 7, -1, 7, 1, 2, -1, 1, 6, 2, -1, 6, 18, 8, -1, 18, 26, 27, -1, 16, 7, 21, -1, 7, 16, 4, -1, 16, 26, 17, -1, 26, 18, 15, -1, 18, 6, 3, -1, 6, 1, 0, -1, 1, 7, 0, -1, 4, 0, 7, -1, 0, 3, 6, -1, 3, 15, 18, -1, 15, 17, 26, -1, 17, 4, 16, -1, 3, 0, 15, -1, 15, 0, 4, -1, 15, 4, 17, -1, 25, 27, 24, -1, 27, 21, 24, -1, 27, 26, 21, -1, 26, 16, 21, -1},
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{-0.221,1.08,-0.0352},[3]float32{-0.214,1.14,-0.0405},[3]float32{-0.209,1.26,-0.0427},[3]float32{-0.208,1.07,-0.00133},[3]float32{-0.203,1.08,-0.0744},[3]float32{-0.201,1.33,-0.0411},[3]float32{-0.198,1.14,-0.0024},[3]float32{-0.198,1.13,-0.076},[3]float32{-0.19,1.26,-0.00401},[3]float32{-0.189,1.26,-0.0808},[3]float32{-0.185,1.38,-0.0395},[3]float32{-0.185,1.33,-0.00025},[3]float32{-0.182,1.33,-0.0728},[3]float32{-0.174,1.37,-0.0158},[3]float32{-0.174,1.37,-0.0625},[3]float32{-0.169,1.08,-0.00885},[3]float32{-0.167,1.13,-0.0744},[3]float32{-0.162,1.05,-0.0561},[3]float32{-0.16,1.13,-0.000793},[3]float32{-0.157,1.38,-0.0733},[3]float32{-0.156,1.39,-0.0464},[3]float32{-0.155,1.26,-0.0867},[3]float32{-0.154,1.37,-0.0185},[3]float32{-0.151,1.26,-0.000789},[3]float32{-0.151,1.33,-0.0937},[3]float32{-0.15,1.34,-0.000787},[3]float32{-0.15,1.13,-0.0411},[3]float32{-0.141,1.26,-0.0421}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_elbow"),
                                                                            },
                                                                            Name: stringPtr("r_elbow"),
                                                                            Center: &x3d.SFVec3f{-0.192, 1.07, -0.0498},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_forearm"),
                                                                                    },
                                                                                    Name: stringPtr("r_forearm"),
                                                                                    &x3d.Transform{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("r_forearm_adjust"),
                                                                                            },
                                                                                            Translation: &x3d.SFVec3f{-0.192, 1.07, -0.0498},
                                                                                            Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.1254},
                                                                                            Center: &x3d.SFVec3f{-0.198, 0.961, -0.0397},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.Shape{
                                                                                                Appearance: &x3d.Appearance{
                                                                                                    Material: &x3d.Material{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            USE: stringPtr("WetShirtColor"),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                                Geometry: &x3d.IndexedFaceSet{
                                                                                                    CreaseAngle: floatPtr(1.73),
                                                                                                    CoordIndex: []int32{20, 13, 15, -1, 13, 8, 15, -1, 8, 12, 15, -1, 12, 18, 15, -1, 18, 22, 15, -1, 22, 20, 15, -1, 20, 22, 21, -1, 22, 18, 24, -1, 18, 12, 7, -1, 12, 8, 7, -1, 8, 13, 3, -1, 13, 20, 10, -1, 21, 10, 20, -1, 10, 3, 13, -1, 3, 7, 8, -1, 7, 19, 18, -1, 19, 24, 18, -1, 24, 21, 22, -1, 21, 24, 23, -1, 24, 19, 16, -1, 19, 7, 6, -1, 7, 3, 1, -1, 3, 10, 5, -1, 10, 21, 17, -1, 17, 5, 10, -1, 5, 1, 3, -1, 1, 6, 7, -1, 6, 16, 19, -1, 16, 23, 24, -1, 23, 17, 21, -1, 1, 5, 2, -1, 5, 17, 9, -1, 9, 2, 5, -1, 1, 4, 6, -1, 4, 16, 6, -1, 23, 9, 17, -1, 9, 23, 14, -1, 23, 16, 11, -1, 4, 11, 16, -1, 11, 14, 23, -1, 11, 4, 0, -1, 11, 0, 14, -1, 0, 2, 14, -1, 14, 2, 9, -1, 2, 0, 1, -1, 0, 4, 1, -1},
                                                                                                    Coord: &x3d.Coordinate{
                                                                                                        Point: &x3d.MFVec3f{[3]float32{-0.237,0.82,-0.0282},[3]float32{-0.235,1.02,-0.033},[3]float32{-0.231,0.819,-0.0609},[3]float32{-0.228,1.07,-0.0319},[3]float32{-0.224,0.818,-0.00778},[3]float32{-0.221,1.01,-0.0744},[3]float32{-0.218,1.01,-0.00133},[3]float32{-0.214,1.07,-0.00402},[3]float32{-0.213,1.1,-0.025},[3]float32{-0.21,0.818,-0.0615},[3]float32{-0.208,1.08,-0.0765},[3]float32{-0.205,0.819,-0.00832},[3]float32{-0.203,1.1,-0.0158},[3]float32{-0.202,1.1,-0.0566},[3]float32{-0.201,0.82,-0.0405},[3]float32{-0.189,1.1,-0.0395},[3]float32{-0.183,1.01,-0.00831},[3]float32{-0.183,1.01,-0.0781},[3]float32{-0.182,1.09,-0.00563},[3]float32{-0.179,1.07,-0.00294},[3]float32{-0.177,1.09,-0.0609},[3]float32{-0.176,1.08,-0.0781},[3]float32{-0.167,1.09,-0.0325},[3]float32{-0.166,1.0,-0.0405},[3]float32{-0.16,1.06,-0.0373}},
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                    },
                                                                            },
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_r_wrist"),
                                                                                    },
                                                                                    Name: stringPtr("r_wrist"),
                                                                                    Center: &x3d.SFVec3f{-0.217, 0.811, -0.0338},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimSegment{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("hanim_r_hand"),
                                                                                            },
                                                                                            Name: stringPtr("r_hand"),
                                                                                            &x3d.Transform{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("r_hand_adjust"),
                                                                                                    },
                                                                                                    Rotation: &x3d.SFRotation{-0.09024, 0.994, -0.0624, 1.216},
                                                                                                    Center: &x3d.SFVec3f{-0.217, 0.811, -0.0338},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("Skin_Color"),
                                                                                                                },
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.IndexedFaceSet{
                                                                                                            CreaseAngle: floatPtr(1.57),
                                                                                                            CoordIndex: []int32{10, 9, 0, -1, 11, 30, 31, -1, 1, 12, 11, -1, 1, 11, 0, -1, 2, 13, 12, -1, 2, 12, 1, -1, 3, 14, 13, -1, 3, 13, 2, -1, 4, 15, 14, -1, 4, 14, 3, -1, 5, 16, 15, -1, 5, 15, 4, -1, 6, 17, 16, -1, 6, 16, 5, -1, 7, 18, 17, -1, 7, 17, 6, -1, 8, 19, 18, -1, 8, 18, 7, -1, 10, 31, 30, -1, 10, 30, 9, -1, 0, 11, 31, -1, 0, 31, 10, -1, 22, 23, 24, -1, 21, 22, 24, -1, 21, 24, 25, -1, 21, 25, 26, -1, 20, 21, 26, -1, 20, 26, 27, -1, 19, 20, 27, -1, 19, 27, 28, -1, 14, 15, 16, -1, 14, 16, 17, -1, 14, 17, 18, -1, 13, 14, 18, -1, 13, 18, 29, -1, 12, 13, 29, -1, 12, 29, 30, -1, 11, 12, 30, -1, 18, 19, 28, -1, 18, 28, 29, -1, 6, 5, 4, -1, 6, 4, 3, -1, 7, 6, 3, -1, 7, 3, 2, -1, 9, 2, 1, -1, 9, 1, 0, -1, 32, 38, 33, -1, 33, 38, 39, -1, 33, 39, 34, -1, 34, 39, 40, -1, 34, 40, 35, -1, 35, 40, 41, -1, 35, 41, 36, -1, 36, 41, 42, -1, 36, 42, 37, -1, 37, 42, 43, -1, 37, 43, 44, -1, 44, 43, 8, -1, 44, 8, 45, -1, 45, 8, 46, -1, 46, 8, 7, -1, 46, 7, 2, -1, 46, 2, 47, -1, 9, 47, 2, -1, 25, 34, 35, -1, 25, 33, 34, -1, 25, 24, 33, -1, 24, 32, 33, -1, 32, 24, 23, -1, 40, 39, 21, -1, 41, 40, 21, -1, 43, 19, 8, -1, 43, 20, 19, -1, 43, 42, 20, -1, 21, 20, 41, -1, 20, 42, 41, -1, 38, 22, 39, -1, 22, 21, 39, -1, 32, 23, 38, -1, 23, 22, 38, -1, 26, 25, 35, -1, 27, 36, 37, -1, 27, 37, 28, -1, 37, 44, 28, -1, 26, 35, 27, -1, 35, 36, 27, -1, 28, 44, 45, -1, 29, 46, 47, -1, 29, 9, 30, -1, 29, 47, 9, -1, 28, 45, 29, -1, 45, 46, 29, -1},
                                                                                                            Coord: &x3d.Coordinate{
                                                                                                                Point: &x3d.MFVec3f{[3]float32{-0.237,0.82,-0.0425},[3]float32{-0.252,0.801,-0.0424},[3]float32{-0.269,0.765,-0.0426},[3]float32{-0.273,0.732,-0.0395},[3]float32{-0.27,0.704,-0.0342},[3]float32{-0.262,0.703,-0.0345},[3]float32{-0.256,0.717,-0.0389},[3]float32{-0.255,0.738,-0.0408},[3]float32{-0.251,0.734,-0.0406},[3]float32{-0.194,0.81,-0.0445},[3]float32{-0.211,0.828,-0.0434},[3]float32{-0.236,0.82,-0.0237},[3]float32{-0.252,0.801,-0.0231},[3]float32{-0.268,0.765,-0.0225},[3]float32{-0.272,0.732,-0.0223},[3]float32{-0.27,0.704,-0.0224},[3]float32{-0.261,0.703,-0.0227},[3]float32{-0.256,0.717,-0.023},[3]float32{-0.255,0.738,-0.023},[3]float32{-0.251,0.734,-0.0232},[3]float32{-0.251,0.692,-0.0232},[3]float32{-0.248,0.657,-0.0233},[3]float32{-0.24,0.645,-0.0236},[3]float32{-0.226,0.637,-0.0241},[3]float32{-0.213,0.639,-0.0246},[3]float32{-0.197,0.652,-0.0253},[3]float32{-0.188,0.669,-0.0256},[3]float32{-0.184,0.697,-0.0258},[3]float32{-0.183,0.73,-0.0258},[3]float32{-0.187,0.77,-0.0257},[3]float32{-0.194,0.81,-0.0254},[3]float32{-0.21,0.828,-0.0247},[3]float32{-0.221,0.641,-0.0336},[3]float32{-0.21,0.65,-0.0348},[3]float32{-0.206,0.652,-0.0352},[3]float32{-0.198,0.667,-0.0368},[3]float32{-0.193,0.692,-0.0392},[3]float32{-0.192,0.696,-0.0396},[3]float32{-0.231,0.646,-0.0336},[3]float32{-0.238,0.656,-0.0342},[3]float32{-0.24,0.658,-0.0344},[3]float32{-0.24,0.662,-0.0347},[3]float32{-0.243,0.692,-0.0372},[3]float32{-0.243,0.696,-0.0376},[3]float32{-0.192,0.725,-0.0421},[3]float32{-0.192,0.73,-0.0426},[3]float32{-0.195,0.766,-0.0451},[3]float32{-0.196,0.77,-0.0454}},
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
                                                                        DEF: stringPtr("hanim_vc4"),
                                                                    },
                                                                    Name: stringPtr("vc4"),
                                                                    Center: &x3d.SFVec3f{0.0, 1.43, -0.0458},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_c4"),
                                                                            },
                                                                            Name: stringPtr("c4"),
                                                                            &x3d.Shape{
                                                                                Appearance: &x3d.Appearance{
                                                                                    Material: &x3d.Material{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            USE: stringPtr("WetShirtColor"),
                                                                                        },
                                                                                    },
                                                                                },
                                                                                Geometry: &x3d.IndexedFaceSet{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("neck"),
                                                                                    },
                                                                                    CreaseAngle: floatPtr(1.91),
                                                                                    CoordIndex: []int32{6, 5, 2, -1, 6, 2, 3, -1, 5, 4, 1, -1, 5, 1, 2, -1, 4, 7, 0, -1, 4, 0, 1, -1, 11, 10, 9, -1, 11, 9, 8, -1, 10, 13, 12, -1, 10, 12, 9, -1, 13, 15, 14, -1, 13, 14, 12, -1, 6, 3, 11, -1, 6, 11, 8, -1, 7, 14, 15, -1, 7, 15, 0, -1, 2, 10, 11, -1, 2, 11, 3, -1, 2, 1, 13, -1, 2, 13, 10, -1, 1, 0, 15, -1, 1, 15, 13, -1, 9, 5, 6, -1, 9, 6, 8, -1, 9, 12, 4, -1, 9, 4, 5, -1, 12, 14, 7, -1, 12, 7, 4, -1},
                                                                                    Coord: &x3d.Coordinate{
                                                                                        Point: &x3d.MFVec3f{[3]float32{0.0105,1.54,-0.1},[3]float32{0.0357,1.54,-0.0685},[3]float32{0.0382,1.55,-0.0474},[3]float32{0.0105,1.55,-0.0204},[3]float32{0.0373,1.4,-0.0593},[3]float32{0.0577,1.4,-0.0266},[3]float32{0.0158,1.4,0.00512},[3]float32{0.0132,1.41,-0.0824},[3]float32{-0.0158,1.4,0.00512},[3]float32{-0.0577,1.4,-0.0266},[3]float32{-0.0382,1.55,-0.0474},[3]float32{-0.0105,1.55,-0.0204},[3]float32{-0.0373,1.4,-0.0593},[3]float32{-0.0357,1.54,-0.0685},[3]float32{-0.0132,1.41,-0.0824},[3]float32{-0.0105,1.54,-0.1}},
                                                                                    },
                                                                                },
                                                                            },
                                                                    },
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_skullbase"),
                                                                            },
                                                                            Name: stringPtr("skullbase"),
                                                                            Center: &x3d.SFVec3f{0.0, 1.54, -0.0409},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSegment{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("hanim_skull"),
                                                                                    },
                                                                                    Name: stringPtr("skull"),
                                                                                    &x3d.Shape{
                                                                                        Appearance: &x3d.Appearance{
                                                                                            Material: &x3d.Material{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    USE: stringPtr("Skin_Color"),
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                        Geometry: &x3d.IndexedFaceSet{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("headIFS"),
                                                                                            },
                                                                                            ColorIndex: []int32{1, 1, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 1, 1, 1, -1, 1, 1, 1, -1, 0, 0, 0, -1, 1, 1, 1, -1, 1, 1, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 2, 2, 2, -1, 2, 2, 2, -1, 2, 2, 2, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 2, 2, 2, -1, 2, 2, 2, -1, 2, 2, 2, -1, 0, 0, 0, -1, 0, 0, 0, -1, 2, 2, 2, -1, 2, 2, 2, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 1, 1, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 1, 1, 1, -1, 1, 1, 1, -1, 1, 1, 1, -1, 1, 1, 1, -1, 1, 1, 1, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 2, 2, 2, -1, 2, 2, 2, -1, 2, 2, 2, -1, 2, 2, 2, -1, 2, 2, 2, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 2, 2, 2, -1, 2, 2, 2, -1, 2, 2, 2, -1, 0, 0, 0, -1, 0, 0, 0, -1, 2, 2, 2, -1, 2, 2, 2, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 4, 4, 4, -1, 0, 0, 0, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 0, 0, 0, -1, 0, 0, 0, -1, 4, 4, 4, -1, 0, 0, 0, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 0, 0, 0, -1, 0, 0, 0, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1, 4, 4, 4, -1},
                                                                                            CoordIndex: []int32{48, 87, 58, -1, 91, 92, 59, -1, 59, 92, 88, -1, 88, 93, 231, -1, 232, 86, 233, -1, 86, 89, 233, -1, 89, 57, 56, -1, 49, 55, 57, -1, 102, 86, 96, -1, 86, 90, 96, -1, 97, 95, 96, -1, 97, 127, 95, -1, 41, 96, 154, -1, 41, 102, 96, -1, 99, 102, 41, -1, 153, 99, 41, -1, 102, 40, 86, -1, 234, 235, 236, -1, 87, 237, 58, -1, 56, 57, 91, -1, 87, 234, 237, -1, 234, 236, 237, -1, 89, 49, 57, -1, 49, 50, 55, -1, 40, 89, 86, -1, 89, 56, 233, -1, 232, 90, 86, -1, 90, 97, 96, -1, 92, 93, 88, -1, 93, 94, 231, -1, 232, 231, 94, -1, 97, 90, 232, -1, 96, 42, 154, -1, 95, 42, 96, -1, 53, 46, 45, -1, 53, 45, 51, -1, 53, 51, 92, -1, 92, 51, 52, -1, 92, 52, 93, -1, 94, 93, 52, -1, 94, 52, 4, -1, 97, 232, 94, -1, 54, 47, 46, -1, 54, 46, 53, -1, 55, 47, 54, -1, 50, 47, 55, -1, 34, 33, 50, -1, 34, 50, 49, -1, 35, 34, 49, -1, 35, 49, 89, -1, 35, 89, 40, -1, 99, 39, 102, -1, 39, 35, 40, -1, 31, 34, 35, -1, 31, 35, 32, -1, 14, 32, 35, -1, 14, 35, 39, -1, 14, 39, 98, -1, 137, 38, 153, -1, 38, 99, 153, -1, 38, 98, 99, -1, 37, 238, 239, -1, 11, 238, 37, -1, 101, 37, 36, -1, 241, 141, 242, -1, 10, 12, 242, -1, 12, 13, 14, -1, 12, 14, 243, -1, 13, 15, 32, -1, 13, 32, 14, -1, 15, 16, 31, -1, 15, 31, 32, -1, 2, 70, 10, -1, 2, 10, 141, -1, 70, 69, 12, -1, 70, 12, 10, -1, 69, 68, 13, -1, 69, 13, 12, -1, 68, 67, 15, -1, 68, 15, 13, -1, 67, 66, 16, -1, 67, 16, 15, -1, 98, 39, 99, -1, 101, 11, 37, -1, 100, 101, 36, -1, 36, 244, 240, -1, 141, 10, 242, -1, 12, 243, 242, -1, 36, 37, 239, -1, 36, 239, 244, -1, 57, 55, 91, -1, 55, 54, 91, -1, 39, 40, 102, -1, 123, 103, 120, -1, 114, 122, 104, -1, 115, 122, 114, -1, 208, 105, 115, -1, 210, 119, 211, -1, 210, 106, 119, -1, 116, 107, 106, -1, 107, 108, 117, -1, 126, 119, 109, -1, 126, 110, 119, -1, 126, 95, 125, -1, 95, 127, 125, -1, 154, 126, 111, -1, 126, 109, 111, -1, 111, 109, 112, -1, 111, 112, 153, -1, 119, 113, 109, -1, 207, 213, 214, -1, 123, 209, 103, -1, 213, 212, 214, -1, 209, 214, 103, -1, 209, 207, 214, -1, 107, 117, 106, -1, 108, 118, 117, -1, 119, 106, 113, -1, 210, 116, 106, -1, 119, 110, 211, -1, 126, 125, 110, -1, 115, 105, 122, -1, 208, 124, 105, -1, 124, 208, 211, -1, 211, 110, 125, -1, 154, 42, 126, -1, 126, 42, 95, -1, 168, 128, 121, -1, 170, 168, 121, -1, 122, 170, 121, -1, 172, 170, 122, -1, 105, 172, 122, -1, 172, 105, 124, -1, 4, 172, 124, -1, 124, 211, 125, -1, 128, 130, 129, -1, 121, 128, 129, -1, 129, 130, 108, -1, 108, 130, 118, -1, 118, 131, 132, -1, 117, 118, 132, -1, 117, 132, 133, -1, 106, 117, 133, -1, 113, 106, 133, -1, 109, 152, 112, -1, 113, 133, 152, -1, 133, 132, 134, -1, 135, 133, 134, -1, 133, 135, 136, -1, 152, 133, 136, -1, 148, 152, 136, -1, 153, 138, 137, -1, 153, 112, 138, -1, 112, 148, 138, -1, 219, 217, 139, -1, 36, 240, 149, -1, 139, 217, 140, -1, 149, 139, 151, -1, 36, 149, 100, -1, 220, 141, 241, -1, 220, 150, 142, -1, 136, 143, 150, -1, 221, 136, 150, -1, 135, 144, 143, -1, 136, 135, 143, -1, 134, 158, 144, -1, 135, 134, 144, -1, 142, 161, 2, -1, 141, 142, 2, -1, 150, 145, 161, -1, 142, 150, 161, -1, 143, 146, 145, -1, 150, 143, 145, -1, 144, 147, 146, -1, 143, 144, 146, -1, 158, 160, 147, -1, 144, 158, 147, -1, 112, 152, 148, -1, 139, 140, 151, -1, 149, 151, 100, -1, 240, 218, 149, -1, 220, 142, 141, -1, 220, 221, 150, -1, 219, 139, 149, -1, 218, 219, 149, -1, 104, 108, 107, -1, 104, 129, 108, -1, 109, 113, 152, -1, 153, 41, 111, -1, 129, 104, 122, -1, 129, 122, 121, -1, 91, 54, 92, -1, 54, 53, 92, -1, 97, 94, 127, -1, 127, 94, 4, -1, 125, 127, 124, -1, 127, 4, 124, -1, 154, 111, 41, -1, 31, 30, 33, -1, 31, 33, 34, -1, 16, 17, 30, -1, 16, 30, 31, -1, 66, 65, 17, -1, 66, 17, 16, -1, 2, 73, 156, -1, 2, 156, 70, -1, 156, 72, 66, -1, 156, 66, 67, -1, 156, 67, 68, -1, 156, 68, 69, -1, 156, 69, 70, -1, 72, 71, 65, -1, 72, 65, 66, -1, 17, 18, 30, -1, 45, 44, 51, -1, 51, 44, 43, -1, 51, 43, 52, -1, 52, 43, 1, -1, 52, 1, 4, -1, 245, 246, 27, -1, 245, 27, 3, -1, 246, 247, 28, -1, 246, 28, 27, -1, 248, 22, 29, -1, 248, 29, 28, -1, 248, 28, 247, -1, 27, 26, 0, -1, 27, 0, 3, -1, 27, 28, 25, -1, 27, 25, 26, -1, 29, 24, 25, -1, 29, 25, 28, -1, 22, 23, 24, -1, 22, 24, 29, -1, 249, 250, 22, -1, 249, 22, 248, -1, 250, 60, 23, -1, 250, 23, 22, -1, 17, 254, 18, -1, 65, 254, 17, -1, 71, 64, 65, -1, 63, 74, 75, -1, 63, 75, 61, -1, 64, 255, 254, -1, 75, 62, 61, -1, 62, 76, 60, -1, 76, 77, 23, -1, 76, 23, 60, -1, 77, 24, 23, -1, 77, 78, 25, -1, 77, 25, 24, -1, 78, 84, 26, -1, 78, 26, 25, -1, 84, 192, 0, -1, 84, 0, 26, -1, 84, 83, 193, -1, 84, 193, 192, -1, 79, 83, 84, -1, 79, 84, 78, -1, 76, 79, 78, -1, 76, 78, 77, -1, 80, 83, 79, -1, 80, 204, 83, -1, 75, 81, 80, -1, 81, 85, 204, -1, 81, 204, 80, -1, 74, 81, 75, -1, 74, 82, 81, -1, 82, 5, 85, -1, 82, 85, 81, -1, 155, 8, 71, -1, 155, 71, 72, -1, 8, 6, 64, -1, 8, 64, 71, -1, 6, 7, 255, -1, 6, 255, 64, -1, 7, 9, 256, -1, 7, 256, 255, -1, 9, 257, 256, -1, 73, 155, 156, -1, 155, 72, 156, -1, 204, 193, 83, -1, 64, 254, 65, -1, 131, 157, 134, -1, 132, 131, 134, -1, 157, 159, 158, -1, 134, 157, 158, -1, 159, 206, 160, -1, 158, 159, 160, -1, 203, 73, 2, -1, 161, 203, 2, -1, 160, 162, 203, -1, 147, 160, 203, -1, 146, 147, 203, -1, 145, 146, 203, -1, 161, 145, 203, -1, 206, 163, 162, -1, 160, 206, 162, -1, 157, 164, 159, -1, 170, 169, 168, -1, 171, 169, 170, -1, 172, 171, 170, -1, 1, 171, 172, -1, 4, 1, 172, -1, 173, 227, 245, -1, 3, 173, 245, -1, 174, 226, 227, -1, 173, 174, 227, -1, 176, 175, 215, -1, 174, 176, 215, -1, 226, 174, 215, -1, 0, 177, 173, -1, 3, 0, 173, -1, 178, 174, 173, -1, 177, 178, 173, -1, 178, 179, 176, -1, 174, 178, 176, -1, 179, 180, 175, -1, 176, 179, 175, -1, 175, 225, 216, -1, 215, 175, 216, -1, 180, 181, 225, -1, 175, 180, 225, -1, 164, 228, 159, -1, 159, 228, 206, -1, 206, 185, 163, -1, 187, 186, 184, -1, 183, 187, 184, -1, 228, 229, 185, -1, 183, 182, 187, -1, 181, 188, 182, -1, 180, 189, 188, -1, 181, 180, 188, -1, 180, 179, 189, -1, 178, 190, 189, -1, 179, 178, 189, -1, 177, 191, 190, -1, 178, 177, 190, -1, 0, 192, 191, -1, 177, 0, 191, -1, 193, 205, 191, -1, 192, 193, 191, -1, 191, 205, 194, -1, 190, 191, 194, -1, 190, 194, 188, -1, 189, 190, 188, -1, 194, 205, 195, -1, 205, 204, 195, -1, 195, 196, 187, -1, 204, 85, 196, -1, 195, 204, 196, -1, 187, 196, 186, -1, 196, 197, 186, -1, 85, 5, 197, -1, 196, 85, 197, -1, 163, 198, 202, -1, 162, 163, 202, -1, 185, 199, 198, -1, 163, 185, 198, -1, 229, 200, 199, -1, 185, 229, 199, -1, 230, 201, 200, -1, 229, 230, 200, -1, 230, 257, 201, -1, 203, 202, 73, -1, 203, 162, 202, -1, 205, 193, 204, -1, 206, 228, 185, -1, 198, 8, 155, -1, 198, 155, 202, -1, 155, 73, 202, -1, 199, 6, 8, -1, 199, 8, 198, -1, 7, 6, 199, -1, 7, 199, 200, -1, 201, 9, 7, -1, 201, 7, 200, -1, 201, 257, 9, -1, 188, 194, 195, -1, 188, 195, 182, -1, 195, 187, 182, -1, 80, 79, 76, -1, 80, 62, 75, -1, 80, 76, 62, -1, 47, 50, 33, -1, 131, 118, 130, -1, 20, 21, 47, -1, 21, 46, 47, -1, 20, 33, 19, -1, 20, 47, 33, -1, 33, 30, 19, -1, 30, 18, 19, -1, 62, 60, 251, -1, 60, 250, 251, -1, 252, 61, 251, -1, 61, 62, 251, -1, 252, 63, 61, -1, 252, 253, 63, -1, 166, 130, 167, -1, 130, 128, 167, -1, 166, 131, 130, -1, 166, 165, 131, -1, 165, 157, 131, -1, 165, 164, 157, -1, 224, 181, 182, -1, 224, 225, 181, -1, 224, 183, 223, -1, 224, 182, 183, -1, 183, 184, 223, -1, 184, 222, 223, -1},
                                                                                            Color: &x3d.Color{
                                                                                                Color: &x3d.MFColor{[3]float32{0.749,0.601,0.462},[3]float32{0.1735,0.2602,0.749},[3]float32{0.6364,0.133,0.1526},[3]float32{0.4545,0.2759,0.1902},[3]float32{0.0,0.0,0.502}},
                                                                                            },
                                                                                            Coord: &x3d.Coordinate{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("Face"),
                                                                                                },
                                                                                                Point: &x3d.MFVec3f{[3]float32{0.0,1.708,-0.0435},[3]float32{0.0,1.655,0.04322},[3]float32{0.0,1.486,0.02335},[3]float32{0.0,1.694,0.007789},[3]float32{0.0,1.631,0.051},[3]float32{0.0,1.524,-0.102},[3]float32{0.04,1.51,-0.07278},[3]float32{0.04029,1.514,-0.08254},[3]float32{0.03528,1.502,-0.05013},[3]float32{0.03479,1.517,-0.09269},[3]float32{0.0116,1.494,0.03382},[3]float32{0.01946,1.52,0.03421},[3]float32{0.02204,1.494,0.0272},[3]float32{0.02734,1.498,0.02215},[3]float32{0.02788,1.528,0.03084},[3]float32{0.0338,1.503,0.0124},[3]float32{0.04008,1.509,0.002821},[3]float32{0.05122,1.518,-0.02784},[3]float32{0.05867,1.544,-0.03316},[3]float32{0.06433,1.563,-0.03678},[3]float32{0.06732,1.583,-0.03683},[3]float32{0.06769,1.617,-0.03436},[3]float32{0.06641,1.637,-0.03046},[3]float32{0.06818,1.637,-0.04285},[3]float32{0.06308,1.666,-0.04036},[3]float32{0.05305,1.685,-0.03987},[3]float32{0.03136,1.7,-0.0413},[3]float32{0.02919,1.688,0.0091},[3]float32{0.05272,1.674,-0.001657},[3]float32{0.06061,1.66,-0.0101},[3]float32{0.05254,1.541,-0.01363},[3]float32{0.04099,1.527,0.008832},[3]float32{0.03528,1.524,0.02097},[3]float32{0.05792,1.557,-0.004307},[3]float32{0.04413,1.539,0.0149},[3]float32{0.03746,1.539,0.02656},[3]float32{0.003407,1.524,0.04155},[3]float32{0.01481,1.526,0.03912},[3]float32{0.005112,1.532,0.04358},[3]float32{0.02438,1.542,0.03578},[3]float32{0.02636,1.55,0.03808},[3]float32{0.006135,1.55,0.0545},[3]float32{0.0,1.559,0.05502},[3]float32{0.02958,1.651,0.03965},[3]float32{0.04847,1.643,0.02895},[3]float32{0.05856,1.63,0.01803},[3]float32{0.06182,1.614,0.008199},[3]float32{0.06194,1.6,0.002668},[3]float32{0.01489,1.583,0.04109},[3]float32{0.05282,1.569,0.02821},[3]float32{0.05767,1.58,0.0184},[3]float32{0.04643,1.625,0.03705},[3]float32{0.0264,1.628,0.04807},[3]float32{0.0556,1.609,0.02579},[3]float32{0.05467,1.599,0.02153},[3]float32{0.05316,1.589,0.0207},[3]float32{0.03603,1.58,0.03536},[3]float32{0.04597,1.586,0.02904},[3]float32{0.02106,1.592,0.03748},[3]float32{0.03428,1.595,0.03294},[3]float32{0.06808,1.617,-0.06112},[3]float32{0.06714,1.564,-0.07003},[3]float32{0.06993,1.594,-0.08238},[3]float32{0.05324,1.536,-0.05922},[3]float32{0.04904,1.521,-0.05132},[3]float32{0.04758,1.514,-0.03107},[3]float32{0.03539,1.503,-0.00093},[3]float32{0.02999,1.498,0.006194},[3]float32{0.02308,1.492,0.01628},[3]float32{0.01772,1.488,0.02135},[3]float32{0.01378,1.488,0.02484},[3]float32{0.04349,1.512,-0.03987},[3]float32{0.02308,1.499,-0.02088},[3]float32{0.0,1.487,-0.018},[3]float32{0.04795,1.531,-0.08973},[3]float32{0.05739,1.555,-0.0982},[3]float32{0.06815,1.622,-0.107},[3]float32{0.06872,1.655,-0.08466},[3]float32{0.05233,1.678,-0.09642},[3]float32{0.05334,1.631,-0.1239},[3]float32{0.05011,1.581,-0.1193},[3]float32{0.04359,1.551,-0.1067},[3]float32{0.03839,1.528,-0.09652},[3]float32{0.03399,1.636,-0.1304},[3]float32{0.03224,1.685,-0.1024},[3]float32{0.0,1.557,-0.1126},[3]float32{0.01864,1.566,0.04105},[3]float32{0.0249,1.58,0.0387},[3]float32{0.02735,1.596,0.03552},[3]float32{0.04317,1.564,0.03643},[3]float32{0.01246,1.577,0.04276},[3]float32{0.04354,1.59,0.02822},[3]float32{0.04557,1.601,0.03652},[3]float32{0.0291,1.603,0.04274},[3]float32{0.01856,1.6,0.04349},[3]float32{0.0,1.579,0.04893},[3]float32{0.01064,1.558,0.04476},[3]float32{0.005501,1.578,0.04574},[3]float32{0.01405,1.531,0.04152},[3]float32{0.01037,1.544,0.04266},[3]float32{0.0,1.515,0.03836},[3]float32{0.00797,1.515,0.03774},[3]float32{0.01824,1.55,0.04063},[3]float32{-0.0249,1.58,0.0387},[3]float32{-0.04354,1.59,0.02822},[3]float32{-0.0291,1.603,0.04274},[3]float32{-0.04317,1.564,0.03643},[3]float32{-0.04597,1.586,0.02904},[3]float32{-0.05316,1.589,0.0207},[3]float32{-0.01824,1.55,0.04063},[3]float32{-0.01246,1.577,0.04276},[3]float32{-0.006135,1.55,0.0545},[3]float32{-0.01037,1.544,0.04266},[3]float32{-0.02636,1.55,0.03808},[3]float32{-0.03428,1.595,0.03294},[3]float32{-0.02735,1.596,0.03552},[3]float32{-0.03603,1.58,0.03536},[3]float32{-0.05282,1.569,0.02821},[3]float32{-0.05767,1.58,0.0184},[3]float32{-0.01864,1.566,0.04105},[3]float32{-0.01489,1.583,0.04109},[3]float32{-0.0556,1.609,0.02579},[3]float32{-0.04557,1.601,0.03652},[3]float32{-0.02106,1.592,0.03748},[3]float32{-0.01856,1.6,0.04349},[3]float32{-0.005501,1.578,0.04574},[3]float32{-0.01064,1.558,0.04476},[3]float32{0.0,1.592,0.04694},[3]float32{-0.06182,1.614,0.008199},[3]float32{-0.05467,1.599,0.02153},[3]float32{-0.06194,1.6,0.002668},[3]float32{-0.05792,1.557,-0.004307},[3]float32{-0.04413,1.539,0.0149},[3]float32{-0.03746,1.539,0.02656},[3]float32{-0.04099,1.527,0.008832},[3]float32{-0.03528,1.524,0.02097},[3]float32{-0.02788,1.528,0.03084},[3]float32{0.0,1.53,0.04236},[3]float32{-0.005112,1.532,0.04358},[3]float32{-0.01481,1.526,0.03912},[3]float32{-0.01946,1.52,0.03421},[3]float32{0.0,1.495,0.0348},[3]float32{-0.0116,1.494,0.03382},[3]float32{-0.02734,1.498,0.02215},[3]float32{-0.0338,1.503,0.0124},[3]float32{-0.01772,1.488,0.02135},[3]float32{-0.02308,1.492,0.01628},[3]float32{-0.02999,1.498,0.006194},[3]float32{-0.01405,1.531,0.04152},[3]float32{-0.003407,1.524,0.04155},[3]float32{-0.02204,1.494,0.0272},[3]float32{-0.00797,1.515,0.03774},[3]float32{-0.02438,1.542,0.03578},[3]float32{0.0,1.543,0.04432},[3]float32{0.0,1.555,0.05692},[3]float32{0.02295,1.492,-0.02694},[3]float32{0.007322,1.489,-0.01677},[3]float32{-0.05254,1.541,-0.01363},[3]float32{-0.04008,1.509,0.002821},[3]float32{-0.05122,1.518,-0.02784},[3]float32{-0.03539,1.503,-0.00093},[3]float32{-0.01378,1.488,0.02484},[3]float32{-0.02308,1.499,-0.02088},[3]float32{-0.04349,1.512,-0.03987},[3]float32{-0.05867,1.544,-0.03316},[3]float32{-0.06433,1.563,-0.03678},[3]float32{-0.06732,1.583,-0.03683},[3]float32{-0.06769,1.617,-0.03436},[3]float32{-0.05856,1.63,0.01803},[3]float32{-0.04847,1.643,0.02895},[3]float32{-0.04643,1.625,0.03705},[3]float32{-0.02958,1.651,0.03965},[3]float32{-0.0264,1.628,0.04807},[3]float32{-0.02919,1.688,0.0091},[3]float32{-0.05272,1.674,-0.001657},[3]float32{-0.06641,1.637,-0.03046},[3]float32{-0.06061,1.66,-0.0101},[3]float32{-0.03136,1.7,-0.0413},[3]float32{-0.05305,1.685,-0.03987},[3]float32{-0.06308,1.666,-0.04036},[3]float32{-0.06818,1.637,-0.04285},[3]float32{-0.06808,1.617,-0.06112},[3]float32{-0.06993,1.594,-0.08238},[3]float32{-0.06714,1.564,-0.07003},[3]float32{-0.05324,1.536,-0.05922},[3]float32{-0.04904,1.521,-0.05132},[3]float32{-0.04795,1.531,-0.08973},[3]float32{-0.05739,1.555,-0.0982},[3]float32{-0.06815,1.622,-0.107},[3]float32{-0.06872,1.655,-0.08466},[3]float32{-0.05233,1.678,-0.09642},[3]float32{-0.03224,1.685,-0.1024},[3]float32{0.0,1.69,-0.1047},[3]float32{0.0,1.64,-0.1342},[3]float32{-0.05334,1.631,-0.1239},[3]float32{-0.05011,1.581,-0.1193},[3]float32{-0.04359,1.551,-0.1067},[3]float32{-0.03839,1.528,-0.09652},[3]float32{-0.03528,1.502,-0.05013},[3]float32{-0.04,1.51,-0.07278},[3]float32{-0.04029,1.514,-0.08254},[3]float32{-0.03479,1.517,-0.09269},[3]float32{-0.02295,1.492,-0.02694},[3]float32{-0.007322,1.489,-0.01677},[3]float32{0.0,1.588,-0.1329},[3]float32{-0.03399,1.636,-0.1304},[3]float32{-0.04758,1.514,-0.03107},[3]float32{-0.03428,1.595,0.03294},[3]float32{-0.02106,1.592,0.03748},[3]float32{-0.02735,1.596,0.03552},[3]float32{-0.0249,1.58,0.0387},[3]float32{-0.01489,1.583,0.04109},[3]float32{-0.04597,1.586,0.02904},[3]float32{-0.04354,1.59,0.02822},[3]float32{-0.03603,1.58,0.03536},[3]float32{-0.05856,1.63,0.01803},[3]float32{-0.06182,1.614,0.008199},[3]float32{-0.02788,1.528,0.03084},[3]float32{-0.005112,1.532,0.04358},[3]float32{-0.01405,1.531,0.04152},[3]float32{-0.00797,1.515,0.03774},[3]float32{-0.01946,1.52,0.03421},[3]float32{-0.05867,1.544,-0.03316},[3]float32{-0.06433,1.563,-0.03678},[3]float32{-0.06732,1.583,-0.03683},[3]float32{-0.06769,1.617,-0.03436},[3]float32{-0.04847,1.643,0.02895},[3]float32{-0.02958,1.651,0.03965},[3]float32{-0.05324,1.536,-0.05922},[3]float32{-0.04795,1.531,-0.08973},[3]float32{-0.03839,1.528,-0.09652},[3]float32{0.02106,1.592,0.03748},[3]float32{0.01489,1.583,0.04109},[3]float32{0.0249,1.58,0.0387},[3]float32{0.03603,1.58,0.03536},[3]float32{0.04354,1.59,0.02822},[3]float32{0.03428,1.595,0.03294},[3]float32{0.02735,1.596,0.03552},[3]float32{0.02788,1.528,0.03084},[3]float32{0.01405,1.531,0.04152},[3]float32{0.0,1.53,0.04236},[3]float32{0.0,1.515,0.03836},[3]float32{0.00797,1.515,0.03774},[3]float32{0.01946,1.52,0.03421},[3]float32{0.005112,1.532,0.04358},[3]float32{0.0,1.655,0.04322},[3]float32{0.02958,1.651,0.03965},[3]float32{0.04847,1.643,0.02895},[3]float32{0.05856,1.63,0.01803},[3]float32{0.06182,1.614,0.008199},[3]float32{0.06769,1.617,-0.03436},[3]float32{0.06732,1.583,-0.03683},[3]float32{0.06433,1.563,-0.03678},[3]float32{0.05867,1.544,-0.03316},[3]float32{0.05324,1.536,-0.05922},[3]float32{0.04795,1.531,-0.08973},[3]float32{0.03839,1.528,-0.09652},[3]float32{0.0,1.524,-0.102}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                    &x3d.Transform{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("maskAndSnorkel"),
                                                                                            },
                                                                                            Translation: &x3d.SFVec3f{0.0, 1.54, -0.0409},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.Inline{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("MaskAndSnorkel"),
                                                                                                },
                                                                                                Global: boolPtr(true),
                                                                                                Url: x3d.MFString{"MaskAndSnorkel.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d", "MaskAndSnorkel.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.wrl"},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                    &x3d.Transform{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("mouthpiece"),
                                                                                            },
                                                                                            Translation: &x3d.SFVec3f{0.0, 1.54, -0.0409},
                                                                                            Rotation: &x3d.SFRotation{0.86, -0.58, -0.58, 2.09},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.Transform{
                                                                                                    Translation: &x3d.SFVec3f{0.0, 0.0018, 0.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("gray"),
                                                                                                                },
                                                                                                                AmbientIntensity: floatPtr(0.3),
                                                                                                                DiffuseColor: &x3d.SFColor{0.9, 0.9, 0.89},
                                                                                                                SpecularColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                                                                                                Shininess: floatPtr(0.1),
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.Cylinder{
                                                                                                            Height: floatPtr(0.006),
                                                                                                            Radius: floatPtr(0.015),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("black"),
                                                                                                                },
                                                                                                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.Cone{
                                                                                                            Height: floatPtr(0.01),
                                                                                                            BottomRadius: floatPtr(0.03),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                    Translation: &x3d.SFVec3f{0.0, -0.015, 0.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("black"),
                                                                                                                },
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.Cylinder{
                                                                                                            Height: floatPtr(0.02),
                                                                                                            Radius: floatPtr(0.03),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                    Translation: &x3d.SFVec3f{0.0, -0.025, 0.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("black"),
                                                                                                                },
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.Cylinder{
                                                                                                            Height: floatPtr(0.02),
                                                                                                            Radius: floatPtr(0.015),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                    Translation: &x3d.SFVec3f{0.0, -0.04, 0.0},
                                                                                                    Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 0.9},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("mouthpiecePlastic"),
                                                                                                        },
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                                                EmissiveColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.Box{
                                                                                                            Size: &x3d.SFVec3f{0.002, 0.03, 0.018},
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                    Translation: &x3d.SFVec3f{0.0, -0.04, 0.0},
                                                                                                    Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -0.9},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            USE: stringPtr("mouthpiecePlastic"),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                    Translation: &x3d.SFVec3f{0.0, -0.015, 0.03},
                                                                                                    Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Shape{
                                                                                                        Appearance: &x3d.Appearance{
                                                                                                            Material: &x3d.Material{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    USE: stringPtr("gray"),
                                                                                                                },
                                                                                                            },
                                                                                                        },
                                                                                                        Geometry: &x3d.Cylinder{
                                                                                                            Height: floatPtr(0.02),
                                                                                                            Radius: floatPtr(0.0075),
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                            &x3d.Transform{
                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                        DEF: stringPtr("airTube"),
                                                                                                    },
                                                                                                    Translation: &x3d.SFVec3f{0.0, -0.02, 0.055},
                                                                                                    Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                                                                                                    Scale: &x3d.SFVec3f{0.7, 0.7, 0.7},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.Transform{
                                                                                                            Rotation: &x3d.SFRotation{-0.21, 0.21, -0.95, 4.67},
                                                                                                        Children: []x3d.X3DNode{
                                                                                                            &x3d.Shape{
                                                                                                                Appearance: &x3d.Appearance{
                                                                                                                    Material: &x3d.Material{
                                                                                                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                                                                                                    },
                                                                                                                },
                                                                                                                Geometry: &x3d.Extrusion{
                                                                                                                    CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.013},[2]float32{0.00494,0.01196},[2]float32{0.00923,0.00923},[2]float32{0.01196,0.00494},[2]float32{0.013,0.0},[2]float32{0.01196,-0.00494},[2]float32{0.00923,-0.00923},[2]float32{0.00494,-0.01196},[2]float32{0.0,0.013},[2]float32{-0.00494,-0.01196},[2]float32{-0.00923,-0.00923},[2]float32{-0.01196,-0.00494},[2]float32{-0.013,0.0},[2]float32{-0.01196,0.00494},[2]float32{-0.00923,0.00923},[2]float32{-0.00494,0.01196},[2]float32{0.0,0.013}},
                                                                                                                    Spine: &x3d.MFVec3f{[3]float32{0.005,-0.03,0.0},[3]float32{-0.01,0.02,0.0},[3]float32{-0.03,0.08,0.0},[3]float32{-0.05,0.14,0.0},[3]float32{-0.08,0.19,0.0},[3]float32{-0.1,0.22,0.0},[3]float32{-0.12,0.25,0.0},[3]float32{-0.15,0.27,0.0},[3]float32{-0.18,0.28,0.0},[3]float32{-0.21,0.29,0.0},[3]float32{-0.26,0.28,0.0},[3]float32{-0.28,0.26,0.0},[3]float32{-0.305,0.23,0.0},[3]float32{-0.32,0.2,0.0},[3]float32{-0.34,0.16,0.0},[3]float32{-0.35,0.12,0.0},[3]float32{-0.37,0.04,0.0},[3]float32{-0.385,0.0,0.0},[3]float32{-0.39,-0.07,0.0}},
                                                                                                                },
                                                                                                            },
                                                                                                        },
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                    &x3d.Transform{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("Bubbles"),
                                                                                            },
                                                                                            Translation: &x3d.SFVec3f{0.0, 1.54, -0.0409},
                                                                                            Scale: &x3d.SFVec3f{0.35, 0.35, 0.35},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.Inline{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("bubbles"),
                                                                                                },
                                                                                                Global: boolPtr(true),
                                                                                                Url: x3d.MFString{"Bubbles.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d", "Bubbles.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.wrl"},
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
                                                            USE: stringPtr("hanim_vl1"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_vc4"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_skullbase"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_ankle"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_ankle"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_elbow"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_elbow"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_hip"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_hip"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_knee"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_knee"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_shoulder"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_shoulder"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_wrist"),
                                                        },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_wrist"),
                                                        },
                                                    },
                                                    Segments: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("hanim_pelvis"),
                                                            },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l1"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_c4"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_skull"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_calf"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_calf"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_forearm"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_forearm"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_hand"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_hand"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_hindfoot"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_hindfoot"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_thigh"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_thigh"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_l_upperarm"),
                                                        },
                                                    },
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("hanim_r_upperarm"),
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
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("finWarpScript"),
                    },
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("set_rotationLeft"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("set_rotationRight"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("finWarpLeft"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("finWarpRight"),
                    },
//ecmascript:
//function set_rotationLeft(rotationValue, timeStamp)
//{
//	if (rotationValue[0] <= 0)
//	{
//		finWarpLeft = false;
//	}
//	else
//	{
//		finWarpLeft = true;
//	}
////	print ('Left  rotationValue[0] ' + rotationValue[0] + ', finWarpLeft=' + finWarpLeft);
//}
//
//function set_rotationRight(rotationValue, timeStamp)
//{
//	if (rotationValue[0] <= 0)
//	{
//		finWarpRight = false;
//	}
//	else
//	{
//		finWarpRight = true;
//	}
////	print ('Right rotationValue[0] ' + rotationValue[0] + ', finWarpRight=' + finWarpRight);
//}
                    },
                },
                &x3d.ProximitySensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("FinTriggerProximitySensor"),
                    },
                    Size: &x3d.SFVec3f{15.0, 15.0, 15.0},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("FinClock"),
                    },
                    CycleInterval: doublePtr(7.0),
                    Loop: boolPtr(true),
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Script{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("FinScript"),
                            },
                            Field: []x3d.X3DNode{
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("keyValueRight"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("outputOnly"),
                                Type: stringPtr("MFVec3f"),
                                Name: stringPtr("keyValueLeft"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOnly"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("set_fraction"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOnly"),
                                Type: stringPtr("SFBool"),
                                Name: stringPtr("finL"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOnly"),
                                Type: stringPtr("SFBool"),
                                Name: stringPtr("finR"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFInt32"),
                                Name: stringPtr("finWarpL"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFInt32"),
                                Name: stringPtr("finWarpR"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFBool"),
                                Name: stringPtr("traceEnabled"),
                            },
//ecmascript:
//function finL(value, timeStamp)
//{
//	if (value == 0)
//	{
//		finWarpL = 0;
//	}
//	else
//	{
//		finWarpL = 1;
//	}
//	//print ('finWarpL' + finWarpL);
//}
//
//function finR(value, timeStamp)
//{
//	if (value == 0)
//	{
//		finWarpR = 0;
//	}
//	else
//	{
//		finWarpR = 1;
//	}
//	//print ('finWarpR' + finWarpR);
//}
//function finMove(fraction, timeStamp)
// {
//	if (finWarpL == 1)
//	{
//		// level 3 (warp outside) Left
//		kVL7 = new SFVec3f(1.25, 0, 25);
//		kVL8 = new SFVec3f(2.5, 0, 30);
// 		kVL9 = new SFVec3f(3.25, 0, 34);
//	}
//	else
//	{
//		// level -2 (warp inside) Left
//		kVL7 = new SFVec3f(-1.25, 0, 25);
//		kVL8 = new SFVec3f(-2.5, 0, 30);
// 		kVL9 = new SFVec3f(-3.25, 0, 34);
//	}
//
//	if (finWarpR == 0)
//	{
//		// level  1 (warp outside ) Right
//		kVR7 = new SFVec3f(1.25, 0, 25);
//		kVR8 = new SFVec3f(2.5, 0, 30);
// 		kVR9 = new SFVec3f(3.25, 0, 34);
//
//	}
//	else
//	{
//		// level  -2 ( warp inside) Right
//		kVR7 = new SFVec3f(-1.25, 0, 25);
//		kVR8 = new SFVec3f(-2.5, 0, 30);
// 		kVR9 = new SFVec3f(-3.25, 0, 34);
//	}
//
//	// Left Fin (fixed spine)
//	kVL1 = new SFVec3f(0, 0, 1);
//	kVL2 = new SFVec3f(0, 0, 5);
//	kVL3 = new SFVec3f(0, 0, 8);
//	kVL4 = new SFVec3f(0, 0, 12);
//	kVL5 = new SFVec3f(0, 0, 15);
//	kVL6 = new SFVec3f(0, 0, 18);
//	keyValueLeft = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);
//
//	// Right Fin (fixed spine)
//	kVR1 = new SFVec3f(0, 0, 1);
//	kVR2 = new SFVec3f(0, 0, 5);
//	kVR3 = new SFVec3f(0, 0, 8);
//	kVR4 = new SFVec3f(0, 0, 12);
//	kVR5 = new SFVec3f(0, 0, 15);
//	kVR6 = new SFVec3f(0, 0, 18);
//	keyValueRight = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);
//
//	//tracePrint ('keyValueLeft =' + keyValueLeft);
//	//tracePrint ('keyValueRight=' + keyValueRight);
//}
//
//function set_fraction (value, timeStamp)
//{
//	finMove(value);
//	//tracePrint('time fraction =' + value);
//}
//
//function tracePrint (outputString)
//{
//	if (traceEnabled) Browser.println ('[Fin Move]' + outputString);
//}
                            },
                        },
                    },
                },
                &x3d.NavigationInfo{
                    AvatarSize: x3d.MFFloat{0.15, 1.53, 0.75},
                    Speed: floatPtr(0.5),
                },
                &x3d.WorldInfo{
                    Title: stringPtr("Nancy - an HAnim compliant avatar by 3Name3D"),
                    Info: x3d.MFString{"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Animations"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Dive_Animation"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("r_ankle_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8509, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8509, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8509, 1.0, 0.0, 0.0, 0.86001},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("r_knee_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.5, 0.6667, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.8573, 1.0, 0.0, 0.0, 0.5351, 1.0, 0.0, 0.0, 0.1756, 1.0, 0.0, 0.0, 0.1194, 1.0, 0.0, 0.0, 0.3153, 1.0, 0.0, 0.0, 0.09354, 1.0, 0.0, 0.0, 0.08558, 1.0, 0.0, 0.0, 0.8573},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("r_hip_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.2917, 0.5, 0.7917, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{-0.5831, 0.03511, 0.8116, 0.1481, -0.995, 0.02296, 0.09674, 0.4683, -1.0, 0.00192, 0.007964, 0.4732, -0.998, -0.0158, -0.06102, 0.5079, -0.9131, -0.06243, -0.403, 0.3361, 1.0, 0.0, 0.0, 0.2571, 0.9891, -0.02805, 0.1444, 0.3879, -0.5831, 0.03511, 0.8116, 0.1481},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("l_ankle_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("l_knee_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.2083, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.3226, 1.0, 0.0, 0.0, 0.1556, 1.0, 0.0, 0.0, 0.08678, 1.0, 0.0, 0.0, 0.8751, 1.0, 0.0, 0.0, 1.131, 1.0, 0.0, 0.0, 0.09961, 1.0, 0.0, 0.0, 0.3942, 1.0, 0.0, 0.0, 0.3226},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("l_hip_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.25, 0.375, 0.6667, 0.7917, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{-0.873, 0.06094, 0.484, 0.2865, 0.9963, -0.01057, 0.08481, 0.2488, 0.9965, 0.01591, -0.08222, 0.3836, -1.0, 0.0, 0.0, 0.5518, -0.9964, 0.02231, 0.0817, 0.5351, -0.9809, 0.04912, 0.1881, 0.5204, -0.873, 0.06094, 0.484, 0.2865},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("lower_body_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, -1.0, 0.1056, 0.0, 0.0, 1.0, 0.09018, 0.0, 0.0, -1.0, 0.1056},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("r_wrist_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -0.0585279, 0.983903, -0.168849, 1.85956, -0.0585279, 0.983903, -0.168849, 1.85956, -0.00222418, 0.99801, -0.0630095, 1.46072, 0.0, 1.0, 0.0, 0.497349, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("r_elbow_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.04151, -1.0, 0.0, 0.0, 0.04151, -1.0, 0.0, 0.0, 0.5855, -1.0, 0.0, 0.0, 0.5852, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("r_shoulder_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.45, 0.64, 0.76, 0.88, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.9992, 0.02042, 0.03558, 7.2, 0.9989, -0.04623, 0.005159, 4.079, -0.8687, -0.2525, -0.4261, 1.501, -0.941, -0.2893, -0.1754, 0.4788, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("l_wrist_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.32, 0.64, 0.88, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.067, 0.98, -0.128, 4.15, 0.067, 0.98, -0.128, 4.15, 0.067, 0.98, -0.128, 4.15, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("l_elbow_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.1229, -1.0, 0.0, 0.0, 0.1229, -1.0, 0.0, 0.0, 0.5976, -1.0, 0.0, 0.0, 0.3917, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("l_shoulder_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.25, 0.375, 0.6667, 0.7917, 0.9167, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.1, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.2, 0.86, 0.25, 0.42, 0.5, 0.86, 0.25, 0.42, 0.8, 0.86, 0.25, 0.42, 0.4, 0.86, 0.25, 0.42, 0.2},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("head_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.28, 0.3, 0.32, 0.4, 0.45, 0.6, 0.65, 0.7, 0.75, 0.85, 0.9, 0.95, 1.0},
                                    KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 0.999, -1.0, 0.0, 0.0, 0.99, -1.0, 0.0, 0.0, 0.99, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 1.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("neck_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("upper_body_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.2083, 0.375, 0.75, 0.8333, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0826, -0.01972, -0.5974, 0.8017, 0.08231, 0.009296, -0.9648, 0.2627, 0.1734, -0.01238, 0.9549, -0.2968, 0.08732, -0.008125, 0.9691, -0.2463, 0.158, 0.0, 1.0, 0.0, 0.0826},
                                },
                                &x3d.OrientationInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("whole_body_RotationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 1.0},
                                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("whole_body_TranslationInterpolator_BasicDive"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.04167, 0.125, 0.1667, 0.2083, 0.25, 0.2917, 0.375, 0.4583, 0.5, 0.5417, 0.5833, 0.625, 0.7083, 0.75, 0.7917, 0.875, 0.9167, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,-0.00928,0.0},[3]float32{0.0,-0.003858,0.0},[3]float32{0.0,-0.008847,0.0},[3]float32{0.0,-0.01486,0.0},[3]float32{0.0,-0.02641,0.0},[3]float32{0.0,-0.03934,0.0},[3]float32{0.0,-0.0502,0.0},[3]float32{0.0,-0.07469,0.0},[3]float32{0.0,-0.02732,0.0},[3]float32{0.0,-0.01608,0.0},[3]float32{0.0,-0.01129,0.0},[3]float32{0.0,-0.005819,0.0},[3]float32{0.0,-0.002004,0.0},[3]float32{0.0,-0.002579,0.0},[3]float32{0.0,-0.0143,0.0},[3]float32{0.0,-0.03799,0.0},[3]float32{0.0,-0.05648,0.0},[3]float32{0.0,-0.045,0.0},[3]float32{0.0,-0.00928,0.0}},
                                },
                                &x3d.TimeSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Dive_Time"),
                                    },
                                    CycleInterval: doublePtr(7.0),
                                    Loop: boolPtr(true),
                                    StartTime: doublePtr(-1.0),
                                },
                                &x3d.ProximitySensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("TriggerProximitySensor"),
                                    },
                                    Size: &x3d.SFVec3f{50.0, 50.0, 50.0},
                                },
                            },
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("finWarpScript"),
                    FromField: stringPtr("finWarpLeft"),
                    ToNode: stringPtr("FinScript"),
                    ToField: stringPtr("finL"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("finWarpScript"),
                    FromField: stringPtr("finWarpRight"),
                    ToNode: stringPtr("FinScript"),
                    ToField: stringPtr("finR"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FinTriggerProximitySensor"),
                    FromField: stringPtr("isActive"),
                    ToNode: stringPtr("FinClock"),
                    ToField: stringPtr("set_enabled"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FinClock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("FinScript"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FinScript"),
                    FromField: stringPtr("keyValueRight"),
                    ToNode: stringPtr("FinExtrusionRight"),
                    ToField: stringPtr("set_spine"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FinScript"),
                    FromField: stringPtr("keyValueLeft"),
                    ToNode: stringPtr("FinExtrusionLeft"),
                    ToField: stringPtr("set_spine"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TriggerProximitySensor"),
                    FromField: stringPtr("enterTime"),
                    ToNode: stringPtr("Dive_Time"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_ankle_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_knee_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_hip_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_ankle_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_knee_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_hip_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("lower_body_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("head_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("neck_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("upper_body_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("whole_body_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("whole_body_TranslationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_ankle_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_knee_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_hip_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_ankle_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_knee_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_hip_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("finWarpScript"),
                    ToField: stringPtr("set_rotationLeft"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_hip_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("finWarpScript"),
                    ToField: stringPtr("set_rotationRight"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_hip_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("lower_body_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_sacroiliac"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("head_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("neck_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_vc4"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("upper_body_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_vl1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("whole_body_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("whole_body_TranslationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_wrist_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_elbow_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_shoulder_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_wrist_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_elbow_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Dive_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_shoulder_RotationInterpolator_BasicDive"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_wrist_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_elbow_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_shoulder_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_wrist_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_elbow_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_shoulder_RotationInterpolator_BasicDive"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
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
	filename := "../data/NancyDiving.new.go.x3d"
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