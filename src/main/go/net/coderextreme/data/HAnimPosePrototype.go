
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
                    Content: stringPtr("HAnimPosePrototype.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("4 April 2025"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:46:47 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Joe Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("under development"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnimPoseDesignNotes19MAR2025.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim Architecture volume 1 version 2.0, clause 4.8.2 Modelling of human-like HAnim figures, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#ModellingOfHumanLikeHAnimFigures"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim Architecture volume 1 version 2.0, clause 4.8.3 Poses, https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Poses"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/HelloWorldScenes/HAnimPosePrototype.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("HAnimPose"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFBool"),
                                Name: stringPtr("enabled"),
                                Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("setPose"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFString"),
                            Name: stringPtr("name"),
                            Value: stringPtr("PoseName"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFString"),
                            Name: stringPtr("namesPoseJoints"),
                            Value: stringPtr("\"nameJoint1\" \"nameJoint2\" \"nameJoint3\" \"nameJoint4\""),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFVec3f"),
                            Name: stringPtr("positionsPoseJoints"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("rotationsPoseJoints"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFInt32"),
                            Name: stringPtr("whichChoice"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("children"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("addChildren"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("removeChildren"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("traceEnabled"),
                            Value: stringPtr("true"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Switch{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PrototypeRootNode"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("whichChoice"),
                                            ProtoField: stringPtr("whichChoice"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("addChildren"),
                                        ProtoField: stringPtr("addChildren"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("removeChildren"),
                                        ProtoField: stringPtr("removeChildren"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("children"),
                                        ProtoField: stringPtr("children"),
                                    },
                                    },
                                },
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("interface"),
                                Reference: stringPtr("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/concepts.html#InterfaceHierarchy"),
                                Value: x3d.MFString{"X3DGroupingNode"},
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HAnimPoseScriptOperations"),
                                },
                                DirectOutput: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("enabled"),
                                            ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("setPose"),
                                        ProtoField: stringPtr("setPose"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("name"),
                                        ProtoField: stringPtr("name"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("namesPoseJoints"),
                                        ProtoField: stringPtr("namesPoseJoints"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("positionsPoseJoints"),
                                        ProtoField: stringPtr("positionsPoseJoints"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("rotationsPoseJoints"),
                                        ProtoField: stringPtr("rotationsPoseJoints"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("whichChoice"),
                                        ProtoField: stringPtr("whichChoice"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("children"),
                                        ProtoField: stringPtr("children"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("addChildren"),
                                        ProtoField: stringPtr("addChildren"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("removeChildren"),
                                        ProtoField: stringPtr("removeChildren"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("traceEnabled"),
                                        ProtoField: stringPtr("traceEnabled"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFBool"),
                                        Name: stringPtr("enabled"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("setPose"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFString"),
                                    Name: stringPtr("name"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFString"),
                                    Name: stringPtr("namesPoseJoints"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("positionsPoseJoints"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFRotation"),
                                    Name: stringPtr("rotationsPoseJoints"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("whichChoice"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFNode"),
                                    Name: stringPtr("children"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("MFNode"),
                                    Name: stringPtr("addChildren"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("MFNode"),
                                    Name: stringPtr("removeChildren"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("traceEnabled"),
                                },
//ecmascript:
//
//// Needed functionality:
//// a. get access to a humanoid
//// b. confirm skeletalConfiguration = 'BASIC' so we know that it has a valid default pose
//// c. walk the tree for all joints, then set transation, scale, rotation to default values
//// d. for each name/position/rotation triplet in the pose arrays, update the appropriate
////    HAnimJoint nodes to that corresponding set of values
//
//var scriptName='HAnimPoseScript';
//
//function initialize ()
//{
//    // TODO author initialization code (if any) goes here
//    
//    // check that array sizes are identical for namesPoseJoints, positionsPoseJoints, rotationsPoseJoints
//    
//    // check humanoid connectivity
//
//    tracePrint ('initialization() successful');
//}
//function set_enabled (eventValue)
//{
//    // input eventValue received for inputOutput field enabled
//    enabled = eventValue;
//    tracePrint ('enabled = ' + enabled);
//
//    // TODO author code (if any) goes here
//}
//function setPose (eventValue)
//{
//    // input eventValue received for inputOnly field setPose
//    setPose = eventValue;
//
//    tracePrint ('setPose = ' + setPose);
//
//    // TODO author code (if any) goes here
//}
//function set_name (eventValue)
//{
//    // input eventValue received for inputOutput field name
//    name = eventValue;
//    tracePrint ('name = ' + name);
//
//    // TODO author code (if any) goes here
//}
//function set_namesPoseJoints (eventValue)
//{
//    // input eventValue received for inputOutput field namesPoseJoints
//    namesPoseJoints = eventValue;
//    tracePrint ('namesPoseJoints = ' + namesPoseJoints);
//
//    // TODO author code (if any) goes here
//}
//function set_positionsPoseJoints (eventValue)
//{
//    // input eventValue received for inputOutput field positionsPoseJoints
//    positionsPoseJoints = eventValue;
//    tracePrint ('positionsPoseJoints = ' + positionsPoseJoints);
//
//    // TODO author code (if any) goes here
//}
//function set_rotationsPoseJoints (eventValue)
//{
//    // input eventValue received for inputOutput field rotationsPoseJoints
//    rotationsPoseJoints = eventValue;
//    tracePrint ('rotationsPoseJoints = ' + rotationsPoseJoints);
//
//    // TODO author code (if any) goes here
//}
//function set_humanoid (eventValue)
//{
//    // input eventValue received for inputOutput field humanoid
//    humanoid = eventValue;
//    tracePrint ('humanoid = ' + humanoid);
//
//    // TODO author code (if any) goes here
//}
//// ================== Trace output functions ==================
//
//function tracePrint (outputString)
//{
//   // if traceEnabled is true, print outputString on X3D browser console
//   if (traceEnabled)
//      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
//}
//function alwaysPrint (outputString)
//{
//      // always print outputString on X3D browser console
//      Browser.println ('[' + scriptName.toString()' ' + name.toString()': ' + outputString.toString() + ']');
//}
//function set_traceEnabled (eventValue)
//{
//      // input eventValue received for inputOutput field
//      traceEnabled = eventValue;
//}
//// ===========================================================
                                },
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ModelInfo"),
                    },
                    Title: stringPtr("HAnimPose Prototype"),
                    Info: x3d.MFString{"Design to illustrate a potential HAnimPose node"},
                },
                &x3d.NavigationInfo{
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("A"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("namesPoseJoints"),
                        Value: stringPtr("\"l_hip\" \"r_hip\""),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("positionsPoseJoints"),
                        Value: stringPtr("0 0 0 0 0 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("rotationsPoseJoints"),
                        Value: stringPtr("0 0 1 0.2 0 0 1 -0.2"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("T"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("namesPoseJoints"),
                        Value: stringPtr("\"l_shoulder\" \"r_shoulder\""),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("positionsPoseJoints"),
                        Value: stringPtr("0 0 0 0 0 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("rotationsPoseJoints"),
                        Value: stringPtr("0 0 1 1.57 0 0 1 -1.57"),
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
	filename := "../data/HAnimPosePrototype.new.go.x3d"
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