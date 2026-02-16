
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("HAnimPoseExample.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("11 December 2025"),
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
                Name: stringPtr("warning"),
                Content: stringPtr("under development for X3D 4.1"),
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
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d"),
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
                    Info: x3d.MFString{"Example scene for HAnimPose node"},
                    Title: stringPtr("HAnimPoseExample.x3d"),
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
                            Url: x3d.MFString{"../Skin/JoeSkeletonSkinSite.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"},
                        },
//Note that the following importedDEF must match the EXPORT name found in remote file
                        &x3d.IMPORT{
                            AS: stringPtr("HumanoidImported"),
                            ImportedDEF: stringPtr("JoeSkeletonSkinSite"),
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
                &x3d.Viewpoint{
                    Description: stringPtr("HAnimPose for HumanoidInline IMPORT model"),
                    Position: &x3d.SFVec3f{0.0, 1.0, 4.0},
                },
//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
                &x3d.HAnimPose{
                    Name: stringPtr("T"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("T_Pose"),
                    },
                    Description: stringPtr("arms stretched outward and level similar to letter T"),
                    Loa: int32Ptr(1),
                    TransitionDuration: doublePtr(1.3),
                    Metadata: &x3d.MetadataString{
                        Name: stringPtr("metadataTest"),
                        Value: x3d.MFString{"hello HAnimPose metadata"},
                    },
//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
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
                &x3d.HAnimPose{
                    Name: stringPtr("A"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("A_Pose"),
                    },
                    Description: stringPtr("arms stretched outward and downward similar to letter A"),
                    Loa: int32Ptr(1),
                    TransitionDuration: doublePtr(1.2),
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
                &x3d.HAnimPose{
                    Name: stringPtr("TouchDown"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TouchDown_Pose"),
                    },
                    Description: stringPtr("arms and legs stretched outward providing a TouchDown gesture"),
                    Loa: int32Ptr(1),
                    TransitionDuration: doublePtr(1.2),
                    Children: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            Name: stringPtr("humanoid_root"),
                            Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -0.698132},
                            Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                            Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("l_hip"),
                        Rotation: &x3d.SFRotation{-1.0, 1.0, 1.0, 1.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("l_knee"),
                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("l_talocrural"),
                        Rotation: &x3d.SFRotation{-0.2, 0.0, 0.1, 0.225},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("r_hip"),
                        Rotation: &x3d.SFRotation{-1.0, -1.0, -1.0, 1.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("r_knee"),
                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("r_talocrural"),
                        Rotation: &x3d.SFRotation{-0.2, 0.0, 0.1, 0.25},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("vl5"),
                        Rotation: &x3d.SFRotation{0.0, 0.0, 0.01, 0.2},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("vt10"),
                        Rotation: &x3d.SFRotation{0.0, 0.0, 0.01, 0.1},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("vc4"),
                        Rotation: &x3d.SFRotation{0.0, 0.0, -0.01, 0.15},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("l_shoulder"),
                        Rotation: &x3d.SFRotation{-1.0, 0.5, 1.0, 2.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("l_elbow"),
                        Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("l_radiocarpal"),
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("r_shoulder"),
                        Rotation: &x3d.SFRotation{-1.0, -0.5, -1.0, 2.6},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("r_elbow"),
                        Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.0},
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                    &x3d.HAnimJoint{
                        Name: stringPtr("r_radiocarpal"),
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                    },
                },
                &x3d.HAnimPose{
                    Name: stringPtr("I"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("I_Pose"),
                    },
                    Description: stringPtr("arms and legs straight down default binding pose for baseline Humanoid"),
                    Loa: int32Ptr(1),
                    TransitionDuration: doublePtr(1.5),
//not defining any poseJoint HAnimJoint nodes equals the default "I" pose
                },
                &x3d.HAnimPose{
                    Name: stringPtr("H"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("H_Pose"),
                    },
                    Description: stringPtr("TODO experimental pose not yet implemented"),
                    Enabled: boolPtr(false),
                    TransitionDuration: doublePtr(1.4),
                    Loa: int32Ptr(-1),
//TODO define poseJoint HAnimJoint nodes
                },
                &x3d.HAnimPose{
                    Name: stringPtr("FaceLeft"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("FaceLeft_Pose"),
                    },
                    Description: stringPtr("Only modify humanoid_root Joint node to face left"),
                    Loa: int32Ptr(0),
                    TransitionDuration: doublePtr(1.1),
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
                &x3d.HAnimPose{
                    Name: stringPtr("FaceRight"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("FaceRight_Pose"),
                    },
                    Description: stringPtr("Only modify humanoid_root Joint node to face right"),
                    Loa: int32Ptr(0),
                    TransitionDuration: doublePtr(1.1),
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
                &x3d.HAnimHumanoid{
                    Name: stringPtr("HumanoidStub"),
                    Info: x3d.MFString{"humanoidVersion=2.0"},
                    Version: stringPtr("2.0"),
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("A_Pose"),
                        },
                    },
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("T_Pose"),
                        },
                    },
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("I_Pose"),
                        },
                    },
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("H_Pose"),
                        },
                    },
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("FaceLeft_Pose"),
                        },
                    },
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("FaceRight_Pose"),
                        },
                    },
                    Children: &x3d.HAnimPose{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("TouchDown_Pose"),
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
	filename := "../data/HAnimPoseExample.new.go.x3d"
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