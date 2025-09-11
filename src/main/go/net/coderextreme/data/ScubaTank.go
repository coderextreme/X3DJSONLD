
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
        Profile: stringPtr("Interchange"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("ScubaTank.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Scuba gear used by Nancy Diving example."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Etsuko Lippi"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("24 January 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 02:11:05 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("ScubaTank.x3d"),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("ScubaTank"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("tank"),
                                            },
                                            AmbientIntensity: floatPtr(0.3),
                                            DiffuseColor: &x3d.SFColor{0.3, 0.3, 0.5},
                                            SpecularColor: &x3d.SFColor{0.7, 0.7, 0.8},
                                            Shininess: floatPtr(0.1),
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
                                        Height: floatPtr(0.7),
                                        Radius: floatPtr(0.1),
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, 0.35, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("tank"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.Sphere{
                                        Radius: floatPtr(0.098),
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, -0.35, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("tankBottom"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("black"),
                                            },
                                            AmbientIntensity: floatPtr(0.3),
                                            DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
                                        Height: floatPtr(0.06),
                                        Radius: floatPtr(0.115),
                                    },
                                },
                            },
                        },
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("tankNozzle"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, 0.45, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("pressure"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("pressureColor"),
                                                            },
                                                            AmbientIntensity: floatPtr(0.4),
                                                            DiffuseColor: &x3d.SFColor{0.91, 0.91, 0.91},
                                                            SpecularColor: &x3d.SFColor{0.91, 0.9, 0.91},
                                                            Shininess: floatPtr(0.16),
                                                        },
                                                    },
                                                    Geometry: &x3d.Cylinder{
                                                        Height: floatPtr(0.1),
                                                        Radius: floatPtr(0.015),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, 0.5, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("pressureTop"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("black"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Cylinder{
                                                        Height: floatPtr(0.02),
                                                        Radius: floatPtr(0.025),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{-0.028, 0.462, 0.0},
                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("connectorToRegulator"),
                                                            },
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("pressureColor"),
                                                                    },
                                                                },
                                                            },
                                                            Geometry: &x3d.Cylinder{
                                                                Height: floatPtr(0.03),
                                                                Radius: floatPtr(0.01),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0, 0.02, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("connectorToRegulatorTop"),
                                                            },
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("black"),
                                                                    },
                                                                },
                                                            },
                                                            Geometry: &x3d.Cylinder{
                                                                Height: floatPtr(0.02),
                                                                Radius: floatPtr(0.02),
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
                                Translation: &x3d.SFVec3f{0.0, 0.2, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("tankHoldBelt"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("black"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
                                        Height: floatPtr(0.1),
                                        Radius: floatPtr(0.115),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.6,0.6,0.6}},
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
	filename := "../data/ScubaTank.new.go.x3d"
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