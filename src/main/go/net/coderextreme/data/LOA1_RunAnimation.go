
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
                    Content: stringPtr("LOA1_RunAnimation.x3d"),
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
                Content: stringPtr("Ozan APAYDIN"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("30 October 2001"),
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
                Content: stringPtr("Nancy Run Animation HAnim 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d"),
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
                    Title: stringPtr("LOA1_RunAnimation.x3d"),
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("LOA1_RunAnimation"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("cycleInterval"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFTime"),
                                Value: stringPtr("1"),
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.2909, 0.3091, 0.7091, 0.8, 0.8182, 1.0},
                                        KeyValue: &x3d.MFVec3f{[3]float32{0.0,-0.0351,0.0},[3]float32{0.0,-0.0351,0.0},[3]float32{0.0,-0.04087,0.0},[3]float32{0.0,-0.04886,0.0},[3]float32{0.0,-0.04051,0.0},[3]float32{0.0,-0.03666,0.0},[3]float32{0.0,-0.03666,0.0},[3]float32{0.0,-0.0351,0.0}},
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
                                        Key: x3d.MFFloat{0.0, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0},
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
                                        Key: x3d.MFFloat{0.0, 1.0},
                                        KeyValue: x3d.MFRotation{0.9969, -0.05444, 0.05596, 0.07687, 0.9969, -0.05444, 0.05596, 0.07687},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{-0.9986, 0.03354, 0.04001, 1.212, -0.9889, 0.1328, 0.06696, 0.4025, 0.9894, 0.1453, 0.009351, 0.4114, -0.9963, 0.07032, 0.05003, 0.7035, -0.9986, 0.03354, 0.04001, 1.212},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 1.108, 1.0, 0.0, 0.0, 0.4265, 1.0, 0.0, 0.0, 0.7052, 1.0, 0.0, 0.0, 2.179, 1.0, 0.0, 0.0, 1.108},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.3091, 0.4909, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.03543, -1.0, 0.0, 0.0, 0.1037, -1.0, 0.0, 0.0, 0.4328, 1.0, 0.0, 0.0, 0.1929, 1.0, 0.0, 0.0, 0.03543},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{0.9999, 0.00293, -0.00989, 0.402, -1.0, 0.004977, -0.00497, 0.5943, -1.0, 0.003265, -0.001752, 1.178, -0.9999, 0.00815, -0.01093, 0.3031, 0.9999, 0.00293, -0.00989, 0.402},
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
                                        Key: x3d.MFFloat{0.0, 0.03636, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.7004, 1.0, 0.0, 0.0, 1.011, 1.0, 0.0, 0.0, 1.892, 1.0, 0.0, 0.0, 1.188, 1.0, 0.0, 0.0, 0.3964, 1.0, 0.0, 0.0, 0.7004},
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
                                        Key: x3d.MFFloat{0.0, 0.4909, 0.7091, 0.8, 0.8182, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.2323, -1.0, 0.0, 0.0, 0.07843, -1.0, 0.0, 0.0, 0.09676, -1.0, 0.0, 0.0, 0.3274, -1.0, 0.0, 0.0, 0.3278, 1.0, 0.0, 0.0, 0.2323},
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
                                        Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7636, 1.0},
                                        KeyValue: x3d.MFRotation{0.7651, 0.6382, 0.08586, 0.2712, 0.9999, 0.002845, -0.01547, 0.3756, 0.7459, -0.6505, -0.1432, 0.2416, 0.9984, 0.05536, -0.01154, 0.3488, 0.7651, 0.6382, 0.08586, 0.2712},
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
                                        Key: x3d.MFFloat{0.0, 0.4909, 1.0},
                                        KeyValue: x3d.MFRotation{0.6517, -0.7559, 0.06211, 0.2508, 0.6467, 0.7527, -0.1238, 0.2344, 0.6517, -0.7559, 0.06211, 0.2508},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{0.9907, -0.07264, 0.115, 1.135, 0.9291, -0.1222, 0.349, 0.1695, -0.9892, 0.1364, -0.05394, 0.5112, 0.9942, -0.0002052, 0.1073, 0.4975, 0.9907, -0.07264, 0.115, 1.135},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{0.9985, 0.03887, 0.03802, 4.689, -0.965, -0.1889, -0.1821, 1.415, 0.9758, 0.1563, 0.1529, 4.666, -0.9956, -0.0936, 0.009826, 1.126, 0.9985, 0.03887, 0.03802, 4.689},
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
                                        Key: x3d.MFFloat{0.0, 1.0},
                                        KeyValue: x3d.MFRotation{-0.0240995, -0.999682, 0.00741506, 0.120409, -0.0240995, -0.999682, 0.00741506, 0.120409},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.6979, 0.9094, 0.2062, -0.3613, 0.4157, 0.9637, 0.1537, -0.2185, 1.353, 0.4864, 0.08841, -0.8693, 0.1716, -1.0, 0.0, 0.0, 0.6979},
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
                                        Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                                        KeyValue: x3d.MFRotation{0.9353, -0.2978, -0.191, 4.222, -0.9362, 0.2924, -0.1952, 1.05, 0.9941, -0.09719, -0.04725, 4.512, -0.9594, 0.2653, 0.09579, 1.525, 0.9353, -0.2978, -0.191, 4.222},
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
                                        Key: x3d.MFFloat{0.0, 1.0},
                                        KeyValue: x3d.MFRotation{-0.917742, -0.237244, -0.318536, 0.214273, -0.917742, -0.237244, -0.318536, 0.214273},
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
//======================================
//Point to example use in case someone inspects this file
                &x3d.Anchor{
                    Description: stringPtr("InterchangableActorsViaDynamicRouting"),
                    Parameter: x3d.MFString{"target=_blank"},
                    Url: x3d.MFString{"InterchangableActorsViaDynamicRouting.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d", "InterchangableActorsViaDynamicRouting.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"LOA1_RunAnimation.x3d", "defines a prototype", "for animating a humanoid.", "", "Click this text to see", "InterchangableActorsViaDynamicRouting example."},
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
	filename := "../data/LOA1_RunAnimation.new.go.x3d"
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