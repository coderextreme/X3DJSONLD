
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
                    Content: stringPtr("LOA1_SwimmingFlutterKickAnimation.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Humanoid animation prototype reusable by any Humanoid."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Etsuko Lippi"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("13 December 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:09 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("not yet tested, need to compare with NancyDivingExample interpolators"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.HAnim.org"),
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
                Name: stringPtr("subject"),
                Content: stringPtr("Swimming flutter kick Animation HAnim 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("LOA1_DivingAnimation"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFTime"),
                                Name: stringPtr("cycleInterval"),
                                Value: stringPtr("7"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("loop"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("startTime"),
                            Value: stringPtr("0"),
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
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isActive"),
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
                            Name: stringPtr("lower_body_rotation_changed"),
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
                                                    NodeField: stringPtr("enabled"),
                                                    ProtoField: stringPtr("enabled"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("cycleInterval"),
                                                ProtoField: stringPtr("cycleInterval"),
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
                                                NodeField: stringPtr("isActive"),
                                                ProtoField: stringPtr("isActive"),
                                            },
                                            &x3d.Connect{
                                                NodeField: stringPtr("fraction_changed"),
                                                ProtoField: stringPtr("fraction_changed"),
                                            },
                                            },
                                        },
                                    },
                                    &x3d.PositionInterpolator{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("HUMANOIDROOT_POSITION_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.04167, 0.125, 0.1667, 0.2083, 0.25, 0.2917, 0.375, 0.4583, 0.5, 0.5417, 0.5833, 0.625, 0.7083, 0.75, 0.7917, 0.875, 0.9167, 1.0},
                                        KeyValue: &x3d.MFVec3f{[3]float32{0.0,-0.00928,0.0},[3]float32{0.0,-0.003858,0.0},[3]float32{0.0,-0.008847,0.0},[3]float32{0.0,-0.01486,0.0},[3]float32{0.0,-0.02641,0.0},[3]float32{0.0,-0.03934,0.0},[3]float32{0.0,-0.0502,0.0},[3]float32{0.0,-0.07469,0.0},[3]float32{0.0,-0.02732,0.0},[3]float32{0.0,-0.01608,0.0},[3]float32{0.0,-0.01129,0.0},[3]float32{0.0,-0.005819,0.0},[3]float32{0.0,-0.002004,0.0},[3]float32{0.0,-0.002579,0.0},[3]float32{0.0,-0.0143,0.0},[3]float32{0.0,-0.03799,0.0},[3]float32{0.0,-0.05648,0.0},[3]float32{0.0,-0.045,0.0},[3]float32{0.0,-0.00928,0.0}},
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
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
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
                                            DEF: stringPtr("L_HIP_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.25, 0.375, 0.6667, 0.7917, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{-0.873, 0.06094, 0.484, 0.2865, 0.9963, -0.01057, 0.08481, 0.2488, 0.9965, 0.01591, -0.08222, 0.3836, -1.0, 0.0, 0.0, 0.5518, -0.9964, 0.02231, 0.0817, 0.5351, -0.9809, 0.04912, 0.1881, 0.5204, -0.873, 0.06094, 0.484, 0.2865},
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
                                        Key: x3d.MFFloat{0.0, 0.2083, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.3226, 1.0, 0.0, 0.0, 0.1556, 1.0, 0.0, 0.0, 0.08678, 1.0, 0.0, 0.0, 0.8751, 1.0, 0.0, 0.0, 1.131, 1.0, 0.0, 0.0, 0.09961, 1.0, 0.0, 0.0, 0.3942, 1.0, 0.0, 0.0, 0.3226},
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
                                        Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.6001},
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
                                            DEF: stringPtr("R_HIP_ANIMATOR"),
                                        },
                                        Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.2917, 0.5, 0.7917, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{-0.5831, 0.03511, 0.8116, 0.1481, -0.995, 0.02296, 0.09674, 0.4683, -1.0, 0.00192, 0.007964, 0.4732, -0.998, -0.0158, -0.06102, 0.5079, -0.9131, -0.06243, -0.403, 0.3361, 1.0, 0.0, 0.0, 0.2571, 0.9891, -0.02805, 0.1444, 0.3879, -0.5831, 0.03511, 0.8116, 0.1481},
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
                                        Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.5, 0.6667, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.8573, 1.0, 0.0, 0.0, 0.5351, 1.0, 0.0, 0.0, 0.1756, 1.0, 0.0, 0.0, 0.1194, 1.0, 0.0, 0.0, 0.3153, 1.0, 0.0, 0.0, 0.09354, 1.0, 0.0, 0.0, 0.08558, 1.0, 0.0, 0.0, 0.8573},
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
                                        Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8509, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8509, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8001, 1.0, 0.0, 0.0, 0.8509, 1.0, 0.0, 0.0, 0.86001},
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
                                        Key: x3d.MFFloat{0.0, 0.28, 0.3, 0.32, 0.4, 0.45, 0.6, 0.65, 0.7, 0.75, 0.85, 0.9, 0.95, 1.0},
                                        KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 0.999, -1.0, 0.0, 0.0, 0.99, -1.0, 0.0, 0.0, 0.99, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 1.0},
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
                                        Key: x3d.MFFloat{0.0, 0.25, 0.375, 0.6667, 0.7917, 0.9167, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.1, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.2, 0.86, 0.25, 0.42, 0.5, 0.86, 0.25, 0.42, 0.8, 0.86, 0.25, 0.42, 0.4, 0.86, 0.25, 0.42, 0.2},
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
                                        Key: x3d.MFFloat{0.0, 0.32, 0.64, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.067, 0.98, -0.128, 4.15, 0.067, 0.98, -0.128, 4.15, 0.067, 0.98, -0.128, 4.15, 0.0, 0.0, 1.0, 0.0},
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
                                        Key: x3d.MFFloat{0.0, 0.45, 0.64, 0.76, 0.88, 1.0},
                                        KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.9992, 0.02042, 0.03558, 7.2, 0.9989, -0.04623, 0.005159, 4.079, -0.8687, -0.2525, -0.4261, 1.501, -0.941, -0.2893, -0.1754, 0.4788, 0.0, 0.0, 1.0, 0.0},
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
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("HUMANOIDROOT_POSITION_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("HUMANOIDROOT_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("SKULLBASE_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("VL5_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("L_HIP_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("L_KNEE_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("L_ANKLE_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("R_HIP_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("R_KNEE_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("R_ANKLE_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("L_SHOULDER_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("L_ELBOW_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("L_WRIST_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("R_SHOULDER_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("R_ELBOW_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("TIMER"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("R_WRIST_ANIMATOR"),
                                ToField: stringPtr("set_fraction"),
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("LOA1_SwimmingFlutterKickAnimation.x3d"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("LOA1_SwimmingFlutterKickAnimation scene"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 12.0},
                },
                &x3d.Anchor{
                    Description: stringPtr("Nancy Diving"),
                    Url: x3d.MFString{"NancyDiving.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d", "NancyDiving.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"},
                    Parameter: x3d.MFString{"target=_blank"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.2},
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"LOA1_SwimmingFlutterKickAnimation.x3d", "defines a prototype", "for animating a humanoid.", "", "Click text to see example."},
                                FontStyle: &x3d.FontStyle{
                                    Size: floatPtr(0.8),
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
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
	fmt.Println("\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")
	*/
	filename := "../data/LOA1_SwimmingFlutterKickAnimation.new.go.x3d"
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