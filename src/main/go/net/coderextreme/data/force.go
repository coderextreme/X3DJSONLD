
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
                    Name: stringPtr("creator"),
                    Content: stringPtr("John W Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("December 13 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("July 14 2025"),
            },
            &x3d.Meta{
                Name: stringPtr("title"),
                Content: stringPtr("force.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("beginnings of a force directed graph in 3D"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("node"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("position"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Value: stringPtr("0 0 0"),
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
                                                Geometry: &x3d.Sphere{
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                    },
                                                },
                                            },
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{1.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        Geometry: &x3d.Text{
                                                            String: x3d.MFString{"Node"},
                                                            FontStyle: &x3d.FontStyle{
                                                                Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                                                Size: floatPtr(5.0),
                                                            },
                                                        },
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                            },
                                                        },
                                                    },
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
                                                Name: stringPtr("translation"),
                                                AccessType: stringPtr("inputOutput"),
                                                Type: stringPtr("SFVec3f"),
                                                Value: stringPtr("50 50 0"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("old"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0 0 0"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("set_cycle"),
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFTime"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("keyValue"),
                                            AccessType: stringPtr("outputOnly"),
                                            Type: stringPtr("MFVec3f"),
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
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("nodeClock"),
                                        FromField: stringPtr("cycleTime"),
                                        ToNode: stringPtr("MoveBall"),
                                        ToField: stringPtr("set_cycle"),
                                    },
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("nodeClock"),
                                        FromField: stringPtr("fraction_changed"),
                                        ToNode: stringPtr("NodePosition"),
                                        ToField: stringPtr("set_fraction"),
                                    },
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("MoveBall"),
                                        FromField: stringPtr("keyValue"),
                                        ToNode: stringPtr("NodePosition"),
                                        ToField: stringPtr("keyValue"),
                                    },
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("NodePosition"),
                                        FromField: stringPtr("value_changed"),
                                        ToNode: stringPtr("transform"),
                                        ToField: stringPtr("set_translation"),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("cyl"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("set_positionA"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Value: stringPtr("0 0 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_positionB"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("50 50 50"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Geometry: &x3d.Extrusion{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("extrusion"),
                                            },
                                            CreaseAngle: floatPtr(0.785),
                                            CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0},[2]float32{-0.92,0.38},[2]float32{-0.71,0.71},[2]float32{-0.38,0.92},[2]float32{0.0,1.0},[2]float32{0.38,0.92},[2]float32{0.71,0.71},[2]float32{0.92,0.38},[2]float32{1.0,0.0}},
                                            Spine: &x3d.MFVec3f{[3]float32{0.0,-50.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,50.0,0.0}},
                                        },
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                            },
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
                                                    ProtoField: stringPtr("set_positionA"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("endB"),
                                                ProtoField: stringPtr("set_positionB"),
                                            },
                                            },
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("spine"),
                                                AccessType: stringPtr("inputOutput"),
                                                Type: stringPtr("MFVec3f"),
                                                Value: stringPtr("0 -50 0 0 0 0 0 50 0"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("endA"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0 0 0"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("endB"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("50 50 50"),
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
                                    &x3d.X3DRoute{
                                        FromNode: stringPtr("MoveCylinder"),
                                        FromField: stringPtr("spine"),
                                        ToNode: stringPtr("extrusion"),
                                        ToField: stringPtr("set_spine"),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("HoldsContent"),
                        },
                        Scale: &x3d.SFVec3f{0.1, 0.1, 0.1},
                    Children: []x3d.X3DNode{
                        &x3d.PlaneSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("clickGenerator"),
                            },
                            MinPosition: &x3d.SFVec2f{-50.0, -50.0},
                            MaxPosition: &x3d.SFVec2f{50.0, 50.0},
                            Description: stringPtr("click on background to add nodes, click on nodes to add links"),
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("nodeA"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("position"),
                                    Value: stringPtr("0 0 0"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("nodeB"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("position"),
                                    Value: stringPtr("50 50 50"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("nodeC"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("position"),
                                    Value: stringPtr("-50 -50 -50"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("nodeD"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("position"),
                                    Value: stringPtr("50 50 -50"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("cyl"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("linkA"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("cyl"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("linkB"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("cyl"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("linkC"),
                            },
                        },
                    },
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("clickHandler"),
                    },
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("counter"),
                            AccessType: stringPtr("inputOutput"),
                            Value: stringPtr("0"),
                            Type: stringPtr("SFInt32"),
                    },
                    &x3d.Field{
                        Name: stringPtr("add_node"),
                        AccessType: stringPtr("inputOnly"),
                        Value: stringPtr("false"),
                        Type: stringPtr("SFBool"),
                    },
//<field accessType="outputOnly" name="node_changed" type="SFNode"/>
//<field name="ModifiableNode" type="SFNode" accessType="inputOutput">
//<Transform USE="HoldsContent"/>
//</field>
//ecmascript:
//	function add_node(value) {
//                // Browser.print('hey ', counter);
//                counter = counter++;
//		Browser.appendTo(Browser.getDocument().querySelector("field [name=ModifiableNode]"),
//			{ "ProtoInstance":
//				{ "@name":"node",
//				  "@DEF":"node'+counter+'",
//				  "fieldValue": [
//					{
//						 "@name":"position",
//						 "@value":[0.0,0.0,0.0]
//					}
//				  ]
//				}
//			});
//
//        }
                    },
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("clickGenerator"),
                    FromField: stringPtr("isActive"),
                    ToNode: stringPtr("clickHandler"),
                    ToField: stringPtr("add_node"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("nodeA"),
                    FromField: stringPtr("position"),
                    ToNode: stringPtr("linkA"),
                    ToField: stringPtr("set_positionA"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("nodeB"),
                    FromField: stringPtr("position"),
                    ToNode: stringPtr("linkA"),
                    ToField: stringPtr("set_positionB"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("nodeA"),
                    FromField: stringPtr("position"),
                    ToNode: stringPtr("linkB"),
                    ToField: stringPtr("set_positionA"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("nodeC"),
                    FromField: stringPtr("position"),
                    ToNode: stringPtr("linkB"),
                    ToField: stringPtr("set_positionB"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("nodeA"),
                    FromField: stringPtr("position"),
                    ToNode: stringPtr("linkC"),
                    ToField: stringPtr("set_positionA"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("nodeD"),
                    FromField: stringPtr("position"),
                    ToNode: stringPtr("linkC"),
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
	fmt.Println("\n--- Validating XML against X3D 4.1 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.1 schema!")
	*/
	filename := "../data/force.new.go.x3d"
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