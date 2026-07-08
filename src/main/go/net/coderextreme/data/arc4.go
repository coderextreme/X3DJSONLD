
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
                    Content: stringPtr("arc4.x3d"),
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
                            DEF: stringPtr("DECLpoint_G1_node"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.1),
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                },
                            },
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLpoint_G1_PI1"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,5.0,0.0}},
                        },
                        &x3d.Script{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLpoint_G1_MB1"),
                            },
                            Field: []x3d.X3DNode{
                                &x3d.Field{
                                    Name: stringPtr("translation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Value: stringPtr("0 0 0"),
                            },
                            &x3d.Field{
                                Name: stringPtr("old"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Value: stringPtr("0 0 0"),
                            },
                            &x3d.Field{
                                Name: stringPtr("set_location"),
                                AccessType: stringPtr("inputOnly"),
                                Type: stringPtr("SFTime"),
                            },
                            &x3d.Field{
                                Name: stringPtr("keyValue"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("MFVec3f"),
                                Value: stringPtr("0 0 0 0 5 0"),
                            },
//ecmascript:
//		function set_location(value) {
//                    old = translation;
//		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
//                    keyValue = new MFVec3f([old, translation]);
//		    // Browser.println(keyValue);
//		}
                            },
                        },
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLpoint_G1_CL1"),
                            },
                            CycleInterval: doublePtr(3.0),
                            Loop: boolPtr(true),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G1_CL1"),
                            FromField: stringPtr("cycleTime"),
                            ToNode: stringPtr("DECLpoint_G1_MB1"),
                            ToField: stringPtr("set_location"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G1_CL1"),
                            FromField: stringPtr("fraction_changed"),
                            ToNode: stringPtr("DECLpoint_G1_PI1"),
                            ToField: stringPtr("set_fraction"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G1_MB1"),
                            FromField: stringPtr("keyValue"),
                            ToNode: stringPtr("DECLpoint_G1_PI1"),
                            ToField: stringPtr("keyValue"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G1_PI1"),
                            FromField: stringPtr("value_changed"),
                            ToNode: stringPtr("DECLpoint_G1_node"),
                            ToField: stringPtr("set_translation"),
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DECLpoint_G2_node"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.1),
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                },
                            },
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLpoint_G2_PI1"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,5.0,0.0}},
                        },
                        &x3d.Script{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLpoint_G2_MB1"),
                            },
                            Field: []x3d.X3DNode{
                                &x3d.Field{
                                    Name: stringPtr("translation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Value: stringPtr("0 0 0"),
                            },
                            &x3d.Field{
                                Name: stringPtr("old"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Value: stringPtr("0 0 0"),
                            },
                            &x3d.Field{
                                Name: stringPtr("set_location"),
                                AccessType: stringPtr("inputOnly"),
                                Type: stringPtr("SFTime"),
                            },
                            &x3d.Field{
                                Name: stringPtr("keyValue"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("MFVec3f"),
                                Value: stringPtr("0 0 0 0 5 0"),
                            },
//ecmascript:
//		function set_location(value) {
//                    old = translation;
//		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
//                    keyValue = new MFVec3f([old, translation]);
//		    // Browser.println(keyValue);
//		}
                            },
                        },
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLpoint_G2_CL1"),
                            },
                            CycleInterval: doublePtr(3.0),
                            Loop: boolPtr(true),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G2_CL1"),
                            FromField: stringPtr("cycleTime"),
                            ToNode: stringPtr("DECLpoint_G2_MB1"),
                            ToField: stringPtr("set_location"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G2_CL1"),
                            FromField: stringPtr("fraction_changed"),
                            ToNode: stringPtr("DECLpoint_G2_PI1"),
                            ToField: stringPtr("set_fraction"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G2_MB1"),
                            FromField: stringPtr("keyValue"),
                            ToNode: stringPtr("DECLpoint_G2_PI1"),
                            ToField: stringPtr("keyValue"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("DECLpoint_G2_PI1"),
                            FromField: stringPtr("value_changed"),
                            ToNode: stringPtr("DECLpoint_G2_node"),
                            ToField: stringPtr("set_translation"),
                        },
                    },
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("DECLx3dconnector_connector1_trans"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("DECLx3dconnector_connector1_rotscale"),
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
                        &x3d.Script{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("DECLx3dconnector_connector1_S1"),
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
                                Name: stringPtr("position"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.Transform{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("DECLx3dconnector_connector1_trans"),
                                            },
                                        Children: []x3d.X3DNode{
                                        },
                                    },
                                },
                            },
                            &x3d.Field{
                                Name: stringPtr("rotscale"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.Transform{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("DECLx3dconnector_connector1_rotscale"),
                                            },
                                        Children: []x3d.X3DNode{
                                        },
                                    },
                                },
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
//		    if (typeof Quaternion !== 'undefined') {
//			    return {
//				    scale : new SFVec3f(1.0,1.0,1.0),
//				    translation : new SFVec3f(1.0,1.0,1.0),
//			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)
//			    };
//	    	    } else if (typeof SFRotation !== 'undefined') {
//			    return {
//				    scale : new SFVec3f(1.0,1.0,1.0),
//				    translation : new SFVec3f(1.0,1.0,1.0),
//			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)
//			    };
//	    	    } else {
//			    return {
//				    scale : new SFVec3f(1.0,1.0,1.0),
//				    translation : new SFVec3f(1.0,1.0,1.0)
//			    };
//		    }
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
//	    } else if (typeof SFRotation !== 'undefined') {
//		    return {
//			    scale : new SFVec3f(1.0,dist,1.0),
//			    translation : transl,
//			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
//		    };
//	    } else {
//		    return {
//			    scale : new SFVec3f(1.0,dist,1.0),
//			    translation : transl
//		    };
//	    }
//	}
//	function recompute_and_route(startpoint, endpoint) {
//	      var trafo = recompute(startpoint, endpoint);
//	      position.translation = trafo.translation;
//	      rotscale.rotation = trafo.rotation;
//	      rotscale.scale = trafo.scale;
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
                &x3d.X3DRoute{
                    FromNode: stringPtr("DECLpoint_G1_node"),
                    FromField: stringPtr("translation_changed"),
                    ToNode: stringPtr("DECLx3dconnector_connector1_S1"),
                    ToField: stringPtr("set_startpoint"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("DECLpoint_G2_node"),
                    FromField: stringPtr("translation_changed"),
                    ToNode: stringPtr("DECLx3dconnector_connector1_S1"),
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
	filename := "../data/arc4.new.go.x3d"
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