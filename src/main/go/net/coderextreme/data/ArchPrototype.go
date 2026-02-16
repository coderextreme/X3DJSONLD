
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
                Content: stringPtr("27 November 2015"),
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
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArchPrototype"),
                    Appinfo: stringPtr("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."),
                    ProtoInterface: &x3d.ProtoInterface{
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("diffuseColor"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("color of arch"),
                                Type: stringPtr("SFColor"),
                                Value: stringPtr("0.2 0.8 0.8"),
                        },
                        &x3d.Field{
                            Name: stringPtr("emissiveColor"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("color of arch"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("0.2 0.8 0.8"),
                        },
                        &x3d.Field{
                            Name: stringPtr("clearSpanWidth"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("4"),
                        },
                        &x3d.Field{
                            Name: stringPtr("riseHeight"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("2"),
                        },
                        &x3d.Field{
                            Name: stringPtr("depth"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("depth"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("3"),
                        },
                        &x3d.Field{
                            Name: stringPtr("topAbutmentHeight"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0.5"),
                        },
                        &x3d.Field{
                            Name: stringPtr("pierWidth"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("pierWidth:pierWidtht=0 means no pierWidth"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0.5"),
                        },
                        &x3d.Field{
                            Name: stringPtr("pierHeight"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("pierHeight: pierHeight=0 means no pierHeight"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("archHalf"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        &x3d.Field{
                            Name: stringPtr("archHalfExtensionWidth"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("onlyIntrados"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        &x3d.Field{
                            Name: stringPtr("archFilled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        &x3d.Field{
                            Name: stringPtr("archHalfFilled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        &x3d.Field{
                            Name: stringPtr("lintel"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
//First node determines node type of this prototype
//IndexedFaceset creates arch
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("ArchTransform"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Arch"),
                                        },
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
                                        Geometry: &x3d.IndexedFaceSet{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("ArchIndex"),
                                            },
                                            Convex: boolPtr(false),
                                            Solid: boolPtr(false),
                                            Coord: &x3d.Coordinate{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("ArchChord"),
                                                },
                                            },
                                        },
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("MaterialNode"),
                                                },
                                                IS: &x3d.IS{
                                                    Connect: []x3d.X3DNode{
                                                        &x3d.Connect{
                                                            NodeField: stringPtr("emissiveColor"),
                                                            ProtoField: stringPtr("emissiveColor"),
                                                    },
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("diffuseColor"),
                                                        ProtoField: stringPtr("diffuseColor"),
                                                    },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
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
                                        NodeField: stringPtr("pierWidth"),
                                        ProtoField: stringPtr("pierWidth"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("topAbutmentHeight"),
                                        ProtoField: stringPtr("topAbutmentHeight"),
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
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("clearSpanWidth"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Appinfo: stringPtr("user or default input for clearSpanWidth parameter"),
                                        Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("riseHeight"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for riseHeight parameter"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("depth"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for depth parameter"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("topAbutmentHeight"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for topAbutmentHeight parameter"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("pierWidth"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for pierWidth parameter"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("pierHeight"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for pierHeight parameter"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("archHalf"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for archHalf parameter"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("archHalfExtensionWidth"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for archHalfExtensionWidth parameter"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("onlyIntrados"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for onlyIntrados parameter"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("archFilled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for archFilled parameter"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("archHalfFilled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for archHalfFilled parameter"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("lintel"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("user or default input for lintel parameter"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("computedScale"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("pointOut"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("send computed points to the Coordinate node"),
                                    Type: stringPtr("MFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("indexOut"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("send computed indices to the IndexedFaceSet node"),
                                    Type: stringPtr("MFInt32"),
                                },
                                },
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("computedScale"),
                                FromNode: stringPtr("ArchPrototypeScript"),
                                ToField: stringPtr("scale"),
                                ToNode: stringPtr("ArchTransform"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("pointOut"),
                                FromNode: stringPtr("ArchPrototypeScript"),
                                ToField: stringPtr("point"),
                                ToNode: stringPtr("ArchChord"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("indexOut"),
                                FromNode: stringPtr("ArchPrototypeScript"),
                                ToField: stringPtr("set_coordIndex"),
                                ToNode: stringPtr("ArchIndex"),
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("ArchPrototype"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ArchInstance"),
                    },
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
//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
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
	fmt.Println("\n--- Validating XML against X3D 4.1 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.1 schema!")
	*/
	filename := "../data/ArchPrototype.new.go.x3d"
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