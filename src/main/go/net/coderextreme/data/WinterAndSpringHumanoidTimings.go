
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("WinterAndSpringHumanoidTimings.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Example animation timings, manually translated from tool outputs and export."),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Katy Schildmeyer"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Carol McDonald"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joe Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("2 July 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("9 July 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:30 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("hint"),
                Content: stringPtr("MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Cinema 4D https://www.maxon.net/en/cinema-4d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("WinterAndSpringHumanoidTimings.x3d"),
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("EntryView1"),
                    },
                    Description: stringPtr("Hello characters 1"),
                    Position: &x3d.SFVec3f{0.0, 2.0, 40.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("EntryView2"),
                    },
                    Description: stringPtr("Hello characters 2"),
                    Position: &x3d.SFVec3f{-15.0, 10.0, 30.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -0.643501},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 10.0, 10.0},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TextRoot"),
                        },
                        Translation: &x3d.SFVec3f{6.8557, 0.95, 0.5},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ModelDescriptionText"),
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.960784, 0.894118, 0.0},
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"This scene tests", "", "experimental approaches", "", "for human animation"},
                                FontStyle: &x3d.FontStyle{
                                    Family: x3d.MFString{"SANS"},
                                    Style: stringPtr("BOLD"),
                                    Size: floatPtr(0.8),
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Root4"),
                        },
                        Translation: &x3d.SFVec3f{-7.9962, 0.4, 3.0},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Root5"),
                        },
                        Translation: &x3d.SFVec3f{-8.0962, 0.4, 5.6},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Root6"),
                        },
                        Translation: &x3d.SFVec3f{-8.0962, 0.4, 6.4},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{6.8557,0.95,0.5},[3]float32{6.8557,0.95,0.5},[3]float32{6.8557,0.95,0.5},[3]float32{9.8557,0.95,3.5},[3]float32{9.8557,0.95,3.5},[3]float32{9.8557,0.95,3.5},[3]float32{14.3558,0.95,8.0},[3]float32{16.8558,0.95,15.0},[3]float32{21.3557,0.95,24.5},[3]float32{21.3557,0.95,24.5},[3]float32{21.3557,0.95,24.5}},
                    Metadata: &x3d.MetadataString{
                        Name: stringPtr("poses"),
                        Value: x3d.MFString{"Gramps_Stand01", "Gramps_Stand01", "Gramps_Walk01", "Gramps_Stand02", "Gramps_Turn01", "Gramps_Walk01", "Gramps_Walk02", "Gramps_Skip01", "Gramps_Stand03", "Gramps_Stand03", "Gramps_Stand03"},
                    },
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Leif_HumanoidRoot_TranslationInterpolator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.223, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-7.9962,0.4,3.0},[3]float32{-7.9962,0.4,3.0},[3]float32{-7.9962,0.4,3.0},[3]float32{-7.9962,0.4,3.0},[3]float32{9.004,0.475,3.4999},[3]float32{11.5048,0.475,3.3699},[3]float32{16.0038,0.475,7.8699},[3]float32{18.5038,0.475,14.8699},[3]float32{23.0038,0.475,24.3699},[3]float32{23.0038,0.475,24.3699},[3]float32{23.0038,0.475,24.3699}},
                    Metadata: &x3d.MetadataString{
                        Name: stringPtr("poses"),
                        Value: x3d.MFString{"Leif_Stand01", "Leif_Stand01", "Leif_Stand01", "Leif_Run01", "Leif_Turn01", "Leif_Walk01", "Leif_Walk01", "Leif_Skip01", "Leif_Stand01", "Leif_Stand01", "Leif_Stand01"},
                    },
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.225, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-8.0962,0.4,5.6},[3]float32{-8.0962,0.4,5.6},[3]float32{-8.0962,0.4,5.6},[3]float32{-8.0962,0.4,5.6},[3]float32{8.9038,0.475,4.0999},[3]float32{10.6538,0.475,3.3499},[3]float32{15.1538,0.475,7.8499},[3]float32{17.6538,0.475,14.8499},[3]float32{22.1538,0.475,24.3499},[3]float32{22.1538,0.475,24.3499},[3]float32{22.1538,0.475,24.3499}},
                    Metadata: &x3d.MetadataString{
                        Name: stringPtr("poses"),
                        Value: x3d.MFString{"Lily_Stand01", "Lily_Stand01", "Lily_Stand01", "Leif_Run01", "Lily_Turn01", "Lily_Walk01", "Lily_Walk01", "Lily_Skip01", "Lily_Stand01", "Lily_Stand01", "Lily_Stand01"},
                    },
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.227, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-8.0962,0.4,6.4},[3]float32{-8.0962,0.4,6.4},[3]float32{-8.0962,0.4,6.4},[3]float32{-8.0962,0.4,6.4},[3]float32{9.40338,0.475,4.3999},[3]float32{9.1538,0.475,3.2699},[3]float32{13.6538,0.475,7.7699},[3]float32{16.1538,0.475,14.7699},[3]float32{20.6538,0.475,24.2699},[3]float32{20.6538,0.475,24.2699},[3]float32{20.6538,0.475,24.2699}},
                    Metadata: &x3d.MetadataString{
                        Name: stringPtr("poses"),
                        Value: x3d.MFString{"Tufani_Stand01", "Tufani_Stand01", "Tufani_Stand01", "Tufani_Run01", "Tufani_Turn01", "Tufani_Walk01", "Tufani_Walk01", "Tufani_Skip01", "Tufani_Stand01", "Tufani_Stand01", "Tufani_Stand01"},
                    },
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background3Black"),
                    },
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background4SkyBlueGreenGrass"),
                    },
                    SkyColor: &x3d.MFColor{[3]float32{0.0,0.71,0.886}},
                    GroundAngle: x3d.MFFloat{1.57},
                    GroundColor: &x3d.MFColor{[3]float32{0.356863,0.639216,0.0},[3]float32{0.721569,1.0,0.501961}},
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background5LightGrey"),
                    },
                    SkyColor: &x3d.MFColor{[3]float32{0.827,0.827,0.827}},
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background6DarkGrey"),
                    },
                    SkyColor: &x3d.MFColor{[3]float32{0.6,0.2,0.2}},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Clock10Seconds"),
                    },
                    CycleInterval: doublePtr(5.0),
                    Loop: boolPtr(true),
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Clock100Seconds"),
                    },
                    Enabled: boolPtr(false),
                    CycleInterval: doublePtr(100.0),
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background3Sequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFBool{true, true, true, false, false, false, false, false, false, false, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background4Sequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFBool{false, false, false, true, true, false, false, false, false, false, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background5Sequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFBool{false, false, false, false, false, true, true, true, false, false, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Background6Sequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.043, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                    KeyValue: &x3d.MFBool{false, false, false, false, false, false, false, false, true, true, true},
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background3Sequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background3Black"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background4Sequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background4SkyBlueGreenGrass"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background5Sequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background5LightGrey"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background6Sequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background6DarkGrey"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background3Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background4Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background5Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background6Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background3Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background4Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background5Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background6Sequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Leif_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock10Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Leif_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("TextRoot"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Leif_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Root4"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Root5"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Root6"),
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
	filename := "../data/WinterAndSpringHumanoidTimings.new.go.x3d"
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