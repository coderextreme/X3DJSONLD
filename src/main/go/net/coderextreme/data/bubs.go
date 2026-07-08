
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
                    Content: stringPtr("bubs.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Tour around a prismatic sphere"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"EXAMINE"},
                },
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 0.0, 4.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, 0.0},
                    Description: stringPtr("Bubbles in action"),
                },
                &x3d.Background{
                    BackUrl: x3d.MFString{"../resources/images/BK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"},
                    BottomUrl: x3d.MFString{"../resources/images/BT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"},
                    FrontUrl: x3d.MFString{"../resources/images/FR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"},
                    LeftUrl: x3d.MFString{"../resources/images/LF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"},
                    RightUrl: x3d.MFString{"../resources/images/RT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"},
                    TopUrl: x3d.MFString{"../resources/images/TP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"},
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Bubble"),
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("body_trans"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Geometry: &x3d.Sphere{
                                            Radius: floatPtr(0.25),
                                        },
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                Transparency: floatPtr(0.2),
                                            },
                                        },
                                    },
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("bounce1"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("scale"),
                                                AccessType: stringPtr("inputOutput"),
                                                Type: stringPtr("SFVec3f"),
                                                Value: stringPtr("1 1 1"),
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
                                            Name: stringPtr("scalvel"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0 0 0"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("set_fraction"),
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFFloat"),
                                        },
//ecmascript:
//function initialize() {
//    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);
//
//    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
//}
//
//function set_fraction(value) {
//    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
//    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
//    // if you get to far away or too big, explode
//    if ( Math.abs(translation.x) > 256) {
//	translation.x = 0;
//	initialize();
//    }
//    if ( Math.abs(translation.y) > 256) {
//	translation.y = 0;
//	initialize();
//    }
//    if ( Math.abs(translation.z) > 256) {
//	translation.z = 0;
//	initialize();
//    }
//    if (Math.abs(scale.x) > 20) {
//	scale.x = scale.x/20;
//	translation.x = 0;
//	initialize();
//    }
//    if (Math.abs(scale.y) > 20) {
//	scale.y = scale.y/20;
//	translation.y = 0;
//	initialize();
//    }
//    if (Math.abs(scale.z) > 20) {
//	scale.z = scale.z/20;
//	translation.z = 0;
//	initialize();
//    }
//}
                                        },
                                    },
                                    &x3d.TimeSensor{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("bubbleClock"),
                                        },
                                        CycleInterval: doublePtr(10.0),
                                        Loop: boolPtr(true),
                                    },
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("bounce1"),
                                        FromField: stringPtr("translation_changed"),
                                        ToNode: stringPtr("body_trans"),
                                        ToField: stringPtr("set_translation"),
                                    },
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("bounce1"),
                                        FromField: stringPtr("scale_changed"),
                                        ToNode: stringPtr("body_trans"),
                                        ToField: stringPtr("set_scale"),
                                    },
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("bubbleClock"),
                                        FromField: stringPtr("fraction_changed"),
                                        ToNode: stringPtr("bounce1"),
                                        ToField: stringPtr("set_fraction"),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("Bubble"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("bubbleA"),
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("Bubble"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("bubbleB"),
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("Bubble"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("bubbleC"),
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("Bubble"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("bubbleD"),
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
	filename := "../data/bubs.new.go.x3d"
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