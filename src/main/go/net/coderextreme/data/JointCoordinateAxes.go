
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
                    Name: stringPtr("converter"),
                    Content: stringPtr("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.NavigationInfo{
                    Headlight: boolPtr(false),
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ARROW"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("ARROW_APPEARANCE"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.3, 0.3, 1.0},
                                            EmissiveColor: &x3d.SFColor{0.3, 0.3, 0.33},
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
                                        Top: boolPtr(false),
                                        Bottom: boolPtr(false),
                                        Radius: floatPtr(0.025),
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("ARROW_POINTER"),
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("ARROW_APPEARANCE"),
                                                },
                                            },
                                            Geometry: &x3d.Cone{
                                                Height: floatPtr(0.1),
                                                BottomRadius: floatPtr(0.05),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, -1.0, 0.0},
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 3.1416},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("ARROW_POINTER"),
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, 1.08, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Billboard{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("LABEL_APPEARANCE"),
                                            },
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.3},
                                                EmissiveColor: &x3d.SFColor{0.33, 0.33, 0.1},
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Y"},
                                            FontStyle: &x3d.FontStyle{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("LABEL_FONT"),
                                                },
                                                Family: x3d.MFString{"SANS"},
                                                Size: floatPtr(0.2),
                                                Justify: x3d.MFString{"MIDDLE"},
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -1.5708},
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                            Children: []x3d.X3DNode{
                                &x3d.Group{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("ARROW"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.072, 1.1, 0.0},
                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.5708},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("LABEL_APPEARANCE"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"X"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("LABEL_FONT"),
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
                &x3d.Transform{
                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.5708},
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                            Children: []x3d.X3DNode{
                                &x3d.Group{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("ARROW"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 1.1, 0.072},
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.5708},
                                    Children: []x3d.X3DNode{
                                        &x3d.Billboard{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("LABEL_APPEARANCE"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"Z"},
                                                    FontStyle: &x3d.FontStyle{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("LABEL_FONT"),
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
	filename := "../data/JointCoordinateAxes.new.go.x3d"
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