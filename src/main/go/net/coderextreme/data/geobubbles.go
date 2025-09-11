
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
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("Geospatial"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("geobubbles.x3d"),
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
                Name: stringPtr("generator"),
                Content: stringPtr("x3d-tidy V2.1.21, https://www.npmjs.com/package/x3d-tidy"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.GeoViewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Tour"),
                    },
                    Description: stringPtr("Tour Views"),
                    Position: &x3d.SFVec3d{0.000240332395536092, 0.00133046760455211, 3.99999793432653},
                },
                &x3d.Background{
                    FrontUrl: x3d.MFString{"../resources/images/FR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"},
                    BackUrl: x3d.MFString{"../resources/images/BK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"},
                    LeftUrl: x3d.MFString{"../resources/images/LF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"},
                    RightUrl: x3d.MFString{"../resources/images/RT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"},
                    TopUrl: x3d.MFString{"../resources/images/TP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"},
                    BottomUrl: x3d.MFString{"../resources/images/BT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"},
                },
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.7, 0.7, 0.7},
                                    SpecularColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TourTime"),
                    },
                    CycleInterval: doublePtr(5.0),
                    Loop: boolPtr(true),
                },
                &x3d.GeoPositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TourPosition"),
                    },
                    Key: x3d.MFFloat{0.0, 1.0},
                    KeyValue: &x3d.MFVec3d{[3]float64{0.0015708,0,4},[3]float64{0,0.0015708,4}},
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("RandomTourTime"),
                    },
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("set_cycle"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFFloat"),
                        Name: stringPtr("val"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("MFVec3d"),
                        Name: stringPtr("positions"),
                        Value: stringPtr("0.0015708 0 4 0 0.0015708 4"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("MFVec3d"),
                        Name: stringPtr("position"),
                        Value: stringPtr("0.0015708 0 4 0 0.0015708 4"),
                    },
//ecmascript:
//
//               function set_cycle(value) {
//                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo
//                        var ov = val;
//			// Browser.print('old '+ov);
//                        do {
//                                val = Math.floor(Math.random()*2);
//                                var vc = val;
//                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);
//                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);
//			// Browser.println(positions[ov]);
//			// Browser.println(positions[vc]);
//                        position = new MFVec3d();
//                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);
//                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);
//               }
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TourTime"),
                    FromField: stringPtr("cycleTime"),
                    ToNode: stringPtr("RandomTourTime"),
                    ToField: stringPtr("set_cycle"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RandomTourTime"),
                    FromField: stringPtr("position_changed"),
                    ToNode: stringPtr("TourPosition"),
                    ToField: stringPtr("set_keyValue"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TourTime"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("TourPosition"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TourPosition"),
                    FromField: stringPtr("geovalue_changed"),
                    ToNode: stringPtr("Tour"),
                    ToField: stringPtr("set_position"),
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
	filename := "../data/geobubbles.new.go.x3d"
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