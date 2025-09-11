
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
                    Content: stringPtr("ArchPrototype.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Michele Foti, Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("15 December 2014"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:42:03 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ArchModelingDiagrams.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://en.wikipedia.org/wiki/Arch"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArchPrototype"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFColor"),
                                Name: stringPtr("diffuseColor"),
                                Value: stringPtr("0.2 0.8 0.8"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("emissiveColor"),
                            Value: stringPtr("0.2 0.8 0.8"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("clearSpanWidth"),
                            Value: stringPtr("4"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("riseHeight"),
                            Value: stringPtr("2"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("depth"),
                            Value: stringPtr("3"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("topAbutmentHeight"),
                            Value: stringPtr("0.5"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("pierWidth"),
                            Value: stringPtr("0.5"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("pierHeight"),
                            Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("archHalf"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("archHalfExtensionWidth"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("onlyIntrados"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("archFilled"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("archHalfFilled"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("lintel"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("ArchTransform"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Arch"),
                                        },
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
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
                                                    },
                                                },
                                            },
                                        },
                                        Geometry: &x3d.IndexedFaceSet{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("ArchIndex"),
                                            },
                                            Solid: boolPtr(false),
                                            Convex: boolPtr(false),
                                            Coord: &x3d.Coordinate{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("ArchChord"),
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ArchPrototypeScript"),
                                },
                                Url: x3d.MFString{"../node/ArchPrototypeScript.js", "https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"},
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("clearSpanWidth"),
                                            ProtoField: stringPtr("clearSpanWidth"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("riseHeight"),
                                        ProtoField: stringPtr("riseHeight"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("depth"),
                                        ProtoField: stringPtr("depth"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("topAbutmentHeight"),
                                        ProtoField: stringPtr("topAbutmentHeight"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("pierWidth"),
                                        ProtoField: stringPtr("pierWidth"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("pierHeight"),
                                        ProtoField: stringPtr("pierHeight"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("archHalf"),
                                        ProtoField: stringPtr("archHalf"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("archHalfExtensionWidth"),
                                        ProtoField: stringPtr("archHalfExtensionWidth"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("onlyIntrados"),
                                        ProtoField: stringPtr("onlyIntrados"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("archFilled"),
                                        ProtoField: stringPtr("archFilled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("archHalfFilled"),
                                        ProtoField: stringPtr("archHalfFilled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("lintel"),
                                        ProtoField: stringPtr("lintel"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Name: stringPtr("clearSpanWidth"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("riseHeight"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("depth"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("topAbutmentHeight"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("pierWidth"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("pierHeight"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("archHalf"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("archHalfExtensionWidth"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("onlyIntrados"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("archFilled"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("archHalfFilled"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("lintel"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("computedScale"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("pointOut"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFInt32"),
                                    Name: stringPtr("indexOut"),
                                },
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("ArchPrototypeScript"),
                                FromField: stringPtr("computedScale"),
                                ToNode: stringPtr("ArchTransform"),
                                ToField: stringPtr("set_scale"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("ArchPrototypeScript"),
                                FromField: stringPtr("pointOut"),
                                ToNode: stringPtr("ArchChord"),
                                ToField: stringPtr("set_point"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("ArchPrototypeScript"),
                                FromField: stringPtr("indexOut"),
                                ToNode: stringPtr("ArchIndex"),
                                ToField: stringPtr("set_coordIndex"),
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ArchInstance"),
                    },
                    Name: stringPtr("ArchPrototype"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("diffuseColor"),
                            Value: stringPtr("0.5 0.3 0.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("emissiveColor"),
                        Value: stringPtr("0.5 0.3 0.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("clearSpanWidth"),
                        Value: stringPtr("5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("riseHeight"),
                        Value: stringPtr("2.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("depth"),
                        Value: stringPtr("2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("topAbutmentHeight"),
                        Value: stringPtr("0.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("pierWidth"),
                        Value: stringPtr("1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("pierHeight"),
                        Value: stringPtr("2"),
                    },
                    },
                },
                &x3d.Inline{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("CoordinateAxes"),
                    },
                    Url: x3d.MFString{"../data/CoordinateAxes.x3d"},
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
	filename := "../data/ArchPrototype.new.go.x3d"
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