
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
                    Content: stringPtr("HAnimModelsHandsFeet.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Kwan Hee YOO and Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("8 February 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:46:46 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("not yet to scale"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("HAnimModelsHandsFeet.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("HAnimModelsHandsFeetWithFour1mGrids.png"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/working-groups/humanoid-animation-HAnim"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("X3D HAnim humanoid animation"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("HAnimModelsHandsFeet.x3d"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Hands and feet 10m"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Hands and feet 1.7m"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 1.7},
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{-1.0, 1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Inline{
                            Url: x3d.MFString{"HAnimModelHandLeft.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d", "HAnimModelHandLeft.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"},
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("GridXY_20x20Fixed_AdjustScale"),
                                },
                                Scale: &x3d.SFVec3f{0.1, 0.1, 0.1},
                            Children: []x3d.X3DNode{
                                &x3d.Inline{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("GridXY_20x20Fixed"),
                                    },
                                    Url: x3d.MFString{"../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d", "https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d", "../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl", "https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"},
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{1.0, 1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Inline{
                            Url: x3d.MFString{"HAnimModelHandRight.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d", "HAnimModelHandRight.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"},
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("GridXY_20x20Fixed_AdjustScale"),
                                },
                            Children: []x3d.X3DNode{
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{-1.0, -1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Inline{
                            Url: x3d.MFString{"HAnimModelFootLeft.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d", "HAnimModelFootLeft.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"},
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("GridXY_20x20Fixed_AdjustScale"),
                                },
                            Children: []x3d.X3DNode{
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{1.0, -1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Inline{
                            Url: x3d.MFString{"HAnimModelFootRight.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d", "HAnimModelFootRight.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"},
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("GridXY_20x20Fixed_AdjustScale"),
                                },
                            Children: []x3d.X3DNode{
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
	filename := "../data/HAnimModelsHandsFeet.new.go.x3d"
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