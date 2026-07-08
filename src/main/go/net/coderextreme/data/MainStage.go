
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
        Profile: stringPtr("Interchange"),
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
                    Content: stringPtr("MainStage.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Main stage for HAnim scene Winter and Spring."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Joe Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joe Williams and Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("25 May 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("27 May 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("originals/0MainStageScene0525.x3dv"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
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
                    Title: stringPtr("MainStage.x3d"),
                },
                &x3d.NavigationInfo{
                    Headlight: boolPtr(false),
                },
                &x3d.DirectionalLight{
                    AmbientIntensity: floatPtr(1.0),
                    Direction: &x3d.SFVec3f{-0.5, -0.5, -0.5},
                    Global: boolPtr(true),
                },
                &x3d.DirectionalLight{
                    AmbientIntensity: floatPtr(1.0),
                    Direction: &x3d.SFVec3f{-1.0, -1.0, -1.0},
                    Global: boolPtr(true),
                },
                &x3d.DirectionalLight{
                    AmbientIntensity: floatPtr(1.0),
                    Direction: &x3d.SFVec3f{1.0, 1.0, -1.0},
                    Global: boolPtr(true),
                    Intensity: floatPtr(0.5),
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_StageFrontViewFar"),
                    },
                    Description: stringPtr("hanim_Stage Front View"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.449999988},
                    Position: &x3d.SFVec3f{0.0, 4.0, 10.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_InclinedView"),
                    },
                    Description: stringPtr("hanim_Inclined View"),
                    Orientation: &x3d.SFRotation{-0.112999998, 0.992999971, 0.034699999, 0.671000004},
                    Position: &x3d.SFVec3f{2.619999886, 1.049999952, 4.059999943},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_StageFrontView"),
                    },
                    Description: stringPtr("hanim_Stage Front View"),
                    Position: &x3d.SFVec3f{0.0, 1.0, 5.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_FeetStageBottomView"),
                    },
                    Description: stringPtr("hanim_feet View"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.570000052},
                    Position: &x3d.SFVec3f{0.0, -10.0, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_HeadTopView"),
                    },
                    Description: stringPtr("hanim_Head Top View"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.570000052},
                    Position: &x3d.SFVec3f{0.0, 15.0, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_TopFrontCloseView"),
                    },
                    Description: stringPtr("hanim_Head Top View"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.100000024},
                    Position: &x3d.SFVec3f{0.0, 8.0, 3.0},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("HAnimStage"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("cordsysfloor"),
                                },
                                Scale: &x3d.SFVec3f{0.174999997, 0.174999997, 0.174999997},
                            Children: []x3d.X3DNode{
                                &x3d.Inline{
                                    Url: x3d.MFString{"JointCoordinateAxes.x3dv"},
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("StageGeometry"),
                                },
                                Scale: &x3d.SFVec3f{1.0, 0.01, 1.0},
                                Translation: &x3d.SFVec3f{0.0, -0.01, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            Transparency: floatPtr(0.6),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{9.0, 1.0, 9.0},
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Circle0"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("LineColor"),
                                                },
                                                Material: &x3d.Material{
                                                    AmbientIntensity: floatPtr(1.0),
                                                    DiffuseColor: &x3d.SFColor{0.699999988, 0.0, 0.899999976},
                                                    EmissiveColor: &x3d.SFColor{0.449999988, 0.449999988, 1.0},
                                                    Shininess: floatPtr(1.0),
                                                    SpecularColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                },
                                            },
                                            Geometry: &x3d.IndexedLineSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Orbit1"),
                                                },
                                                CoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, -1},
                                                Coord: &x3d.Coordinate{
                                                    Point: &x3d.MFVec3f{[3]float32{1.0,0.0,0.0},[3]float32{0.995000005,0.0,-0.104999997},[3]float32{0.978999972,0.0,-0.208000004},[3]float32{0.950999975,0.0,-0.308999985},[3]float32{0.913999975,0.0,-0.407000005},[3]float32{0.865999997,0.0,-0.5},[3]float32{0.809000015,0.0,-0.588},[3]float32{0.742999971,0.0,-0.66900003},[3]float32{0.66900003,0.0,-0.742999971},[3]float32{0.588,0.0,-0.809000015},[3]float32{0.5,0.0,-0.865999997},[3]float32{0.407000005,0.0,-0.913999975},[3]float32{0.308999985,0.0,-0.950999975},[3]float32{0.208000004,0.0,-0.977999985},[3]float32{0.104999997,0.0,-0.995000005},[3]float32{0.0,0.0,-1.0},[3]float32{-0.104999997,0.0,-0.994521976},[3]float32{-0.208000004,0.0,-0.977999985},[3]float32{-0.308999985,0.0,-0.950999975},[3]float32{-0.407000005,0.0,-0.913999975},[3]float32{-0.5,0.0,-0.865999997},[3]float32{-0.588,0.0,-0.809000015},[3]float32{-0.66900003,0.0,-0.742999971},[3]float32{-0.742999971,0.0,-0.66900003},[3]float32{-0.809000015,0.0,-0.588},[3]float32{-0.865999997,0.0,-0.5},[3]float32{-0.913999975,0.0,-0.407000005},[3]float32{-0.950999975,0.0,-0.308999985},[3]float32{-0.977999985,0.0,-0.208000004},[3]float32{-0.995000005,0.0,-0.104999997},[3]float32{-1.0,0.0,0.0},[3]float32{-0.995000005,0.0,0.104999997},[3]float32{-0.977999985,0.0,0.208000004},[3]float32{-0.950999975,0.0,0.308999985},[3]float32{-0.913999975,0.0,0.407000005},[3]float32{-0.865999997,0.0,0.5},[3]float32{-0.809000015,0.0,0.588},[3]float32{-0.742999971,0.0,0.66900003},[3]float32{-0.66900003,0.0,0.742999971},[3]float32{-0.588,0.0,0.809000015},[3]float32{-0.5,0.0,0.865999997},[3]float32{-0.407000005,0.0,0.913999975},[3]float32{-0.308999985,0.0,0.950999975},[3]float32{-0.208000004,0.0,0.977999985},[3]float32{-0.104999997,0.0,0.995000005},[3]float32{0.0,0.0,1.0},[3]float32{0.104999997,0.0,0.995000005},[3]float32{0.208000004,0.0,0.977999985},[3]float32{0.308999985,0.0,0.950999975},[3]float32{0.407000005,0.0,0.913999975},[3]float32{0.5,0.0,0.865999997},[3]float32{0.588,0.0,0.809000015},[3]float32{0.66900003,0.0,0.742999971},[3]float32{0.742999971,0.0,0.66900003},[3]float32{0.809000015,0.0,0.588},[3]float32{0.865999997,0.0,0.5},[3]float32{0.913999975,0.0,0.407000005},[3]float32{0.950999975,0.0,0.308999985},[3]float32{0.977999985,0.0,0.208000004},[3]float32{0.995000005,0.0,0.104000002},[3]float32{1.0,0.0,0.0}},
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Circle1"),
                                        },
                                        Scale: &x3d.SFVec3f{0.5, 1.0, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("LineColor"),
                                                },
                                            },
                                            Geometry: &x3d.IndexedLineSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Orbit1"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Circle2"),
                                        },
                                        Scale: &x3d.SFVec3f{0.25, 1.0, 0.25},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("LineColor"),
                                                },
                                            },
                                            Geometry: &x3d.IndexedLineSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Orbit1"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Circle3"),
                                        },
                                        Scale: &x3d.SFVec3f{2.0, 1.0, 2.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("LineColor"),
                                                },
                                            },
                                            Geometry: &x3d.IndexedLineSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Orbit1"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Circle4"),
                                        },
                                        Scale: &x3d.SFVec3f{3.0, 1.0, 3.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("LineColor"),
                                                },
                                            },
                                            Geometry: &x3d.IndexedLineSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Orbit1"),
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
	filename := "../data/MainStage.new.go.x3d"
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