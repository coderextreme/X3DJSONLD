
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
        Profile: stringPtr("Interactive"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("TestCycleTimeStart.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Andreas"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Joe D. Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Test design patterns for animation control."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("10 September 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 02:11:30 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("TestCycleTimeStart.x3d"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("hello in there"),
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("REDTIME1"),
                    },
                    Loop: boolPtr(true),
                    StopTime: doublePtr(1757297490.555),
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("GREENTIME2"),
                    },
                    CycleInterval: doublePtr(5.0),
                    StartTime: doublePtr(1757297490.555),
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BLUETIME3"),
                    },
                    CycleInterval: doublePtr(10.0),
                },
                &x3d.BooleanFilter{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("GREENFILTER"),
                    },
                },
                &x3d.TimeTrigger{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BLUETRIGGER"),
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("REDBALL"),
                        },
                        Translation: &x3d.SFVec3f{-0.4400005, 0.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("GREENBALL"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("BLUEBALL"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("REDINTERP1"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{2.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{-2.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("GREENINTERP2"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,2.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,-2.0,0.0},[3]float32{0.0,0.0,0.0}},
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BLUEINTERP3"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-2.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,2.0,0.0},[3]float32{0.0,0.0,0.0}},
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("REDTIME1"),
                    FromField: stringPtr("cycleTime"),
                    ToNode: stringPtr("REDTIME1"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("REDTIME1"),
                    FromField: stringPtr("stopTime_changed"),
                    ToNode: stringPtr("GREENTIME2"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("GREENTIME2"),
                    FromField: stringPtr("isActive"),
                    ToNode: stringPtr("GREENFILTER"),
                    ToField: stringPtr("set_boolean"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("GREENFILTER"),
                    FromField: stringPtr("inputFalse"),
                    ToNode: stringPtr("BLUETRIGGER"),
                    ToField: stringPtr("set_boolean"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("BLUETRIGGER"),
                    FromField: stringPtr("triggerTime"),
                    ToNode: stringPtr("BLUETIME3"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("REDTIME1"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("REDINTERP1"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("REDINTERP1"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("REDBALL"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("GREENTIME2"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("GREENINTERP2"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("GREENINTERP2"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("GREENBALL"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("BLUETIME3"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("BLUEINTERP3"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("BLUEINTERP3"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BLUEBALL"),
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
	fmt.Println("\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")
	*/
	filename := "../data/TestCycleTimeStart.new.go.x3d"
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