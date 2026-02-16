
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
                    Content: stringPtr("LOA1_JumpAnimation.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Humanoid animation prototype reusable by any Humanoid."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Cindy Ballreich cindy@ballreich.net 3Name3D"),
            },
            &x3d.Meta{
                Name: stringPtr("rights"),
                Content: stringPtr("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Scott Tufts"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("1 December 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("23 May 2020"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.HAnim.org"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://HAnim.org/Models"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://HAnim.org/Nodes"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d"),
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
                &x3d.WorldInfo{
                    Title: stringPtr("LOA1_JumpAnimation.x3d"),
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("LOA1_JumpAnimation"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("cycleInterval"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFTime"),
                                Value: stringPtr("2"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("loop"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("startTime"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("stopTime"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("fraction_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFFloat"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isActive"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_translation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFVec3f"),
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("lower_body_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hip_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_knee_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ankle_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midtarsal_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hip_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_knee_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ankle_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midtarsal_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vl5_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("skullbase_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_shoulder_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_elbow_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_wrist_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_shoulder_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_elbow_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_wrist_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.TimeSensor{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TIMER"),
                                        },
                                        Loop: boolPtr(true),
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("cycleInterval"),
                                                    ProtoField: stringPtr("cycleInterval"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("enabled"),
                                                ProtoField: stringPtr("enabled"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("loop"),
                                                ProtoField: stringPtr("loop"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("startTime"),
                                                ProtoField: stringPtr("startTime"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("stopTime"),
                                                ProtoField: stringPtr("stopTime"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("fraction_changed"),
                                                ProtoField: stringPtr("fraction_changed"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("isActive"),
                                                ProtoField: stringPtr("isActive"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.PositionInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("HUMANOIDROOT_POSITION_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.04, 0.08, 0.12, 0.16, 0.2, 0.24, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.8, 0.84, 0.88, 0.92, 0.96, 1.0},
                                        KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.01264,-0.01289},[3]float32{0.0,-0.04712,-0.03738},[3]float32{-0.0003345,-0.1049,-0.05353},[3]float32{-0.0005712,-0.1892,-0.06561},[3]float32{-0.0008233,-0.286,-0.06276},[3]float32{-0.0009591,-0.3795,-0.05148},[3]float32{-0.00106,-0.4484,-0.03656},[3]float32{-0.00106,-0.4484,-0.03656},[3]float32{-0.001122,-0.3269,-0.1499},[3]float32{-0.0008616,-0.13,-0.06358},[3]float32{-0.0005128,-0.03123,-0.05488},[3]float32{0.0004779,0.053,0.02732},[3]float32{0.0001728,0.4148,0.006873},[3]float32{0.0,0.03045,0.02148},[3]float32{0.0,-0.01299,-0.01057},[3]float32{0.0,-0.06932,-0.01064},[3]float32{0.0001365,-0.1037,-0.005059},[3]float32{0.0001279,-0.07198,-0.007596},[3]float32{0.000141,-0.01626,-0.004935},[3]float32{0.0,0.0,0.0}},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("HumanoidRoot_translation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("HUMANOIDROOT_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.64, 0.76, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.3273, 1.0, 0.0, 0.0, 0.3273, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("HumanoidRoot_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("SACROILIAC_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.76, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.1892, 1.0, 0.0, 0.0, 0.1892, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("lower_body_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_HIP_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 4.349, 1.0, 0.0, 0.0, 4.349, 1.0, 0.0, 0.0, 4.615, -1.0, 0.0, 0.0, 0.9136, -1.0, 0.0, 0.0, 0.3614, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.7869, -1.0, 0.0, 0.0, 0.3918, -1.0, 0.0, 0.0, 0.5433, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_hip_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_KNEE_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 2.047, 1.0, 0.0, 0.0, 2.047, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.566, 1.0, 0.0, 0.0, 0.5913, 1.0, 0.0, 0.0, 0.9235, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_knee_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_ANKLE_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.84, 0.88, 0.92, 0.96, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.625, -1.0, 0.0, 0.0, 0.625, -1.0, 0.0, 0.0, 0.3364, -1.0, 0.0, 0.0, 0.2742, -1.0, 0.0, 0.0, 0.05078, 1.0, 0.0, 0.0, 0.2833, 1.0, 0.0, 0.0, 0.6667, 1.0, 0.0, 0.0, 0.2833, -1.0, 0.0, 0.0, 0.2108, -1.0, 0.0, 0.0, 0.375, -1.0, 0.0, 0.0, 0.3146, -1.0, 0.0, 0.0, 0.1174, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_ankle_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_MIDTARSAL_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.5, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.2, 1.0, 0.0, 0.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_midtarsal_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_HIP_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 4.433, 1.0, 0.0, 0.0, 4.433, 1.0, 0.0, 0.0, 4.647, -1.0, 0.0, 0.0, 0.8943, -1.0, 0.0, 0.0, 0.3698, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.4963, -1.0, 0.0, 0.0, 0.3829, -1.0, 0.0, 0.0, 0.5169, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_hip_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_KNEE_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 2.005, 1.0, 0.0, 0.0, 2.005, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.9507, 1.0, 0.0, 0.0, 0.5845, 1.0, 0.0, 0.0, 0.9054, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_knee_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_ANKLE_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.84, 0.88, 0.92, 0.96, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.6735, -1.0, 0.0, 0.0, 0.6735, -1.0, 0.0, 0.0, 0.3527, -1.0, 0.0, 0.0, 0.3038, -1.0, 0.0, 0.0, 0.07964, 1.0, 0.0, 0.0, 0.3001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.3001, -1.0, 0.0, 0.0, 0.2087, -1.0, 0.0, 0.0, 0.3756, -1.0, 0.0, 0.0, 0.3279, -1.0, 0.0, 0.0, 0.1193, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_ankle_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_MIDTARSAL_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.5, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, -0.2, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.2},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_midtarsal_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("VL5_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.2083, 0.375, 0.75, 0.8333, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0826, -0.01972, -0.5974, 0.8017, 0.08231, 0.009296, -0.9648, 0.2627, 0.1734, -0.01238, 0.9549, -0.2968, 0.08732, -0.008125, 0.9691, -0.2463, 0.158, 0.0, 1.0, 0.0, 0.0826},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("vl5_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("SKULLBASE_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.76, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.5989, -1.0, 0.0, 0.0, 0.5989, -1.0, 0.0, 0.0, 0.3216, 1.0, 0.0, 0.0, 0.06503, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("skullbase_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_SHOULDER_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -0.9987, 0.02554, 0.04498, 1.57, -0.9987, 0.02554, 0.04498, 1.57, 1.0, 0.0004113, 0.003055, 4.114, -0.8413, 0.3238, 0.4329, 1.453, -0.877, 0.4198, 0.2337, 0.6009, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_shoulder_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_ELBOW_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.1229, -1.0, 0.0, 0.0, 0.1229, -1.0, 0.0, 0.0, 0.5976, -1.0, 0.0, 0.0, 0.3917, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_elbow_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("L_WRIST_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0672928, 0.989475, -0.128107, 4.15574, 0.0672928, 0.989475, -0.128107, 4.15574, 0.00364942, 0.999901, 0.0135896, 4.5822, 0.0, -1.0, 0.0, 0.655922, -0.00050618, -0.999999, 0.0012782, 1.28397, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("l_wrist_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_SHOULDER_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.9992, 0.02042, 0.03558, 4.688, 0.9992, 0.02042, 0.03558, 4.688, 0.9989, -0.04623, 0.005159, 4.079, -0.8687, -0.2525, -0.4261, 1.501, -0.941, -0.2893, -0.1754, 0.4788, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_shoulder_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_ELBOW_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.04151, -1.0, 0.0, 0.0, 0.04151, -1.0, 0.0, 0.0, 0.5855, -1.0, 0.0, 0.0, 0.5852, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_elbow_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.OrientationInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("R_WRIST_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -0.0585279, 0.983903, -0.168849, 1.85956, -0.0585279, 0.983903, -0.168849, 1.85956, -0.00222418, 0.99801, -0.0630095, 1.46072, 0.0, 1.0, 0.0, 0.497349, 0.0, 0.0, 1.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("value_changed"),
                                                    ProtoField: stringPtr("r_wrist_rotation_changed"),
                                            },
                                            },
                                        },
                                    },
                                },
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("HUMANOIDROOT_POSITION_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("HUMANOIDROOT_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("SACROILIAC_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_HIP_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_KNEE_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_ANKLE_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_MIDTARSAL_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_HIP_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_KNEE_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_ANKLE_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_MIDTARSAL_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("VL5_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("SKULLBASE_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_SHOULDER_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_ELBOW_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("L_WRIST_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_SHOULDER_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_ELBOW_ANIMATOR"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("TIMER"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("R_WRIST_ANIMATOR"),
                            },
                        },
                    },
                },
                &x3d.Anchor{
                    Description: stringPtr("see InterchangableActorsViaDynamicRouting scene"),
                    Parameter: x3d.MFString{"target=_blank"},
                    Url: x3d.MFString{"InterchangableActorsViaDynamicRouting.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d", "InterchangableActorsViaDynamicRouting.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"LOA1_JumpAnimation.x3d", "defines a prototype", "for animating a humanoid.", "", "Click this text to see", "InterchangableActorsViaDynamicRouting example."},
                                FontStyle: &x3d.FontStyle{
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                    Size: floatPtr(0.8),
                                },
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.2},
                                },
                            },
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
	filename := "../data/LOA1_JumpAnimation.new.go.x3d"
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