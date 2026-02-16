
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
                    Content: stringPtr("flowers7.x3d"),
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
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"),
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
//Images courtesy of Paul Debevec's Light Probe Image Gallery
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("background"),
                    },
                    BackUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"},
                    BottomUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"},
                    FrontUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"},
                    LeftUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"},
                    RightUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"},
                    TopUrl: x3d.MFString{"../resources/images/all_probes/beach_cross/beach_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"},
                },
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 0.0, 40.0},
                    Description: stringPtr("Transparent rose"),
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
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("texture"),
                                    },
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
                                        DEF: stringPtr("x3dom"),
                                    },
                                    Language: stringPtr("GLSL"),
//TODO VERIFY
//<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("cube"),
                                            Type: stringPtr("SFNode"),
                                            AccessType: stringPtr("inputOutput"),
                                            Children: []x3d.X3DNode{
                                                &x3d.ComposedCubeMapTexture{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("texture"),
                                                    },
                                                },
                                            },
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("chromaticDispertion"),
                                        AccessType: stringPtr("initializeOnly"),
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
                                    &x3d.Field{
                                        Name: stringPtr("a"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("10"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("b"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("1"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("c"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("20"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("d"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("20"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("tdelta"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("0"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("pdelta"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOutput"),
                                        Value: stringPtr("0"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        Url: x3d.MFString{"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"},
                                        Type: stringPtr("FRAGMENT"),
                                    },
                                    },
                                },
                                &x3d.ComposedShader{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("x_ite"),
                                    },
                                    Language: stringPtr("GLSL"),
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("cube"),
                                            Type: stringPtr("SFNode"),
                                            AccessType: stringPtr("inputOutput"),
                                            Children: []x3d.X3DNode{
                                                &x3d.ComposedCubeMapTexture{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("texture"),
                                                    },
                                                },
                                            },
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("chromaticDispertion"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFVec3f"),
                                        Value: stringPtr("0.98 1 1.033"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("bias"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("scale"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("power"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("2"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("a"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("10"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("b"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("1"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("c"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("20"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("d"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("20"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("tdelta"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("0"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("pdelta"),
                                        Type: stringPtr("SFFloat"),
                                        AccessType: stringPtr("inputOnly"),
                                        Value: stringPtr("0"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        Url: x3d.MFString{"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"},
                                        Type: stringPtr("FRAGMENT"),
                                    },
                                    },
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
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
                            Value: stringPtr("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png\""),
                    },
                    &x3d.Field{
                        Name: stringPtr("backUrls"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("initializeOnly"),
                        Value: stringPtr("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png\""),
                    },
                    &x3d.Field{
                        Name: stringPtr("leftUrls"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("initializeOnly"),
                        Value: stringPtr("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png\""),
                    },
                    &x3d.Field{
                        Name: stringPtr("rightUrls"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("initializeOnly"),
                        Value: stringPtr("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png\""),
                    },
                    &x3d.Field{
                        Name: stringPtr("topUrls"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("initializeOnly"),
                        Value: stringPtr("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png\""),
                    },
                    &x3d.Field{
                        Name: stringPtr("bottomUrls"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("initializeOnly"),
                        Value: stringPtr("\"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""),
                    },
                    &x3d.Field{
                        Name: stringPtr("front"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("inputOutput"),
                    },
                    &x3d.Field{
                        Name: stringPtr("back"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("inputOutput"),
                    },
                    &x3d.Field{
                        Name: stringPtr("left"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("inputOutput"),
                    },
                    &x3d.Field{
                        Name: stringPtr("right"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("inputOutput"),
                    },
                    &x3d.Field{
                        Name: stringPtr("top"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("inputOutput"),
                    },
                    &x3d.Field{
                        Name: stringPtr("bottom"),
                        Type: stringPtr("MFString"),
                        AccessType: stringPtr("inputOutput"),
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
//            var side = Math.floor(f*frontUrls.length);
//            if (side > frontUrls.length-1) {
//                side = 0;
//            }
//            if (side != old) {
//                    old = side;
//                    front[0] = frontUrls[side];
//                    back[0] = backUrls[side];
//                    left[0] = leftUrls[side];
//                    right[0] = rightUrls[side];
//                    top[0] = topUrls[side];
//                    bottom[0] = bottomUrls[side];
//            }
//        }
                    },
                },
//<TimeSensor DEF="Clock" cycleInterval="45" loop='true'/>
//<ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/>
//<ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/>
//<ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/>
//<ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Animate"),
                    },
                    DirectOutput: boolPtr(true),
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("set_fraction"),
                            Type: stringPtr("SFFloat"),
                            AccessType: stringPtr("inputOnly"),
                    },
                    &x3d.Field{
                        Name: stringPtr("a"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("10"),
                    },
                    &x3d.Field{
                        Name: stringPtr("b"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("1"),
                    },
                    &x3d.Field{
                        Name: stringPtr("c"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("20"),
                    },
                    &x3d.Field{
                        Name: stringPtr("d"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("20"),
                    },
                    &x3d.Field{
                        Name: stringPtr("tdelta"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("0"),
                    },
                    &x3d.Field{
                        Name: stringPtr("pdelta"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOutput"),
                        Value: stringPtr("0"),
                    },
//ecmascript:
//
//function set_fraction() {
//	var choice = Math.floor(Math.random() * 4);
//	switch (choice) {
//	case 0:
//		a = a + Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	case 1:
//		b = b + Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	case 2:
//		c = c + Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	case 3:
//		d = d + Math.floor(Math.random() * 2) * 2 - 1;
//		break;
//	}
//	tdelta = tdelta + 0.5;
//	pdelta = pdelta + 0.5;
//	if (a < 1) {
//		a = 10;
//	}
//	if (b < 1) {
//		b = 10;
//	}
//	if (c < 1) {
//		c = 4;
//	}
//	if (c > 20) {
//		c = 4;
//	}
//	if (d < 1) {
//		d = 4;
//	}
//	if (d > 20) {
//		d = 4;
//	}
//}
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TourTime"),
                    },
                    CycleInterval: doublePtr(5.0),
                    Loop: boolPtr(true),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("TourTime"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Animate"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("a"),
                    ToNode: stringPtr("x_ite"),
                    ToField: stringPtr("a"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("b"),
                    ToNode: stringPtr("x_ite"),
                    ToField: stringPtr("b"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("c"),
                    ToNode: stringPtr("x_ite"),
                    ToField: stringPtr("c"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("d"),
                    ToNode: stringPtr("x_ite"),
                    ToField: stringPtr("d"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("pdelta"),
                    ToNode: stringPtr("x_ite"),
                    ToField: stringPtr("pdelta"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("tdelta"),
                    ToNode: stringPtr("x_ite"),
                    ToField: stringPtr("tdelta"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("a"),
                    ToNode: stringPtr("x3dom"),
                    ToField: stringPtr("a"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("b"),
                    ToNode: stringPtr("x3dom"),
                    ToField: stringPtr("b"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("c"),
                    ToNode: stringPtr("x3dom"),
                    ToField: stringPtr("c"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("d"),
                    ToNode: stringPtr("x3dom"),
                    ToField: stringPtr("d"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("pdelta"),
                    ToNode: stringPtr("x3dom"),
                    ToField: stringPtr("pdelta"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("Animate"),
                    FromField: stringPtr("tdelta"),
                    ToNode: stringPtr("x3dom"),
                    ToField: stringPtr("tdelta"),
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
	filename := "../data/flowers7.new.go.x3d"
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