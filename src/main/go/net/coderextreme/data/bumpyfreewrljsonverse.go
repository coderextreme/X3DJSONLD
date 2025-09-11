
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
        Profile: stringPtr("Full"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("bumpyfreewrljsonverse.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("*enter description here, short-sentence summaries preferred*"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Doug Sanden, Christoph Valentin, John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("*if manually translating VRML-to-X3D, enter name of person translating here*"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("*enter date of initial version here*"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("*enter date of translation here*"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:38:03 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("version"),
                Content: stringPtr("*enter version here, if any*"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("*enter reference citation or relative/online url here*"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("*enter additional url/bibliographic reference information here*"),
            },
            &x3d.Meta{
                Name: stringPtr("requires"),
                Content: stringPtr("*enter reference resource here if required to support function, delivery, or coherence of content*"),
            },
            &x3d.Meta{
                Name: stringPtr("rights"),
                Content: stringPtr("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"),
            },
            &x3d.Meta{
                Name: stringPtr("drawing"),
                Content: stringPtr("*enter drawing filename/url here*"),
            },
            &x3d.Meta{
                Name: stringPtr("MovingImage"),
                Content: stringPtr("*enter movie filename/url here*"),
            },
            &x3d.Meta{
                Name: stringPtr("photo"),
                Content: stringPtr("*enter photo filename/url here*"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("*enter subject keywords here*"),
            },
            &x3d.Meta{
                Name: stringPtr("accessRights"),
                Content: stringPtr("*enter permission statements or url here*"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("SliderProto"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("sliderTranslation"),
                                Value: stringPtr("0 0.7 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("transformTranslation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("sensorTranslation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFString"),
                            Name: stringPtr("textString"),
                            Value: stringPtr("\"a=\""),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("parameterScale"),
                            Value: stringPtr("30"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFString"),
                            Name: stringPtr("parameterName"),
                            Value: stringPtr("a"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFNode"),
                            Name: stringPtr("shaderNode"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Transform{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("protoSlider"),
                                            },
                                            IS: &x3d.IS{
                                                Connect: []x3d.X3DNode{
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("translation"),
                                                        ProtoField: stringPtr("sliderTranslation"),
                                                },
                                                },
                                            },
                                        Children: []x3d.X3DNode{
                                            &x3d.Transform{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("protoTransform"),
                                                    },
                                                    IS: &x3d.IS{
                                                        Connect: []x3d.X3DNode{
                                                            &x3d.Connect{
                                                                NodeField: stringPtr("translation"),
                                                                ProtoField: stringPtr("transformTranslation"),
                                                        },
                                                        &x3d.Connect{
                                                            NodeField: stringPtr("translation"),
                                                            ProtoField: stringPtr("sensorTranslation"),
                                                        },
                                                        },
                                                    },
                                                Children: []x3d.X3DNode{
                                                    &x3d.PlaneSensor{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("protoSensor"),
                                                        },
                                                        MaxPosition: &x3d.SFVec2f{1.0, 0.0},
                                                    },
                                                    &x3d.Transform{
                                                        Children: []x3d.X3DNode{
                                                            &x3d.TouchSensor{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("protoTS"),
                                                                },
                                                            },
                                                        },
                                                    },
                                                    &x3d.Transform{
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                Appearance: &x3d.Appearance{
                                                                    Material: &x3d.Material{
                                                                    },
                                                                },
                                                                Geometry: &x3d.Text{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("protoText"),
                                                                    },
                                                                    IS: &x3d.IS{
                                                                        Connect: []x3d.X3DNode{
                                                                            &x3d.Connect{
                                                                                NodeField: stringPtr("string"),
                                                                                ProtoField: stringPtr("textString"),
                                                                        },
                                                                        },
                                                                    },
                                                                    FontStyle: &x3d.FontStyle{
                                                                        Size: floatPtr(0.23),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("protoValueTransformerScript"),
                                        },
                                        DirectOutput: boolPtr(true),
                                        MustEvaluate: boolPtr(true),
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("protoScale"),
                                                    ProtoField: stringPtr("parameterScale"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("protoParameterName"),
                                                ProtoField: stringPtr("parameterName"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("shader"),
                                                ProtoField: stringPtr("shaderNode"),
                                            },
                                            },
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                AccessType: stringPtr("inputOutput"),
                                                Type: stringPtr("SFFloat"),
                                                Name: stringPtr("protoScale"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFString"),
                                            Name: stringPtr("protoParameterName"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFNode"),
                                            Name: stringPtr("shader"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFVec3f"),
                                            Name: stringPtr("newTranslation"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("outputOnly"),
                                            Type: stringPtr("SFFloat"),
                                            Name: stringPtr("protoValue_changed"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("outputOnly"),
                                            Type: stringPtr("MFString"),
                                            Name: stringPtr("protoText_changed"),
                                        },
//ecmascript:
//const newTranslation = function(Value) {
//	'use strict';
//	protoValue_changed = Value.x * protoScale;
//	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));
//
//        var orientation = Value.x;
//
//        var ps = Browser.currentScene.getNamedNode("protoSensor");
//        var t = Browser.currentScene.getNamedNode("protoTransform");
//        var txt = Browser.currentScene.getNamedNode("protoText");
//        if (shader) {
//            shader.getField(protoParameterName).setValue(orientation * protoScale);
//        }
//        if (txt) {
//            var stringField = txt.getField("string");
//            var label = protoParameterName;
//            stringField.setValue(new MFString(label+"="+(orientation * protoScale).toFixed(2)));
//        }
//        if (ps) {
//            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
//        }
//        if (t) {
//            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
//        }
//}
                                        },
                                    },
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("protoSensor"),
                                FromField: stringPtr("translation_changed"),
                                ToNode: stringPtr("protoTransform"),
                                ToField: stringPtr("set_translation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("protoSensor"),
                                FromField: stringPtr("translation_changed"),
                                ToNode: stringPtr("protoValueTransformerScript"),
                                ToField: stringPtr("newTranslation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("protoValueTransformerScript"),
                                FromField: stringPtr("protoText_changed"),
                                ToNode: stringPtr("protoText"),
                                ToField: stringPtr("set_string"),
                            },
                        },
                    },
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"EXAMINE"},
                    AvatarSize: x3d.MFFloat{0.25, 1.75, 0.75},
                },
                &x3d.DirectionalLight{
                    AmbientIntensity: floatPtr(0.2),
                    Direction: &x3d.SFVec3f{0.0, -1.0, 0.0},
                },
                &x3d.DirectionalLight{
                    AmbientIntensity: floatPtr(0.2),
                    Direction: &x3d.SFVec3f{-1.0, -0.1, -1.0},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("My Overview"),
                    Position: &x3d.SFVec3f{0.0, 1.75, 60.0},
                    FieldOfView: floatPtr(1.570796),
                },
                &x3d.LayerSet{
                    ActiveLayer: int32Ptr(1),
                    Order: []int32{1, 2},
                    Layers: &x3d.Layer{
                        &x3d.Group{
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{25.0, 0.0, 0.0},
                                        Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("RED"),
                                                    },
                                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                    EmissiveColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                },
                                            },
                                            Geometry: &x3d.Cylinder{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Shaft"),
                                                },
                                                Height: floatPtr(50.0),
                                                Radius: floatPtr(0.35),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{50.0, 0.0, 0.0},
                                        Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("RED"),
                                                    },
                                                },
                                            },
                                            Geometry: &x3d.Cone{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Tip"),
                                                },
                                                Height: floatPtr(3.0),
                                                BottomRadius: floatPtr(0.8),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 25.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("GREEN"),
                                                    },
                                                    DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                                    EmissiveColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                                },
                                            },
                                            Geometry: &x3d.Cylinder{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Shaft"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 50.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("GREEN"),
                                                    },
                                                },
                                            },
                                            Geometry: &x3d.Cone{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Tip"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.0, 25.0},
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("BLUE"),
                                                    },
                                                    DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                    EmissiveColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                },
                                            },
                                            Geometry: &x3d.Cylinder{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Shaft"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.0, 50.0},
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("BLUE"),
                                                    },
                                                },
                                            },
                                            Geometry: &x3d.Cone{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Tip"),
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("FlowerTransform"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Background{
                                    FrontUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"},
                                    BackUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"},
                                    LeftUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"},
                                    RightUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"},
                                    TopUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"},
                                    BottomUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"},
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
                                                    FrontTexture: &x3d.ImageTexture{
                                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"},
                                                    },
                                                    BackTexture: &x3d.ImageTexture{
                                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"},
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
                                                    BottomTexture: &x3d.ImageTexture{
                                                        Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"},
                                                    },
                                                },
                                                Shaders: &x3d.ComposedShader{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("freewrlShader"),
                                                    },
                                                    Language: stringPtr("GLSL"),
                                                    Parts:                                                    Parts: []x3d.X3DNode{
                                                        &x3d.ShaderPart{
                                                            Url: x3d.MFString{"../shaders/freewrl_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"},
                                                    },
                                                    Parts: &x3d.ShaderPart{
                                                        Type: stringPtr("FRAGMENT"),
                                                        Url: x3d.MFString{"../shaders/freewrl.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"},
                                                    },
                                                    Shaders:                                                },
                                                    Field: []x3d.X3DNode{
                                                        &x3d.Field{
                                                            AccessType: stringPtr("inputOnly"),
                                                            Type: stringPtr("SFVec3f"),
                                                            Name: stringPtr("chromaticDispertion"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOnly"),
                                                        Type: stringPtr("SFInt32"),
                                                        Name: stringPtr("fw_textureCoordGenType"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOnly"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("bias"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOnly"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("scale"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOnly"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("power"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("a"),
                                                        Value: stringPtr("15"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("b"),
                                                        Value: stringPtr("5"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("c"),
                                                        Value: stringPtr("5"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("d"),
                                                        Value: stringPtr("5"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("tdelta"),
                                                    },
                                                    Shaders: &x3d.Field{
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                        Name: stringPtr("pdelta"),
                                                    },
                                                    },
                                                },
                                            },
                                            Geometry: &x3d.IndexedFaceSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Orbit"),
                                                },
                                                Convex: boolPtr(false),
                                                Coord: &x3d.Coordinate{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("OrbitCoordinates"),
                                                    },
                                                },
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
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("coordinates"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("outputOnly"),
                                Type: stringPtr("MFInt32"),
                                Name: stringPtr("coordIndexes"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("a"),
                                Value: stringPtr("10"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("b"),
                                Value: stringPtr("10"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("c"),
                                Value: stringPtr("2"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("d"),
                                Value: stringPtr("2"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("pdelta"),
                            },
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFFloat"),
                                Name: stringPtr("tdelta"),
                            },
//ecmascript:
//function initialize() {
//     var resolution = 100;
//     var theta = 0.0;
//     var phi = 0.0;
//     var delta = (2 * 3.141592653) / (resolution-1);
//     var crds = new MFVec3f();
//     var vecCount = 0;
//     for ( i = 0; i < resolution; i++) {
//     	for ( j = 0; j < resolution; j++) {
//		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
//		crds[vecCount] = new SFVec3f(
//			rho * Math.cos(phi) * Math.cos(theta),
//			rho * Math.cos(phi) * Math.sin(theta),
//			rho * Math.sin(phi)
//		);
//		vecCount++;
//		theta += delta;
//	}
//	phi += delta;
//     }
//     coordinates = crds;
//     // coordinates = new MFVec3f(...crds);
//
//
//     var cis = new MFInt32();
//     var intCount = 0;
//     for ( i = 0; i < resolution-1; i++) {
//     	for ( j = 0; j < resolution-1; j++) {
//	     cis[intCount++] = i*resolution+j;
//	     cis[intCount++] = i*resolution+j+1;
//	     cis[intCount++] = (i+1)*resolution+j+1;
//	     cis[intCount++] = (i+1)*resolution+j;
//	     cis[intCount++] = -1;
//	}
//    }
//    coordIndexes = cis;
//    // coordIndexes = new MFInt32(...cis);
//}
                            },
                        },
                        &x3d.DISEntityManager{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("EntityManager"),
                            },
                            &x3d.DISEntityTypeMapping{
                                Url: x3d.MFString{"../data/Gramps8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"},
                                Category: int32Ptr(77),
                                Specific: int32Ptr(1),
                            },
                            &x3d.DISEntityTypeMapping{
                                Url: x3d.MFString{"../data/Leif8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"},
                                Category: int32Ptr(77),
                                Specific: int32Ptr(2),
                            },
                            &x3d.DISEntityTypeMapping{
                                Url: x3d.MFString{"../data/Lily8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"},
                                Category: int32Ptr(77),
                                Specific: int32Ptr(3),
                            },
                            &x3d.DISEntityTypeMapping{
                                Url: x3d.MFString{"../data/Tufani8Final.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"},
                                Category: int32Ptr(77),
                                Specific: int32Ptr(4),
                            },
                        },
                        &x3d.Collision{
                            Enabled: boolPtr(false),
                            &x3d.Group{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("AvatarHolder"),
                                    },
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
                    Layers: &x3d.LayoutLayer{
                        Layout: &x3d.Layout{
                            Align: x3d.MFString{"LEFT", "BOTTOM"},
                            Offset: x3d.MFFloat{-0.2, 0.19},
                            Size: x3d.MFFloat{0.4, 0.6},
                        },
                        Viewport: &x3d.Viewport{
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, 0.0, -3.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                            Transparency: floatPtr(0.7),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{100.0, 100.0, 0.02},
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("equationTransform"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.0, -20.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                                },
                                            },
                                            Geometry: &x3d.Text{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("equation"),
                                                },
                                                String: x3d.MFString{"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"},
                                                FontStyle: &x3d.FontStyle{
                                                    Size: floatPtr(0.09),
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("aPI"),
                            },
                            Name: stringPtr("SliderProto"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("shaderNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ComposedShader{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("freewrlShader"),
                                            },
                                        },
                                    },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("bPI"),
                            },
                            Name: stringPtr("SliderProto"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 0.4 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"b=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("b"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("freewrlShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("cPI"),
                            },
                            Name: stringPtr("SliderProto"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 0.1 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"c=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterScale"),
                                Value: stringPtr("20"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("c"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("freewrlShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("dPI"),
                            },
                            Name: stringPtr("SliderProto"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 -0.2 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"d=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterScale"),
                                Value: stringPtr("20"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("d"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("freewrlShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("tdeltaPI"),
                            },
                            Name: stringPtr("SliderProto"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 -0.5 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"tdelta=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterScale"),
                                Value: stringPtr("6.28"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("tdelta"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("freewrlShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("pdeltaPI"),
                            },
                            Name: stringPtr("SliderProto"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 -0.8 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"pdelta=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterScale"),
                                Value: stringPtr("6.28"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("pdelta"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("freewrlShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("OrbitScript"),
                    FromField: stringPtr("coordIndexes"),
                    ToNode: stringPtr("Orbit"),
                    ToField: stringPtr("set_coordIndex"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("OrbitScript"),
                    FromField: stringPtr("coordinates_changed"),
                    ToNode: stringPtr("OrbitCoordinates"),
                    ToField: stringPtr("set_point"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("EntityManager"),
                    FromField: stringPtr("addedEntities"),
                    ToNode: stringPtr("AvatarHolder"),
                    ToField: stringPtr("addChildren"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("EntityManager"),
                    FromField: stringPtr("removedEntities"),
                    ToNode: stringPtr("AvatarHolder"),
                    ToField: stringPtr("removeChildren"),
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
	filename := "../data/bumpyfreewrljsonverse.new.go.x3d"
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