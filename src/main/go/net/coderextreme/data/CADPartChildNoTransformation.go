
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
        Profile: stringPtr("CADInterchange"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("CADGeometry"),
                    Level: int32Ptr(2),
            },
            &x3d.Component{
                Name: stringPtr("EnvironmentalEffects"),
                Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("CADPartChildNoTransformation.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Vince Marchetti bushing generation using python scripts"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/member-only/mantis/view.php?id=528"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("This scene is intended for specification development only."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("29 June 2012"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("20 October 2019"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
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
                    Title: stringPtr("CADPartChildNoTransformation.x3d"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.9607843,1.0,0.9607843}},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Hello CAD bushing"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.321751},
                    Position: &x3d.SFVec3f{0.0, 5.0, 15.0},
                },
                &x3d.CADAssembly{
                    Name: stringPtr("DesignPatternAssembly"),
                    &x3d.CADPart{
                        Name: stringPtr("CADPartExample"),
//the rotation and translation attributes serve to position the bushing within the assembly
                        &x3d.CADFace{
                            Name: stringPtr("outerSurface"),
                            Shape: &x3d.Shape{
//note solid='true' and so one-sided external rendering only
                                Geometry: &x3d.Cylinder{
                                    Bottom: boolPtr(false),
                                    Height: floatPtr(3.0),
                                    Radius: floatPtr(2.0),
                                    Top: boolPtr(false),
                                },
                                Appearance: &x3d.Appearance{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("AppearanceGrey"),
                                    },
                                    Material: &x3d.Material{
                                    },
                                },
                            },
                        },
                        &x3d.CADFace{
                            Name: stringPtr("innerSurface"),
                            Shape: &x3d.Shape{
//note solid='false' and so two-sided internal + external rendering
                                Geometry: &x3d.Cylinder{
                                    Bottom: boolPtr(false),
                                    Height: floatPtr(3.0),
                                    Solid: boolPtr(false),
                                    Top: boolPtr(false),
                                },
                                Appearance: &x3d.Appearance{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("AppearanceGrey"),
                                    },
                                },
                            },
                        },
                        &x3d.CADFace{
                            Name: stringPtr("topCap"),
                            Shape: &x3d.Shape{
                                Geometry: &x3d.IndexedTriangleSet{
                                    Index: []int32{0, 1, 2, 2, 1, 3, 2, 3, 4, 4, 3, 5, 4, 5, 6, 6, 5, 7, 6, 7, 8, 8, 7, 9, 8, 9, 10, 10, 9, 11, 10, 11, 12, 12, 11, 13, 12, 13, 14, 14, 13, 15, 14, 15, 16, 16, 15, 17, 16, 17, 18, 18, 17, 19, 18, 19, 20, 20, 19, 21, 20, 21, 22, 22, 21, 23, 22, 23, 24, 24, 23, 25, 24, 25, 26, 26, 25, 27, 26, 27, 28, 28, 27, 29, 28, 29, 30, 30, 29, 31, 30, 31, 32, 32, 31, 33, 32, 33, 34, 34, 33, 35, 34, 35, 36, 36, 35, 37, 36, 37, 38, 38, 37, 39, 38, 39, 40, 40, 39, 41, 40, 41, 42, 42, 41, 43, 42, 43, 44, 44, 43, 45, 44, 45, 46, 46, 45, 47, 46, 47, 48, 48, 47, 49, 48, 49, 50, 50, 49, 51, 50, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 56, 55, 57, 56, 57, 58, 58, 57, 59, 58, 59, 60, 60, 59, 61, 60, 61, 62, 62, 61, 63, 62, 63, 64, 64, 63, 65},
                                    Coord: &x3d.Coordinate{
                                        Point: &x3d.MFVec3f{[3]float32{2.0,1.5,0.0},[3]float32{1.0,1.5,0.0},[3]float32{1.9616,1.5,0.3902},[3]float32{0.9808,1.5,0.1951},[3]float32{1.8478,1.5,0.7654},[3]float32{0.9239,1.5,0.3827},[3]float32{1.6629,1.5,1.1111},[3]float32{0.8315,1.5,0.5556},[3]float32{1.4142,1.5,1.4142},[3]float32{0.7071,1.5,0.7071},[3]float32{1.1111,1.5,1.6629},[3]float32{0.5556,1.5,0.8315},[3]float32{0.7654,1.5,1.8478},[3]float32{0.3827,1.5,0.9239},[3]float32{0.3902,1.5,1.9616},[3]float32{0.1951,1.5,0.9808},[3]float32{0.0,1.5,2.0},[3]float32{0.0,1.5,1.0},[3]float32{-0.3902,1.5,1.9616},[3]float32{-0.1951,1.5,0.9808},[3]float32{-0.7654,1.5,1.8478},[3]float32{-0.3827,1.5,0.9239},[3]float32{-1.1111,1.5,1.6629},[3]float32{-0.5556,1.5,0.8315},[3]float32{-1.4142,1.5,1.4142},[3]float32{-0.7071,1.5,0.7071},[3]float32{-1.6629,1.5,1.1111},[3]float32{-0.8315,1.5,0.5556},[3]float32{-1.8478,1.5,0.7654},[3]float32{-0.9239,1.5,0.3827},[3]float32{-1.9616,1.5,0.3902},[3]float32{-0.9808,1.5,0.1951},[3]float32{-2.0,1.5,0.0},[3]float32{-1.0,1.5,0.0},[3]float32{-1.9616,1.5,-0.3902},[3]float32{-0.9808,1.5,-0.1951},[3]float32{-1.8478,1.5,-0.7654},[3]float32{-0.9239,1.5,-0.3827},[3]float32{-1.6629,1.5,-1.1111},[3]float32{-0.8315,1.5,-0.5556},[3]float32{-1.4142,1.5,-1.4142},[3]float32{-0.7071,1.5,-0.7071},[3]float32{-1.1111,1.5,-1.6629},[3]float32{-0.5556,1.5,-0.8315},[3]float32{-0.7654,1.5,-1.8478},[3]float32{-0.3827,1.5,-0.9239},[3]float32{-0.3902,1.5,-1.9616},[3]float32{-0.1951,1.5,-0.9808},[3]float32{0.0,1.5,-2.0},[3]float32{0.0,1.5,-1.0},[3]float32{0.3902,1.5,-1.9616},[3]float32{0.1951,1.5,-0.9808},[3]float32{0.7654,1.5,-1.8478},[3]float32{0.3827,1.5,-0.9239},[3]float32{1.1111,1.5,-1.6629},[3]float32{0.5556,1.5,-0.8315},[3]float32{1.4142,1.5,-1.4142},[3]float32{0.7071,1.5,-0.7071},[3]float32{1.6629,1.5,-1.1111},[3]float32{0.8315,1.5,-0.5556},[3]float32{1.8478,1.5,-0.7654},[3]float32{0.9239,1.5,-0.3827},[3]float32{1.9616,1.5,-0.3902},[3]float32{0.9808,1.5,-0.1951},[3]float32{2.0,1.5,0.0},[3]float32{1.0,1.5,0.0}},
                                    },
                                },
                                Appearance: &x3d.Appearance{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("AppearanceGrey"),
                                    },
                                },
                            },
                        },
                        &x3d.CADFace{
                            Name: stringPtr("bottomCap"),
                            Shape: &x3d.Shape{
                                Geometry: &x3d.IndexedTriangleSet{
                                    Index: []int32{0, 1, 2, 2, 1, 3, 2, 3, 4, 4, 3, 5, 4, 5, 6, 6, 5, 7, 6, 7, 8, 8, 7, 9, 8, 9, 10, 10, 9, 11, 10, 11, 12, 12, 11, 13, 12, 13, 14, 14, 13, 15, 14, 15, 16, 16, 15, 17, 16, 17, 18, 18, 17, 19, 18, 19, 20, 20, 19, 21, 20, 21, 22, 22, 21, 23, 22, 23, 24, 24, 23, 25, 24, 25, 26, 26, 25, 27, 26, 27, 28, 28, 27, 29, 28, 29, 30, 30, 29, 31, 30, 31, 32, 32, 31, 33, 32, 33, 34, 34, 33, 35, 34, 35, 36, 36, 35, 37, 36, 37, 38, 38, 37, 39, 38, 39, 40, 40, 39, 41, 40, 41, 42, 42, 41, 43, 42, 43, 44, 44, 43, 45, 44, 45, 46, 46, 45, 47, 46, 47, 48, 48, 47, 49, 48, 49, 50, 50, 49, 51, 50, 51, 52, 52, 51, 53, 52, 53, 54, 54, 53, 55, 54, 55, 56, 56, 55, 57, 56, 57, 58, 58, 57, 59, 58, 59, 60, 60, 59, 61, 60, 61, 62, 62, 61, 63, 62, 63, 64, 64, 63, 65},
                                    Coord: &x3d.Coordinate{
                                        Point: &x3d.MFVec3f{[3]float32{2.0,-1.5,0.0},[3]float32{1.0,-1.5,0.0},[3]float32{1.9616,-1.5,-0.3902},[3]float32{0.9808,-1.5,-0.1951},[3]float32{1.8478,-1.5,-0.7654},[3]float32{0.9239,-1.5,-0.3827},[3]float32{1.6629,-1.5,-1.1111},[3]float32{0.8315,-1.5,-0.5556},[3]float32{1.4142,-1.5,-1.4142},[3]float32{0.7071,-1.5,-0.7071},[3]float32{1.1111,-1.5,-1.6629},[3]float32{0.5556,-1.5,-0.8315},[3]float32{0.7654,-1.5,-1.8478},[3]float32{0.3827,-1.5,-0.9239},[3]float32{0.3902,-1.5,-1.9616},[3]float32{0.1951,-1.5,-0.9808},[3]float32{0.0,-1.5,-2.0},[3]float32{0.0,-1.5,-1.0},[3]float32{-0.3902,-1.5,-1.9616},[3]float32{-0.1951,-1.5,-0.9808},[3]float32{-0.7654,-1.5,-1.8478},[3]float32{-0.3827,-1.5,-0.9239},[3]float32{-1.1111,-1.5,-1.6629},[3]float32{-0.5556,-1.5,-0.8315},[3]float32{-1.4142,-1.5,-1.4142},[3]float32{-0.7071,-1.5,-0.7071},[3]float32{-1.6629,-1.5,-1.1111},[3]float32{-0.8315,-1.5,-0.5556},[3]float32{-1.8478,-1.5,-0.7654},[3]float32{-0.9239,-1.5,-0.3827},[3]float32{-1.9616,-1.5,-0.3902},[3]float32{-0.9808,-1.5,-0.1951},[3]float32{-2.0,-1.5,0.0},[3]float32{-1.0,-1.5,0.0},[3]float32{-1.9616,-1.5,0.3902},[3]float32{-0.9808,-1.5,0.1951},[3]float32{-1.8478,-1.5,0.7654},[3]float32{-0.9239,-1.5,0.3827},[3]float32{-1.6629,-1.5,1.1111},[3]float32{-0.8315,-1.5,0.5556},[3]float32{-1.4142,-1.5,1.4142},[3]float32{-0.7071,-1.5,0.7071},[3]float32{-1.1111,-1.5,1.6629},[3]float32{-0.5556,-1.5,0.8315},[3]float32{-0.7654,-1.5,1.8478},[3]float32{-0.3827,-1.5,0.9239},[3]float32{-0.3902,-1.5,1.9616},[3]float32{-0.1951,-1.5,0.9808},[3]float32{0.0,-1.5,2.0},[3]float32{0.0,-1.5,1.0},[3]float32{0.3902,-1.5,1.9616},[3]float32{0.1951,-1.5,0.9808},[3]float32{0.7654,-1.5,1.8478},[3]float32{0.3827,-1.5,0.9239},[3]float32{1.1111,-1.5,1.6629},[3]float32{0.5556,-1.5,0.8315},[3]float32{1.4142,-1.5,1.4142},[3]float32{0.7071,-1.5,0.7071},[3]float32{1.6629,-1.5,1.1111},[3]float32{0.8315,-1.5,0.5556},[3]float32{1.8478,-1.5,0.7654},[3]float32{0.9239,-1.5,0.3827},[3]float32{1.9616,-1.5,0.3902},[3]float32{0.9808,-1.5,0.1951},[3]float32{2.0,-1.5,0.0},[3]float32{1.0,-1.5,0.0}},
                                    },
                                },
                                Appearance: &x3d.Appearance{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("AppearanceGrey"),
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
	filename := "../data/CADPartChildNoTransformation.new.go.x3d"
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