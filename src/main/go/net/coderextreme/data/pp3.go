
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
                    Content: stringPtr("pp3.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("5 May 2015"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("23 Dec 2022"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("A process pipeline between three spheres (try typing on spheres and blue"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/x3d/pp3.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("manual"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("Process"),
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
//left
                                    &x3d.Transform{
                                            Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.7, 1.0, 0.0},
                                                        Transparency: floatPtr(0.5),
                                                    },
                                                },
                                                Geometry: &x3d.Extrusion{
                                                    CreaseAngle: floatPtr(0.785),
                                                    CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0},[2]float32{-0.92,0.38},[2]float32{-0.71,0.71},[2]float32{-0.38,0.92},[2]float32{0.0,1.0},[2]float32{0.38,0.92},[2]float32{0.71,0.71},[2]float32{0.92,0.38},[2]float32{1.0,0.0}},
                                                    Spine: &x3d.MFVec3f{[3]float32{-2.5,0.0,0.0},[3]float32{-2.0,0.0,0.0},[3]float32{-1.5,0.0,0.0}},
                                                },
                                            },
//<Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'/> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"/> <TouchSensor DEF="LeftTouch" enabled="true"/>
                                        },
                                    },
//right
                                    &x3d.Transform{
                                            Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.0, 0.7, 1.0},
                                                        Transparency: floatPtr(0.5),
                                                    },
                                                },
                                                Geometry: &x3d.Extrusion{
                                                    CreaseAngle: floatPtr(0.785),
                                                    CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0},[2]float32{-0.92,0.38},[2]float32{-0.71,0.71},[2]float32{-0.38,0.92},[2]float32{0.0,1.0},[2]float32{0.38,0.92},[2]float32{0.71,0.71},[2]float32{0.92,0.38},[2]float32{1.0,0.0}},
                                                    Spine: &x3d.MFVec3f{[3]float32{1.5,0.0,0.0},[3]float32{2.0,0.0,0.0},[3]float32{2.5,0.0,0.0}},
                                                },
                                            },
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{2.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("MaterialLightBlue"),
                                                                },
                                                                DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                            },
                                                        },
                                                        Geometry: &x3d.Text{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("RightString"),
                                                            },
                                                            String: x3d.MFString{"r"},
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.StringSensor{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("RightSensor"),
                                                },
                                                Enabled: boolPtr(false),
                                            },
                                            &x3d.TouchSensor{
                                                Description: stringPtr("touch to activate"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("RightTouch"),
                                                },
                                            },
                                        },
                                    },
//up
                                    &x3d.Transform{
                                            Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.0, 0.7, 1.0},
                                                        Transparency: floatPtr(0.5),
                                                    },
                                                },
                                                Geometry: &x3d.Extrusion{
                                                    CreaseAngle: floatPtr(0.785),
                                                    CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0},[2]float32{-0.92,0.38},[2]float32{-0.71,0.71},[2]float32{-0.38,0.92},[2]float32{0.0,1.0},[2]float32{0.38,0.92},[2]float32{0.71,0.71},[2]float32{0.92,0.38},[2]float32{1.0,0.0}},
                                                    Spine: &x3d.MFVec3f{[3]float32{0.0,1.5,0.0},[3]float32{0.0,2.0,0.0},[3]float32{0.0,2.5,0.0}},
                                                },
                                            },
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{-0.5, 2.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("MaterialLightBlue"),
                                                                },
                                                            },
                                                        },
                                                        Geometry: &x3d.Text{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("UpString"),
                                                            },
                                                            String: x3d.MFString{"u"},
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.StringSensor{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("UpSensor"),
                                                },
                                                Enabled: boolPtr(false),
                                            },
                                            &x3d.TouchSensor{
                                                Description: stringPtr("touch to activate"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("UpTouch"),
                                                },
                                            },
                                        },
                                    },
//down
                                    &x3d.Transform{
                                            Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.7, 1.0, 0.0},
                                                        Transparency: floatPtr(0.5),
                                                    },
                                                },
                                                Geometry: &x3d.Extrusion{
                                                    CreaseAngle: floatPtr(0.785),
                                                    CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0},[2]float32{-0.92,0.38},[2]float32{-0.71,0.71},[2]float32{-0.38,0.92},[2]float32{0.0,1.0},[2]float32{0.38,0.92},[2]float32{0.71,0.71},[2]float32{0.92,0.38},[2]float32{1.0,0.0}},
                                                    Spine: &x3d.MFVec3f{[3]float32{0.0,-2.5,0.0},[3]float32{0.0,-2.0,0.0},[3]float32{0.0,-1.5,0.0}},
                                                },
                                            },
//<Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'/> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"/> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"/>
                                        },
                                    },
//center
                                    &x3d.Transform{
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.7},
                                                    },
                                                },
                                                Geometry: &x3d.Sphere{
                                                },
                                            },
                                            &x3d.Transform{
                                                    Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                                                    Translation: &x3d.SFVec3f{-0.5, 0.0, 1.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("MaterialLightBlue"),
                                                                },
                                                            },
                                                        },
                                                        Geometry: &x3d.Text{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("CenterString"),
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.StringSensor{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("CenterSensor"),
                                                },
                                                Enabled: boolPtr(false),
                                            },
                                            &x3d.TouchSensor{
                                                Description: stringPtr("touch to activate"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("CenterTouch"),
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("RightSingleToMultiString"),
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("set_rightstring"),
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("rightlines"),
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFString"),
                                },
//ecmascript:
//
//function initialize() {
//	rightlines = new MFString("");
//}
//
//function set_rightstring(rightstr) {
//	rightlines = new MFString(rightstr);
//}
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("UpSingleToMultiString"),
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("set_upstring"),
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("uplines"),
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFString"),
                                },
//ecmascript:
//
//function initialize() {
//	uplines = new MFString("");
//}
//
//function set_upstring(upstr) {
//	uplines = new MFString(upstr);
//}
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CenterSingleToMultiString"),
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("set_centerstring"),
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("centerlines"),
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFString"),
                                },
//ecmascript:
//
//function initialize() {
//	centerlines = new MFString("");
//}
//
//function set_centerstring(centerstr) {
//	centerlines = new MFString(centerstr);
//}
                                },
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("enteredText"),
                                FromNode: stringPtr("CenterSensor"),
                                ToField: stringPtr("set_centerstring"),
                                ToNode: stringPtr("CenterSingleToMultiString"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("centerlines"),
                                FromNode: stringPtr("CenterSingleToMultiString"),
                                ToField: stringPtr("set_string"),
                                ToNode: stringPtr("CenterString"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("isOver"),
                                FromNode: stringPtr("CenterTouch"),
                                ToField: stringPtr("set_enabled"),
                                ToNode: stringPtr("CenterSensor"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("enteredText"),
                                FromNode: stringPtr("RightSensor"),
                                ToField: stringPtr("set_rightstring"),
                                ToNode: stringPtr("RightSingleToMultiString"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("rightlines"),
                                FromNode: stringPtr("RightSingleToMultiString"),
                                ToField: stringPtr("set_string"),
                                ToNode: stringPtr("RightString"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("isOver"),
                                FromNode: stringPtr("RightTouch"),
                                ToField: stringPtr("set_enabled"),
                                ToNode: stringPtr("RightSensor"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("enteredText"),
                                FromNode: stringPtr("UpSensor"),
                                ToField: stringPtr("set_upstring"),
                                ToNode: stringPtr("UpSingleToMultiString"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("uplines"),
                                FromNode: stringPtr("UpSingleToMultiString"),
                                ToField: stringPtr("set_string"),
                                ToNode: stringPtr("UpString"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("isOver"),
                                FromNode: stringPtr("UpTouch"),
                                ToField: stringPtr("set_enabled"),
                                ToNode: stringPtr("UpSensor"),
                            },
                        },
                    },
                },
                &x3d.NavigationInfo{
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Process pipes"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.4},
                    Position: &x3d.SFVec3f{0.0, 5.0, 12.0},
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{0.0, -2.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.ProtoInstance{
                            Name: stringPtr("Process"),
                        },
                    },
                },
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                        &x3d.ProtoInstance{
                            Name: stringPtr("Process"),
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{0.0, 2.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.ProtoInstance{
                            Name: stringPtr("Process"),
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
	filename := "../data/pp3.new.go.x3d"
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