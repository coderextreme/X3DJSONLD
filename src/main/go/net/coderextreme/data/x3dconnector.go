
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("x3dconnector.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Lost, Doug Sanden I think"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("manual"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("a generic proto to connect two objects"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 0.0, 5.0},
                    Description: stringPtr("Only Viewpoint"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.4,0.4,0.4}},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("G1"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.7, 0.2, 0.2},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.1),
                            },
                        },
                        &x3d.PlaneSensor{
                            Description: stringPtr("Grab to move"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("PS1"),
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("PS1"),
                            FromField: stringPtr("translation_changed"),
                            ToNode: stringPtr("G1"),
                            ToField: stringPtr("set_translation"),
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("G2"),
                        },
                        Translation: &x3d.SFVec3f{1.0, -1.0, 0.01},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.2, 0.7, 0.2},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.1),
                            },
                        },
                        &x3d.PlaneSensor{
                            Description: stringPtr("Grab to move"),
                            Offset: &x3d.SFVec3f{1.0, -1.0, 0.01},
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("PS2"),
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("PS2"),
                            FromField: stringPtr("translation_changed"),
                            ToNode: stringPtr("G2"),
                            ToField: stringPtr("set_translation"),
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("transC1"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("rotscaleC1"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.2, 0.7, 0.7},
                                            Transparency: floatPtr(0.5),
                                        },
                                    },
                                    Geometry: &x3d.Cylinder{
                                        Radius: floatPtr(0.05),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("x3dconnector"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("startnode"),
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFNode"),
                        },
                        &x3d.Field{
                            Name: stringPtr("endnode"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFNode"),
                        },
                        &x3d.Field{
                            Name: stringPtr("transnode"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFNode"),
                        },
                        &x3d.Field{
                            Name: stringPtr("rotscalenode"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFNode"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_startpoint"),
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFVec3f"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_endpoint"),
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFVec3f"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("S1"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("startnode"),
                                            ProtoField: stringPtr("startnode"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("endnode"),
                                        ProtoField: stringPtr("endnode"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("transnode"),
                                        ProtoField: stringPtr("transnode"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("rotscalenode"),
                                        ProtoField: stringPtr("rotscalenode"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_startpoint"),
                                        ProtoField: stringPtr("set_startpoint"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_endpoint"),
                                        ProtoField: stringPtr("set_endpoint"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("startnode"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("endnode"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("transnode"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("rotscalenode"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_startpoint"),
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_endpoint"),
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFVec3f"),
                                },
//ecmascript:
//        function recompute(startpoint,endpoint){
//	    if (typeof endpoint === 'undefined') {
//		return;
//	    }
//            var dif = endpoint.subtract(startpoint);
//            var dist = dif.length()*0.5;
//            var dif2 = dif.multiply(0.5);
//            var norm = dif.normalize();
//            var transl = startpoint.add(dif2);
//	    if (typeof Quaternion !== 'undefined') {
//		    return {
//			    scale : new SFVec3f(1.0,dist,1.0),
//			    translation : transl,
//			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
//		    };
//	    } else {
//		    return {
//			    scale : new SFVec3f(1.0,dist,1.0),
//			    translation : transl,
//			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
//		    };
//	    }
//	}
//	function recompute_and_route(startpoint, endpoint) {
//	      var trafo = recompute(startpoint, endpoint);
//	      if (trafo) {
//		      transnode.translation = trafo.translation;
//		      rotscalenode.rotation = trafo.rotation;
//		      rotscalenode.scale = trafo.scale;
//	      }
//	}
//        function initialize(){
//            recompute_and_route(startnode.translation,endnode.translation);
//        }
//        function set_startpoint(val,t){
//            recompute_and_route(val,endnode.translation);
//        }
//        function set_endpoint(val,t){
//            recompute_and_route(startnode.translation,val);
//        }
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("x3dconnector"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("connector1"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("startnode"),
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("G1"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                            },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endnode"),
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("G2"),
                                    },
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transnode"),
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("transC1"),
                                    },
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("rotscalenode"),
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("rotscaleC1"),
                                    },
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
//<fieldValue name='set_startpoint'>
//</fieldValue>
//<fieldValue name='set_endpoint'>
//</fieldValue>
                    },
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("G1"),
                    FromField: stringPtr("translation_changed"),
                    ToNode: stringPtr("connector1"),
                    ToField: stringPtr("set_startpoint"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("G2"),
                    FromField: stringPtr("translation_changed"),
                    ToNode: stringPtr("connector1"),
                    ToField: stringPtr("set_endpoint"),
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
	filename := "../data/x3dconnector.new.go.x3d"
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