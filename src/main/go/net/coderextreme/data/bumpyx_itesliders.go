
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
        Profile: stringPtr("Full"),
        Version: stringPtr("4.1"),
        Head: &x3d.Head{
//<component name='Shape' level='4'></component>
//<component name='DIS' level='2'></component>
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
                    Content: stringPtr("bumpyx_itesliders.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("*Bumpy flower with prototype sliders*"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Doug Sanden, Christoph Valentin, John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("PSPad, http://www.pspad.com/"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("license.html"),
            },
            },
        },
//"The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution,
//It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
//open for their "discussion about the teapot"
        &x3d.Group{
            Children: []x3d.X3DNode{
//LayerSet with two layers, navigation happens in layer 1
                &x3d.LayerSet{
                    ActiveLayer: int32Ptr(1),
                    Order: []int32{1, 2, 3},
//the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)"
                    &x3d.Layer{
                        Children: []x3d.X3DChildNode{
                            Pickable: boolPtr(true),
                            ObjectType: x3d.MFString{"ALL"},
//basic nodes, which might be present in any scene
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
                                FieldOfView: floatPtr(1.570796),
                                Position: &x3d.SFVec3f{0.0, 1.75, 60.0},
                            },
//this group contains the red/green/blue 3D crosshair
                            &x3d.Group{
                                Children: []x3d.X3DNode{
//Arrow X
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{25.0, 0.0, 0.0},
                                            Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 1.57},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Geometry: &x3d.Cylinder{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Shaft"),
                                                    },
                                                    Radius: floatPtr(0.35),
                                                    Height: floatPtr(50.0),
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("RED"),
                                                        },
                                                        DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                        EmissiveColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                    },
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{50.0, 0.0, 0.0},
                                            Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 1.57},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Geometry: &x3d.Cone{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Tip"),
                                                    },
                                                    BottomRadius: floatPtr(0.8),
                                                    Height: floatPtr(3.0),
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("RED"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
//Arrow Y
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{0.0, 25.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Geometry: &x3d.Cylinder{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Shaft"),
                                                    },
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("GREEN"),
                                                        },
                                                        DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                                        EmissiveColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                                    },
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{0.0, 50.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Geometry: &x3d.Cone{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Tip"),
                                                    },
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("GREEN"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
//Arrow Z
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{0.0, 0.0, 25.0},
                                            Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Geometry: &x3d.Cylinder{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Shaft"),
                                                    },
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BLUE"),
                                                        },
                                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                        EmissiveColor: &x3d.SFColor{0.0, 0.0, 1.0},
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
                                                Geometry: &x3d.Cone{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Tip"),
                                                    },
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("BLUE"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
//the model that is being reviewed by the users of this scene
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("FlowerTransform"),
                                    },
                                Children: []x3d.X3DNode{
//<Inline DEF="Flower" url='"bumpyx_ite.x3d"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
                                    &x3d.Background{
                                        BackUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"},
                                        BottomUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"},
                                        FrontUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"},
                                        LeftUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"},
                                        RightUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"},
                                        TopUrl: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"},
                                    },
                                    &x3d.Transform{
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
//<Sphere radius='40'></Sphere>
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
                                                            Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_back.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"},
                                                        },
                                                        BottomTexture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"},
                                                        },
                                                        FrontTexture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_front.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"},
                                                        },
                                                        LeftTexture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_left.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"},
                                                        },
                                                        RightTexture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_right.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"},
                                                        },
                                                        TopTexture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"../resources/images/all_probes/stpeters_cross/stpeters_top.png", "https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"},
                                                        },
                                                    },
                                                    &x3d.ComposedShader{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("x_iteShader"),
                                                        },
                                                        Language: stringPtr("GLSL"),
                                                        Field: []x3d.X3DNode{
                                                            &x3d.Field{
                                                                Name: stringPtr("chromaticDispertion"),
                                                                AccessType: stringPtr("inputOnly"),
                                                                Type: stringPtr("SFVec3f"),
                                                                Value: stringPtr("0.98 1 1.033"),
                                                        },
                                                        &x3d.Field{
                                                            Name: stringPtr("cube"),
                                                            Type: stringPtr("SFNode"),
                                                            AccessType: stringPtr("inputOnly"),
                                                            Children: []x3d.X3DNode{
                                                                &x3d.ComposedCubeMapTexture{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("texture"),
                                                                    },
                                                                },
                                                            },
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
                                                            AccessType: stringPtr("inputOutput"),
                                                            Value: stringPtr("15"),
                                                        },
                                                        &x3d.Field{
                                                            Name: stringPtr("b"),
                                                            Type: stringPtr("SFFloat"),
                                                            AccessType: stringPtr("inputOutput"),
                                                            Value: stringPtr("5"),
                                                        },
                                                        &x3d.Field{
                                                            Name: stringPtr("c"),
                                                            Type: stringPtr("SFFloat"),
                                                            AccessType: stringPtr("inputOutput"),
                                                            Value: stringPtr("5"),
                                                        },
                                                        &x3d.Field{
                                                            Name: stringPtr("d"),
                                                            Type: stringPtr("SFFloat"),
                                                            AccessType: stringPtr("inputOutput"),
                                                            Value: stringPtr("5"),
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
                                                                Url: x3d.MFString{"../shaders/x_ite_flowers_chromatic.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"},
                                                                Type: stringPtr("VERTEX"),
                                                        },
                                                        &x3d.ShaderPart{
                                                            Url: x3d.MFString{"../shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"},
                                                            Type: stringPtr("FRAGMENT"),
                                                        },
//TO CONVERT TO A SPHERE
//<ShaderPart url='"../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"' type="VERTEX" containerField='parts'></ShaderPart>
//<ShaderPart url='"../shaders/x_itebubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart>
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
                                    Name: stringPtr("a"),
                                    Type: stringPtr("SFFloat"),
                                    AccessType: stringPtr("inputOutput"),
                                    Value: stringPtr("10"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("b"),
                                    Type: stringPtr("SFFloat"),
                                    AccessType: stringPtr("inputOutput"),
                                    Value: stringPtr("10"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("c"),
                                    Type: stringPtr("SFFloat"),
                                    AccessType: stringPtr("inputOutput"),
                                    Value: stringPtr("2"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("d"),
                                    Type: stringPtr("SFFloat"),
                                    AccessType: stringPtr("inputOutput"),
                                    Value: stringPtr("2"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("pdelta"),
                                    Type: stringPtr("SFFloat"),
                                    AccessType: stringPtr("inputOutput"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("tdelta"),
                                    Type: stringPtr("SFFloat"),
                                    AccessType: stringPtr("inputOutput"),
                                    Value: stringPtr("0"),
                                },
//ecmascript:
//function initialize() {
//     var resolution = 300;
//     var theta = 0.0;
//     var phi = 0.0;
//     var delta = (2 * 3.141592653) / (resolution-1);
//     var crds = new MFVec3f();
//     for ( i = 0; i < resolution; i++) {
//     	for ( j = 0; j < resolution; j++) {
//		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
//		crds.push(new SFVec3f(
//			rho * Math.cos(phi) * Math.cos(theta),
//			rho * Math.cos(phi) * Math.sin(theta),
//			rho * Math.sin(phi)
//		));
//		theta += delta;
//	}
//	phi += delta;
//     }
//     coordinates = crds;
//
//
//     var cis = new MFInt32();
//     for ( i = 0; i < resolution-1; i++) {
//     	for ( j = 0; j < resolution-1; j++) {
//	     cis.push(i*resolution+j);
//	     cis.push(i*resolution+j+1);
//	     cis.push((i+1)*resolution+j+1);
//	     cis.push((i+1)*resolution+j);
//	     cis.push(-1);
//	}
//    }
//    coordIndexes = cis;
//}
                                },
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
                        },
                    },
                    &x3d.LayoutLayer{
                        Pickable: boolPtr(true),
                        ObjectType: x3d.MFString{"ALL"},
                        Layout: &x3d.Layout{
                            Align: x3d.MFString{"LEFT", "BOTTOM"},
                            Offset: x3d.MFFloat{-0.2, 0.19},
                            Size: x3d.MFFloat{0.4, 0.6},
                        },
                        Viewport: &x3d.Viewport{
                            ClipBoundary: x3d.MFFloat{0.0, 1.0, 0.0, 1.0},
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
                                            Geometry: &x3d.Text{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("equation"),
                                                },
                                                String: x3d.MFString{"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"},
                                                FontStyle: &x3d.FontStyle{
                                                    Size: floatPtr(0.09),
                                                },
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.ProtoDeclare{
                            Name: stringPtr("SliderProto"),
                            ProtoInterface: &x3d.ProtoInterface{
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("sliderTranslation"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFVec3f"),
                                        Value: stringPtr("0 0.7 0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("transformTranslation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Value: stringPtr("0 0 0.1"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("sensorTranslation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Value: stringPtr("0 0 0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("textString"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFString"),
                                    Value: stringPtr("\"a=\""),
                                },
                                &x3d.Field{
                                    Name: stringPtr("parameterScale"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Value: stringPtr("30"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("parameterName"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFString"),
                                    Value: stringPtr("a"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("petNames"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("shaderNode"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFNode"),
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
                                                    Translation: &x3d.SFVec3f{0.0, 0.7, 0.0},
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
                                                            Translation: &x3d.SFVec3f{0.0, 0.0, 0.1},
                                                            IS: &x3d.IS{
                                                                Connect: []x3d.X3DNode{
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
                                                                Description: stringPtr("Grab with mouse to adjust slider"),
                                                                MaxPosition: &x3d.SFVec2f{1.0, 0.0},
                                                            },
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.0, 0.0, 0.0},
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
                                                                        Geometry: &x3d.Text{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("protoText"),
                                                                            },
                                                                            String: x3d.MFString{"a="},
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
                                                                        Appearance: &x3d.Appearance{
                                                                            Material: &x3d.Material{
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
                                                Url: x3d.MFString{"../javascripts/X3DUser.js", "https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"},
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
                                                        NodeField: stringPtr("petNames"),
                                                        ProtoField: stringPtr("petNames"),
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
                                                        Name: stringPtr("protoScale"),
                                                        AccessType: stringPtr("inputOutput"),
                                                        Type: stringPtr("SFFloat"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("petNames"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("MFString"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("protoParameterName"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFString"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("shader"),
                                                    AccessType: stringPtr("inputOutput"),
                                                    Type: stringPtr("SFNode"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("newTranslation"),
                                                    AccessType: stringPtr("inputOnly"),
                                                    Type: stringPtr("SFVec3f"),
                                                    Value: stringPtr("1 1 1"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("protoValue_changed"),
                                                    AccessType: stringPtr("outputOnly"),
                                                    Type: stringPtr("SFFloat"),
                                                    Value: stringPtr("1"),
                                                },
                                                &x3d.Field{
                                                    Name: stringPtr("protoText_changed"),
                                                    AccessType: stringPtr("outputOnly"),
                                                    Type: stringPtr("MFString"),
                                                    Value: stringPtr("\"1.0\""),
                                                },
                                                },
                                            },
                                            &x3d.X3DRoute{
                                                FromField: stringPtr("translation_changed"),
                                                FromNode: stringPtr("protoSensor"),
                                                ToField: stringPtr("set_translation"),
                                                ToNode: stringPtr("protoTransform"),
                                            },
                                            &x3d.X3DRoute{
                                                FromField: stringPtr("translation_changed"),
                                                FromNode: stringPtr("protoSensor"),
                                                ToField: stringPtr("newTranslation"),
                                                ToNode: stringPtr("protoValueTransformerScript"),
                                            },
                                            &x3d.X3DRoute{
                                                FromField: stringPtr("protoText_changed"),
                                                FromNode: stringPtr("protoValueTransformerScript"),
                                                ToField: stringPtr("string"),
                                                ToNode: stringPtr("protoText"),
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("SliderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("aPI"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 0.7 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transformTranslation"),
                                Value: stringPtr("0 0 0.1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("sensorTranslation"),
                                Value: stringPtr("0 0 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"a=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterScale"),
                                Value: stringPtr("30"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("a"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("petNames"),
                                Value: stringPtr("\"yottzumm\" \"group1-petname\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("x_iteShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("SliderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("bPI"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 0.4 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transformTranslation"),
                                Value: stringPtr("0 0 0.1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("sensorTranslation"),
                                Value: stringPtr("0 0 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("textString"),
                                Value: stringPtr("\"b=\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterScale"),
                                Value: stringPtr("30"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("parameterName"),
                                Value: stringPtr("b"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("petNames"),
                                Value: stringPtr("\"yottzumm\" \"group1-petname\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("x_iteShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("SliderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("cPI"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 0.1 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transformTranslation"),
                                Value: stringPtr("0 0 0.1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("sensorTranslation"),
                                Value: stringPtr("0 0 0"),
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
                                Name: stringPtr("petNames"),
                                Value: stringPtr("\"yottzumm\" \"yottzumm2\" \"group1-petname\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("x_iteShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("SliderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("dPI"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 -0.2 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transformTranslation"),
                                Value: stringPtr("0 0 0.1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("sensorTranslation"),
                                Value: stringPtr("0 0 0"),
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
                                Name: stringPtr("petNames"),
                                Value: stringPtr("\"yottzumm\" \"yottzumm2\" \"group1-petname\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("x_iteShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("SliderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("tdeltaPI"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 -0.5 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transformTranslation"),
                                Value: stringPtr("0 0 0.1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("sensorTranslation"),
                                Value: stringPtr("0 0 0"),
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
                                Name: stringPtr("petNames"),
                                Value: stringPtr("\"yottzumm2\" \"group1-petname\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("x_iteShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("SliderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("pdeltaPI"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("sliderTranslation"),
                                    Value: stringPtr("0 -0.8 0"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("transformTranslation"),
                                Value: stringPtr("0 0 0.1"),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("sensorTranslation"),
                                Value: stringPtr("0 0 0"),
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
                                Name: stringPtr("petNames"),
                                Value: stringPtr("\"yottzumm2\" \"group1-petname\""),
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("shaderNode"),
                                Children: []x3d.X3DNode{
                                    &x3d.ComposedShader{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("x_iteShader"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                    },
                    &x3d.Layer{
                        Children: []x3d.X3DChildNode{
                            Pickable: boolPtr(true),
                            ObjectType: x3d.MFString{"ALL"},
                            &x3d.Viewpoint{
                                Description: stringPtr("My Humanoids"),
                                FieldOfView: floatPtr(1.570796),
                                Position: &x3d.SFVec3f{0.0, 1.75, 80.0},
                            },
                            &x3d.Script{
                                Url: x3d.MFString{"../javascripts/X3DAvatar.js", "https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"},
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HumanoidScript"),
                                },
                                DirectOutput: boolPtr(true),
                                MustEvaluate: boolPtr(true),
                            },
                            &x3d.Group{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("humanoidGroup"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Group{
                                        Children: []x3d.X3DNode{
                                        },
                                    },
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
	filename := "../data/bumpyx_itesliders.new.go.x3d"
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