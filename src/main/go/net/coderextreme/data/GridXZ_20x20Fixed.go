
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
                    Content: stringPtr("GridXZ_20x20Fixed.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("MV4204 class"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("3 September 2000"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:08 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("GridXY_20x20Fixed.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("GridYZ_20x20Fixed.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("GridXZ_20x20Fixed.x3d"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)"),
                    Position: &x3d.SFVec3f{0.0, 10.0, 25.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.4},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("GridLocation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("LinesAlignedAlongZ"),
                                    },
                                    Geometry: &x3d.IndexedLineSet{
                                        ColorPerVertex: boolPtr(false),
                                        ColorIndex: []int32{1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1},
                                        CoordIndex: []int32{1, 22, -1, 2, 23, -1, 3, 24, -1, 4, 25, -1, 5, 26, -1, 6, 27, -1, 7, 28, -1, 8, 29, -1, 9, 30, -1, 10, 31, -1, 11, 32, -1, 12, 33, -1, 13, 34, -1, 14, 35, -1, 15, 36, -1, 16, 37, -1, 17, 38, -1, 18, 39, -1, 19, 40, -1, 20, 41, -1, 21, 42, -1},
                                        Color: &x3d.Color{
                                            Color: &x3d.MFColor{[3]float32{0.4,0.4,0.4},[3]float32{0.8,0.2,0.0},[3]float32{0.4,0.1,0.05}},
                                        },
                                        Coord: &x3d.Coordinate{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("EndPoints"),
                                            },
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{-10.0,0.0,10.0},[3]float32{-9.0,0.0,10.0},[3]float32{-8.0,0.0,10.0},[3]float32{-7.0,0.0,10.0},[3]float32{-6.0,0.0,10.0},[3]float32{-5.0,0.0,10.0},[3]float32{-4.0,0.0,10.0},[3]float32{-3.0,0.0,10.0},[3]float32{-2.0,0.0,10.0},[3]float32{-1.0,0.0,10.0},[3]float32{0.0,0.0,10.0},[3]float32{1.0,0.0,10.0},[3]float32{2.0,0.0,10.0},[3]float32{3.0,0.0,10.0},[3]float32{4.0,0.0,10.0},[3]float32{5.0,0.0,10.0},[3]float32{6.0,0.0,10.0},[3]float32{7.0,0.0,10.0},[3]float32{8.0,0.0,10.0},[3]float32{9.0,0.0,10.0},[3]float32{10.0,0.0,10.0},[3]float32{-10.0,0.0,-10.0},[3]float32{-9.0,0.0,-10.0},[3]float32{-8.0,0.0,-10.0},[3]float32{-7.0,0.0,-10.0},[3]float32{-6.0,0.0,-10.0},[3]float32{-5.0,0.0,-10.0},[3]float32{-4.0,0.0,-10.0},[3]float32{-3.0,0.0,-10.0},[3]float32{-2.0,0.0,-10.0},[3]float32{-1.0,0.0,-10.0},[3]float32{0.0,0.0,-10.0},[3]float32{1.0,0.0,-10.0},[3]float32{2.0,0.0,-10.0},[3]float32{3.0,0.0,-10.0},[3]float32{4.0,0.0,-10.0},[3]float32{5.0,0.0,-10.0},[3]float32{6.0,0.0,-10.0},[3]float32{7.0,0.0,-10.0},[3]float32{8.0,0.0,-10.0},[3]float32{9.0,0.0,-10.0},[3]float32{10.0,0.0,-10.0}},
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("LinesAlignedAlongX"),
                                        },
                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57079},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("LinesAlignedAlongZ"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, -0.5, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("DefaultAppearance"),
                                                    },
                                                    Material: &x3d.Material{
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("CenterTextNode"),
                                                    },
                                                    String: x3d.MFString{"origin"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("FS4"),
                                                        },
                                                        Size: floatPtr(0.4),
                                                        Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{10.0, -0.5, 10.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("DefaultAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"10 0 10"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("FS4"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{10.0, -0.5, -10.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("DefaultAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"10 0 -10"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("FS4"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{-10.0, -0.5, 10.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("DefaultAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"-10 0 10"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("FS4"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{-10.0, -0.5, -10.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("DefaultAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"-10 0 -10"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("FS4"),
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
	filename := "../data/GridXZ_20x20Fixed.new.go.x3d"
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