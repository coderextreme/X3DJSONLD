
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
                    Content: stringPtr("indexedfaceset_pixeltexture_entire.x3d"),
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
                Content: stringPtr("Tue, 09 Sep 2025 07:41:46 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.Viewpoint{
                    Description: stringPtr("Front View"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Rear View"),
                    Position: &x3d.SFVec3f{0.0, 0.0, -10.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Top View"),
                    Position: &x3d.SFVec3f{0.0, 10.0, 0.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Bottom View"),
                    Position: &x3d.SFVec3f{0.0, -10.0, 0.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Right View"),
                    Position: &x3d.SFVec3f{10.0, 0.0, 0.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Left View"),
                    Position: &x3d.SFVec3f{-10.0, 0.0, 0.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"EXAMINE", "WALK", "FLY", "ANY"},
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                        },
                        Texture: &x3d.PixelTexture{
                            Image: &x3d.SFImage{2, 2, 4, -16776961, 16711935, -1, -65281},
                            RepeatS: boolPtr(false),
                            RepeatT: boolPtr(false),
                            TextureProperties: &x3d.TextureProperties{
                                MagnificationFilter: stringPtr("NEAREST_PIXEL"),
                            },
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        CoordIndex: []int32{0, 1, 3, 2, -1, 4, 5, 7, 6, -1, 6, 7, 1, 0, -1, 2, 3, 5, 4, -1, 6, 0, 2, 4, -1, 1, 7, 5, 3, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{-2.0,1.5,1.0},[3]float32{-2.0,-1.5,1.0},[3]float32{2.0,1.5,1.0},[3]float32{2.0,-1.5,1.0},[3]float32{2.0,1.5,-1.0},[3]float32{2.0,-1.5,-1.0},[3]float32{-2.0,1.5,-1.0},[3]float32{-2.0,-1.5,-1.0}},
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
	filename := "../data/indexedfaceset_pixeltexture_entire.new.go.x3d"
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