
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
                    Content: stringPtr("Menu.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("X3D scene with a Switch of Inlines controlled by a menu"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
//Viewpoint and any other scene setup
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 20.0, 110.0},
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Switch{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("SceneSwitcher"),
                            },
                            WhichChoice: int32Ptr(0),
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice0"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 0;
//      }
//      function touchTime(value) {
//          choice = 0;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinBlink"),
                                        },
                                        Url: x3d.MFString{"../resources/JinBlink.x3d", "JinBlink.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice1"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 1;
//      }
//      function touchTime(value) {
//          choice = 1;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinBrowLowerer"),
                                        },
                                        Url: x3d.MFString{"../resources/JinBrowLowerer.x3d", "JinBrowLowerer.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice2"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 2;
//      }
//      function touchTime(value) {
//          choice = 2;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinCheekPuffer"),
                                        },
                                        Url: x3d.MFString{"../resources/JinCheekPuffer.x3d", "JinCheekPuffer.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice3"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 3;
//      }
//      function touchTime(value) {
//          choice = 3;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinCheekRaiser"),
                                        },
                                        Url: x3d.MFString{"../resources/JinCheekRaiser.x3d", "JinCheekRaiser.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice4"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 4;
//      }
//      function touchTime(value) {
//          choice = 4;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinChinRaiser"),
                                        },
                                        Url: x3d.MFString{"../resources/JinChinRaiser.x3d", "JinChinRaiser.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice5"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 5;
//      }
//      function touchTime(value) {
//          choice = 5;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinDimpler"),
                                        },
                                        Url: x3d.MFString{"../resources/JinDimpler.x3d", "JinDimpler.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice6"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 6;
//      }
//      function touchTime(value) {
//          choice = 6;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinEyesClosed"),
                                        },
                                        Url: x3d.MFString{"../resources/JinEyesClosed.x3d", "JinEyesClosed.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice7"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 7;
//      }
//      function touchTime(value) {
//          choice = 7;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinInnerBrowRaiser"),
                                        },
                                        Url: x3d.MFString{"../resources/JinInnerBrowRaiser.x3d", "JinInnerBrowRaiser.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice8"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 8;
//      }
//      function touchTime(value) {
//          choice = 8;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinJawDrop"),
                                        },
                                        Url: x3d.MFString{"../resources/JinJawDrop.x3d", "JinJawDrop.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice9"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 9;
//      }
//      function touchTime(value) {
//          choice = 9;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLidDroop"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLidDroop.x3d", "JinLidDroop.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice10"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 10;
//      }
//      function touchTime(value) {
//          choice = 10;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLidTightener"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLidTightener.x3d", "JinLidTightener.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice11"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 11;
//      }
//      function touchTime(value) {
//          choice = 11;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipCornerDepressor"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipCornerDepressor.x3d", "JinLipCornerDepressor.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice12"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 12;
//      }
//      function touchTime(value) {
//          choice = 12;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipCornerPuller"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipCornerPuller.x3d", "JinLipCornerPuller.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice13"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 13;
//      }
//      function touchTime(value) {
//          choice = 13;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipFunneler"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipFunneler.x3d", "JinLipFunneler.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice14"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 14;
//      }
//      function touchTime(value) {
//          choice = 14;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipPressor"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipPressor.x3d", "JinLipPressor.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice15"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 15;
//      }
//      function touchTime(value) {
//          choice = 15;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipPuckerer"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipPuckerer.x3d", "JinLipPuckerer.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice16"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 16;
//      }
//      function touchTime(value) {
//          choice = 16;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipsPart"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipsPart.x3d", "JinLipsPart.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice17"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 17;
//      }
//      function touchTime(value) {
//          choice = 17;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipStretcher"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipStretcher.x3d", "JinLipStretcher.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice18"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 18;
//      }
//      function touchTime(value) {
//          choice = 18;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipSuck"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipSuck.x3d", "JinLipSuck.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice19"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 19;
//      }
//      function touchTime(value) {
//          choice = 19;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLipTightener"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLipTightener.x3d", "JinLipTightener.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice20"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 20;
//      }
//      function touchTime(value) {
//          choice = 20;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinLowerLipDepressor"),
                                        },
                                        Url: x3d.MFString{"../resources/JinLowerLipDepressor.x3d", "JinLowerLipDepressor.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice21"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 21;
//      }
//      function touchTime(value) {
//          choice = 21;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinMouthStretch"),
                                        },
                                        Url: x3d.MFString{"../resources/JinMouthStretch.x3d", "JinMouthStretch.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice22"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 22;
//      }
//      function touchTime(value) {
//          choice = 22;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinNasolabialDeepener"),
                                        },
                                        Url: x3d.MFString{"../resources/JinNasolabialDeepener.x3d", "JinNasolabialDeepener.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice23"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 23;
//      }
//      function touchTime(value) {
//          choice = 23;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinNoseWrinkler"),
                                        },
                                        Url: x3d.MFString{"../resources/JinNoseWrinkler.x3d", "JinNoseWrinkler.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice24"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 24;
//      }
//      function touchTime(value) {
//          choice = 24;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinOuterBrowRaiser"),
                                        },
                                        Url: x3d.MFString{"../resources/JinOuterBrowRaiser.x3d", "JinOuterBrowRaiser.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice25"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 25;
//      }
//      function touchTime(value) {
//          choice = 25;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinSlit"),
                                        },
                                        Url: x3d.MFString{"../resources/JinSlit.x3d", "JinSlit.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice26"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 26;
//      }
//      function touchTime(value) {
//          choice = 26;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinSquint"),
                                        },
                                        Url: x3d.MFString{"../resources/JinSquint.x3d", "JinSquint.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice27"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 27;
//      }
//      function touchTime(value) {
//          choice = 27;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinUpperLidRaiser"),
                                        },
                                        Url: x3d.MFString{"../resources/JinUpperLidRaiser.x3d", "JinUpperLidRaiser.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice28"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 28;
//      }
//      function touchTime(value) {
//          choice = 28;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinUpperLipRaiser"),
                                        },
                                        Url: x3d.MFString{"../resources/JinUpperLipRaiser.x3d", "JinUpperLipRaiser.x3d"},
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Script{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Choice29"),
                                        },
                                        Field: []x3d.X3DNode{
                                            &x3d.Field{
                                                Name: stringPtr("touchTime"),
                                                Type: stringPtr("SFTime"),
                                                AccessType: stringPtr("inputOnly"),
                                        },
                                        &x3d.Field{
                                            Name: stringPtr("choice"),
                                            Type: stringPtr("SFInt32"),
                                            AccessType: stringPtr("outputOnly"),
                                        },
//ecmascript:
//      function set_touchTime(value) {
//          choice = 29;
//      }
//      function touchTime(value) {
//          choice = 29;
//      }
                                        },
                                    },
                                    &x3d.Inline{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JinWink"),
                                        },
                                        Url: x3d.MFString{"../resources/JinWink.x3d", "JinWink.x3d"},
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 63.4, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinBlink"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinBlink_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinBlink"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinBlink_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice0"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice0"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 60.4, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinBrowLowerer"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinBrowLowerer_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinBrowLowerer"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinBrowLowerer_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice1"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice1"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 57.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinCheekPuffer"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinCheekPuffer_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinCheekPuffer"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinCheekPuffer_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice2"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice2"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 54.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinCheekRaiser"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinCheekRaiser_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinCheekRaiser"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinCheekRaiser_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice3"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice3"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 51.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinChinRaiser"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinChinRaiser_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinChinRaiser"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinChinRaiser_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice4"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice4"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 48.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinDimpler"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinDimpler_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinDimpler"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinDimpler_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice5"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice5"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 45.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinEyesClosed"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinEyesClosed_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinEyesClosed"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinEyesClosed_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice6"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice6"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 42.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinInnerBrowRaiser"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinInnerBrowRaiser_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinInnerBrowRaiser"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinInnerBrowRaiser_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice7"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice7"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 39.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinJawDrop"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinJawDrop_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinJawDrop"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinJawDrop_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice8"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice8"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 36.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLidDroop"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLidDroop_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLidDroop"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLidDroop_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice9"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice9"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 33.39999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLidTightener"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLidTightener_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLidTightener"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLidTightener_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice10"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice10"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 30.399999999999995, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipCornerDepressor"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipCornerDepressor_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipCornerDepressor"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipCornerDepressor_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice11"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice11"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 27.399999999999995, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipCornerPuller"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipCornerPuller_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipCornerPuller"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipCornerPuller_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice12"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice12"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 24.399999999999995, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipFunneler"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipFunneler_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipFunneler"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipFunneler_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice13"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice13"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 21.399999999999995, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipPressor"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipPressor_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipPressor"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipPressor_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice14"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice14"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 18.4, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipPuckerer"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipPuckerer_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipPuckerer"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipPuckerer_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice15"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice15"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 15.399999999999997, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipsPart"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipsPart_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipsPart"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipsPart_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice16"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice16"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 12.399999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipStretcher"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipStretcher_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipStretcher"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipStretcher_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice17"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice17"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 9.399999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipSuck"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipSuck_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipSuck"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipSuck_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice18"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice18"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 6.399999999999999, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLipTightener"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLipTightener_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLipTightener"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLipTightener_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice19"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice19"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 3.399999999999995, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinLowerLipDepressor"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinLowerLipDepressor_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinLowerLipDepressor"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinLowerLipDepressor_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice20"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice20"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, 0.399999999999995, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinMouthStretch"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinMouthStretch_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinMouthStretch"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinMouthStretch_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice21"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice21"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -2.6000000000000085, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinNasolabialDeepener"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinNasolabialDeepener_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinNasolabialDeepener"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinNasolabialDeepener_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice22"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice22"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -5.6000000000000085, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinNoseWrinkler"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinNoseWrinkler_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinNoseWrinkler"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinNoseWrinkler_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice23"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice23"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -8.600000000000009, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinOuterBrowRaiser"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinOuterBrowRaiser_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinOuterBrowRaiser"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinOuterBrowRaiser_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice24"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice24"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -11.600000000000009, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinSlit"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinSlit_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinSlit"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinSlit_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice25"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice25"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -14.600000000000001, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinSquint"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinSquint_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinSquint"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinSquint_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice26"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice26"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -17.6, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinUpperLidRaiser"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinUpperLidRaiser_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinUpperLidRaiser"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinUpperLidRaiser_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice27"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice27"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -20.6, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinUpperLipRaiser"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinUpperLipRaiser_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinUpperLipRaiser"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinUpperLipRaiser_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice28"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice28"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{48.0, -23.599999999999994, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.TouchSensor{
                                    Description: stringPtr("TSJinWink"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JinWink_Sensor"),
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"JinWink"},
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
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{20.0,1.3833333333333333,-0.1},[3]float32{-20.0,1.3833333333333333,-0.1},[3]float32{-20.0,-1.616666666666667,-0.1},[3]float32{20.0,-1.616666666666667,-0.1}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("JinWink_Sensor"),
                            FromField: stringPtr("touchTime"),
                            ToNode: stringPtr("Choice29"),
                            ToField: stringPtr("touchTime"),
                        },
                        &x3d.X3DRoute{
                            FromNode: stringPtr("Choice29"),
                            FromField: stringPtr("choice"),
                            ToNode: stringPtr("SceneSwitcher"),
                            ToField: stringPtr("whichChoice"),
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
	filename := "../data/MenuJin.new.go.x3d"
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