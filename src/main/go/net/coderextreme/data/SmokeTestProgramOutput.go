
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
        CssClass: stringPtr("x3dModel.class"),
        Profile: stringPtr("Full"),
        Style: stringPtr("x3dModel.style"),
        Version: stringPtr("4.0"),
//X3D model top-level comment
        Head: &x3d.Head{
//comment #1
//comment #2
//comment #3
//comment #4
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("Navigation"),
                    Level: int32Ptr(3),
            },
            &x3d.Component{
                Name: stringPtr("Shaders"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("CADGeometry"),
                Level: int32Ptr(2),
            },
            &x3d.Component{
                Name: stringPtr("DIS"),
                Level: int32Ptr(2),
            },
            &x3d.Component{
                Name: stringPtr("HAnim"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Grouping"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Layering"),
                Level: int32Ptr(1),
            },
        },
            Units: []*x3d.Unit{
                &x3d.Unit{
                    Name: stringPtr("AngleUnitConversion"),
                    Category: stringPtr("angle"),
                    ConversionFactor: doublePtr(1.0),
            },
            &x3d.Unit{
                Name: stringPtr("LengthUnitConversion"),
                Category: stringPtr("length"),
                ConversionFactor: doublePtr(1.0),
            },
            &x3d.Unit{
                Name: stringPtr("ForceFromPoundsToNewtons"),
                Category: stringPtr("force"),
                ConversionFactor: doublePtr(4.4482),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("SmokeTestProgramOutput.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("continued development and testing in progress"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/specifications/java/X3DJSAIL.html"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("SmokeTestProgramOutput.java"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("6 September 2016"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("20 June 2026"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D Java Scene Access Interface Library (X3DJSAIL)"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Netbeans https://www.netbeans.org"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("SmokeTestProgramOutput.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("SmokeTestProgramOutput.x3dv"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("SmokeTestProgramOutput.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("SmokeTestProgramOutput.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.ViewpointGroup{
                    Description: stringPtr("Available viewpoints"),
                    &x3d.Viewpoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DefaultView"),
                        },
                        Description: stringPtr("Hello X3DJSAIL"),
                        NavigationInfo: &x3d.NavigationInfo{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ViewpointChildNavigationInfo"),
                            },
                        },
                    },
                    &x3d.Viewpoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TopDownView"),
                        },
                        Description: stringPtr("top-down view from above"),
                        Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.5708},
                        Position: &x3d.SFVec3f{0.0, 100.0, 0.0},
                    },
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"EXAMINE", "FLY", "ANY"},
                },
                &x3d.WorldInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("WorldInfoDEF"),
                    },
                    CssClass: stringPtr("worldInfoNode.class"),
                    Style: stringPtr("worldInfoNode.style"),
                    Title: stringPtr("SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)"),
                },
                &x3d.WorldInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        USE: stringPtr("WorldInfoDEF"),
                    },
                },
                &x3d.WorldInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        USE: stringPtr("WorldInfoDEF"),
                    },
                },
                Metadata: &x3d.MetadataString{
                    Name: stringPtr("test"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("scene.addChildMetadata"),
                    },
                    Value: x3d.MFString{"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"},
                },
                &x3d.LayerSet{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("scene.addChildLayerSetTest"),
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("LogoGeometryTransform"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Anchor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("siteAnchor"),
                            },
                            Description: stringPtr("select for X3D Java SAI Library (X3DJSAIL) description"),
                            Url: x3d.MFString{"../X3DJSAIL.html", "https://www.web3d.org/specifications/java/X3DJSAIL.html"},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BoxShape"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("GreenMaterial"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.0, 1.0, 1.0},
                                            EmissiveColor: &x3d.SFColor{0.8, 0.0, 0.0},
                                            Transparency: floatPtr(0.1),
                                        },
                                        Texture: &x3d.ImageTexture{
                                            Url: x3d.MFString{"images/X3dJavaSceneAccessInterfaceSaiLibrary.png", "https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"},
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("test-NMTOKEN_regex.0123456789"),
                                        },
                                        CssClass: stringPtr("untextured"),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("LineShape"),
                    },
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            EmissiveColor: &x3d.SFColor{0.6, 0.1961, 0.8},
                        },
                    },
                    Geometry: &x3d.IndexedLineSet{
                        CoordIndex: []int32{0, 1, 2, 3, 4, 0},
//Coordinate 3-tuple point count: 6
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{0.0,1.5,0.0},[3]float32{2.0,1.5,0.0},[3]float32{2.0,1.5,-2.0},[3]float32{-2.0,1.5,-2.0},[3]float32{-2.0,1.5,0.0},[3]float32{0.0,1.5,0.0}},
                        },
                    },
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BoxPathAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.125, 0.375, 0.625, 0.875, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,1.5,0.0},[3]float32{2.0,1.5,0.0},[3]float32{2.0,1.5,-2.0},[3]float32{-2.0,1.5,-2.0},[3]float32{-2.0,1.5,0.0},[3]float32{0.0,1.5,0.0}},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("OrbitClock"),
                    },
                    CycleInterval: doublePtr(8.0),
                    Loop: boolPtr(true),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("OrbitClock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("BoxPathAnimator"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("BoxPathAnimator"),
                    ToField: stringPtr("set_translation"),
                    ToNode: stringPtr("LogoGeometryTransform"),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TextTransform"),
                        },
                        Translation: &x3d.SFVec3f{0.0, -1.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("GreenMaterial"),
                                    },
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"X3D Java", "SAI Library", "X3DJSAIL"},
//Comment example A, plain quotation marks: He said, "Immel did it!"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
                                Metadata: &x3d.MetadataSet{
                                    Name: stringPtr("EscapedQuotationMarksMetadataSet"),
                                    &x3d.MetadataString{
                                        Name: stringPtr("quotesTestC"),
                                        Value: x3d.MFString{"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""},
                                    },
                                    &x3d.MetadataString{
                                        Name: stringPtr("extraChildTest"),
                                        Value: x3d.MFString{"checks MetadataSet addValue() method"},
                                    },
                                },
                                FontStyle: &x3d.FontStyle{
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                },
                            },
                        },
                        &x3d.Collision{
//test containerField='proxy'
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ProxyShape"),
                                },
//alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \\&quot;Immel did it!\\&quot;"'
//alternative XML encoding: Text string='"One, Two, Comment" "" "He said, \\&quot;Immel did it!\\&quot;" ""'
//alternative Java source: .setString(new String [] {"One, Two, Comment", "", "He said, \\""Immel did it!\\"""})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
                                Geometry: &x3d.Text{
                                    String: x3d.MFString{"One, Two, Text", "He said, \"Immel did it!\" \"\""},
                                },
                            },
                        },
//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
                    },
                },
//repeatedly spin 180 degrees as a readable special effect
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SpinInterpolator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 4.7124, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.5708},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SpinClock"),
                    },
                    CycleInterval: doublePtr(5.0),
                    Loop: boolPtr(true),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("SpinClock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("SpinInterpolator"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("SpinInterpolator"),
                    ToField: stringPtr("rotation"),
                    ToNode: stringPtr("TextTransform"),
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("BackgroundGroup"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Background{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("GradualBackground"),
                            },
                        },
                        &x3d.Script{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("colorTypeConversionScript"),
                            },
                            Field: []x3d.X3DNode{
                                &x3d.Field{
                                    Name: stringPtr("colorInput"),
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFColor"),
                            },
                            &x3d.Field{
                                Name: stringPtr("colorsOutput"),
                                AccessType: stringPtr("outputOnly"),
                                Type: stringPtr("MFColor"),
                            },
//ecmascript:
//
//function colorInput (eventValue) // Example source code
//{
//   colorsOutput = new MFColor(eventValue); // assigning value sends output event
//// Browser.print('colorInput=' + eventValue + ',
////                colorsOutput=' + colorsOutput + '
//');
//// TODO check line wrapping when exporting/converting
//}
                            },
                        },
                        &x3d.ColorInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ColorAnimator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: &x3d.MFColor{[3]float32{0.9412,1.0,1.0},[3]float32{0.2941,0.0,0.5098},[3]float32{0.9412,1.0,1.0}},
//AZURE to INDIGO and back again
                        },
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ColorClock"),
                            },
                            CycleInterval: doublePtr(60.0),
                            Loop: boolPtr(true),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("colorsOutput"),
                            FromNode: stringPtr("colorTypeConversionScript"),
                            ToField: stringPtr("skyColor"),
                            ToNode: stringPtr("GradualBackground"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("value_changed"),
                            FromNode: stringPtr("ColorAnimator"),
                            ToField: stringPtr("colorInput"),
                            ToNode: stringPtr("colorTypeConversionScript"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("fraction_changed"),
                            FromNode: stringPtr("ColorClock"),
                            ToField: stringPtr("set_fraction"),
                            ToNode: stringPtr("ColorAnimator"),
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco01"),
                    Appinfo: stringPtr("tooltip: ArtDeco01Material prototype is a Material node"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("description"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("tooltip for descriptionField"),
                                Type: stringPtr("SFString"),
                                Value: stringPtr("ArtDeco01Material prototype is a Material node"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
//Initial node of ProtoBody determines prototype node type
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                DiffuseColor: &x3d.SFColor{0.2824, 0.0852, 0.1345},
                                Shininess: floatPtr(0.1273),
                                SpecularColor: &x3d.SFColor{0.2763, 0.1143, 0.1399},
                            },
//[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
                            &x3d.TouchSensor{
                                Description: stringPtr("within ProtoBody"),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("description"),
                                            ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enabled"),
                                        ProtoField: stringPtr("enabled"),
                                    },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco02"),
                    Appinfo: stringPtr("this is a different Material node"),
                    Url: x3d.MFString{"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02", "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"},
//[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file."
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("description"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("tooltip for descriptionField"),
                            Type: stringPtr("SFString"),
                    },
                    },
                },
//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TestShape1"),
                    },
                    Appearance: &x3d.Appearance{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TestAppearance1"),
                        },
//ArtDeco01Material prototype goes here...
                        Material: &x3d.ProtoInstance{
                            Name: stringPtr("ArtDeco01"),
//[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()="Material"
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("description"),
                                    Value: stringPtr("ArtDeco01Material can substitute for a Material node"),
                            },
                            },
                        },
                    },
                    Geometry: &x3d.Sphere{
                        Radius: floatPtr(0.001),
                    },
                },
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TestShape2"),
                    },
                    Appearance: &x3d.Appearance{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TestAppearance2"),
                        },
//ArtDeco02Material ProtoInstance goes here...
                        Material: &x3d.ProtoInstance{
                            Name: stringPtr("ArtDeco02"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ArtDeco02MaterialDEF"),
                            },
//[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()="ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file."
                        },
                    },
                    Geometry: &x3d.Cone{
                        BottomRadius: floatPtr(0.001),
                        Height: floatPtr(0.001),
                    },
                },
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TestShape3"),
                    },
                    Appearance: &x3d.Appearance{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TestAppearance3"),
                        },
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE.
                        Material: &x3d.ProtoInstance{
                            Name: stringPtr("ArtDeco02"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("ArtDeco02MaterialDEF"),
                            },
                        },
                    },
                    Geometry: &x3d.Cylinder{
                        Height: floatPtr(0.001),
                        Radius: floatPtr(0.001),
                    },
                },
                &x3d.Inline{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("inlineScene"),
                    },
                    Url: x3d.MFString{"newScene.x3d", "https://www.web3d.org/specifications/java/examples/newScene.x3d"},
                },
                &x3d.IMPORT{
                    AS: stringPtr("WorldInfoDEF2"),
                    ImportedDEF: stringPtr("WorldInfoDEF"),
                    InlineDEF: stringPtr("inlineScene"),
                },
                &x3d.EXPORT{
                    AS: stringPtr("WorldInfoDEF3"),
                    LocalDEF: stringPtr("WorldInfoDEF"),
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("MaterialModulator"),
                    Appinfo: stringPtr("mimic a Material node and modulate fields as an animation effect"),
                    Documentation: stringPtr("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("enabled"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFBool"),
                                Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("diffuseColor"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("0 0 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("emissiveColor"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("0.05 0.05 0.5"),
                        },
                        &x3d.Field{
                            Name: stringPtr("specularColor"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("0 0 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("transparency"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("shininess"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("ambientIntensity"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("MaterialNode"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("diffuseColor"),
                                            ProtoField: stringPtr("diffuseColor"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("emissiveColor"),
                                        ProtoField: stringPtr("emissiveColor"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("specularColor"),
                                        ProtoField: stringPtr("specularColor"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("transparency"),
                                        ProtoField: stringPtr("transparency"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("shininess"),
                                        ProtoField: stringPtr("shininess"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("ambientIntensity"),
                                        ProtoField: stringPtr("ambientIntensity"),
                                    },
                                    },
                                },
                            },
//Only first node (the node type for the prototype) is renderable, others are along for the ride
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("MaterialModulatorScript"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("enabled"),
                                            ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("diffuseColor"),
                                        ProtoField: stringPtr("diffuseColor"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("enabled"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("diffuseColor"),
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFColor"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("newColor"),
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFColor"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("clockTrigger"),
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFTime"),
                                },
//ecmascript:
//function initialize ()
//{
//    newColor = diffuseColor; // start with correct color
//}
//function set_enabled (newValue)
//{
//	enabled = newValue;
//}
//function clockTrigger (timeValue)
//{
//    if (!enabled) return;
//    red   = newColor.r;
//    green = newColor.g;
//    blue  = newColor.b;
//
//    // note different modulation rates for each color component, % is modulus operator
//    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
//	if (enabled)
//	{
//		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');
//	}
//}
                                },
                            },
                        },
                    },
                },
//Test success: declarative statement createDeclarativeShapeTests()
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DeclarativeGroupExample"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Value: &x3d.MetadataString{
                                Name: stringPtr("findThisNameValue"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("FindableMetadataStringTest"),
                                },
                                Value: x3d.MFString{"test case"},
                            },
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("DeclarativeAppearanceExample"),
                                },
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
                                Material: &x3d.ProtoInstance{
                                    Name: stringPtr("MaterialModulator"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("MyMaterialModulator"),
                                    },
                                },
                            },
                            Geometry: &x3d.Cone{
                                Bottom: boolPtr(false),
                                BottomRadius: floatPtr(0.05),
                                Height: floatPtr(0.1),
                            },
                        },
//Test success: declarativeGroup.addChild() singleton pipeline method
                    },
                },
//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/>
//Test success: x3dModel.findElementByNameValue("ArtDeco01", "ProtoDeclare") found
//Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found
//Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TestFieldObjectsGroup"),
                        },
                    Children: []x3d.X3DNode{
//testFieldObjects() results
//SFBool default=false, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true
//regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotation.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value
                    },
                },
                &x3d.Sound{
                    Location: &x3d.SFVec3f{0.0, 1.6, 0.0},
//set sound-ellipsoid location height at 1.6m to match typical avatar height
                    Source: &x3d.AudioClip{
                        Description: stringPtr("chimes"),
                        Url: x3d.MFString{"chimes.wav", "https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"},
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
                    },
                },
                &x3d.Sound{
                    Location: &x3d.SFVec3f{0.0, 1.6, 0.0},
//set sound-ellipsoid location height at 1.6m to match typical avatar height
                    Source: &x3d.MovieTexture{
                        Description: stringPtr("mpgsys.mpg from ConformanceNist suite"),
                        Url: x3d.MFString{"mpgsys.mpg", "https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"},
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values="texture" "source" "back" "bottom" "front" "left" "right" "top" "backTexture" "bottomTexture" "frontTexture" "leftTexture" "rightTexture" "topTexture" "children"
                    },
                },
//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ExtrusionShape"),
                    },
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
                    Appearance: &x3d.Appearance{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TransparentAppearance"),
                        },
                        Material: &x3d.Material{
                            Transparency: floatPtr(1.0),
                        },
                    },
                    Geometry: &x3d.Extrusion{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("ExampleExtrusion"),
                        },
                    },
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
                        &x3d.ProtoDeclare{
                            Name: stringPtr("NewWorldInfo"),
                            ProtoInterface: &x3d.ProtoInterface{
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("description"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFString"),
                                },
                                },
                            },
                            ProtoBody: &x3d.ProtoBody{
                                Children: []x3d.X3DNode{
                                    &x3d.WorldInfo{
                                    },
                                },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("NewWorldInfo"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Proto1"),
                            },
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("description"),
                                    Value: stringPtr("testing 1 2 3"),
                            },
                            },
                        },
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Node2"),
                                },
                            Children: []x3d.X3DNode{
//intentionally empty
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("NewWorldInfo"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Proto3"),
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Node4"),
                                },
                            Children: []x3d.X3DNode{
//intentionally empty
                            },
                        },
//Test satisfactorily creates MFNode children array as an ordered list with mixed content
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ShaderProto"),
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.ProgramShader{
                            },
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
                        &x3d.ProgramShader{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("TestShader1"),
                            },
                            &x3d.ShaderProgram{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TestShader2"),
                                },
                                Type: stringPtr("VERTEX"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("ShaderProto"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("TestShader3"),
                            },
                        },
                        &x3d.ComposedShader{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("TestShader4"),
                            },
                            Parts: []x3d.X3DNode{
                                &x3d.ShaderPart{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("TestShader5"),
                                    },
                                    Type: stringPtr("VERTEX"),
                            },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("SpecialtyNodes"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.CADLayer{
                            &x3d.CADAssembly{
                                &x3d.CADPart{
                                    &x3d.CADFace{
                                    },
                                },
                            },
                        },
                        &x3d.EspduTransform{
                        },
                        &x3d.ReceiverPdu{
                        },
                        &x3d.SignalPdu{
                        },
                        &x3d.TransmitterPdu{
                        },
                        &x3d.DISEntityManager{
                            &x3d.DISEntityTypeMapping{
                            },
                        },
                    },
                },
                &x3d.EspduTransform{
                    &x3d.WorldInfo{
                    },
                },
                &x3d.ReceiverPdu{
                },
                &x3d.SignalPdu{
                },
                &x3d.TransmitterPdu{
                },
                &x3d.DISEntityManager{
                    &x3d.DISEntityTypeMapping{
                    },
                },
                &x3d.LoadSensor{
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
                    &x3d.Anchor{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("siteAnchor"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("inlineScene"),
                        },
                    },
                    &x3d.DISEntityTypeMapping{
                    },
                    &x3d.GeoMetadata{
                    },
                    &x3d.AudioClip{
                    },
                    &x3d.ImageCubeMapTexture{
                    },
                    &x3d.ImageTexture3D{
                    },
                    &x3d.ImageTexture{
                    },
                    &x3d.MovieTexture{
                    },
                    &x3d.Script{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DummyScript"),
                        },
//ecmascript:
///* dummy test source code */
                    },
                    &x3d.PackagedShader{
                    },
                    Parts: []*x3d.ShaderPart{
                        &x3d.ShaderPart{
                            Type: stringPtr("VERTEX"),
                    },
                    &x3d.ShaderProgram{
                        Type: stringPtr("VERTEX"),
                    },
                    },
                },
                &x3d.OrthoViewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SpecialTestOrthoViewpoint"),
                    },
                    FieldOfView: x3d.MFFloat{1.0, 3.0, 2.0, 4.0},
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
	filename := "../data/SmokeTestProgramOutput.new.go.x3d"
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