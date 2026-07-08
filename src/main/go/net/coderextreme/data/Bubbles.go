
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
                    Content: stringPtr("Bubbles.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Bubble animation used by Nancy Diving example."),
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
                Content: stringPtr("23 May 2020"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"),
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
                    Title: stringPtr("Bubbles.x3d"),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Bubbles"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Bubble"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.TimeSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubbleClock"),
                                    },
                                    CycleInterval: doublePtr(6.0),
                                    Loop: boolPtr(true),
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath1"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.5, 0.8, 0.9, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.75,0.75,0.75},[3]float32{0.86,0.86,0.86},[3]float32{0.99,0.998,0.9876},[3]float32{1.272,1.9044,0.9509}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath2"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.3, 0.64, 0.85, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.1,0.1,0.1},[3]float32{0.2,0.4,0.25},[3]float32{0.3,0.5,0.46},[3]float32{0.75,0.5,0.575},[3]float32{0.038483478,1.989,1.098373}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath3"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.1, 0.45, 0.7, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.01,0.01,0.01},[3]float32{0.25,0.35,0.0045},[3]float32{0.55,0.6,0.0055},[3]float32{0.66,0.665,0.00655},[3]float32{1.555,1.09043,0.005734}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath4"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.5, 0.6, 0.8, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.5,0.5,0.005},[3]float32{0.6,0.6,0.006},[3]float32{0.75,0.75,0.0075},[3]float32{1.948594,1.3983,0.009009349}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath5"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.25, 0.35, 0.65, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.5,0.5,0.005},[3]float32{0.6,0.6,0.006},[3]float32{0.75,0.75,0.0075},[3]float32{1.84444,1.22222,0.1}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath6"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.15, 0.22235, 0.55565, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.235,0.3455,0.0055},[3]float32{0.356,0.676,0.00456},[3]float32{0.5675,0.75,0.0074565},[3]float32{1.098,1.0343,0.14}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath7"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.2425, 0.4535, 0.6775, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.12345,0.2225,0.00335},[3]float32{0.786,0.456,0.00666},[3]float32{0.74555,0.7335,0.00234575},[3]float32{0.08787,1.022,0.12}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath8"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.1125, 0.5535, 0.97865, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.1235,0.05,0.00125},[3]float32{0.5666,0.4346,0.005556},[3]float32{0.8975,0.34575,0.0098775},[3]float32{1.8787,1.686,0.86}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath9"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.0025, 0.035, 0.65, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.522,0.5445,0.0057},[3]float32{0.6543,0.226,0.0055},[3]float32{0.45575,0.4375,0.0067},[3]float32{1.8787,2.0,0.1545}},
                                },
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BubblePath10"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.00025, 0.035, 0.6895, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.8765,0.445,0.00335},[3]float32{0.3336,0.4446,0.005556},[3]float32{0.765,0.75,0.0075},[3]float32{1.0,1.0,0.1}},
                                },
                                &x3d.Transform{
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble1"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.025),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble2"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.055),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble3"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.065),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble4"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.015),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble5"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.075),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble6"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.005),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble7"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.035),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble8"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.05),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble9"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.045),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("bubble10"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.035),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath1"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath2"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath3"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath4"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath5"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath6"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath7"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath8"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath9"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("fraction_changed"),
                                            FromNode: stringPtr("BubbleClock"),
                                            ToField: stringPtr("set_fraction"),
                                            ToNode: stringPtr("BubblePath10"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath1"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble1"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath2"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble2"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath3"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble3"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath4"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble4"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath5"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble5"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath6"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble6"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath7"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble7"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath8"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble8"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath9"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble9"),
                                        },
                                        &x3d.X3DRoute{
                                            FromField: stringPtr("value_changed"),
                                            FromNode: stringPtr("BubblePath10"),
                                            ToField: stringPtr("set_translation"),
                                            ToNode: stringPtr("bubble10"),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.0,0.0,0.6}},
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
	filename := "../data/Bubbles.new.go.x3d"
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