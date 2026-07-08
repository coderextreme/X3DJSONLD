
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
            &x3d.Component{
                Name: stringPtr("EnvironmentalEffects"),
                Level: int32Ptr(3),
            },
            &x3d.Component{
                Name: stringPtr("Shaders"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("CubeMapTexturing"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Texturing"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Rendering"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Shape"),
                Level: int32Ptr(4),
            },
            &x3d.Component{
                Name: stringPtr("Grouping"),
                Level: int32Ptr(3),
            },
            &x3d.Component{
                Name: stringPtr("Core"),
                Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("flowers4.x3d"),
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
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("an animated flower"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                },
                &x3d.Background{
                    BackUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"},
                    BottomUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"},
                    FrontUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"},
                    LeftUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"},
                    RightUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"},
                    TopUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("transform"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.7, 0.7, 0.7},
                                    SpecularColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                },
                                Texture: &x3d.ComposedCubeMapTexture{
                                    BackTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"},
                                    },
                                    BottomTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"},
                                    },
                                    FrontTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"},
                                    },
                                    LeftTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"},
                                    },
                                    RightTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"},
                                    },
                                    TopTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"},
                                    },
                                },
                                &x3d.ComposedShader{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("shader"),
                                    },
                                    Language: stringPtr("GLSL"),
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("cube"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("inputOutput"),
                                            Value: stringPtr("0"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("chromaticDispertion"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFVec3f"),
                                        Value: stringPtr("0.98 1 1.033"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("bias"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("scale"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("power"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("2"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        Url: x3d.MFString{"../shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"},
                                        Type: stringPtr("FRAGMENT"),
                                    },
                                    },
                                },
                            },
//<Sphere>
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
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("MFVec3f"),
                    },
                    &x3d.Field{
                        Name: stringPtr("coordIndexes"),
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("MFInt32"),
                    },
                    &x3d.Field{
                        Name: stringPtr("e"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("5"),
                    },
                    &x3d.Field{
                        Name: stringPtr("f"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("5"),
                    },
                    &x3d.Field{
                        Name: stringPtr("g"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("5"),
                    },
                    &x3d.Field{
                        Name: stringPtr("h"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("5"),
                    },
//ecmascript:
//function initialize() {
//     var resolution = 100;
//     updateCoordinates(resolution);
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
//function updateCoordinates(resolution) {
//     var theta = 0.0;
//     var phi = 0.0;
//     var delta = (2 * 3.141592653) / (resolution-1);
//     var localc = new MFVec3f();
//     var arrIndex = 0;
//     for (var i = 0; i < resolution; i++) {
//     	for (var j = 0; j < resolution; j++) {
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
//	if (e < 1) {
//		e = 10;
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
//	var resolution = 100;
//	updateCoordinates(resolution);
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
                    FromField: stringPtr("coordIndexes"),
                    FromNode: stringPtr("OrbitScript"),
                    ToField: stringPtr("set_coordIndex"),
                    ToNode: stringPtr("Orbit"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("coordinates"),
                    FromNode: stringPtr("OrbitScript"),
                    ToField: stringPtr("set_point"),
                    ToNode: stringPtr("OrbitCoordinates"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("Clock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("OrbitScript"),
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
	filename := "../data/flowers4.new.go.x3d"
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