
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
        Version: stringPtr("3.3"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("MultiTextureDesignPattern.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("5 March 2011"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("29 October 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("X3D schematron rules for quality assurance"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("MultiTextureDesignPatternSceneGraph.png"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/X3dResources.html"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
//================================
                &x3d.WorldInfo{
                    Title: stringPtr("MultiTextureDesignPattern.x3d"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.72549,1.0,0.721569}},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("MultiTexture design pattern"),
                },
                &x3d.Shape{
                    Geometry: &x3d.Text{
                        String: x3d.MFString{"Source shows design pattern for", "MultiTexture, MultiTextureCoordinate,", " and MultiTextureTransform nodes"},
                        FontStyle: &x3d.FontStyle{
                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                            Size: floatPtr(0.6),
                        },
                    },
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            DiffuseColor: &x3d.SFColor{0.2, 0.4, 0.8},
                        },
                    },
                },
//================================
                &x3d.Shape{
//add a single geometry node here
                    Geometry: &x3d.IndexedFaceSet{
                        TexCoord: &x3d.MultiTextureCoordinate{
//add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes
                            &x3d.TextureCoordinate{
                                Point: &x3d.MFVec2f{[2]float32{0.0,0.0},[2]float32{1.0,0.0},[2]float32{1.0,1.0},[2]float32{0.0,1.0}},
                            },
                            &x3d.TextureCoordinate{
                                Point: &x3d.MFVec2f{[2]float32{0.0,0.0},[2]float32{1.0,0.0},[2]float32{1.0,1.0},[2]float32{0.0,1.0}},
                            },
                            &x3d.TextureCoordinate{
                                Point: &x3d.MFVec2f{[2]float32{0.0,0.0},[2]float32{1.0,0.0},[2]float32{1.0,1.0},[2]float32{0.0,1.0}},
                            },
                        },
                    },
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                        },
                        Texture: &x3d.MultiTexture{
                            Alpha: floatPtr(0.8),
                            Color: &x3d.SFColor{0.9, 1.0, 0.2},
                            Function: x3d.MFString{"COMPLEMENT", "ALPHAREPLICATE"},
                            Mode: x3d.MFString{"MODULATE", "REPLACE", "BLENDDIFFUSEALPHA"},
                            Source: x3d.MFString{"DIFFUSE", "SPECULAR", "FACTOR"},
//add multiple texture nodes here
                            &x3d.ImageTexture{
                            },
                            &x3d.MovieTexture{
                            },
                            &x3d.PixelTexture{
                            },
                        },
                        TextureTransform: &x3d.MultiTextureTransform{
//add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes
                            &x3d.TextureTransform{
                            },
                            &x3d.TextureTransform{
                            },
                            &x3d.TextureTransform{
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
	filename := "../data/MultiTextureDesignPattern.new.go.x3d"
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