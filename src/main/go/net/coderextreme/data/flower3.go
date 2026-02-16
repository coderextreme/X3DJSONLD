
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
                    Content: stringPtr("flower3.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("manual"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("a flower"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                },
                &x3d.DirectionalLight{
                    Direction: &x3d.SFVec3f{0.0, -0.8, -0.2},
                    Intensity: floatPtr(0.5),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{1.0,1.0,1.0}},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("One mathematical orbital"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 50.0},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("OrbitTransform"),
                        },
                        Translation: &x3d.SFVec3f{8.0, 0.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.0, 0.5, 1.0},
                                    SpecularColor: &x3d.SFColor{0.0, 0.5, 1.0},
                                },
                            },
                            Geometry: &x3d.IndexedFaceSet{
                                Convex: boolPtr(false),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Orbit"),
                                },
                                Coord: &x3d.Coordinate{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("OrbitCoordinates"),
                                    },
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
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("MFVec3f"),
                    },
                    &x3d.Field{
                        Name: stringPtr("coordIndexes"),
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("MFInt32"),
                    },
//<field accessType="inputOutput" name="e" type="SFFloat" value="5"/>
//<field accessType="inputOutput" name="f" type="SFFloat" value="5"/>
//<field accessType="inputOutput" name="g" type="SFFloat" value="5"/>
//<field accessType="inputOutput" name="h" type="SFFloat" value="5"/>
//<field accessType="inputOutput" name="t" type="SFFloat" value="0"/>
//<field accessType="inputOutput" name="p" type="SFFloat" value="0"/>
//<field accessType="initializeOnly" name="resolution" type="SFInt32" value="100"/>
//ecmascript:
//
//var e = 5;
//var f = 5;
//var g = 5;
//var h = 5;
//var resolution = 100;
//var t = 0;
//var p = 0;
//
//function initialize() {
//     generateCoordinates(resolution);
//     var localci = new MFInt32();
//     var arrIndex = 0;
//     for (var i = 0; i < resolution-1; i++) {
//     	for (var j = 0; j < resolution-1; j++) {
//	     localci[arrIndex++] = i*resolution+j;
//	     localci[arrIndex++] = i*resolution+j+1;
//	     localci[arrIndex++] = (i+1)*resolution+j+1;
//	     localci[arrIndex++] = (i+1)*resolution+j;
//	     localci[arrIndex++] = -1;
//	}
//    }
//    coordIndexes = localci;
//}
//
//function generateCoordinates(resolution) {
//     var theta = 0.0;
//     var phi = 0.0;
//     var delta = (2 * 3.141592653) / (resolution-1);
//     var localc = new MFVec3f();
//     var arrIndex = 0;
//     for (var  i = 0; i < resolution; i++) {
//     	for (var  j = 0; j < resolution; j++) {
//		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
//		localc[arrIndex++] = new SFVec3f(
//			rho * Math.cos(phi) * Math.cos(theta),
//			rho * Math.cos(phi) * Math.sin(theta),
//			rho * Math.sin(phi)
//		);
//		theta += delta;
//	}
//	phi += delta;
//     }
//     coordinates = localc;
//}
//
//function set_fraction(fraction, eventTime) {
//	t += 0.5;
//	p += 0.5;
//	var choice = Math.floor(Math.random() * 4);
//	switch (choice) {
//	case 0:
//		e += Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	case 1:
//		f += Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	case 2:
//		g += Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	case 3:
//		h += Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	}
//	if (f < 1) {
//		f = 10;
//	}
//	if (g < 1) {
//		g = 4;
//	}
//	if (h < 1) {
//		h = 4;
//	}
//	generateCoordinates(resolution);
//}
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Clock"),
                    },
                    CycleInterval: doublePtr(16.0),
                    Loop: boolPtr(true),
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
	filename := "../data/flower3.new.go.x3d"
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