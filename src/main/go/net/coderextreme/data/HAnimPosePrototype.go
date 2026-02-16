
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
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("HAnimPosePrototype.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4)."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("2 October 2025"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("14 December 2025"),
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
                Name: stringPtr("contributor"),
                Content: stringPtr("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnimPosePrototype.console.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("MovingImage"),
                Content: stringPtr("demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("HAnimPoseExampleTouchDown.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("HAnimPoseExampleTouchDownFaceLeftAPose.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleBoxMan1.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleBoxMan2.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleJoeKick.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleJoeSkeletonSkinSite.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter01Jin.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter02Chul.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter03Hyun.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter04Young.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter05Ju.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter06Ga.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter07No.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter08Da.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter09Ru.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter10Mi.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter11Min.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/HAnimPoseExampleKoreanCharacter12Sun.png"),
            },
            &x3d.Meta{
                Name: stringPtr("specificationSection"),
                Content: stringPtr("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"),
            },
            &x3d.Meta{
                Name: stringPtr("specificationUrl"),
                Content: stringPtr("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"),
            },
            &x3d.Meta{
                Name: stringPtr("specificationSection"),
                Content: stringPtr("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"),
            },
            &x3d.Meta{
                Name: stringPtr("specificationUrl"),
                Content: stringPtr("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"),
            },
            &x3d.Meta{
                Name: stringPtr("specificationSection"),
                Content: stringPtr("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"),
            },
            &x3d.Meta{
                Name: stringPtr("specificationUrl"),
                Content: stringPtr("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("earlier version of this prototype: originals/HAnimPosePreliminary.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.WorldInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ModelInfo"),
                    },
                    Info: x3d.MFString{"Design to illustrate a potential HAnimPose node"},
                    Title: stringPtr("HAnimPosePrototype.x3d"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.8,0.8,1.0}},
                },
                &x3d.NavigationInfo{
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("HandleInlineLoading"),
                        },
                    Children: []x3d.X3DNode{
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
                        &x3d.Inline{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("HumanoidInline"),
                            },
                            Description: stringPtr("remote HAnimHumanoid for IMPORT"),
                            Url: x3d.MFString{"../Skin/BoxMan2.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"},
                        },
//Note that the following importedDEF must match the EXPORT name found in remote file
                        &x3d.IMPORT{
                            AS: stringPtr("HumanoidImported"),
                            ImportedDEF: stringPtr("BoxMan2"),
                            InlineDEF: stringPtr("HumanoidInline"),
                        },
                        &x3d.LoadSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("HumanoidInlineLoadSensor"),
                            },
                            TimeOut: doublePtr(2.0),
                            &x3d.Inline{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidInline"),
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("HAnimPose"),
                    Appinfo: stringPtr("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("parentHAnimHumanoid"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("HAnimHumanoid for this Pose to act upon"),
                                Type: stringPtr("SFNode"),
//HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
                        },
                        &x3d.Field{
                            Name: stringPtr("name"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("name of this pose"),
                            Type: stringPtr("SFString"),
                            Value: stringPtr("newPoseName"),
                        },
                        &x3d.Field{
                            Name: stringPtr("children"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("joint values to apply to HAnimHumanoid"),
                            Type: stringPtr("MFNode"),
//initializating Joint nodes (if any) go here
                        },
                        &x3d.Field{
                            Name: stringPtr("description"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("explanation of purpose"),
                            Type: stringPtr("SFString"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("default value true"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("loa"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("default is no loa"),
                            Type: stringPtr("SFInt32"),
                            Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("transitionDuration"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("how many seconds to achieve the pose"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("metadata"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("single Metadata* node"),
                            Type: stringPtr("SFNode"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isActive"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("event indicating when pose transition is active"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("commencePose"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("resetAllJoints"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("reset the skeleton to I pose with all joints zeroed"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_fraction"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("allows transition to proceed incrementally from fraction [0..10"),
                            Type: stringPtr("SFFloat"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_startTime"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("starts the animation clock"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isLoaded"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("traceEnabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("debug trace to Browser output console this is a local prototype field"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.TimeSensor{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ClockTimeSensor"),
                                },
                                Description: stringPtr("control timing of pose animation when triggered"),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("enabled"),
                                            ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("cycleInterval"),
                                        ProtoField: stringPtr("transitionDuration"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isActive"),
                                        ProtoField: stringPtr("isActive"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("startTime"),
                                        ProtoField: stringPtr("set_startTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("metadata"),
                                        ProtoField: stringPtr("metadata"),
                                    },
                                    },
                                },
                            },
                            &x3d.TimeSensor{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ResetTimeSensor"),
                                },
                                Description: stringPtr("control timing of skeleton reset to \"A\" pose when triggered"),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("enabled"),
                                            ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("cycleInterval"),
                                        ProtoField: stringPtr("transitionDuration"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("startTime"),
                                        ProtoField: stringPtr("set_startTime"),
                                    },
//no need to report isActive since that would be duplicative
                                    },
                                },
                            },
                            &x3d.Group{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("PoseInterpolatorGroup"),
                                    },
                                Children: []x3d.X3DNode{
//interpolators generated by prototype script appear here at runtime
                                },
                            },
                            &x3d.Group{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("ResetInterpolatorGroup"),
                                    },
                                Children: []x3d.X3DNode{
//interpolators generated by prototype script appear here at runtime
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HAnimPoseScript"),
                                },
                                DirectOutput: boolPtr(true),
                                Url: x3d.MFString{"HAnimPosePrototypeScript.js", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"},
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("parentHAnimHumanoid"),
                                            ProtoField: stringPtr("parentHAnimHumanoid"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("name"),
                                        ProtoField: stringPtr("name"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("loa"),
                                        ProtoField: stringPtr("loa"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("description"),
                                        ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enabled"),
                                        ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("resetAllJoints"),
                                        ProtoField: stringPtr("resetAllJoints"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("children"),
                                        ProtoField: stringPtr("children"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("transitionDuration"),
                                        ProtoField: stringPtr("transitionDuration"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("commencePose"),
                                        ProtoField: stringPtr("commencePose"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_fraction"),
                                        ProtoField: stringPtr("set_fraction"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_startTime"),
                                        ProtoField: stringPtr("set_startTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isLoaded"),
                                        ProtoField: stringPtr("isLoaded"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("traceEnabled"),
                                        ProtoField: stringPtr("traceEnabled"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("parentHAnimHumanoid"),
                                        AccessType: stringPtr("inputOutput"),
                                        Appinfo: stringPtr("Humanoid for this Pose to act upon"),
                                        Type: stringPtr("SFNode"),
//initialization node (if any) goes here
                                },
                                &x3d.Field{
                                    Name: stringPtr("name"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("name of this pose"),
                                    Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("loa"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("default is no loa"),
                                    Type: stringPtr("SFInt32"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("description"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("explanation of purpose"),
                                    Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("enabled"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("default value true"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("resetAllJoints"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("reset the skeleton to I pose with all joints zeroed"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("children"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("joint values to apply to HAnimHumanoid"),
                                    Type: stringPtr("MFNode"),
//initializating Joint nodes (if any) go here
                                },
                                &x3d.Field{
                                    Name: stringPtr("transitionDuration"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("how many seconds to achieve the pose"),
                                    Type: stringPtr("SFTime"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("commencePose"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_fraction"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("allows transition to proceed incrementally from fraction [0..10"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_startTime"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("starts the animation clock"),
                                    Type: stringPtr("SFTime"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("isLoaded"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("traceEnabled"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("debug trace to Browser output console"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("numberPoseJoints"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("number of joints found in children field"),
                                    Type: stringPtr("SFInt32"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("numberSkeletonJoints"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("number of joints found in Humanoid"),
                                    Type: stringPtr("SFInt32"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("jointOrientationInterpolators"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("OrientationInterpolator node array matching number of children"),
                                    Type: stringPtr("MFNode"),
//initializating Joint nodes (if any) go here
                                },
                                },
                            },
                        },
                    },
                },
                &x3d.Viewpoint{
                    Description: stringPtr("HAnimPose for HumanoidInline IMPORT model"),
                    Position: &x3d.SFVec3f{0.0, 1.0, 4.0},
                },
//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("T_Pose"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("T"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("parentHAnimHumanoid"),
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
//debug test case for incorrect node type: <HAnimJoint DEF="ErrorDiagnosticsTest" USE='HumanoidImported'/>
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidImported"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("loa"),
                        Value: stringPtr("1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("arms stretched outward and level similar to letter T"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("children"),
                        Children: []x3d.X3DNode{
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("l_shoulder"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("PoseJoint_l_shoulder_1"),
                                    },
                                    Description: stringPtr("left shoulder"),
                                    Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_shoulder"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PoseJoint_r_shoulder_1"),
                                },
                                Description: stringPtr("right shoulder"),
                                Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 1.57},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.3"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("A_Pose"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("A"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("parentHAnimHumanoid"),
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidImported"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("loa"),
                        Value: stringPtr("1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("arms stretched outward and downward similar to letter A"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("children"),
                        Children: []x3d.X3DNode{
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("l_shoulder"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("PoseJoint_l_shoulder"),
                                    },
                                    Description: stringPtr("left shoulder"),
                                    Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 0.5},
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_shoulder"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PoseJoint_r_shoulder"),
                                },
                                Description: stringPtr("right shoulder"),
                                Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 0.5},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("traceEnabled"),
                        Value: stringPtr("true"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TouchDown_Pose"),
                    },
//thanks Joe
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("TouchDown"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("parentHAnimHumanoid"),
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidImported"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("loa"),
                        Value: stringPtr("1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("arms and legs stretched outward providing a TouchDown gesture"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("children"),
                        Children: []x3d.X3DNode{
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -0.698132},
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("l_hip"),
                                Rotation: &x3d.SFRotation{-1.0, 1.0, 1.0, 1.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("l_knee"),
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("l_talocrural"),
                                Rotation: &x3d.SFRotation{-0.2, 0.0, 0.1, 0.225},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_hip"),
                                Rotation: &x3d.SFRotation{-1.0, -1.0, -1.0, 1.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_knee"),
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_talocrural"),
                                Rotation: &x3d.SFRotation{-0.2, 0.0, 0.1, 0.25},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("vl5"),
                                Rotation: &x3d.SFRotation{0.0, 0.0, 0.01, 0.2},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("vt10"),
                                Rotation: &x3d.SFRotation{0.0, 0.0, 0.01, 0.1},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("vc4"),
                                Rotation: &x3d.SFRotation{0.0, 0.0, -0.01, 0.15},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("l_shoulder"),
                                Rotation: &x3d.SFRotation{-1.0, 0.5, 1.0, 2.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("l_elbow"),
                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("l_radiocarpal"),
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_shoulder"),
                                Rotation: &x3d.SFRotation{-1.0, -0.5, -1.0, 2.6},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_elbow"),
                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.0},
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                        Children: []x3d.X3DNode{
                            &x3d.HAnimJoint{
                                Name: stringPtr("r_radiocarpal"),
                                Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("traceEnabled"),
                        Value: stringPtr("true"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("I_Pose"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("I"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("parentHAnimHumanoid"),
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidImported"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("loa"),
                        Value: stringPtr("1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("arms and legs straight down default binding pose for baseline Humanoid"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("children"),
//not defining any children equals the default "I" pose
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("traceEnabled"),
                        Value: stringPtr("true"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("H_Pose"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("H"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("false"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("TODO experimental pose not yet implemented"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("traceEnabled"),
                        Value: stringPtr("true"),
                    },
//<fieldValue name='loa' value='1'/>
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("FaceLeft_Pose"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("FaceLeft"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("parentHAnimHumanoid"),
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidImported"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("loa"),
                        Value: stringPtr("0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("Only modify humanoid_root Joint node to face left"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("children"),
                        Children: []x3d.X3DNode{
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("FaceLeft_humanoid_root"),
                                    },
                                    Description: stringPtr("Only rotate the model"),
                                    Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.570796},
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("traceEnabled"),
                        Value: stringPtr("true"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimPose"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("FaceRight_Pose"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("name"),
                            Value: stringPtr("FaceRight"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("parentHAnimHumanoid"),
//HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("HumanoidImported"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("loa"),
                        Value: stringPtr("0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("description"),
                        Value: stringPtr("Only modify humanoid_root Joint node to face right"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("children"),
                        Children: []x3d.X3DNode{
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("FaceRight_humanoid_root"),
                                    },
                                    Description: stringPtr("Only rotate the model"),
                                    Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.570796},
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transitionDuration"),
                        Value: stringPtr("1.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("traceEnabled"),
                        Value: stringPtr("true"),
                    },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("InterfaceButtonsGroup"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("DisplayHeader"),
                                },
                                Translation: &x3d.SFVec3f{0.0, 2.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"HAnimPosePrototype example implementation"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HeaderFont"),
                                            },
                                            Family: x3d.MFString{"SANS"},
                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                            Size: floatPtr(0.15),
                                            Style: stringPtr("BOLD"),
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PoseTextAppearance"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.1, 0.5, 0.3},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("T_PoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{-1.5, 1.5, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"\"T\" Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("SharedFont"),
                                            },
                                            Family: x3d.MFString{"SANS"},
                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                            Size: floatPtr(0.1),
                                            Style: stringPtr("BOLD"),
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TransparentAppearance"),
                                        },
                                        Material: &x3d.Material{
                                            Transparency: floatPtr(0.8),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.45, 0.2, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("T_PoseTouchSensor"),
                                    },
                                    Description: stringPtr("select to move shoulders to \"T\" pose, leave other joints unchanged"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("T_PoseTouchSensor"),
                                    ToField: stringPtr("commencePose"),
                                    ToNode: stringPtr("T_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("A_PoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{-1.5, 1.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"\"A\" Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
//Selectable Text transparent Box for easy user selection
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.45, 0.2, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("A_PoseTouchSensor"),
                                    },
                                    Description: stringPtr("select to move shoulders to \"A\" pose, leave other joints unchanged"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("A_PoseTouchSensor"),
                                    ToField: stringPtr("commencePose"),
                                    ToNode: stringPtr("A_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TouchDown_PoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{-1.5, 0.5, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"TouchDown Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
//Selectable Text transparent Box for easy user selection
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.85, 0.2, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("TouchDown_PoseTouchSensor"),
                                    },
                                    Description: stringPtr("select to transition all joints to TouchDown pose"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("TouchDown_PoseTouchSensor"),
                                    ToField: stringPtr("commencePose"),
                                    ToNode: stringPtr("TouchDown_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("I_PoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{-1.5, 0.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"\"I\" Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
//Selectable Text transparent Box for easy user selection
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.45, 0.2, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("I_PoseTouchSensor"),
                                    },
                                    Description: stringPtr("select to transition all joints to \"I\" pose"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("I_PoseTouchSensor"),
                                    ToField: stringPtr("commencePose"),
                                    ToNode: stringPtr("I_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("FaceLeftPoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{1.5, 1.5, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Face Left Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.9, 0.2, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("FaceLeftTouchSensor"),
                                    },
                                    Description: stringPtr("select to rotate body and Face Left, leave other joints unchanged"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("FaceLeftTouchSensor"),
                                    ToField: stringPtr("commencePose"),
                                    ToNode: stringPtr("FaceLeft_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("FaceRightPoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{1.5, 1.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Face Right Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
//Selectable Text transparent Box for easy user selection
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.9, 0.2, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("FaceRightTouchSensor"),
                                    },
                                    Description: stringPtr("select to rotate body and Face Right, leave other joints unchanged"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("FaceRightTouchSensor"),
                                    ToField: stringPtr("commencePose"),
                                    ToNode: stringPtr("FaceRight_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("AnimatePosesInterface"),
                                },
                                Translation: &x3d.SFVec3f{1.5, 0.5, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Direct animation", "to, from \"I\" Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("AnimationTextAppearance"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.1, 0.2, 0.3},
                                        },
                                    },
                                },
                                &x3d.Shape{
//Selectable Text transparent Box for easy user selection
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.9, 0.25, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("AnimatePosesTouchSensor"),
                                    },
                                    Description: stringPtr("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"),
                                },
//cycleInterval=4 also hard-coded in script execution message
                                &x3d.TimeSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("AnimatePosesClock"),
                                    },
                                    CycleInterval: doublePtr(4.0),
                                    Description: stringPtr("directly animate several poses"),
                                },
                                &x3d.ScalarInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("AnimatePosesLoopInterpolator"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.05, 0.45, 0.55, 0.95, 1.0},
                                    KeyValue: x3d.MFFloat{0.0, 0.0, 1.0, 1.0, 0.0, 0.0},
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("touchTime"),
                                    FromNode: stringPtr("AnimatePosesTouchSensor"),
                                    ToField: stringPtr("startTime"),
                                    ToNode: stringPtr("AnimatePosesClock"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("fraction_changed"),
                                    FromNode: stringPtr("AnimatePosesClock"),
                                    ToField: stringPtr("set_fraction"),
                                    ToNode: stringPtr("AnimatePosesLoopInterpolator"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("value_changed"),
                                    FromNode: stringPtr("AnimatePosesLoopInterpolator"),
                                    ToField: stringPtr("set_fraction"),
                                    ToNode: stringPtr("I_Pose"),
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ResetDefaultPoseInterface"),
                                },
                                Translation: &x3d.SFVec3f{1.5, 0.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Reset All Joints", "to Default \"I\" Pose"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("SharedFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("AnimationTextAppearance"),
                                        },
                                    },
                                },
                                &x3d.Shape{
//Selectable Text transparent Box for easy user selection
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("TransparentAppearance"),
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{0.9, 0.25, 0.001},
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("ResetPoseTouchSensor"),
                                    },
                                    Description: stringPtr("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"),
                                },
                                &x3d.X3DRoute{
                                    FromField: stringPtr("isActive"),
                                    FromNode: stringPtr("ResetPoseTouchSensor"),
                                    ToField: stringPtr("resetAllJoints"),
                                    ToNode: stringPtr("FaceLeft_Pose"),
                                },
                            },
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("HandleInlineLoadsensorRouting"),
                        },
                    Children: []x3d.X3DNode{
                        X3DRoute: &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("A_Pose"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("H_Pose"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("I_Pose"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("T_Pose"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("FaceLeft_Pose"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("FaceRight_Pose"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isLoaded"),
                            FromNode: stringPtr("HumanoidInlineLoadSensor"),
                            ToField: stringPtr("isLoaded"),
                            ToNode: stringPtr("TouchDown_Pose"),
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
	filename := "../data/HAnimPosePrototype.new.go.x3d"
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