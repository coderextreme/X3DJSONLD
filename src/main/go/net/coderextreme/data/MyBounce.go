
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
                    Name: stringPtr("Scripting"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("MyBounce.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("3 prismatic spheres"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("transform"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.7, 0.7, 0.7},
                                    SpecularColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Bounce2"),
                    },
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("set_translation"),
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 0 0"),
                    },
                    &x3d.Field{
                        Name: stringPtr("translation_changed"),
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFVec3f"),
                        Value: stringPtr("0 0 0"),
                    },
                    &x3d.Field{
                        Name: stringPtr("translation"),
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFVec3f"),
                        Value: stringPtr("0 0 0"),
                    },
                    &x3d.Field{
                        Name: stringPtr("velocity"),
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFVec3f"),
                        Value: stringPtr("0 0 0"),
                    },
                    &x3d.Field{
                        Name: stringPtr("set_fraction"),
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFTime"),
                    },
//ecmascript:
//			function newBubble() {
//			    translation = new SFVec3f(0, 0, 0);
//			    velocity = new SFVec3f(
//			    	Math.random() - 0.5,
//				Math.random() - 0.5,
//				Math.random() - 0.5);
//			}
//			function set_fraction() {
//			    translation = new SFVec3f(
//			    	translation.x + velocity.x,
//				translation.y + velocity.y,
//				translation.z + velocity.z);
//				if (Math.abs(translation.x) > 10) {
//					newBubble();
//				} else if (Math.abs(translation.y) > 10) {
//					newBubble();
//				} else if (Math.abs(translation.z) > 10) {
//					newBubble();
//				} else {
//					velocity = new SFVec3f(
//						velocity.x + Math.random() * 0.2 - 0.1,
//						velocity.y + Math.random() * 0.2 - 0.1,
//						velocity.z + Math.random() * 0.2 - 0.1
//					);
//				}
//			}
//
//			function initialize() {
//			     newBubble();
//			}
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TourTime"),
                    },
                    CycleInterval: doublePtr(0.15),
                    Loop: boolPtr(true),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("TourTime"),
                    FromField: stringPtr("cycleTime"),
                    ToNode: stringPtr("Bounce2"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Bounce2"),
                    FromField: stringPtr("translation_changed"),
                    ToNode: stringPtr("transform"),
                    ToField: stringPtr("set_translation"),
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
	filename := "../data/MyBounce.new.go.x3d"
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