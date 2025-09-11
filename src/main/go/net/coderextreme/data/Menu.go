
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("Menu.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("Menu"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("MFString"),
                                Name: stringPtr("menuItems"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Transform{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("TextMenuTransform"),
                                            },
                                            Translation: &x3d.SFVec3f{48.0, 27.0, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.TouchSensor{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("MenuTouchSensor"),
                                                },
                                            },
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("MenuText"),
                                                    },
                                                    IS: &x3d.IS{
                                                        Connect: []x3d.X3DNode{
                                                            &x3d.Connect{
                                                                NodeField: stringPtr("string"),
                                                                ProtoField: stringPtr("menuItems"),
                                                        },
                                                        },
                                                    },
                                                    FontStyle: &x3d.FontStyle{
                                                        Size: floatPtr(2.4),
                                                        Spacing: floatPtr(1.2),
                                                        Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                                    },
                                                },
                                            },
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                                    },
                                                },
                                                Geometry: &x3d.IndexedFaceSet{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Backing"),
                                                    },
                                                    CoordIndex: []int32{0, 1, 2, 3, -1},
                                                    Coord: &x3d.Coordinate{
                                                        Point: &x3d.MFVec3f{[3]float32{25.0,36.0,-0.01},[3]float32{-25.0,36.0,-0.01},[3]float32{-25.0,-51.0,-0.01},[3]float32{25.0,-51.0,-0.01}},
                                                    },
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Switch{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("SceneSwitcher"),
                                        },
                                        WhichChoice: int32Ptr(0),
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION1"),
                                            },
                                            Url: x3d.MFString{"../resources/JinInnerBrowRaiser.x3d", "JinInnerBrowRaiser.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION2"),
                                            },
                                            Url: x3d.MFString{"../resources/JinOuterBrowRaiser.x3d", "JinOuterBrowRaiser.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION3"),
                                            },
                                            Url: x3d.MFString{"../resources/JinBrowLowerer.x3d", "JinBrowLowerer.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION4"),
                                            },
                                            Url: x3d.MFString{"../resources/JinUpperLidRaiser.x3d", "JinUpperLidRaiser.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION5"),
                                            },
                                            Url: x3d.MFString{"../resources/JinCheekRaiser.x3d", "JinCheekRaiser.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION6"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLidTightener.x3d", "JinLidTightener.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION7"),
                                            },
                                            Url: x3d.MFString{"../resources/JinNoseWrinkler.x3d", "JinNoseWrinkler.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION8"),
                                            },
                                            Url: x3d.MFString{"../resources/JinUpperLipRaiser.x3d", "JinUpperLipRaiser.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION9"),
                                            },
                                            Url: x3d.MFString{"../resources/JinNasolabialDeepener.x3d", "JinNasolabialDeepener.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION10"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipCornerPuller.x3d", "JinLipCornerPuller.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION11"),
                                            },
                                            Url: x3d.MFString{"../resources/JinCheekPuffer.x3d", "JinCheekPuffer.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION12"),
                                            },
                                            Url: x3d.MFString{"../resources/JinDimpler.x3d", "JinDimpler.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION13"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipCornerDepressor.x3d", "JinLipCornerDepressor.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION14"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLowerLipDepressor.x3d", "JinLowerLipDepressor.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION15"),
                                            },
                                            Url: x3d.MFString{"../resources/JinChinRaiser.x3d", "JinChinRaiser.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION16"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipPuckerer.x3d", "JinLipPuckerer.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION17"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipStretcher.x3d", "JinLipStretcher.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION18"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipFunneler.x3d", "JinLipFunneler.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION19"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipTightener.x3d", "JinLipTightener.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION20"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipPressor.x3d", "JinLipPressor.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION21"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipsPart.x3d", "JinLipsPart.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION22"),
                                            },
                                            Url: x3d.MFString{"../resources/JinJawDrop.x3d", "JinJawDrop.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION23"),
                                            },
                                            Url: x3d.MFString{"../resources/JinMouthStretch.x3d", "JinMouthStretch.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION24"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLipSuck.x3d", "JinLipSuck.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION25"),
                                            },
                                            Url: x3d.MFString{"../resources/JinLidDroop.x3d", "JinLidDroop.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION26"),
                                            },
                                            Url: x3d.MFString{"../resources/JinSlit.x3d", "JinSlit.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION27"),
                                            },
                                            Url: x3d.MFString{"../resources/JinEyesClosed.x3d", "JinEyesClosed.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION28"),
                                            },
                                            Url: x3d.MFString{"../resources/JinSquint.x3d", "JinSquint.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION29"),
                                            },
                                            Url: x3d.MFString{"../resources/JinBlink.x3d", "JinBlink.x3d"},
                                        },
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OPTION30"),
                                            },
                                            Url: x3d.MFString{"../resources/JinWink.x3d", "JinWink.x3d"},
                                        },
                                    },
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("MenuScript"),
                                        },
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("menuItems"),
                                                    ProtoField: stringPtr("menuItems"),
                                            },
                                            },
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                AccessType: stringPtr("initializeOnly"),
                                                Type: stringPtr("MFString"),
                                                Name: stringPtr("menuItems"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("outputOnly"),
                                            Type: stringPtr("SFInt32"),
                                            Name: stringPtr("selection"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFVec3f"),
                                            Name: stringPtr("touchPoint"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("initializeOnly"),
                                            Type: stringPtr("SFFloat"),
                                            Name: stringPtr("spacing"),
                                            Value: stringPtr("1.2"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("initializeOnly"),
                                            Type: stringPtr("SFFloat"),
                                            Name: stringPtr("size"),
                                            Value: stringPtr("2.4"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("initializeOnly"),
                                            Type: stringPtr("SFFloat"),
                                            Name: stringPtr("menuCenterY"),
                                        },
                                        &x3d.Field{
                                            AccessType: stringPtr("initializeOnly"),
                                            Type: stringPtr("SFFloat"),
                                            Name: stringPtr("itemHeight"),
                                        },
//ecmascript:
//        function initialize() {
//          selection = 0;
//          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
//          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
//          menuCenterY = menuHeight / 2;
//          itemHeight = menuHeight / menuItems.length;
//        }
//
//        function touchPoint(value) {
//          Browser.print("Hit "+value+" "+selection+"\\n");
//          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);
//
//          selection = index - 2;
//          if (selection >= 0 && selection < menuItems.length) {
//            Browser.print("Selected "+value+" "+selection+" "+menuItems[selection]+"\\n");
//          }
//        }
                                        },
                                    },
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("MenuTouchSensor"),
                                FromField: stringPtr("hitPoint_changed"),
                                ToNode: stringPtr("MenuScript"),
                                ToField: stringPtr("touchPoint"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("MenuScript"),
                                FromField: stringPtr("selection"),
                                ToNode: stringPtr("SceneSwitcher"),
                                ToField: stringPtr("set_whichChoice"),
                            },
                        },
                    },
                },
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 20.0, 110.0},
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("MainMenu"),
                    },
                    Name: stringPtr("Menu"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("menuItems"),
                            Value: stringPtr("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""),
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
	fmt.Println("\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")
	*/
	filename := "../data/Menu.new.go.x3d"
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