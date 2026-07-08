
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("HelloWorldCommented.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("19 December 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("20 October 2019"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HelloWorldCommented.json"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HelloWorldCommentedOriginalEncoding.json"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HelloWorldCommentedAlternativeEncoding.json"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/license.html"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
                &x3d.WorldInfo{
                    Title: stringPtr("Hello world!"),
                },
//WorldInfo complete, Group begin
                &x3d.Group{
                    Children: []x3d.X3DNode{
//Viewpoint begin
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ViewUpClose"),
                            },
                            CenterOfRotation: &x3d.SFVec3f{0.0, -1.0, 0.0},
                            Description: stringPtr("Hello world!"),
                            Position: &x3d.SFVec3f{0.0, -1.0, 7.0},
                        },
//Viewpoint complete, Transform begin
                        &x3d.Transform{
                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.0},
                            Children: []x3d.X3DNode{
//Shape begin
                                &x3d.Shape{
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
                                    Geometry: &x3d.Sphere{
                                    },
                                    Appearance: &x3d.Appearance{
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("MaterialLightBlue"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.1, 0.5, 1.0},
                                        },
                                        Texture: &x3d.ImageTexture{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("ImageCloudlessEarth"),
                                            },
                                            Url: x3d.MFString{"earth-topo.png", "earth-topo.jpg", "earth-topo-small.gif", "https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png", "https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg", "https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"},
                                        },
                                    },
                                },
//Shape complete
                            },
                        },
//Transform complete, Transform begin
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, -2.0, 0.0},
                            Children: []x3d.X3DNode{
//Shape begin
                                &x3d.Shape{
//Text begin
//Text complete, Appearance begin
//Appearance complete
                                    Geometry: &x3d.Text{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TextMessage"),
                                        },
                                        String: x3d.MFString{"Hello", "world!"},
//FontStyle begin
//FontStyle complete
                                        FontStyle: &x3d.FontStyle{
                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
//Material begin
//Material complete
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("MaterialLightBlue"),
                                            },
                                        },
                                    },
                                },
//Shape complete
                            },
                        },
//Transform complete
                    },
                },
//Group complete
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
	filename := "../data/HelloWorldCommented.new.go.x3d"
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