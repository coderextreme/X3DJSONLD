
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
                    Name: stringPtr("creator"),
                    Content: stringPtr("John W Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("December 13 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:44:21 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("title"),
                Content: stringPtr("fors2.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("node"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("position"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Transform{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("transform"),
                                            },
                                            IS: &x3d.IS{
                                                Connect: []x3d.X3DNode{
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("translation"),
                                                        ProtoField: stringPtr("position"),
                                                },
                                                },
                                            },
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
                                    &x3d.PositionInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("NodePosition"),
                                        },
                                        Key: x3d.MFFloat{0.0, 1.0},
                                        KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,5.0,0.0}},
                                    },
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("MoveBall"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                AccessType: stringPtr("inputOutput"),
                                                Type: stringPtr("SFVec3f"),
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("50 50 0"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Name: stringPtr("old"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFTime"),
                                            Name: stringPtr("set_cycle"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("outputOnly"),
                                            Type: stringPtr("MFVec3f"),
                                            Name: stringPtr("keyValue"),
                                        },
//ecmascript:
//			function set_cycle(value) {
//				old = translation;
//				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
//				keyValue = new MFVec3f(old, translation);
//			}
                                        },
                                    },
                                    &x3d.TimeSensor{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("nodeClock"),
                                        },
                                        CycleInterval: doublePtr(3.0),
                                        Loop: boolPtr(true),
                                    },
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("nodeClock"),
                                FromField: stringPtr("cycleTime"),
                                ToNode: stringPtr("MoveBall"),
                                ToField: stringPtr("set_cycle"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("nodeClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("NodePosition"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("MoveBall"),
                                FromField: stringPtr("keyValue"),
                                ToNode: stringPtr("NodePosition"),
                                ToField: stringPtr("set_keyValue"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("NodePosition"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("transform"),
                                ToField: stringPtr("set_translation"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("cyl"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("positionA"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("positionB"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                            },
                                        },
                                        Geometry: &x3d.Extrusion{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("extrusion"),
                                            },
                                            CreaseAngle: floatPtr(0.785),
                                            CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0},[2]float32{-0.92,0.38},[2]float32{-0.71,0.71},[2]float32{-0.38,0.92},[2]float32{0.0,1.0},[2]float32{0.38,0.92},[2]float32{0.71,0.71},[2]float32{0.92,0.38},[2]float32{1.0,0.0}},
                                            Spine: &x3d.MFVec3f{[3]float32{0.0,-50.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,50.0,0.0}},
                                        },
                                    },
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("MoveCylinder"),
                                        },
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("endA"),
                                                    ProtoField: stringPtr("positionA"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("endB"),
                                                ProtoField: stringPtr("positionB"),
                                            },
                                            },
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                AccessType: stringPtr("inputOutput"),
                                                Type: stringPtr("MFVec3f"),
                                                Name: stringPtr("spine"),
                                                Value: stringPtr("0 -50 0 0 0 0 0 50 0"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Name: stringPtr("endA"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Name: stringPtr("endB"),
                                        },
//ecmascript:
//			function set_endA(value) {
//				spine = new MFVec3f(value, spine[1]);
//			}
//
//			function set_endB(value) {
//				spine = new MFVec3f(spine[0], value);
//			}
                                        },
                                    },
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("MoveCylinder"),
                                FromField: stringPtr("spine_changed"),
                                ToNode: stringPtr("extrusion"),
                                ToField: stringPtr("set_spine"),
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Scale: &x3d.SFVec3f{0.1, 0.1, 0.1},
                    Children: []x3d.X3DNode{
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("nodeA"),
                            },
                            Name: stringPtr("node"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("position"),
                                    Value: stringPtr("0 0.7133335 0"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("nodeB"),
                            },
                            Name: stringPtr("node"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("position"),
                                    Value: stringPtr("0 0.7133335 0"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("linkA"),
                            },
                            Name: stringPtr("cyl"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("positionA"),
                                    Value: stringPtr("0 0.7133335 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("positionB"),
                                Value: stringPtr("0 0.7133335 0"),
                            },
                            },
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("nodeA"),
                    FromField: stringPtr("position_changed"),
                    ToNode: stringPtr("linkA"),
                    ToField: stringPtr("set_positionA"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("nodeB"),
                    FromField: stringPtr("position_changed"),
                    ToNode: stringPtr("linkA"),
                    ToField: stringPtr("set_positionB"),
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
	filename := "../data/fors2.new.go.x3d"
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