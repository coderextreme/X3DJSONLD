
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("rgb_alpha.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("rgb_alpha-front.jpg"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("rgb_alpha-rear.jpg"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("rgb_alpha-top.jpg"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("rgb_alpha-bottom.jpg"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.nist.gov/vrml.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("http://www.itl.nist.gov/div897/ctg/vrml/members.html"),
            },
            &x3d.Meta{
                Name: stringPtr("disclaimer"),
                Content: stringPtr("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Michael Kass NIST, Don Brutzman NPS"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("21 January 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("16 January 2011"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"EXAMINE", "WALK", "FLY", "ANY"},
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{6.14221, 0.0694613, -0.000999451},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                        },
                                        Texture: &x3d.PixelTexture{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("RgbOpacityCheckerboard"),
                                            },
                                            Image: &x3d.SFImage{2, 2, 4, -16776961, -65536, -65536, -16776961},
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-4.85443, 0.0694381, -0.00149918},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                        },
                                        Texture: &x3d.PixelTexture{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("RgbOpacityCheckerboard"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.Sphere{
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-1.47341, 0.036672, -0.00175095},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                        },
                                        Texture: &x3d.PixelTexture{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("RgbOpacityCheckerboard"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.Cone{
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.31094, 0.0694206, -0.00187683},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                        },
                                        Texture: &x3d.PixelTexture{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("RgbOpacityCheckerboard"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
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
	filename := "../data/rgb_alpha.new.go.x3d"
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