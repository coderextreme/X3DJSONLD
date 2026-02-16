
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
                    Level: int32Ptr(3),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("Tongue.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Facial Action Coding System (FACS) example for Action Unit (AU) 27, Mouth Stretch Morpher, Tongue Derivated."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Yujin Jung"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Chul Hee Jung"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Myeong Won Lee"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("25 April 2022"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("27 October 2024"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joe D. Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://en.wikipedia.org/wiki/Facial_Action_Coding_System"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://web.cs.wpi.edu/~matt/courses/cs563/talks/face_anim/ekman.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("Bryn Farnsworth, FACS Visual Guidebook https://imotions.com/blog/learning/research-fundamentals/facial-action-coding-system"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Suwon VRLAB X3D Converter"),
            },
            &x3d.Meta{
                Name: stringPtr("MovingImage"),
                Content: stringPtr("originals/SuwonHAnimFacialMotionConverter.mp4"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/Tongue.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("HelloJin"),
                    },
                    Description: stringPtr("Hello Jin! 안녕하세요 진!"),
                    Position: &x3d.SFVec3f{0.0, 20.0, 60.0},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("JinMouthStretch_Clock"),
                    },
                    CycleInterval: doublePtr(0.99),
                    Loop: boolPtr(true),
                },
                &x3d.EXPORT{
                    LocalDEF: stringPtr("JinMouthStretch_Clock"),
                    AS: stringPtr("JinMouthStretch_Clock"),
                },
                &x3d.ScalarInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("AnimationAdapter_JinMouthStretch"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFFloat{0.0, 0.5, 1.0, 0.5, 0.0},
                },
                &x3d.HAnimHumanoid{
                    Name: stringPtr("humanoid"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_humanoid"),
                    },
                    Version: stringPtr("2.0"),
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            Name: stringPtr("humanoid_root"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("hanim_root"),
                            },
                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimSegment{
                                    Name: stringPtr("sacrum"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_sacrum"),
                                    },
                                    &x3d.WorldInfo{
                                        Title: stringPtr("Tongue.x3d"),
                                    },
                                    &x3d.Background{
                                        SkyColor: &x3d.MFColor{[3]float32{0.8,0.9,1.0}},
                                    },
                                    &x3d.NavigationInfo{
                                        Type: x3d.MFString{"EXAMINE"},
                                    },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("skullbase"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_skullbase"),
                                    },
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("tongue"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_Tongue"),
                                            },
                                            &x3d.Transform{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Tongue"),
                                                    },
                                                    Translation: &x3d.SFVec3f{0.0, 8.886, 11.1},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("BaseAppearance"),
                                                            },
                                                            Material: &x3d.Material{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("BaseMaterial"),
                                                                },
                                                                AmbientIntensity: floatPtr(1.0),
                                                                DiffuseColor: &x3d.SFColor{0.588, 0.588, 0.588},
                                                                Shininess: floatPtr(0.145),
                                                            },
                                                            Texture: &x3d.ImageTexture{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("JinImageAtlas"),
                                                                },
                                                                Url: x3d.MFString{"JinImageAtlas.jpg", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/JinImageAtlas.jpg"},
                                                            },
                                                        },
                                                        Geometry: &x3d.IndexedFaceSet{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Tongue-FACES"),
                                                            },
                                                            CoordIndex: []int32{0, 59, 32, -1, 32, 62, 0, -1, 8, 75, 32, -1, 32, 59, 8, -1, 20, 95, 32, -1, 32, 75, 20, -1, 17, 62, 32, -1, 32, 95, 17, -1, 4, 89, 33, -1, 33, 74, 4, -1, 18, 96, 33, -1, 33, 89, 18, -1, 29, 92, 33, -1, 33, 96, 29, -1, 11, 74, 33, -1, 33, 92, 11, -1, 12, 79, 34, -1, 34, 82, 12, -1, 22, 97, 34, -1, 34, 79, 22, -1, 31, 94, 34, -1, 34, 97, 31, -1, 15, 82, 34, -1, 34, 94, 15, -1, 1, 72, 35, -1, 35, 67, 1, -1, 9, 77, 35, -1, 35, 72, 9, -1, 10, 64, 35, -1, 35, 77, 10, -1, 5, 67, 35, -1, 35, 64, 5, -1, 2, 71, 36, -1, 36, 70, 2, -1, 8, 78, 36, -1, 36, 71, 8, -1, 11, 66, 36, -1, 36, 78, 11, -1, 6, 70, 36, -1, 36, 66, 6, -1, 8, 71, 37, -1, 37, 75, 8, -1, 2, 60, 37, -1, 37, 71, 2, -1, 24, 98, 37, -1, 37, 60, 24, -1, 20, 75, 37, -1, 37, 98, 20, -1, 10, 73, 38, -1, 38, 76, 10, -1, 7, 65, 38, -1, 38, 73, 7, -1, 27, 99, 38, -1, 38, 65, 27, -1, 21, 76, 38, -1, 38, 99, 21, -1, 9, 61, 39, -1, 39, 77, 9, -1, 3, 69, 39, -1, 39, 61, 3, -1, 7, 73, 39, -1, 39, 69, 7, -1, 10, 77, 39, -1, 39, 73, 10, -1, 8, 59, 40, -1, 40, 78, 8, -1, 0, 68, 40, -1, 40, 59, 0, -1, 4, 74, 40, -1, 40, 68, 4, -1, 11, 78, 40, -1, 40, 74, 11, -1, 0, 62, 41, -1, 41, 83, 0, -1, 17, 100, 41, -1, 41, 62, 17, -1, 22, 79, 41, -1, 41, 100, 22, -1, 12, 83, 41, -1, 41, 79, 12, -1, 1, 67, 42, -1, 42, 84, 1, -1, 5, 85, 42, -1, 42, 67, 5, -1, 14, 80, 42, -1, 42, 85, 14, -1, 13, 84, 42, -1, 42, 80, 13, -1, 5, 63, 43, -1, 43, 85, 5, -1, 26, 101, 43, -1, 43, 63, 26, -1, 23, 81, 43, -1, 43, 101, 23, -1, 14, 85, 43, -1, 43, 81, 14, -1, 4, 68, 44, -1, 44, 86, 4, -1, 0, 83, 44, -1, 44, 68, 0, -1, 12, 82, 44, -1, 44, 83, 12, -1, 15, 86, 44, -1, 44, 82, 15, -1, 28, 91, 45, -1, 45, 110, 28, -1, 9, 72, 45, -1, 45, 91, 9, -1, 1, 88, 45, -1, 45, 72, 1, -1, 25, 110, 45, -1, 45, 88, 25, -1, 26, 63, 46, -1, 46, 111, 26, -1, 5, 64, 46, -1, 46, 63, 5, -1, 10, 76, 46, -1, 46, 64, 10, -1, 21, 111, 46, -1, 46, 76, 21, -1, 30, 93, 47, -1, 47, 112, 30, -1, 13, 80, 47, -1, 47, 93, 13, -1, 14, 81, 47, -1, 47, 80, 14, -1, 23, 112, 47, -1, 47, 81, 23, -1, 16, 87, 48, -1, 48, 113, 16, -1, 3, 61, 48, -1, 48, 87, 3, -1, 9, 91, 48, -1, 48, 61, 9, -1, 28, 113, 48, -1, 48, 91, 28, -1, 19, 90, 49, -1, 49, 114, 19, -1, 6, 66, 49, -1, 49, 90, 6, -1, 11, 92, 49, -1, 49, 66, 11, -1, 29, 114, 49, -1, 49, 92, 29, -1, 25, 88, 50, -1, 50, 115, 25, -1, 1, 84, 50, -1, 50, 88, 1, -1, 13, 93, 50, -1, 50, 84, 13, -1, 30, 115, 50, -1, 50, 93, 30, -1, 18, 89, 51, -1, 51, 116, 18, -1, 4, 86, 51, -1, 51, 89, 4, -1, 15, 94, 51, -1, 51, 86, 15, -1, 31, 116, 51, -1, 51, 94, 31, -1, 20, 106, 52, -1, 52, 95, 20, -1, 28, 110, 52, -1, 52, 106, 28, -1, 25, 103, 52, -1, 52, 110, 25, -1, 17, 95, 52, -1, 52, 103, 17, -1, 18, 104, 53, -1, 53, 96, 18, -1, 26, 111, 53, -1, 53, 104, 26, -1, 21, 107, 53, -1, 53, 111, 21, -1, 29, 96, 53, -1, 53, 107, 29, -1, 22, 108, 54, -1, 54, 97, 22, -1, 30, 112, 54, -1, 54, 108, 30, -1, 23, 109, 54, -1, 54, 112, 23, -1, 31, 97, 54, -1, 54, 109, 31, -1, 24, 102, 55, -1, 55, 98, 24, -1, 16, 113, 55, -1, 55, 102, 16, -1, 28, 106, 55, -1, 55, 113, 28, -1, 20, 98, 55, -1, 55, 106, 20, -1, 27, 105, 56, -1, 56, 99, 27, -1, 19, 114, 56, -1, 56, 105, 19, -1, 29, 107, 56, -1, 56, 114, 29, -1, 21, 99, 56, -1, 56, 107, 21, -1, 17, 103, 57, -1, 57, 100, 17, -1, 25, 115, 57, -1, 57, 103, 25, -1, 30, 108, 57, -1, 57, 115, 30, -1, 22, 100, 57, -1, 57, 108, 22, -1, 26, 104, 58, -1, 58, 101, 26, -1, 18, 116, 58, -1, 58, 104, 18, -1, 31, 109, 58, -1, 58, 116, 31, -1, 23, 101, 58, -1, 58, 109, 23, -1},
                                                            CreaseAngle: floatPtr(3.14159),
                                                            Solid: boolPtr(false),
                                                            TexCoordIndex: []int32{0, 1, 2, -1, 2, 3, 0, -1, 4, 5, 2, -1, 2, 1, 4, -1, 6, 7, 2, -1, 2, 5, 6, -1, 8, 3, 2, -1, 2, 7, 8, -1, 9, 10, 11, -1, 11, 12, 9, -1, 13, 14, 11, -1, 11, 10, 13, -1, 15, 16, 11, -1, 11, 14, 15, -1, 17, 12, 11, -1, 11, 16, 17, -1, 18, 19, 20, -1, 20, 21, 18, -1, 22, 23, 20, -1, 20, 19, 22, -1, 24, 25, 20, -1, 20, 23, 24, -1, 26, 21, 20, -1, 20, 25, 26, -1, 27, 28, 29, -1, 29, 30, 27, -1, 31, 32, 29, -1, 29, 28, 31, -1, 33, 34, 29, -1, 29, 32, 33, -1, 35, 30, 29, -1, 29, 34, 35, -1, 36, 37, 38, -1, 38, 39, 36, -1, 4, 40, 38, -1, 38, 37, 4, -1, 17, 41, 38, -1, 38, 40, 17, -1, 42, 39, 38, -1, 38, 41, 42, -1, 4, 37, 43, -1, 43, 5, 4, -1, 36, 44, 43, -1, 43, 37, 36, -1, 45, 46, 43, -1, 43, 44, 45, -1, 6, 5, 43, -1, 43, 46, 6, -1, 33, 47, 48, -1, 48, 49, 33, -1, 50, 51, 48, -1, 48, 47, 50, -1, 52, 53, 48, -1, 48, 51, 52, -1, 54, 49, 48, -1, 48, 53, 54, -1, 31, 55, 56, -1, 56, 32, 31, -1, 57, 58, 56, -1, 56, 55, 57, -1, 50, 47, 56, -1, 56, 58, 50, -1, 33, 32, 56, -1, 56, 47, 33, -1, 4, 1, 59, -1, 59, 40, 4, -1, 0, 60, 59, -1, 59, 1, 0, -1, 9, 12, 59, -1, 59, 60, 9, -1, 17, 40, 59, -1, 59, 12, 17, -1, 0, 3, 61, -1, 61, 62, 0, -1, 8, 63, 61, -1, 61, 3, 8, -1, 22, 19, 61, -1, 61, 63, 22, -1, 18, 62, 61, -1, 61, 19, 18, -1, 27, 30, 64, -1, 64, 65, 27, -1, 35, 66, 64, -1, 64, 30, 35, -1, 67, 68, 64, -1, 64, 66, 67, -1, 69, 65, 64, -1, 64, 68, 69, -1, 35, 70, 71, -1, 71, 66, 35, -1, 72, 73, 71, -1, 71, 70, 72, -1, 74, 75, 71, -1, 71, 73, 74, -1, 67, 66, 71, -1, 71, 75, 67, -1, 9, 60, 76, -1, 76, 77, 9, -1, 0, 62, 76, -1, 76, 60, 0, -1, 18, 21, 76, -1, 76, 62, 18, -1, 26, 77, 76, -1, 76, 21, 26, -1, 78, 79, 80, -1, 80, 81, 78, -1, 31, 28, 80, -1, 80, 79, 31, -1, 27, 82, 80, -1, 80, 28, 27, -1, 83, 81, 80, -1, 80, 82, 83, -1, 72, 70, 84, -1, 84, 85, 72, -1, 35, 34, 84, -1, 84, 70, 35, -1, 33, 49, 84, -1, 84, 34, 33, -1, 54, 85, 84, -1, 84, 49, 54, -1, 86, 87, 88, -1, 88, 89, 86, -1, 69, 68, 88, -1, 88, 87, 69, -1, 67, 75, 88, -1, 88, 68, 67, -1, 74, 89, 88, -1, 88, 75, 74, -1, 90, 91, 92, -1, 92, 93, 90, -1, 57, 55, 92, -1, 92, 91, 57, -1, 31, 79, 92, -1, 92, 55, 31, -1, 78, 93, 92, -1, 92, 79, 78, -1, 94, 95, 96, -1, 96, 97, 94, -1, 42, 41, 96, -1, 96, 95, 42, -1, 17, 16, 96, -1, 96, 41, 17, -1, 15, 97, 96, -1, 96, 16, 15, -1, 83, 82, 98, -1, 98, 99, 83, -1, 27, 65, 98, -1, 98, 82, 27, -1, 69, 87, 98, -1, 98, 65, 69, -1, 86, 99, 98, -1, 98, 87, 86, -1, 13, 10, 100, -1, 100, 101, 13, -1, 9, 77, 100, -1, 100, 10, 9, -1, 26, 25, 100, -1, 100, 77, 26, -1, 24, 101, 100, -1, 100, 25, 24, -1, 6, 102, 103, -1, 103, 7, 6, -1, 78, 81, 103, -1, 103, 102, 78, -1, 83, 104, 103, -1, 103, 81, 83, -1, 8, 7, 103, -1, 103, 104, 8, -1, 13, 105, 106, -1, 106, 14, 13, -1, 72, 85, 106, -1, 106, 105, 72, -1, 54, 107, 106, -1, 106, 85, 54, -1, 15, 14, 106, -1, 106, 107, 15, -1, 22, 108, 109, -1, 109, 23, 22, -1, 86, 89, 109, -1, 109, 108, 86, -1, 74, 110, 109, -1, 109, 89, 74, -1, 24, 23, 109, -1, 109, 110, 24, -1, 45, 111, 112, -1, 112, 46, 45, -1, 90, 93, 112, -1, 112, 111, 90, -1, 78, 102, 112, -1, 112, 93, 78, -1, 6, 46, 112, -1, 112, 102, 6, -1, 52, 113, 114, -1, 114, 53, 52, -1, 94, 97, 114, -1, 114, 113, 94, -1, 15, 107, 114, -1, 114, 97, 15, -1, 54, 53, 114, -1, 114, 107, 54, -1, 8, 104, 115, -1, 115, 63, 8, -1, 83, 99, 115, -1, 115, 104, 83, -1, 86, 108, 115, -1, 115, 99, 86, -1, 22, 63, 115, -1, 115, 108, 22, -1, 72, 105, 116, -1, 116, 73, 72, -1, 13, 101, 116, -1, 116, 105, 13, -1, 24, 110, 116, -1, 116, 101, 24, -1, 74, 73, 116, -1, 116, 110, 74, -1},
                                                            TexCoord: &x3d.TextureCoordinate{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("Tongue-TEXCOORD"),
                                                                },
                                                                Point: &x3d.MFVec2f{[2]float32{0.6665,0.04796},[2]float32{0.6621,0.05829},[2]float32{0.6755,0.05429},[2]float32{0.678,0.04407},[2]float32{0.6594,0.0736},[2]float32{0.6739,0.06941},[2]float32{0.6934,0.06941},[2]float32{0.6938,0.05429},[2]float32{0.6944,0.04387},[2]float32{0.6665,0.07002},[2]float32{0.678,0.07332},[2]float32{0.6755,0.08631},[2]float32{0.6621,0.08231},[2]float32{0.6944,0.07293},[2]float32{0.6938,0.08631},[2]float32{0.6934,0.103},[2]float32{0.6739,0.103},[2]float32{0.6594,0.09877},[2]float32{0.6775,0.03908},[2]float32{0.6841,0.03457},[2]float32{0.685,0.04057},[2]float32{0.677,0.04467},[2]float32{0.6959,0.03299},[2]float32{0.6961,0.03821},[2]float32{0.6959,0.0483},[2]float32{0.6841,0.05084},[2]float32{0.6775,0.0521},[2]float32{0.7593,0.04796},[2]float32{0.7636,0.05829},[2]float32{0.7681,0.0703},[2]float32{0.7631,0.05909},[2]float32{0.7664,0.0736},[2]float32{0.7713,0.08619},[2]float32{0.7664,0.09877},[2]float32{0.7636,0.08231},[2]float32{0.7593,0.07002},[2]float32{0.6584,0.1215},[2]float32{0.6584,0.09583},[2]float32{0.6535,0.1086},[2]float32{0.6535,0.1343},[2]float32{0.6545,0.08619},[2]float32{0.6584,0.1214},[2]float32{0.6584,0.1471},[2]float32{0.6734,0.09157},[2]float32{0.6734,0.1172},[2]float32{0.6932,0.1172},[2]float32{0.6932,0.09157},[2]float32{0.7673,0.1214},[2]float32{0.7524,0.1256},[2]float32{0.7519,0.103},[2]float32{0.7673,0.1471},[2]float32{0.7524,0.1513},[2]float32{0.7326,0.1513},[2]float32{0.7326,0.1256},[2]float32{0.7324,0.103},[2]float32{0.7673,0.09583},[2]float32{0.7723,0.1086},[2]float32{0.7673,0.1215},[2]float32{0.7723,0.1343},[2]float32{0.6577,0.0703},[2]float32{0.6627,0.05909},[2]float32{0.6813,0.03662},[2]float32{0.6723,0.04066},[2]float32{0.6952,0.03583},[2]float32{0.7565,0.05069},[2]float32{0.7535,0.04066},[2]float32{0.7535,0.05994},[2]float32{0.7482,0.0521},[2]float32{0.7488,0.04467},[2]float32{0.7482,0.03908},[2]float32{0.7478,0.07332},[2]float32{0.7445,0.06163},[2]float32{0.7314,0.07293},[2]float32{0.7306,0.06006},[2]float32{0.7299,0.0483},[2]float32{0.7417,0.05084},[2]float32{0.6693,0.05069},[2]float32{0.6723,0.05994},[2]float32{0.7324,0.06941},[2]float32{0.7519,0.06941},[2]float32{0.7503,0.05429},[2]float32{0.732,0.05429},[2]float32{0.7478,0.04407},[2]float32{0.7314,0.04387},[2]float32{0.7503,0.08631},[2]float32{0.732,0.08631},[2]float32{0.7299,0.03299},[2]float32{0.7417,0.03457},[2]float32{0.7408,0.04057},[2]float32{0.7296,0.03821},[2]float32{0.7326,0.1172},[2]float32{0.7524,0.1172},[2]float32{0.7524,0.09157},[2]float32{0.7326,0.09157},[2]float32{0.6932,0.1513},[2]float32{0.6734,0.1513},[2]float32{0.6734,0.1256},[2]float32{0.6932,0.1256},[2]float32{0.7445,0.03662},[2]float32{0.7306,0.03583},[2]float32{0.6813,0.06163},[2]float32{0.6952,0.06006},[2]float32{0.7129,0.06941},[2]float32{0.7129,0.05429},[2]float32{0.7129,0.04381},[2]float32{0.7129,0.0728},[2]float32{0.7129,0.08631},[2]float32{0.7129,0.103},[2]float32{0.7129,0.03246},[2]float32{0.7129,0.03742},[2]float32{0.7129,0.04745},[2]float32{0.7129,0.1172},[2]float32{0.7129,0.09157},[2]float32{0.7129,0.1513},[2]float32{0.7129,0.1256},[2]float32{0.7129,0.03556},[2]float32{0.7129,0.05954}},
                                                            },
                                                            Coord: &x3d.Coordinate{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("Tongue_COORD"),
                                                                },
                                                                Point: &x3d.MFVec3f{[3]float32{-1.331,-0.2299,0.7138},[3]float32{1.331,-0.2299,0.7138},[3]float32{-1.563,0.07305,-1.268},[3]float32{1.563,0.07305,-1.268},[3]float32{-1.331,-0.07451,0.7385},[3]float32{1.331,-0.07451,0.7385},[3]float32{-1.563,0.2531,-1.239},[3]float32{1.563,0.2531,-1.239},[3]float32{-1.536,-0.127,-0.00304},[3]float32{1.536,-0.127,-0.00304},[3]float32{1.536,0.05032,0.0252},[3]float32{-1.536,0.05032,0.0252},[3]float32{-1.015,-0.2542,1.071},[3]float32{1.015,-0.2542,1.071},[3]float32{1.015,-0.1625,1.086},[3]float32{-1.015,-0.1625,1.086},[3]float32{0.5645,0.04305,-1.272},[3]float32{-0.5313,-0.257,0.7253},[3]float32{-0.5313,-0.05236,0.7579},[3]float32{-0.5645,0.2831,-1.234},[3]float32{-0.5607,-0.1565,-0.007746},[3]float32{0.5607,0.07987,0.02991},[3]float32{-0.4876,-0.283,1.2},[3]float32{0.4876,-0.1751,1.217},[3]float32{-0.5645,0.04305,-1.272},[3]float32{0.5313,-0.257,0.7253},[3]float32{0.5313,-0.05236,0.7579},[3]float32{0.5645,0.2831,-1.234},[3]float32{0.5607,-0.1565,-0.007746},[3]float32{-0.5607,0.07987,0.02991},[3]float32{0.4876,-0.283,1.2},[3]float32{-0.4876,-0.1751,1.217},[3]float32{-1.073,-0.2176,0.4108},[3]float32{-1.073,0.007936,0.4467},[3]float32{-0.7997,-0.2294,1.21},[3]float32{1.585,-0.1049,0.4287},[3]float32{-1.706,0.05553,-0.5782},[3]float32{-1.134,-0.06447,-0.5973},[3]float32{1.134,0.1755,-0.559},[3]float32{1.706,0.05553,-0.5782},[3]float32{-1.585,-0.1049,0.4287},[3]float32{-0.9063,-0.2816,0.9715},[3]float32{1.251,-0.187,0.9442},[3]float32{0.9063,-0.1054,0.9996},[3]float32{-1.251,-0.187,0.9442},[3]float32{1.073,-0.2176,0.4108},[3]float32{1.073,0.007936,0.4467},[3]float32{0.7997,-0.2294,1.21},[3]float32{1.134,-0.06447,-0.5973},[3]float32{-1.134,0.1755,-0.559},[3]float32{0.9063,-0.2816,0.9715},[3]float32{-0.9063,-0.1054,0.9996},[3]float32{0.0,-0.2176,0.4108},[3]float32{0.0,0.007936,0.4467},[3]float32{0.0,-0.2425,1.293},[3]float32{0.0,-0.06447,-0.5973},[3]float32{0.0,0.1755,-0.559},[3]float32{0.0,-0.2846,1.013},[3]float32{0.0,-0.1157,1.04},[3]float32{-1.457,-0.1894,0.4153},[3]float32{-1.134,0.04305,-1.272},[3]float32{1.563,-0.03447,-0.5925},[3]float32{-1.001,-0.2565,0.7175},[3]float32{1.001,-0.05045,0.7503},[3]float32{1.457,-0.02026,0.4422},[3]float32{1.134,0.2831,-1.234},[3]float32{-1.563,0.1455,-0.5638},[3]float32{1.441,-0.1518,0.7236},[3]float32{-1.441,-0.1518,0.7236},[3]float32{1.706,0.1631,-1.253},[3]float32{-1.706,0.1631,-1.253},[3]float32{-1.563,-0.03447,-0.5925},[3]float32{1.457,-0.1894,0.4153},[3]float32{1.563,0.1455,-0.5638},[3]float32{-1.457,-0.02026,0.4422},[3]float32{-1.119,-0.1565,-0.007746},[3]float32{1.119,0.07987,0.02991},[3]float32{1.676,-0.03833,0.01108},[3]float32{-1.676,-0.03833,0.01108},[3]float32{-0.8264,-0.2777,1.145},[3]float32{1.031,-0.2122,1.103},[3]float32{0.8264,-0.1631,1.163},[3]float32{-1.031,-0.2122,1.103},[3]float32{-1.165,-0.2565,0.9437},[3]float32{1.165,-0.2565,0.9437},[3]float32{1.165,-0.1207,0.9654},[3]float32{-1.165,-0.1207,0.9654},[3]float32{1.134,0.04305,-1.272},[3]float32{1.001,-0.2565,0.7175},[3]float32{-1.001,-0.05045,0.7503},[3]float32{-1.134,0.2831,-1.234},[3]float32{1.119,-0.1565,-0.007746},[3]float32{-1.119,0.07987,0.02991},[3]float32{0.8264,-0.2777,1.145},[3]float32{-0.8264,-0.1631,1.163},[3]float32{-0.5493,-0.2176,0.4108},[3]float32{-0.5493,0.007936,0.4467},[3]float32{-0.4809,-0.2392,1.272},[3]float32{-0.5645,-0.06447,-0.5973},[3]float32{0.5645,0.1755,-0.559},[3]float32{-0.5076,-0.2838,1.003},[3]float32{0.5076,-0.1131,1.03},[3]float32{0.0,0.04305,-1.272},[3]float32{0.0,-0.2572,0.7279},[3]float32{0.0,-0.053,0.7605},[3]float32{0.0,0.2831,-1.234},[3]float32{0.0,-0.1565,-0.007746},[3]float32{0.0,0.07987,0.02991},[3]float32{0.0,-0.2847,1.218},[3]float32{0.0,-0.1791,1.235},[3]float32{0.5493,-0.2176,0.4108},[3]float32{0.5493,0.007936,0.4467},[3]float32{0.4809,-0.2392,1.272},[3]float32{0.5645,-0.06447,-0.5973},[3]float32{-0.5645,0.1755,-0.559},[3]float32{0.5076,-0.2838,1.003},[3]float32{-0.5076,-0.1131,1.03}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                            Coord: &x3d.Coordinate{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Tongue_COORD"),
                                                },
                                            },
                                            &x3d.HAnimDisplacer{
                                                Name: stringPtr("tongue_morphinterpolator"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Tongue_MorphInterpolator_JinMouthStretch"),
                                                },
                                                CoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116},
                                                Displacements: &x3d.MFVec3f{[3]float32{0.0,-1.3011,-0.5882},[3]float32{0.0,-1.3011,-0.5882},[3]float32{0.0,-0.1823,0.11},[3]float32{0.0,-0.1474,0.036},[3]float32{0.0,-1.3165,-0.5403},[3]float32{0.0,-1.3165,-0.5403},[3]float32{0.0,-0.1823,0.11},[3]float32{0.0,-0.1499,0.048},[3]float32{0.0,-1.154,-0.3156},[3]float32{0.0,-1.154,-0.3156},[3]float32{0.0,-1.0543,-0.2883},[3]float32{0.0,-1.0543,-0.2883},[3]float32{0.0,-1.4118,-0.614},[3]float32{0.0,-1.4118,-0.614},[3]float32{0.0,-1.4215,-0.5862},[3]float32{0.0,-1.4215,-0.5862},[3]float32{0.0,-0.1469,0.033},[3]float32{0.0,-1.303,-0.5972},[3]float32{0.0,-1.3236,-0.5343},[3]float32{0.0,-0.1504,0.05},[3]float32{0.0,-1.1455,-0.3322},[3]float32{0.0,-1.0581,-0.2783},[3]float32{0.0,-1.508,-0.6254},[3]float32{0.0,-1.5299,-0.5751},[3]float32{0.0,-0.1469,0.033},[3]float32{0.0,-1.303,-0.5972},[3]float32{0.0,-1.3236,-0.5343},[3]float32{0.0,-0.1504,0.05},[3]float32{0.0,-1.1455,-0.3322},[3]float32{0.0,-1.0581,-0.2783},[3]float32{0.0,-1.508,-0.6254},[3]float32{0.0,-1.5299,-0.5751},[3]float32{0.0,-1.1594,-0.4717},[3]float32{0.0,-1.2139,-0.3495},[3]float32{0.0,-1.5196,-0.6002},[3]float32{0.0,-1.2771,-0.4418},[3]float32{0.0,-0.7623,-0.1091},[3]float32{0.0,-0.7467,-0.1522},[3]float32{0.0,-0.7779,-0.0661},[3]float32{0.0,-0.7623,-0.1091},[3]float32{0.0,-1.2771,-0.4418},[3]float32{0.0,-1.3794,-0.6176},[3]float32{0.0,-1.376,-0.5863},[3]float32{0.0,-1.3976,-0.5635},[3]float32{0.0,-1.376,-0.5863},[3]float32{0.0,-1.1594,-0.4717},[3]float32{0.0,-1.2139,-0.3495},[3]float32{0.0,-1.5196,-0.6002},[3]float32{0.0,-0.7467,-0.1522},[3]float32{0.0,-0.7779,-0.0661},[3]float32{0.0,-1.3794,-0.6176},[3]float32{0.0,-1.3976,-0.5635},[3]float32{0.0,-1.1594,-0.4717},[3]float32{0.0,-1.2139,-0.3495},[3]float32{0.0,-1.5585,-0.6173},[3]float32{0.0,-0.7467,-0.1522},[3]float32{0.0,-0.7779,-0.0661},[3]float32{0.0,-1.3924,-0.6203},[3]float32{0.0,-1.4093,-0.5685},[3]float32{0.0,-1.1636,-0.4622},[3]float32{0.0,-0.1469,0.033},[3]float32{0.0,-0.7506,-0.1415},[3]float32{0.0,-1.3005,-0.5967},[3]float32{0.0,-1.3216,-0.5334},[3]float32{0.0,-1.2107,-0.3581},[3]float32{0.0,-0.1504,0.05},[3]float32{0.0,-0.774,-0.0768},[3]float32{0.0,-1.3082,-0.564},[3]float32{0.0,-1.3082,-0.564},[3]float32{0.0,-0.1487,0.042},[3]float32{0.0,-0.1823,0.109},[3]float32{0.0,-0.7506,-0.1415},[3]float32{0.0,-1.1636,-0.4622},[3]float32{0.0,-0.774,-0.0768},[3]float32{0.0,-1.2107,-0.3581},[3]float32{0.0,-1.1455,-0.3322},[3]float32{0.0,-1.0581,-0.2783},[3]float32{0.0,-1.0047,-0.2827},[3]float32{0.0,-1.0047,-0.2827},[3]float32{0.0,-1.4823,-0.6158},[3]float32{0.0,-1.4248,-0.6028},[3]float32{0.0,-1.5049,-0.5622},[3]float32{0.0,-1.4248,-0.6028},[3]float32{0.0,-1.3715,-0.6082},[3]float32{0.0,-1.3715,-0.6082},[3]float32{0.0,-1.3853,-0.5666},[3]float32{0.0,-1.3853,-0.5666},[3]float32{0.0,-0.1469,0.033},[3]float32{0.0,-1.3005,-0.5967},[3]float32{0.0,-1.3216,-0.5334},[3]float32{0.0,-0.1504,0.05},[3]float32{0.0,-1.1455,-0.3322},[3]float32{0.0,-1.0581,-0.2783},[3]float32{0.0,-1.4823,-0.6158},[3]float32{0.0,-1.5049,-0.5622},[3]float32{0.0,-1.1594,-0.4717},[3]float32{0.0,-1.2139,-0.3495},[3]float32{0.0,-1.5488,-0.6128},[3]float32{0.0,-0.7467,-0.1522},[3]float32{0.0,-0.7779,-0.0661},[3]float32{0.0,-1.3892,-0.62},[3]float32{0.0,-1.4069,-0.5673},[3]float32{0.0,-0.1469,0.033},[3]float32{0.0,-1.3038,-0.5974},[3]float32{0.0,-1.325,-0.5347},[3]float32{0.0,-0.1504,0.05},[3]float32{0.0,-1.1455,-0.3322},[3]float32{0.0,-1.0581,-0.2783},[3]float32{0.0,-1.5163,-0.6283},[3]float32{0.0,-1.5379,-0.5794},[3]float32{0.0,-1.1594,-0.4717},[3]float32{0.0,-1.2139,-0.3495},[3]float32{0.0,-1.5488,-0.6128},[3]float32{0.0,-0.7467,-0.1522},[3]float32{0.0,-0.7779,-0.0661},[3]float32{0.0,-1.3892,-0.62},[3]float32{0.0,-1.4069,-0.5673}},
                                            },
                                    },
                            },
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_skullbase"),
                        },
                    },
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("AnimationAdapter_JinMouthStretch"),
                    ToField: stringPtr("weight"),
                    ToNode: stringPtr("Tongue_MorphInterpolator_JinMouthStretch"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("JinMouthStretch_Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("AnimationAdapter_JinMouthStretch"),
                    ToField: stringPtr("set_fraction"),
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
	filename := "../data/Tongue.new.go.x3d"
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