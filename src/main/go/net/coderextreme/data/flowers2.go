
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
                    Content: stringPtr("flowers2.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("23 January 2005"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("9 November 2024"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("manually written"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Two mathematical orbitals"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 50.0},
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.DirectionalLight{
                            Direction: &x3d.SFVec3f{1.0, 1.0, 1.0},
                        },
                        &x3d.ProtoDeclare{
                            Name: stringPtr("orbit"),
                            ProtoInterface: &x3d.ProtoInterface{
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("translation"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFVec3f"),
                                        Value: stringPtr("-8 0 0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("diffuseColor"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFColor"),
                                    Value: stringPtr("1 0.5 0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("specularColor"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFColor"),
                                    Value: stringPtr("1 0.5 0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("transparency"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Value: stringPtr("0.75"),
                                },
                                },
                            },
                            ProtoBody: &x3d.ProtoBody{
                                Children: []x3d.X3DNode{
                                    &x3d.Group{
                                        Children: []x3d.X3DNode{
                                            &x3d.TimeSensor{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Clock"),
                                                },
                                                CycleInterval: doublePtr(16.0),
                                                Loop: boolPtr(true),
                                            },
                                            &x3d.OrientationInterpolator{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("OrbitPath"),
                                                },
                                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                                                KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 3.14, 1.0, 0.0, 0.0, 6.28},
                                            },
                                            &x3d.Transform{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("OrbitTransform"),
                                                    },
                                                    IS: &x3d.IS{
                                                        Connect: []x3d.X3DNode{
                                                            &x3d.Connect{
                                                                NodeField: stringPtr("translation"),
                                                                ProtoField: stringPtr("translation"),
                                                        },
                                                        },
                                                    },
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                IS: &x3d.IS{
                                                                    Connect: []x3d.X3DNode{
                                                                        &x3d.Connect{
                                                                            NodeField: stringPtr("diffuseColor"),
                                                                            ProtoField: stringPtr("diffuseColor"),
                                                                    },
                                                                    &x3d.Connect{
                                                                        NodeField: stringPtr("specularColor"),
                                                                        ProtoField: stringPtr("specularColor"),
                                                                    },
                                                                    &x3d.Connect{
                                                                        NodeField: stringPtr("transparency"),
                                                                        ProtoField: stringPtr("transparency"),
                                                                    },
                                                                    },
                                                                },
                                                            },
                                                        },
//<IndexedFaceSet DEF="Orbit">
//<Coordinate DEF="OrbitCoordinates"/>
//</IndexedFaceSet>
                                                        Geometry: &x3d.IndexedFaceSet{
                                                            Ccw: boolPtr(false),
                                                            Convex: boolPtr(false),
                                                            CoordIndex: []int32{0, 1, 2, -1},
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Orbit"),
                                                            },
                                                            Coord: &x3d.Coordinate{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("OrbitCoordinates"),
                                                                },
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,1.0},[3]float32{0.0,1.0,0.0},[3]float32{1.0,0.0,0.0}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.Script{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("OrbitScript"),
                                                },
                                                Field: []x3d.X3DNode{
                                                    &x3d.Field{
                                                        Name: stringPtr("set_fraction"),
                                                        AccessType: stringPtr("inputOnly"),
                                                        Type: stringPtr("SFFloat"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("coordinates"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("MFVec3f"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("coordIndexes"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("MFInt32"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("e"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFFloat"),
                                                    Value: stringPtr("5"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("f"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFFloat"),
                                                    Value: stringPtr("5"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("g"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFFloat"),
                                                    Value: stringPtr("5"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("h"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFFloat"),
                                                    Value: stringPtr("5"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("resolution"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFInt32"),
                                                    Value: stringPtr("50"),
                                                },
//ecmascript:
//
//			function initialize() {
//			     generateCoordinates();
//			     var arrIndex = 0;
//			     for (var i = 0; i < resolution-1; i++) {
//				for (var j = 0; j < resolution-1; j++) {
//				     coordIndexes[arrIndex++] = i*resolution+j;
//				     coordIndexes[arrIndex++] = i*resolution+j+1;
//				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
//				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
//				     coordIndexes[arrIndex++] = -1;
//				}
//			    }
//			}
//
//			function generateCoordinates() {
//			     var theta = 0.0;
//			     var phi = 0.0;
//			     var delta = (2 * 3.141592653) / (resolution-1);
//			     var arrIndex = 0;
//			     for (var i = 0; i < resolution; i++) {
//				for (var j = 0; j < resolution; j++) {
//					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
//					coordinates[arrIndex++] = new SFVec3f(
//						rho * Math.cos(phi) * Math.cos(theta),
//						rho * Math.cos(phi) * Math.sin(theta),
//						rho * Math.sin(phi)
//					);
//					theta += delta;
//				}
//				phi += delta;
//			     }
//			}
//
//			function set_fraction(fraction, eventTime) {
//				var choice = Math.floor(Math.random() * 4);
//				switch (choice) {
//				case 0:
//					e += Math.floor(Math.random() * 2) * 2 - 1;
//					break;
//				case 1:
//					f += Math.floor(Math.random() * 2) * 2 - 1;
//					break;
//				case 2:
//					g += Math.floor(Math.random() * 2) * 2 - 1;
//					break;
//				case 3:
//					h += Math.floor(Math.random() * 2) * 2 - 1;
//					break;
//				}
//				if (e < 1) {
//					f = 10;
//				}
//				if (f < 1) {
//					f = 10;
//				}
//				if (g < 1) {
//					g = 4;
//				}
//				if (h < 1) {
//					h = 4;
//				}
//				generateCoordinates();
//			}
                                                },
                                            },
                                            &x3d.X3DRoute{
                                                FromNode: stringPtr("OrbitScript"),
                                                FromField: stringPtr("coordIndexes"),
                                                ToNode: stringPtr("Orbit"),
                                                ToField: stringPtr("set_coordIndex"),
                                            },
                                            &x3d.X3DRoute{
                                                FromNode: stringPtr("OrbitScript"),
                                                FromField: stringPtr("coordinates"),
                                                ToNode: stringPtr("OrbitCoordinates"),
                                                ToField: stringPtr("point"),
                                            },
                                            &x3d.X3DRoute{
                                                FromNode: stringPtr("Clock"),
                                                FromField: stringPtr("fraction_changed"),
                                                ToNode: stringPtr("OrbitScript"),
                                                ToField: stringPtr("set_fraction"),
                                            },
                                            &x3d.X3DRoute{
                                                FromNode: stringPtr("OrbitPath"),
                                                FromField: stringPtr("value_changed"),
                                                ToNode: stringPtr("OrbitTransform"),
                                                ToField: stringPtr("rotation"),
                                            },
                                            &x3d.X3DRoute{
                                                FromNode: stringPtr("Clock"),
                                                FromField: stringPtr("fraction_changed"),
                                                ToNode: stringPtr("OrbitPath"),
                                                ToField: stringPtr("set_fraction"),
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("orbit"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("translation"),
                                    Value: stringPtr("-8 0 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("diffuseColor"),
                                Value: stringPtr("1 0.5 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("specularColor"),
                                Value: stringPtr("1 0.5 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transparency"),
                                Value: stringPtr("0.75"),
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("orbit"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("translation"),
                                    Value: stringPtr("8 0 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("diffuseColor"),
                                Value: stringPtr("0 0.5 1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("specularColor"),
                                Value: stringPtr("0 0.5 1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transparency"),
                                Value: stringPtr("0.5"),
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
	filename := "../data/flowers2.new.go.x3d"
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