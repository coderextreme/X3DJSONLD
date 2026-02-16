
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
//<component name='Shape' level='4'></component>
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
                    Content: stringPtr("mirror2.x3d"),
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
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/mirror2.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("a mirrored sphere"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 5.0, 100.0},
                    Description: stringPtr("Switch background and images texture"),
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("cube"),
                    },
                    LeftUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"},
                    RightUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"},
                    FrontUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"},
                    BackUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"},
                    TopUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"},
                    BottomUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"},
                },
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.7, 0.7, 0.7},
                                    SpecularColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                },
                                Texture: &x3d.ComposedCubeMapTexture{
                                    BackTexture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("backShader"),
                                        },
                                        Url: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"},
                                    },
                                    BottomTexture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("bottomShader"),
                                        },
                                        Url: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"},
                                    },
                                    FrontTexture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("frontShader"),
                                        },
                                        Url: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"},
                                    },
                                    LeftTexture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("leftShader"),
                                        },
                                        Url: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"},
                                    },
                                    RightTexture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("rightShader"),
                                        },
                                        Url: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"},
                                    },
                                    TopTexture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("topShader"),
                                        },
                                        Url: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"},
                                    },
                                },
                                &x3d.ComposedShader{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("x_ite"),
                                    },
                                    Language: stringPtr("GLSL"),
//http://hypertextbook.com/facts/2005/JustinChe.shtml
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("chromaticDispertion"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0.98 1 1.033"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("cube"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFInt32"),
                                        Value: stringPtr("0"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("bias"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("scale"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("power"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("2"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        Url: x3d.MFString{"../shaders/x_itemix.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"},
                                        Type: stringPtr("FRAGMENT"),
                                    },
                                    },
                                },
                                &x3d.ComposedShader{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("x3dom"),
                                    },
                                    Language: stringPtr("GLSL"),
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("chromaticDispertion"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0.98 1 1.033"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("cube"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFInt32"),
                                        Value: stringPtr("0"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("bias"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("scale"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("power"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("2"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        Url: x3d.MFString{"../shaders/mix.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"},
                                        Type: stringPtr("FRAGMENT"),
                                    },
                                    },
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(30.0),
                            },
                        },
                        &x3d.Script{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("UrlSelector"),
                            },
                            DirectOutput: boolPtr(true),
                            Field: []x3d.X3DNode{
                                &x3d.Field{
                                    Name: stringPtr("frontUrls"),
                                    Type: stringPtr("MFString"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Value: stringPtr("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""),
                            },
                            &x3d.Field{
                                Name: stringPtr("backUrls"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("initializeOnly"),
                                Value: stringPtr("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""),
                            },
                            &x3d.Field{
                                Name: stringPtr("leftUrls"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("initializeOnly"),
                                Value: stringPtr("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""),
                            },
                            &x3d.Field{
                                Name: stringPtr("rightUrls"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("initializeOnly"),
                                Value: stringPtr("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""),
                            },
                            &x3d.Field{
                                Name: stringPtr("topUrls"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("initializeOnly"),
                                Value: stringPtr("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""),
                            },
                            &x3d.Field{
                                Name: stringPtr("bottomUrls"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("initializeOnly"),
                                Value: stringPtr("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""),
                            },
                            &x3d.Field{
                                Name: stringPtr("front_changed"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("outputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("back_changed"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("outputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("left_changed"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("outputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("right_changed"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("outputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("top_changed"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("outputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("bottom_changed"),
                                Type: stringPtr("MFString"),
                                AccessType: stringPtr("outputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("set_fraction"),
                                Type: stringPtr("SFFloat"),
                                AccessType: stringPtr("inputOnly"),
                            },
                            &x3d.Field{
                                Name: stringPtr("old"),
                                Type: stringPtr("SFInt32"),
                                AccessType: stringPtr("inputOutput"),
                                Value: stringPtr("-1"),
                            },
//ecmascript:
//        function set_fraction( f, tm ) {
//	    var side = Math.floor(f*frontUrls.length);
//	    if (side > frontUrls.length-1) {
//	    	side = 0;
//	    }
//	    if (side != old) {
//	    	    // Browser.print(f+" "+side);
//	    	    old = side;
//		    front_changed[0] = frontUrls[side];
//		    back_changed[0] = backUrls[side];
//		    left_changed[0] = leftUrls[side];
//		    right_changed[0] = rightUrls[side];
//		    top_changed[0] = topUrls[side];
//		    bottom_changed[0] = bottomUrls[side];
//            }
//        }
                            },
                        },
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Clock"),
                            },
                            CycleInterval: doublePtr(45.0),
                            Loop: boolPtr(true),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Clock"),
                            FromField: stringPtr("fraction_changed"),
                            ToNode: stringPtr("UrlSelector"),
                            ToField: stringPtr("set_fraction"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("front_changed"),
                            ToNode: stringPtr("cube"),
                            ToField: stringPtr("frontUrl"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("back_changed"),
                            ToNode: stringPtr("cube"),
                            ToField: stringPtr("backUrl"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("left_changed"),
                            ToNode: stringPtr("cube"),
                            ToField: stringPtr("leftUrl"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("right_changed"),
                            ToNode: stringPtr("cube"),
                            ToField: stringPtr("rightUrl"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("top_changed"),
                            ToNode: stringPtr("cube"),
                            ToField: stringPtr("topUrl"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("bottom_changed"),
                            ToNode: stringPtr("cube"),
                            ToField: stringPtr("bottomUrl"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("front_changed"),
                            ToNode: stringPtr("frontShader"),
                            ToField: stringPtr("url"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("back_changed"),
                            ToNode: stringPtr("backShader"),
                            ToField: stringPtr("url"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("left_changed"),
                            ToNode: stringPtr("leftShader"),
                            ToField: stringPtr("url"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("right_changed"),
                            ToNode: stringPtr("rightShader"),
                            ToField: stringPtr("url"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("top_changed"),
                            ToNode: stringPtr("topShader"),
                            ToField: stringPtr("url"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("UrlSelector"),
                            FromField: stringPtr("bottom_changed"),
                            ToNode: stringPtr("bottomShader"),
                            ToField: stringPtr("url"),
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
	filename := "../data/mirror2.new.go.x3d"
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