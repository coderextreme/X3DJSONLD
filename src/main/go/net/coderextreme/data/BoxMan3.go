
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
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("HAnim"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("BoxMan3.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare)."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("James Smith - james@vapourtech.com"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Don Brutzman and Matt Beitler"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("1 March 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("19 October 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:37:50 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("error"),
                Content: stringPtr("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("originals/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("BoxMan3.js"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("BoxManAnimationPanel.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.vapourtech.com/team/james/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim2001"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Models"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Nodes"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.vapourtech.com"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Skin mesh is split across multiple shapes within a Group, should that be allowed?"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("What does the original animation script accomplish? It is not hooked up, script source contains errors..."),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("BoxManViewInclined.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("BoxManViewFront.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("BoxManViewRight.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("BoxManViewLeft.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("BoxManViewTop.png"),
            },
            &x3d.Meta{
                Name: stringPtr("rights"),
                Content: stringPtr("(C) 2000 James Smith - james@vapourtech.com"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("BoxMan HAnim 2.0"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("LOA1_WalkAnimation"),
                    Url: x3d.MFString{"../Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation", "../Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("cycleInterval"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("enabled"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("loop"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFTime"),
                        Name: stringPtr("startTime"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFTime"),
                        Name: stringPtr("stopTime"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFFloat"),
                        Name: stringPtr("fraction_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("HumanoidRoot_translation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("HumanoidRoot_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_hip_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_knee_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_ankle_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_midtarsal_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_hip_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_knee_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_ankle_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_midtarsal_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("vl5_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("skullbase_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_shoulder_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_elbow_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("l_wrist_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_shoulder_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_elbow_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("r_wrist_rotation_changed"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("isActive"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("lower_body_rotation_changed"),
                    },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("BoxMan3 - A Seamless VRML Human"),
                    Info: x3d.MFString{"(C) 2000 James Smith - james@vapourtech.com", "http://www.vapourtech.com/team/james/boxman.wrl", "Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"},
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.75,0.75,0.75}},
                    GroundColor: &x3d.MFColor{[3]float32{0.6,0.6,0.6}},
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("boxman_Humanoid"),
                    },
                    Name: stringPtr("Humanoid"),
                    Info: x3d.MFString{"authorName=James Smith", "authorEmail=james@vapourtech.com", "copyright=(C) 2000 James Smith - james@vapourtech.com", "humanoidVersion=1.0"},
                    Version: stringPtr("1.0"),
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("boxman_humanoid_root"),
                            },
                            Name: stringPtr("humanoid_root"),
                            Center: &x3d.SFVec3f{0.0, 0.9723, -0.0728},
                            SkinCoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimSegment{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_sacrum"),
                                    },
                                    Name: stringPtr("sacrum"),
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{0.0, 0.9723, -0.0728},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("SphereYellow"),
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                                    },
                                                },
                                                Geometry: &x3d.Sphere{
                                                    Radius: floatPtr(0.02),
                                                },
                                            },
                                        },
                                    },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_l_hip"),
                                    },
                                    Name: stringPtr("l_hip"),
                                    Center: &x3d.SFVec3f{0.0956, 0.9364, 0.0},
                                    SkinCoordIndex: []int32{12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43},
                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_thigh"),
                                            },
                                            Name: stringPtr("l_thigh"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{0.0956, 0.9364, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_knee"),
                                            },
                                            Name: stringPtr("l_knee"),
                                            Center: &x3d.SFVec3f{0.0956, 0.5095, -0.0036},
                                            SkinCoordIndex: []int32{36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63},
                                            SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_calf"),
                                                    },
                                                    Name: stringPtr("l_calf"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.0956, 0.5095, -0.0036},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("SphereYellow"),
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_ankle"),
                                                    },
                                                    Name: stringPtr("l_ankle"),
                                                    Center: &x3d.SFVec3f{0.0946, 0.0762, -0.0261},
                                                    SkinCoordIndex: []int32{64, 65, 66, 67, 68, 69, 70, 71},
                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_l_hindfoot"),
                                                            },
                                                            Name: stringPtr("l_hindfoot"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.0946, 0.0762, -0.0261},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereYellow"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_l_midtarsal"),
                                                            },
                                                            Name: stringPtr("l_midtarsal"),
                                                            Center: &x3d.SFVec3f{0.1079, 0.0317, 0.067},
                                                            SkinCoordIndex: []int32{72, 73, 74, 75, 76, 77, 78, 79},
                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("boxman_l_middistal"),
                                                                    },
                                                                    Name: stringPtr("l_middistal"),
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{0.1079, 0.0317, 0.067},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Shape{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("SphereYellow"),
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("boxman_l_middistal_tip"),
                                                                        },
                                                                        Name: stringPtr("l_middistal_tip"),
                                                                        Translation: &x3d.SFVec3f{0.095, 0.0005, 0.1924},
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("SphereRed"),
                                                                            },
                                                                            Appearance: &x3d.Appearance{
                                                                                Material: &x3d.Material{
                                                                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                                                },
                                                                            },
                                                                            Geometry: &x3d.Sphere{
                                                                                Radius: floatPtr(0.02),
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                    },
                                            },
                                    },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("boxman_r_hip"),
                                },
                                Name: stringPtr("r_hip"),
                                Center: &x3d.SFVec3f{-0.0956, 0.9364, 0.0},
                                SkinCoordIndex: []int32{80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111},
                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_r_thigh"),
                                        },
                                        Name: stringPtr("r_thigh"),
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{-0.0956, 0.9364, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("SphereYellow"),
                                                    },
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_r_knee"),
                                        },
                                        Name: stringPtr("r_knee"),
                                        Center: &x3d.SFVec3f{-0.0956, 0.5095, -0.0036},
                                        SkinCoordIndex: []int32{104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131},
                                        SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("boxman_r_calf"),
                                                },
                                                Name: stringPtr("r_calf"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-0.0956, 0.5095, -0.0036},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("SphereYellow"),
                                                            },
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("boxman_r_ankle"),
                                                },
                                                Name: stringPtr("r_ankle"),
                                                Center: &x3d.SFVec3f{-0.0946, 0.0762, -0.0261},
                                                SkinCoordIndex: []int32{132, 133, 134, 135, 136, 137, 138, 139},
                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("boxman_r_hindfoot"),
                                                        },
                                                        Name: stringPtr("r_hindfoot"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-0.0946, 0.0762, -0.0261},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("SphereYellow"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("boxman_r_midtarsal"),
                                                        },
                                                        Name: stringPtr("r_midtarsal"),
                                                        Center: &x3d.SFVec3f{-0.1079, 0.0317, 0.067},
                                                        SkinCoordIndex: []int32{140, 141, 142, 143, 144, 145, 146, 147},
                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("boxman_r_middistal"),
                                                                },
                                                                Name: stringPtr("r_middistal"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.1079, 0.0317, 0.067},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("SphereYellow"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("boxman_r_middistal_tip"),
                                                                    },
                                                                    Name: stringPtr("r_middistal_tip"),
                                                                    Translation: &x3d.SFVec3f{-0.095, 0.0005, 0.1924},
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereRed"),
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                },
                                        },
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("boxman_vl5"),
                                },
                                Name: stringPtr("vl5"),
                                Center: &x3d.SFVec3f{0.0, 1.0817, -0.0728},
                                SkinCoordIndex: []int32{148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167},
                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_l5"),
                                        },
                                        Name: stringPtr("l5"),
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, 1.0817, -0.0728},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("SphereYellow"),
                                                    },
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_skullbase"),
                                        },
                                        Name: stringPtr("skullbase"),
                                        Center: &x3d.SFVec3f{0.0, 1.644, 0.036},
                                        SkinCoordIndex: []int32{168, 169, 170, 171, 172, 173, 174, 175},
                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("boxman_skull"),
                                                },
                                                Name: stringPtr("skull"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0, 1.644, 0.036},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("SphereYellow"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_skull_tip"),
                                                    },
                                                    Name: stringPtr("skull_tip"),
                                                    Translation: &x3d.SFVec3f{-0.0029, 1.7771, 0.0274},
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                        },
                                },
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_l_shoulder"),
                                    },
                                    Name: stringPtr("l_shoulder"),
                                    Center: &x3d.SFVec3f{0.1968, 1.4642, -0.0265},
                                    SkinCoordIndex: []int32{176, 177, 178, 179, 180, 181, 182, 183},
                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_upperarm"),
                                            },
                                            Name: stringPtr("l_upperarm"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{0.1968, 1.4642, -0.0265},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_elbow"),
                                            },
                                            Name: stringPtr("l_elbow"),
                                            Center: &x3d.SFVec3f{0.1982, 1.1622, -0.0557},
                                            SkinCoordIndex: []int32{184, 185, 186, 187, 188, 189, 190, 191},
                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_forearm"),
                                                    },
                                                    Name: stringPtr("l_forearm"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.1982, 1.1622, -0.0557},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("SphereYellow"),
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_wrist"),
                                                    },
                                                    Name: stringPtr("l_wrist"),
                                                    Center: &x3d.SFVec3f{0.1972, 0.8929, -0.069},
                                                    SkinCoordIndex: []int32{192, 193, 194, 195, 196, 197, 198, 199},
                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_l_hand"),
                                                            },
                                                            Name: stringPtr("l_hand"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.1972, 0.8929, -0.069},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereYellow"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("boxman_l_hand_tip"),
                                                                },
                                                                Name: stringPtr("l_hand_tip"),
                                                                Translation: &x3d.SFVec3f{0.1912, 0.6976, -0.071},
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("SphereRed"),
                                                                    },
                                                                },
                                                            },
                                                    },
                                            },
                                    },
                                },
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_r_shoulder"),
                                    },
                                    Name: stringPtr("r_shoulder"),
                                    Center: &x3d.SFVec3f{-0.1968, 1.4642, -0.0265},
                                    SkinCoordIndex: []int32{200, 201, 202, 203, 204, 205, 206, 207},
                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_r_upperarm"),
                                            },
                                            Name: stringPtr("r_upperarm"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{-0.1968, 1.4642, -0.0265},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_r_elbow"),
                                            },
                                            Name: stringPtr("r_elbow"),
                                            Center: &x3d.SFVec3f{-0.1982, 1.1622, -0.0557},
                                            SkinCoordIndex: []int32{208, 209, 210, 211, 212, 213, 214, 215},
                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_r_forearm"),
                                                    },
                                                    Name: stringPtr("r_forearm"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{-0.1982, 1.1622, -0.0557},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("SphereYellow"),
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_r_wrist"),
                                                    },
                                                    Name: stringPtr("r_wrist"),
                                                    Center: &x3d.SFVec3f{-0.1972, 0.8929, -0.069},
                                                    SkinCoordIndex: []int32{216, 217, 218, 219, 220, 221, 222, 223},
                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_r_hand"),
                                                            },
                                                            Name: stringPtr("r_hand"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{-0.1972, 0.8929, -0.069},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereYellow"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("boxman_r_hand_tip"),
                                                                },
                                                                Name: stringPtr("r_hand_tip"),
                                                                Translation: &x3d.SFVec3f{-0.1912, 0.6976, -0.071},
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("SphereRed"),
                                                                    },
                                                                },
                                                            },
                                                    },
                                            },
                                    },
                                },
                            },
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("boxman_humanoid_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_skullbase"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_vl5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_ankle"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_ankle"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_midtarsal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_midtarsal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_wrist"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_wrist"),
                        },
                    },
                    Segments: []x3d.X3DNode{
                        &x3d.HAnimSegment{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("boxman_l5"),
                            },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_sacrum"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_skull"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_calf"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_calf"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_forearm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_forearm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hand"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hand"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hindfoot"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hindfoot"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_middistal"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_middistal"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_thigh"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_thigh"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_upperarm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_upperarm"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_skull_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_middistal_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_middistal_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("boxman_BoxMan_view"),
                        },
                        Name: stringPtr("BoxMan_view"),
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Inclined_View"),
                            },
                            Description: stringPtr("Inclined View"),
                            Position: &x3d.SFVec3f{2.0, 0.9, 2.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.78},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Front_View"),
                            },
                            Description: stringPtr("Front View"),
                            Position: &x3d.SFVec3f{0.0, 1.0, 3.0},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Right_View"),
                            },
                            Description: stringPtr("Right-side View"),
                            Position: &x3d.SFVec3f{-3.0, 1.0, 0.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Left_View"),
                            },
                            Description: stringPtr("Left-side View"),
                            Position: &x3d.SFVec3f{3.0, 1.0, 0.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Top_View"),
                            },
                            Description: stringPtr("Top View"),
                            Position: &x3d.SFVec3f{0.0, 3.0, 0.0},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                    },
                    SkinCoord: &x3d.Coordinate{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("SKINCOORD"),
                        },
                        Point: &x3d.MFVec3f{[3]float32{-0.05,1.0,0.05},[3]float32{0.05,1.0,0.05},[3]float32{0.03,0.97,-0.1},[3]float32{-0.03,0.97,-0.1},[3]float32{0.03,0.94,-0.075},[3]float32{-0.03,0.94,-0.075},[3]float32{0.0,0.92,0.0},[3]float32{0.0,0.94,0.03},[3]float32{-0.12,1.06,0.05},[3]float32{0.12,1.06,0.05},[3]float32{0.12,1.06,-0.1},[3]float32{-0.12,1.06,-0.1},[3]float32{0.0456,0.9364,0.05},[3]float32{0.1456,0.9364,0.05},[3]float32{0.1456,0.9364,-0.05},[3]float32{0.0456,0.9364,-0.05},[3]float32{0.0456,0.9,0.05},[3]float32{0.1456,0.9,0.05},[3]float32{0.1456,0.9,-0.05},[3]float32{0.0456,0.9,-0.05},[3]float32{0.0456,0.8,0.05},[3]float32{0.1456,0.8,0.05},[3]float32{0.1456,0.8,-0.05},[3]float32{0.0456,0.8,-0.05},[3]float32{0.0456,0.7,0.05},[3]float32{0.1456,0.7,0.05},[3]float32{0.1456,0.7,-0.05},[3]float32{0.0456,0.7,-0.05},[3]float32{0.0456,0.6,0.05},[3]float32{0.1456,0.6,0.05},[3]float32{0.1456,0.6,-0.05},[3]float32{0.0456,0.6,-0.05},[3]float32{0.0456,0.55,0.05},[3]float32{0.1456,0.55,0.05},[3]float32{0.1456,0.55,-0.05},[3]float32{0.0456,0.55,-0.05},[3]float32{0.0456,0.52,0.05},[3]float32{0.1456,0.52,0.05},[3]float32{0.1456,0.52,-0.05},[3]float32{0.0456,0.52,-0.05},[3]float32{0.0456,0.5,0.05},[3]float32{0.1456,0.5,0.05},[3]float32{0.1456,0.5,-0.05},[3]float32{0.0456,0.5,-0.05},[3]float32{0.0454,0.43,0.045},[3]float32{0.1454,0.43,0.045},[3]float32{0.1454,0.43,-0.055},[3]float32{0.0454,0.43,-0.055},[3]float32{0.0452,0.36,0.04},[3]float32{0.1452,0.36,0.04},[3]float32{0.1452,0.36,-0.06},[3]float32{0.0452,0.36,-0.06},[3]float32{0.045,0.29,0.035},[3]float32{0.145,0.29,0.035},[3]float32{0.145,0.29,-0.065},[3]float32{0.045,0.29,-0.065},[3]float32{0.0448,0.21,0.03},[3]float32{0.1448,0.21,0.03},[3]float32{0.1448,0.21,-0.07},[3]float32{0.0448,0.21,-0.07},[3]float32{0.0446,0.1262,0.025},[3]float32{0.1446,0.1262,0.025},[3]float32{0.1446,0.1262,-0.075},[3]float32{0.0446,0.1262,-0.075},[3]float32{0.0446,0.0762,0.025},[3]float32{0.1446,0.0762,0.025},[3]float32{0.1446,0.0,-0.075},[3]float32{0.0446,0.0,-0.075},[3]float32{0.0446,0.0562,0.057},[3]float32{0.1446,0.0562,0.057},[3]float32{0.1446,0.0,0.057},[3]float32{0.0446,0.0,0.057},[3]float32{0.0446,0.0562,0.087},[3]float32{0.1446,0.0562,0.087},[3]float32{0.1446,0.0,0.087},[3]float32{0.0446,0.0,0.087},[3]float32{0.0446,0.0562,0.1924},[3]float32{0.1446,0.0562,0.1924},[3]float32{0.1446,0.0,0.1924},[3]float32{0.0446,0.0,0.1924},[3]float32{-0.0456,0.9364,0.05},[3]float32{-0.1456,0.9364,0.05},[3]float32{-0.1456,0.9364,-0.05},[3]float32{-0.0456,0.9364,-0.05},[3]float32{-0.0456,0.9,0.05},[3]float32{-0.1456,0.9,0.05},[3]float32{-0.1456,0.9,-0.05},[3]float32{-0.0456,0.9,-0.05},[3]float32{-0.0456,0.8,0.05},[3]float32{-0.1456,0.8,0.05},[3]float32{-0.1456,0.8,-0.05},[3]float32{-0.0456,0.8,-0.05},[3]float32{-0.0456,0.7,0.05},[3]float32{-0.1456,0.7,0.05},[3]float32{-0.1456,0.7,-0.05},[3]float32{-0.0456,0.7,-0.05},[3]float32{-0.0456,0.6,0.05},[3]float32{-0.1456,0.6,0.05},[3]float32{-0.1456,0.6,-0.05},[3]float32{-0.0456,0.6,-0.05},[3]float32{-0.0456,0.55,0.05},[3]float32{-0.1456,0.55,0.05},[3]float32{-0.1456,0.55,-0.05},[3]float32{-0.0456,0.55,-0.05},[3]float32{-0.0456,0.52,0.05},[3]float32{-0.1456,0.52,0.05},[3]float32{-0.1456,0.52,-0.05},[3]float32{-0.0456,0.52,-0.05},[3]float32{-0.0456,0.5,0.05},[3]float32{-0.1456,0.5,0.05},[3]float32{-0.1456,0.5,-0.05},[3]float32{-0.0456,0.5,-0.05},[3]float32{-0.0454,0.43,0.045},[3]float32{-0.1454,0.43,0.045},[3]float32{-0.1454,0.43,-0.055},[3]float32{-0.0454,0.43,-0.055},[3]float32{-0.0452,0.36,0.04},[3]float32{-0.1452,0.36,0.04},[3]float32{-0.1452,0.36,-0.06},[3]float32{-0.0452,0.36,-0.06},[3]float32{-0.045,0.29,0.035},[3]float32{-0.145,0.29,0.035},[3]float32{-0.145,0.29,-0.065},[3]float32{-0.045,0.29,-0.065},[3]float32{-0.0448,0.21,0.03},[3]float32{-0.1448,0.21,0.03},[3]float32{-0.1448,0.21,-0.07},[3]float32{-0.0448,0.21,-0.07},[3]float32{-0.0446,0.1262,0.025},[3]float32{-0.1446,0.1262,0.025},[3]float32{-0.1446,0.1262,-0.075},[3]float32{-0.0446,0.1262,-0.075},[3]float32{-0.0446,0.0762,0.025},[3]float32{-0.1446,0.0762,0.025},[3]float32{-0.1446,0.0,-0.075},[3]float32{-0.0446,0.0,-0.075},[3]float32{-0.0446,0.0562,0.057},[3]float32{-0.1446,0.0562,0.057},[3]float32{-0.1446,0.0,0.057},[3]float32{-0.0446,0.0,0.057},[3]float32{-0.0446,0.0562,0.087},[3]float32{-0.1446,0.0562,0.087},[3]float32{-0.1446,0.0,0.087},[3]float32{-0.0446,0.0,0.087},[3]float32{-0.0446,0.0562,0.1924},[3]float32{-0.1446,0.0562,0.1924},[3]float32{-0.1446,0.0,0.1924},[3]float32{-0.0446,0.0,0.1924},[3]float32{-0.12,1.1,0.05},[3]float32{0.12,1.1,0.05},[3]float32{0.12,1.1,-0.1},[3]float32{-0.12,1.1,-0.1},[3]float32{-0.14,1.42,0.045},[3]float32{0.14,1.42,0.045},[3]float32{0.14,1.42,-0.09},[3]float32{-0.14,1.42,-0.09},[3]float32{-0.24,1.52,0.035},[3]float32{0.24,1.52,0.035},[3]float32{0.24,1.52,-0.09},[3]float32{-0.24,1.52,-0.09},[3]float32{-0.05,1.56,0.03},[3]float32{0.05,1.56,0.03},[3]float32{0.05,1.56,-0.06},[3]float32{-0.05,1.56,-0.06},[3]float32{-0.05,1.6,0.06},[3]float32{0.05,1.6,0.06},[3]float32{0.05,1.62,-0.03},[3]float32{-0.05,1.62,-0.03},[3]float32{-0.07,1.777,0.13},[3]float32{0.07,1.777,0.13},[3]float32{0.07,1.777,-0.03},[3]float32{-0.07,1.777,-0.03},[3]float32{-0.07,1.6,0.13},[3]float32{0.07,1.6,0.13},[3]float32{0.07,1.66,-0.03},[3]float32{-0.07,1.66,-0.03},[3]float32{0.16,1.42,0.015},[3]float32{0.24,1.5,0.015},[3]float32{0.24,1.5,-0.075},[3]float32{0.16,1.42,-0.075},[3]float32{0.17,1.18,-0.025},[3]float32{0.23,1.18,-0.025},[3]float32{0.23,1.18,-0.085},[3]float32{0.17,1.18,-0.085},[3]float32{0.17,1.14,-0.025},[3]float32{0.23,1.14,-0.025},[3]float32{0.23,1.14,-0.085},[3]float32{0.17,1.14,-0.085},[3]float32{0.18,0.91,-0.05},[3]float32{0.22,0.91,-0.05},[3]float32{0.22,0.91,-0.09},[3]float32{0.18,0.91,-0.09},[3]float32{0.18,0.87,-0.02},[3]float32{0.22,0.87,-0.02},[3]float32{0.22,0.87,-0.1},[3]float32{0.18,0.87,-0.1},[3]float32{0.18,0.6976,-0.02},[3]float32{0.22,0.6976,-0.02},[3]float32{0.22,0.6976,-0.1},[3]float32{0.18,0.6976,-0.1},[3]float32{-0.16,1.42,0.015},[3]float32{-0.24,1.5,0.015},[3]float32{-0.24,1.5,-0.075},[3]float32{-0.16,1.42,-0.075},[3]float32{-0.17,1.18,-0.025},[3]float32{-0.23,1.18,-0.025},[3]float32{-0.23,1.18,-0.085},[3]float32{-0.17,1.18,-0.085},[3]float32{-0.17,1.14,-0.025},[3]float32{-0.23,1.14,-0.025},[3]float32{-0.23,1.14,-0.085},[3]float32{-0.17,1.14,-0.085},[3]float32{-0.18,0.91,-0.05},[3]float32{-0.22,0.91,-0.05},[3]float32{-0.22,0.91,-0.09},[3]float32{-0.18,0.91,-0.09},[3]float32{-0.18,0.87,-0.02},[3]float32{-0.22,0.87,-0.02},[3]float32{-0.22,0.87,-0.1},[3]float32{-0.18,0.87,-0.1},[3]float32{-0.18,0.6976,-0.02},[3]float32{-0.22,0.6976,-0.02},[3]float32{-0.22,0.6976,-0.1},[3]float32{-0.18,0.6976,-0.1}},
                    },
                    &x3d.Group{
                        Children: []x3d.X3DNode{
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TrouserSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{0, 7, 1, -1, 8, 0, 1, -1, 1, 9, 8, -1, 10, 2, 3, -1, 3, 11, 10, -1, 2, 4, 5, -1, 5, 3, 2, -1, 4, 6, 5, -1, 7, 12, 1, -1, 1, 12, 13, -1, 13, 9, 1, -1, 9, 13, 14, -1, 14, 10, 9, -1, 10, 14, 15, -1, 15, 2, 10, -1, 12, 7, 6, -1, 6, 15, 12, -1, 15, 6, 4, -1, 4, 2, 15, -1, 0, 80, 7, -1, 81, 80, 0, -1, 0, 8, 81, -1, 82, 81, 8, -1, 8, 11, 82, -1, 83, 82, 11, -1, 11, 3, 83, -1, 6, 7, 80, -1, 80, 83, 6, -1, 5, 6, 83, -1, 83, 3, 5, -1, 12, 16, 17, -1, 17, 13, 12, -1, 13, 17, 18, -1, 18, 14, 13, -1, 14, 18, 19, -1, 19, 15, 14, -1, 15, 19, 16, -1, 16, 12, 15, -1, 16, 20, 21, -1, 21, 17, 16, -1, 17, 21, 22, -1, 22, 18, 17, -1, 18, 22, 23, -1, 23, 19, 18, -1, 19, 23, 20, -1, 20, 16, 19, -1, 20, 24, 25, -1, 25, 21, 20, -1, 21, 25, 26, -1, 26, 22, 21, -1, 22, 26, 27, -1, 27, 23, 22, -1, 23, 27, 24, -1, 24, 20, 23, -1, 24, 28, 29, -1, 29, 25, 24, -1, 25, 29, 30, -1, 30, 26, 25, -1, 26, 30, 31, -1, 31, 27, 26, -1, 27, 31, 28, -1, 28, 24, 27, -1, 28, 32, 33, -1, 33, 29, 28, -1, 29, 33, 34, -1, 34, 30, 29, -1, 30, 34, 35, -1, 35, 31, 30, -1, 31, 35, 32, -1, 32, 28, 31, -1, 32, 36, 37, -1, 37, 33, 32, -1, 33, 37, 38, -1, 38, 34, 33, -1, 34, 38, 39, -1, 39, 35, 34, -1, 35, 39, 36, -1, 36, 32, 35, -1, 36, 40, 41, -1, 41, 37, 36, -1, 37, 41, 42, -1, 42, 38, 37, -1, 38, 42, 43, -1, 43, 39, 38, -1, 39, 43, 40, -1, 40, 36, 39, -1, 40, 44, 45, -1, 45, 41, 40, -1, 41, 45, 46, -1, 46, 42, 41, -1, 42, 46, 47, -1, 47, 43, 42, -1, 43, 47, 44, -1, 44, 40, 43, -1, 44, 48, 49, -1, 49, 45, 44, -1, 45, 49, 50, -1, 50, 46, 45, -1, 46, 50, 51, -1, 51, 47, 46, -1, 47, 51, 48, -1, 48, 44, 47, -1, 48, 52, 53, -1, 53, 49, 48, -1, 49, 53, 54, -1, 54, 50, 49, -1, 50, 54, 55, -1, 55, 51, 50, -1, 51, 55, 52, -1, 52, 48, 51, -1, 52, 56, 57, -1, 57, 53, 52, -1, 53, 57, 58, -1, 58, 54, 53, -1, 54, 58, 59, -1, 59, 55, 54, -1, 55, 59, 56, -1, 56, 52, 55, -1, 56, 60, 61, -1, 61, 57, 56, -1, 57, 61, 62, -1, 62, 58, 57, -1, 58, 62, 63, -1, 63, 59, 58, -1, 59, 63, 60, -1, 60, 56, 59, -1, 81, 85, 84, -1, 84, 80, 81, -1, 82, 86, 85, -1, 85, 81, 82, -1, 83, 87, 86, -1, 86, 82, 83, -1, 80, 84, 87, -1, 87, 83, 80, -1, 85, 89, 88, -1, 88, 84, 85, -1, 86, 90, 89, -1, 89, 85, 86, -1, 87, 91, 90, -1, 90, 86, 87, -1, 84, 88, 91, -1, 91, 87, 84, -1, 89, 93, 92, -1, 92, 88, 89, -1, 90, 94, 93, -1, 93, 89, 90, -1, 91, 95, 94, -1, 94, 90, 91, -1, 88, 92, 95, -1, 95, 91, 88, -1, 93, 97, 96, -1, 96, 92, 93, -1, 94, 98, 97, -1, 97, 93, 94, -1, 95, 99, 98, -1, 98, 94, 95, -1, 92, 96, 99, -1, 99, 95, 92, -1, 97, 101, 100, -1, 100, 96, 97, -1, 98, 102, 101, -1, 101, 97, 98, -1, 99, 103, 102, -1, 102, 98, 99, -1, 96, 100, 103, -1, 103, 99, 96, -1, 101, 105, 104, -1, 104, 100, 101, -1, 102, 106, 105, -1, 105, 101, 102, -1, 103, 107, 106, -1, 106, 102, 103, -1, 100, 104, 107, -1, 107, 103, 100, -1, 105, 109, 108, -1, 108, 104, 105, -1, 106, 110, 109, -1, 109, 105, 106, -1, 107, 111, 110, -1, 110, 106, 107, -1, 104, 108, 111, -1, 111, 107, 104, -1, 109, 113, 112, -1, 112, 108, 109, -1, 110, 114, 113, -1, 113, 109, 110, -1, 111, 115, 114, -1, 114, 110, 111, -1, 108, 112, 115, -1, 115, 111, 108, -1, 113, 117, 116, -1, 116, 112, 113, -1, 114, 118, 117, -1, 117, 113, 114, -1, 115, 119, 118, -1, 118, 114, 115, -1, 112, 116, 119, -1, 119, 115, 112, -1, 117, 121, 120, -1, 120, 116, 117, -1, 118, 122, 121, -1, 121, 117, 118, -1, 119, 123, 122, -1, 122, 118, 119, -1, 116, 120, 123, -1, 123, 119, 116, -1, 121, 125, 124, -1, 124, 120, 121, -1, 122, 126, 125, -1, 125, 121, 122, -1, 123, 127, 126, -1, 126, 122, 123, -1, 120, 124, 127, -1, 127, 123, 120, -1, 125, 129, 128, -1, 128, 124, 125, -1, 126, 130, 129, -1, 129, 125, 126, -1, 127, 131, 130, -1, 130, 126, 127, -1, 124, 128, 131, -1, 131, 127, 124, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ShoeSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{60, 64, 65, -1, 65, 61, 60, -1, 61, 65, 66, -1, 66, 62, 61, -1, 62, 66, 67, -1, 67, 63, 62, -1, 63, 67, 64, -1, 64, 60, 63, -1, 64, 68, 69, -1, 69, 65, 64, -1, 65, 69, 70, -1, 70, 66, 65, -1, 66, 70, 71, -1, 71, 67, 66, -1, 67, 71, 68, -1, 68, 64, 67, -1, 68, 72, 73, -1, 73, 69, 68, -1, 69, 73, 74, -1, 74, 70, 69, -1, 70, 74, 75, -1, 75, 71, 70, -1, 71, 75, 72, -1, 72, 68, 71, -1, 72, 76, 77, -1, 77, 73, 72, -1, 73, 77, 78, -1, 78, 74, 73, -1, 74, 78, 79, -1, 79, 75, 74, -1, 75, 79, 76, -1, 76, 72, 75, -1, 76, 79, 78, -1, 78, 77, 76, -1, 129, 133, 132, -1, 132, 128, 129, -1, 130, 134, 133, -1, 133, 129, 130, -1, 131, 135, 134, -1, 134, 130, 131, -1, 128, 132, 135, -1, 135, 131, 128, -1, 133, 137, 136, -1, 136, 132, 133, -1, 134, 138, 137, -1, 137, 133, 134, -1, 135, 139, 138, -1, 138, 134, 135, -1, 132, 136, 139, -1, 139, 135, 132, -1, 137, 141, 140, -1, 140, 136, 137, -1, 138, 142, 141, -1, 141, 137, 138, -1, 139, 143, 142, -1, 142, 138, 139, -1, 136, 140, 143, -1, 143, 139, 136, -1, 141, 145, 144, -1, 144, 140, 141, -1, 142, 146, 145, -1, 145, 141, 142, -1, 143, 147, 146, -1, 146, 142, 143, -1, 140, 144, 147, -1, 147, 143, 140, -1, 145, 146, 147, -1, 147, 144, 145, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ShirtSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{148, 8, 9, -1, 9, 149, 148, -1, 149, 9, 10, -1, 10, 150, 149, -1, 150, 10, 11, -1, 11, 151, 150, -1, 151, 11, 8, -1, 8, 148, 151, -1, 152, 148, 149, -1, 149, 153, 152, -1, 153, 149, 150, -1, 150, 154, 153, -1, 154, 150, 151, -1, 151, 155, 154, -1, 155, 151, 148, -1, 148, 152, 155, -1, 156, 152, 153, -1, 153, 157, 156, -1, 158, 154, 155, -1, 155, 159, 158, -1, 160, 156, 157, -1, 157, 161, 160, -1, 161, 157, 158, -1, 158, 162, 161, -1, 162, 158, 159, -1, 159, 163, 162, -1, 163, 159, 156, -1, 156, 160, 163, -1, 164, 160, 161, -1, 161, 165, 164, -1, 165, 161, 162, -1, 162, 166, 165, -1, 166, 162, 163, -1, 163, 167, 166, -1, 167, 163, 160, -1, 160, 164, 167, -1, 153, 176, 177, -1, 177, 157, 153, -1, 157, 177, 178, -1, 178, 158, 157, -1, 158, 178, 179, -1, 179, 154, 158, -1, 154, 179, 176, -1, 176, 153, 154, -1, 176, 180, 181, -1, 181, 177, 176, -1, 177, 181, 182, -1, 182, 178, 177, -1, 178, 182, 183, -1, 183, 179, 178, -1, 179, 183, 180, -1, 180, 176, 179, -1, 180, 184, 185, -1, 185, 181, 180, -1, 181, 185, 186, -1, 186, 182, 181, -1, 182, 186, 187, -1, 187, 183, 182, -1, 183, 187, 184, -1, 184, 180, 183, -1, 184, 188, 189, -1, 189, 185, 184, -1, 185, 189, 190, -1, 190, 186, 185, -1, 186, 190, 191, -1, 191, 187, 186, -1, 187, 191, 188, -1, 188, 184, 187, -1, 152, 156, 201, -1, 201, 200, 152, -1, 156, 159, 202, -1, 202, 201, 156, -1, 159, 155, 203, -1, 203, 202, 159, -1, 155, 152, 200, -1, 200, 203, 155, -1, 201, 205, 204, -1, 204, 200, 201, -1, 202, 206, 205, -1, 205, 201, 202, -1, 203, 207, 206, -1, 206, 202, 203, -1, 200, 204, 207, -1, 207, 203, 200, -1, 205, 209, 208, -1, 208, 204, 205, -1, 206, 210, 209, -1, 209, 205, 206, -1, 207, 211, 210, -1, 210, 206, 207, -1, 204, 208, 211, -1, 211, 207, 204, -1, 209, 213, 212, -1, 212, 208, 209, -1, 210, 214, 213, -1, 213, 209, 210, -1, 211, 215, 214, -1, 214, 210, 211, -1, 208, 212, 215, -1, 215, 211, 208, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HeadHandsFleshToneSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{1.0, 0.75, 0.75},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{172, 164, 165, -1, 165, 173, 172, -1, 173, 165, 166, -1, 166, 174, 173, -1, 174, 166, 167, -1, 167, 175, 174, -1, 175, 167, 164, -1, 164, 172, 175, -1, 168, 172, 173, -1, 173, 169, 168, -1, 169, 173, 174, -1, 174, 170, 169, -1, 170, 174, 175, -1, 175, 171, 170, -1, 171, 175, 172, -1, 172, 168, 171, -1, 171, 168, 169, -1, 169, 170, 171, -1, 188, 192, 193, -1, 193, 189, 188, -1, 189, 193, 194, -1, 194, 190, 189, -1, 190, 194, 195, -1, 195, 191, 190, -1, 191, 195, 192, -1, 192, 188, 191, -1, 192, 196, 197, -1, 197, 193, 192, -1, 193, 197, 198, -1, 198, 194, 193, -1, 194, 198, 199, -1, 199, 195, 194, -1, 195, 199, 196, -1, 196, 192, 195, -1, 196, 199, 198, -1, 198, 197, 196, -1, 213, 217, 216, -1, 216, 212, 213, -1, 214, 218, 217, -1, 217, 213, 214, -1, 215, 219, 218, -1, 218, 214, 215, -1, 212, 216, 219, -1, 219, 215, 212, -1, 217, 221, 220, -1, 220, 216, 217, -1, 218, 222, 221, -1, 221, 217, 218, -1, 219, 223, 222, -1, 222, 218, 219, -1, 216, 220, 223, -1, 223, 219, 216, -1, 221, 222, 223, -1, 223, 220, 221, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SkinLines"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                    },
                                },
                                Geometry: &x3d.IndexedLineSet{
                                    CoordIndex: []int32{0, 7, 1, -1, 8, 0, 1, -1, 1, 9, 8, -1, 10, 2, 3, -1, 3, 11, 10, -1, 2, 4, 5, -1, 5, 3, 2, -1, 4, 6, 5, -1, 7, 12, 1, -1, 1, 12, 13, -1, 13, 9, 1, -1, 9, 13, 14, -1, 14, 10, 9, -1, 10, 14, 15, -1, 15, 2, 10, -1, 12, 7, 6, -1, 6, 15, 12, -1, 15, 6, 4, -1, 4, 2, 15, -1, 0, 80, 7, -1, 81, 80, 0, -1, 0, 8, 81, -1, 82, 81, 8, -1, 8, 11, 82, -1, 83, 82, 11, -1, 11, 3, 83, -1, 6, 7, 80, -1, 80, 83, 6, -1, 5, 6, 83, -1, 83, 3, 5, -1, 12, 16, 17, -1, 17, 13, 12, -1, 13, 17, 18, -1, 18, 14, 13, -1, 14, 18, 19, -1, 19, 15, 14, -1, 15, 19, 16, -1, 16, 12, 15, -1, 16, 20, 21, -1, 21, 17, 16, -1, 17, 21, 22, -1, 22, 18, 17, -1, 18, 22, 23, -1, 23, 19, 18, -1, 19, 23, 20, -1, 20, 16, 19, -1, 20, 24, 25, -1, 25, 21, 20, -1, 21, 25, 26, -1, 26, 22, 21, -1, 22, 26, 27, -1, 27, 23, 22, -1, 23, 27, 24, -1, 24, 20, 23, -1, 24, 28, 29, -1, 29, 25, 24, -1, 25, 29, 30, -1, 30, 26, 25, -1, 26, 30, 31, -1, 31, 27, 26, -1, 27, 31, 28, -1, 28, 24, 27, -1, 28, 32, 33, -1, 33, 29, 28, -1, 29, 33, 34, -1, 34, 30, 29, -1, 30, 34, 35, -1, 35, 31, 30, -1, 31, 35, 32, -1, 32, 28, 31, -1, 32, 36, 37, -1, 37, 33, 32, -1, 33, 37, 38, -1, 38, 34, 33, -1, 34, 38, 39, -1, 39, 35, 34, -1, 35, 39, 36, -1, 36, 32, 35, -1, 36, 40, 41, -1, 41, 37, 36, -1, 37, 41, 42, -1, 42, 38, 37, -1, 38, 42, 43, -1, 43, 39, 38, -1, 39, 43, 40, -1, 40, 36, 39, -1, 40, 44, 45, -1, 45, 41, 40, -1, 41, 45, 46, -1, 46, 42, 41, -1, 42, 46, 47, -1, 47, 43, 42, -1, 43, 47, 44, -1, 44, 40, 43, -1, 44, 48, 49, -1, 49, 45, 44, -1, 45, 49, 50, -1, 50, 46, 45, -1, 46, 50, 51, -1, 51, 47, 46, -1, 47, 51, 48, -1, 48, 44, 47, -1, 48, 52, 53, -1, 53, 49, 48, -1, 49, 53, 54, -1, 54, 50, 49, -1, 50, 54, 55, -1, 55, 51, 50, -1, 51, 55, 52, -1, 52, 48, 51, -1, 52, 56, 57, -1, 57, 53, 52, -1, 53, 57, 58, -1, 58, 54, 53, -1, 54, 58, 59, -1, 59, 55, 54, -1, 55, 59, 56, -1, 56, 52, 55, -1, 56, 60, 61, -1, 61, 57, 56, -1, 57, 61, 62, -1, 62, 58, 57, -1, 58, 62, 63, -1, 63, 59, 58, -1, 59, 63, 60, -1, 60, 56, 59, -1, 81, 85, 84, -1, 84, 80, 81, -1, 82, 86, 85, -1, 85, 81, 82, -1, 83, 87, 86, -1, 86, 82, 83, -1, 80, 84, 87, -1, 87, 83, 80, -1, 85, 89, 88, -1, 88, 84, 85, -1, 86, 90, 89, -1, 89, 85, 86, -1, 87, 91, 90, -1, 90, 86, 87, -1, 84, 88, 91, -1, 91, 87, 84, -1, 89, 93, 92, -1, 92, 88, 89, -1, 90, 94, 93, -1, 93, 89, 90, -1, 91, 95, 94, -1, 94, 90, 91, -1, 88, 92, 95, -1, 95, 91, 88, -1, 93, 97, 96, -1, 96, 92, 93, -1, 94, 98, 97, -1, 97, 93, 94, -1, 95, 99, 98, -1, 98, 94, 95, -1, 92, 96, 99, -1, 99, 95, 92, -1, 97, 101, 100, -1, 100, 96, 97, -1, 98, 102, 101, -1, 101, 97, 98, -1, 99, 103, 102, -1, 102, 98, 99, -1, 96, 100, 103, -1, 103, 99, 96, -1, 101, 105, 104, -1, 104, 100, 101, -1, 102, 106, 105, -1, 105, 101, 102, -1, 103, 107, 106, -1, 106, 102, 103, -1, 100, 104, 107, -1, 107, 103, 100, -1, 105, 109, 108, -1, 108, 104, 105, -1, 106, 110, 109, -1, 109, 105, 106, -1, 107, 111, 110, -1, 110, 106, 107, -1, 104, 108, 111, -1, 111, 107, 104, -1, 109, 113, 112, -1, 112, 108, 109, -1, 110, 114, 113, -1, 113, 109, 110, -1, 111, 115, 114, -1, 114, 110, 111, -1, 108, 112, 115, -1, 115, 111, 108, -1, 113, 117, 116, -1, 116, 112, 113, -1, 114, 118, 117, -1, 117, 113, 114, -1, 115, 119, 118, -1, 118, 114, 115, -1, 112, 116, 119, -1, 119, 115, 112, -1, 117, 121, 120, -1, 120, 116, 117, -1, 118, 122, 121, -1, 121, 117, 118, -1, 119, 123, 122, -1, 122, 118, 119, -1, 116, 120, 123, -1, 123, 119, 116, -1, 121, 125, 124, -1, 124, 120, 121, -1, 122, 126, 125, -1, 125, 121, 122, -1, 123, 127, 126, -1, 126, 122, 123, -1, 120, 124, 127, -1, 127, 123, 120, -1, 125, 129, 128, -1, 128, 124, 125, -1, 126, 130, 129, -1, 129, 125, 126, -1, 127, 131, 130, -1, 130, 126, 127, -1, 124, 128, 131, -1, 131, 127, 124, -1, 60, 64, 65, -1, 65, 61, 60, -1, 61, 65, 66, -1, 66, 62, 61, -1, 62, 66, 67, -1, 67, 63, 62, -1, 63, 67, 64, -1, 64, 60, 63, -1, 64, 68, 69, -1, 69, 65, 64, -1, 65, 69, 70, -1, 70, 66, 65, -1, 66, 70, 71, -1, 71, 67, 66, -1, 67, 71, 68, -1, 68, 64, 67, -1, 68, 72, 73, -1, 73, 69, 68, -1, 69, 73, 74, -1, 74, 70, 69, -1, 70, 74, 75, -1, 75, 71, 70, -1, 71, 75, 72, -1, 72, 68, 71, -1, 72, 76, 77, -1, 77, 73, 72, -1, 73, 77, 78, -1, 78, 74, 73, -1, 74, 78, 79, -1, 79, 75, 74, -1, 75, 79, 76, -1, 76, 72, 75, -1, 76, 79, 78, -1, 78, 77, 76, -1, 129, 133, 132, -1, 132, 128, 129, -1, 130, 134, 133, -1, 133, 129, 130, -1, 131, 135, 134, -1, 134, 130, 131, -1, 128, 132, 135, -1, 135, 131, 128, -1, 133, 137, 136, -1, 136, 132, 133, -1, 134, 138, 137, -1, 137, 133, 134, -1, 135, 139, 138, -1, 138, 134, 135, -1, 132, 136, 139, -1, 139, 135, 132, -1, 137, 141, 140, -1, 140, 136, 137, -1, 138, 142, 141, -1, 141, 137, 138, -1, 139, 143, 142, -1, 142, 138, 139, -1, 136, 140, 143, -1, 143, 139, 136, -1, 141, 145, 144, -1, 144, 140, 141, -1, 142, 146, 145, -1, 145, 141, 142, -1, 143, 147, 146, -1, 146, 142, 143, -1, 140, 144, 147, -1, 147, 143, 140, -1, 145, 146, 147, -1, 147, 144, 145, -1, 148, 8, 9, -1, 9, 149, 148, -1, 149, 9, 10, -1, 10, 150, 149, -1, 150, 10, 11, -1, 11, 151, 150, -1, 151, 11, 8, -1, 8, 148, 151, -1, 152, 148, 149, -1, 149, 153, 152, -1, 153, 149, 150, -1, 150, 154, 153, -1, 154, 150, 151, -1, 151, 155, 154, -1, 155, 151, 148, -1, 148, 152, 155, -1, 156, 152, 153, -1, 153, 157, 156, -1, 158, 154, 155, -1, 155, 159, 158, -1, 160, 156, 157, -1, 157, 161, 160, -1, 161, 157, 158, -1, 158, 162, 161, -1, 162, 158, 159, -1, 159, 163, 162, -1, 163, 159, 156, -1, 156, 160, 163, -1, 164, 160, 161, -1, 161, 165, 164, -1, 165, 161, 162, -1, 162, 166, 165, -1, 166, 162, 163, -1, 163, 167, 166, -1, 167, 163, 160, -1, 160, 164, 167, -1, 153, 176, 177, -1, 177, 157, 153, -1, 157, 177, 178, -1, 178, 158, 157, -1, 158, 178, 179, -1, 179, 154, 158, -1, 154, 179, 176, -1, 176, 153, 154, -1, 176, 180, 181, -1, 181, 177, 176, -1, 177, 181, 182, -1, 182, 178, 177, -1, 178, 182, 183, -1, 183, 179, 178, -1, 179, 183, 180, -1, 180, 176, 179, -1, 180, 184, 185, -1, 185, 181, 180, -1, 181, 185, 186, -1, 186, 182, 181, -1, 182, 186, 187, -1, 187, 183, 182, -1, 183, 187, 184, -1, 184, 180, 183, -1, 184, 188, 189, -1, 189, 185, 184, -1, 185, 189, 190, -1, 190, 186, 185, -1, 186, 190, 191, -1, 191, 187, 186, -1, 187, 191, 188, -1, 188, 184, 187, -1, 152, 156, 201, -1, 201, 200, 152, -1, 156, 159, 202, -1, 202, 201, 156, -1, 159, 155, 203, -1, 203, 202, 159, -1, 155, 152, 200, -1, 200, 203, 155, -1, 201, 205, 204, -1, 204, 200, 201, -1, 202, 206, 205, -1, 205, 201, 202, -1, 203, 207, 206, -1, 206, 202, 203, -1, 200, 204, 207, -1, 207, 203, 200, -1, 205, 209, 208, -1, 208, 204, 205, -1, 206, 210, 209, -1, 209, 205, 206, -1, 207, 211, 210, -1, 210, 206, 207, -1, 204, 208, 211, -1, 211, 207, 204, -1, 209, 213, 212, -1, 212, 208, 209, -1, 210, 214, 213, -1, 213, 209, 210, -1, 211, 215, 214, -1, 214, 210, 211, -1, 208, 212, 215, -1, 215, 211, 208, -1, 172, 164, 165, -1, 165, 173, 172, -1, 173, 165, 166, -1, 166, 174, 173, -1, 174, 166, 167, -1, 167, 175, 174, -1, 175, 167, 164, -1, 164, 172, 175, -1, 168, 172, 173, -1, 173, 169, 168, -1, 169, 173, 174, -1, 174, 170, 169, -1, 170, 174, 175, -1, 175, 171, 170, -1, 171, 175, 172, -1, 172, 168, 171, -1, 171, 168, 169, -1, 169, 170, 171, -1, 188, 192, 193, -1, 193, 189, 188, -1, 189, 193, 194, -1, 194, 190, 189, -1, 190, 194, 195, -1, 195, 191, 190, -1, 191, 195, 192, -1, 192, 188, 191, -1, 192, 196, 197, -1, 197, 193, 192, -1, 193, 197, 198, -1, 198, 194, 193, -1, 194, 198, 199, -1, 199, 195, 194, -1, 195, 199, 196, -1, 196, 192, 195, -1, 196, 199, 198, -1, 198, 197, 196, -1, 213, 217, 216, -1, 216, 212, 213, -1, 214, 218, 217, -1, 217, 213, 214, -1, 215, 219, 218, -1, 218, 214, 215, -1, 212, 216, 219, -1, 219, 215, 212, -1, 217, 221, 220, -1, 220, 216, 217, -1, 218, 222, 221, -1, 221, 217, 218, -1, 219, 223, 222, -1, 222, 218, 219, -1, 216, 220, 223, -1, 223, 219, 216, -1, 221, 222, 223, -1, 223, 220, 221, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ANIMATOR"),
                    },
                    Name: stringPtr("LOA1_WalkAnimation"),
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ENGINE"),
                    },
                    Url: x3d.MFString{"BoxMan3.js", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js"},
                    DirectOutput: boolPtr(true),
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("update"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFNode"),
                        Name: stringPtr("humanoid"),
                        Children: []x3d.X3DNode{
                            &x3d.HAnimHumanoid{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("boxman_Humanoid"),
                                },
                            },
                        },
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("MFVec3f"),
                        Name: stringPtr("coordList"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFNode"),
                        Name: stringPtr("joint"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("translation"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("rotation"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("scale"),
                        Value: stringPtr("1 1 1"),
                    },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("HumanoidRoot_translation_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("HumanoidRoot_rotation_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_hip_rotation_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_knee_rotation_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_ankle_rotation_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_midtarsal_rotation_changed"),
                    ToNode: stringPtr("boxman_l_midtarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_hip_rotation_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_knee_rotation_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_ankle_rotation_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_midtarsal_rotation_changed"),
                    ToNode: stringPtr("boxman_r_midtarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("vl5_rotation_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("skullbase_rotation_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_shoulder_rotation_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_elbow_rotation_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("l_wrist_rotation_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_shoulder_rotation_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_elbow_rotation_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ANIMATOR"),
                    FromField: stringPtr("r_wrist_rotation_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
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
	filename := "../data/BoxMan3.new.go.x3d"
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