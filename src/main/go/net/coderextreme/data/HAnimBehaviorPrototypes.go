
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
                    Content: stringPtr("HAnimBehaviorPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("2 May 2006"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:46:36 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("Web3D2007BlendedBehaviorsChangeableBodies.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/files/specifications/19774/V1.0"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("InterchangableActorsViaDynamicRoutingPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ApaydinThesis.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("X3D HAnim humanoid animation behaviors"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("under development. should joint translations be exposed? upgrade to HAnim v2.2"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("HAnimBehavior"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFInt32"),
                                Name: stringPtr("supportedLOA"),
                                Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("cycleInterval"),
                            Value: stringPtr("1"),
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
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("stopTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("pauseTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("resumeTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("cycleTime"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isActive"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isPaused"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("elapsedTime"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("time"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("fraction_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("HumanoidRoot_translation_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFVec3f"),
                            Name: stringPtr("HumanoidRoot_translation_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("HumanoidRoot_translation_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("HumanoidRoot_rotation_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("HumanoidRoot_rotation_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("HumanoidRoot_rotation_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c4_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c4_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c4_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c5_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c5_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c5_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c6_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c6_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c6_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("c7_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("c7_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("c7_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("jaw_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("jaw_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("jaw_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l4_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l4_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l4_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l5_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l5_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l5_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_acromioclavicular_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_acromioclavicular_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_acromioclavicular_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ankle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ankle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ankle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_calf_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_calf_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_calf_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_clavicle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_clavicle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_clavicle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_elbow_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_elbow_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_elbow_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_eyeball_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_eyeball_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_eyeball_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_eyeball_joint_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_eyeball_joint_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_eyeball_joint_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_eyebrow_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_eyebrow_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_eyebrow_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_eyebrow_joint_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_eyebrow_joint_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_eyebrow_joint_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_eyelid_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_eyelid_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_eyelid_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_eyelid_joint_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_eyelid_joint_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_eyelid_joint_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_forearm_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_forearm_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_forearm_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_forefoot_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_forefoot_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_forefoot_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_hand_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_hand_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_hand_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_hindfoot_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_hindfoot_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_hindfoot_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_hip_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_hip_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_hip_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_index_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_index_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_index_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_knee_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_knee_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_knee_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_metatarsal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_metatarsal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_metatarsal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middistal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middistal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middistal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_middle_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_middle_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_middle_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_midproximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_midproximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_midproximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_midtarsal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_midtarsal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_midtarsal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_pinky_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_pinky_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_pinky_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_ring_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_ring_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_ring_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_scapula_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_scapula_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_scapula_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_shoulder_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_shoulder_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_shoulder_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_sternoclavicular_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_sternoclavicular_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_sternoclavicular_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_subtalar_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_subtalar_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_subtalar_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thigh_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thigh_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thigh_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thumb1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thumb1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thumb1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thumb2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thumb2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thumb2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thumb3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thumb3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thumb3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thumb_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thumb_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thumb_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thumb_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thumb_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thumb_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_thumb_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_thumb_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_thumb_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_upperarm_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_upperarm_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_upperarm_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("l_wrist_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("l_wrist_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("l_wrist_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("pelvis_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("pelvis_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("pelvis_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_acromioclavicular_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_acromioclavicular_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_acromioclavicular_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ankle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ankle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ankle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_calf_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_calf_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_calf_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_clavicle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_clavicle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_clavicle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_elbow_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_elbow_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_elbow_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_eyeball_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_eyeball_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_eyeball_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_eyeball_joint_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_eyeball_joint_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_eyeball_joint_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_eyebrow_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_eyebrow_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_eyebrow_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_eyebrow_joint_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_eyebrow_joint_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_eyebrow_joint_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_eyelid_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_eyelid_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_eyelid_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_eyelid_joint_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_eyelid_joint_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_eyelid_joint_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_forearm_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_forearm_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_forearm_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_forefoot_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_forefoot_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_forefoot_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_hand_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_hand_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_hand_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_hindfoot_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_hindfoot_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_hindfoot_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_hip_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_hip_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_hip_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_index_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_index_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_index_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_knee_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_knee_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_knee_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_metatarsal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_metatarsal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_metatarsal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middistal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middistal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middistal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_middle_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_middle_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_middle_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_midproximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_midproximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_midproximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_midtarsal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_midtarsal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_midtarsal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_pinky_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_pinky_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_pinky_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring0_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring0_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring0_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring_middle_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring_middle_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring_middle_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_ring_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_ring_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_ring_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_scapula_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_scapula_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_scapula_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_shoulder_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_shoulder_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_shoulder_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_sternoclavicular_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_sternoclavicular_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_sternoclavicular_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_subtalar_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_subtalar_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_subtalar_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thigh_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thigh_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thigh_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thumb1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thumb1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thumb1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thumb2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thumb2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thumb2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thumb3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thumb3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thumb3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thumb_distal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thumb_distal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thumb_distal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thumb_metacarpal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thumb_metacarpal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thumb_metacarpal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_thumb_proximal_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_thumb_proximal_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_thumb_proximal_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_upperarm_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_upperarm_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_upperarm_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("r_wrist_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("r_wrist_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("r_wrist_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("sacroiliac_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("sacroiliac_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("sacroiliac_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("sacrum_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("sacrum_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("sacrum_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("skull_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("skull_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("skull_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("skullbase_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("skullbase_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("skullbase_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t10_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t10_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t10_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t11_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t11_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t11_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t12_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t12_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t12_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t4_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t4_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t4_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t5_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t5_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t5_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t6_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t6_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t6_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t7_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t7_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t7_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t8_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t8_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t8_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("t9_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("t9_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("t9_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("temporomandibular_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("temporomandibular_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("temporomandibular_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc4_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc4_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc4_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc5_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc5_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc5_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc6_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc6_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc6_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vc7_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vc7_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vc7_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vl1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vl1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vl1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vl2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vl2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vl2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vl3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vl3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vl3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vl4_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vl4_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vl4_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vl5_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vl5_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vl5_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt10_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt10_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt10_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt11_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt11_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt11_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt12_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt12_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt12_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt1_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt1_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt1_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt2_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt2_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt2_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt3_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt3_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt3_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt4_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt4_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt4_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt5_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt5_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt5_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt6_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt6_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt6_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt7_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt7_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt7_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt8_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt8_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt8_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("vt9_key"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
                            Name: stringPtr("vt9_keyValue"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("vt9_changed"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.TimeSensor{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("BehaviorClock"),
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
                                        NodeField: stringPtr("resumeTime"),
                                        ProtoField: stringPtr("resumeTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("pauseTime"),
                                        ProtoField: stringPtr("pauseTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("stopTime"),
                                        ProtoField: stringPtr("stopTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isPaused"),
                                        ProtoField: stringPtr("isPaused"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isActive"),
                                        ProtoField: stringPtr("isActive"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("cycleTime"),
                                        ProtoField: stringPtr("cycleTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("elapsedTime"),
                                        ProtoField: stringPtr("elapsedTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("fraction_changed"),
                                        ProtoField: stringPtr("fraction_changed"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("time"),
                                        ProtoField: stringPtr("time"),
                                    },
                                    },
                                },
                            },
                            &x3d.Switch{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SupportedLoaHolder1"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("whichChoice"),
                                            ProtoField: stringPtr("supportedLOA"),
                                    },
                                    },
                                },
                            },
                            &x3d.PositionInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HumanoidRootPI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("HumanoidRoot_translation_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("HumanoidRoot_translation_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("HumanoidRoot_translation_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HumanoidRootOI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("HumanoidRoot_rotation_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("HumanoidRoot_rotation_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("HumanoidRoot_rotation_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c4_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c4_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c4_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c4_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c5_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c5_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c5_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c5_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c6_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c6_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c6_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c6_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("c7_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("c7_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("c7_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("c7_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("jaw_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("jaw_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("jaw_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("jaw_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l4_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l4_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l4_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l4_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l5_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l5_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l5_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l5_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_acromioclavicular_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_acromioclavicular_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_acromioclavicular_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_acromioclavicular_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ankle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ankle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ankle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ankle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_calf_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_calf_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_calf_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_calf_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_clavicle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_clavicle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_clavicle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_clavicle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_elbow_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_elbow_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_elbow_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_elbow_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_eyeball_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_eyeball_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_eyeball_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_eyeball_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_eyeball_joint_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_eyeball_joint_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_eyeball_joint_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_eyeball_joint_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_eyebrow_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_eyebrow_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_eyebrow_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_eyebrow_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_eyebrow_joint_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_eyebrow_joint_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_eyebrow_joint_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_eyebrow_joint_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_eyelid_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_eyelid_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_eyelid_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_eyelid_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_eyelid_joint_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_eyelid_joint_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_eyelid_joint_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_eyelid_joint_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_forearm_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_forearm_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_forearm_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_forearm_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_forefoot_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_forefoot_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_forefoot_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_forefoot_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_hand_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_hand_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_hand_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_hand_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_hindfoot_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_hindfoot_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_hindfoot_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_hindfoot_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_hip_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_hip_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_hip_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_hip_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_index_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_index_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_index_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_index_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_knee_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_knee_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_knee_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_knee_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_metatarsal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_metatarsal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_metatarsal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_metatarsal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middistal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middistal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middistal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middistal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_middle_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_middle_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_middle_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_middle_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_midproximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_midproximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_midproximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_midproximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_midtarsal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_midtarsal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_midtarsal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_midtarsal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_pinky_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_pinky_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_pinky_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_pinky_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_ring_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_ring_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_ring_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_ring_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_scapula_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_scapula_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_scapula_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_scapula_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_shoulder_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_shoulder_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_shoulder_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_shoulder_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_sternoclavicular_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_sternoclavicular_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_sternoclavicular_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_sternoclavicular_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_subtalar_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_subtalar_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_subtalar_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_subtalar_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thigh_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thigh_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thigh_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thigh_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thumb1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thumb1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thumb1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thumb1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thumb2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thumb2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thumb2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thumb2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thumb3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thumb3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thumb3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thumb3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thumb_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thumb_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thumb_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thumb_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thumb_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thumb_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thumb_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thumb_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_thumb_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_thumb_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_thumb_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_thumb_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_upperarm_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_upperarm_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_upperarm_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_upperarm_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("l_wrist_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("l_wrist_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("l_wrist_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("l_wrist_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("pelvis_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("pelvis_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("pelvis_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("pelvis_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_acromioclavicular_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_acromioclavicular_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_acromioclavicular_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_acromioclavicular_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ankle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ankle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ankle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ankle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_calf_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_calf_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_calf_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_calf_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_clavicle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_clavicle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_clavicle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_clavicle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_elbow_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_elbow_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_elbow_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_elbow_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_eyeball_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_eyeball_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_eyeball_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_eyeball_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_eyeball_joint_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_eyeball_joint_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_eyeball_joint_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_eyeball_joint_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_eyebrow_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_eyebrow_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_eyebrow_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_eyebrow_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_eyebrow_joint_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_eyebrow_joint_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_eyebrow_joint_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_eyebrow_joint_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_eyelid_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_eyelid_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_eyelid_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_eyelid_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_eyelid_joint_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_eyelid_joint_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_eyelid_joint_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_eyelid_joint_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_forearm_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_forearm_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_forearm_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_forearm_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_forefoot_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_forefoot_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_forefoot_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_forefoot_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_hand_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_hand_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_hand_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_hand_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_hindfoot_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_hindfoot_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_hindfoot_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_hindfoot_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_hip_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_hip_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_hip_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_hip_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_index_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_index_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_index_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_index_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_knee_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_knee_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_knee_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_knee_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_metatarsal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_metatarsal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_metatarsal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_metatarsal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middistal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middistal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middistal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middistal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_middle_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_middle_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_middle_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_middle_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_midproximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_midproximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_midproximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_midproximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_midtarsal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_midtarsal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_midtarsal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_midtarsal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_pinky_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_pinky_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_pinky_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_pinky_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring0_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring0_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring0_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring0_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring_middle_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring_middle_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring_middle_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring_middle_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_ring_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_ring_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_ring_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_ring_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_scapula_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_scapula_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_scapula_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_scapula_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_shoulder_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_shoulder_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_shoulder_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_shoulder_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_sternoclavicular_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_sternoclavicular_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_sternoclavicular_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_sternoclavicular_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_subtalar_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_subtalar_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_subtalar_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_subtalar_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thigh_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thigh_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thigh_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thigh_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thumb1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thumb1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thumb1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thumb1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thumb2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thumb2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thumb2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thumb2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thumb3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thumb3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thumb3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thumb3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thumb_distal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thumb_distal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thumb_distal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thumb_distal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thumb_metacarpal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thumb_metacarpal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thumb_metacarpal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thumb_metacarpal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_thumb_proximal_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_thumb_proximal_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_thumb_proximal_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_thumb_proximal_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_upperarm_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_upperarm_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_upperarm_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_upperarm_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("r_wrist_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("r_wrist_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("r_wrist_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("r_wrist_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("sacroiliac_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("sacroiliac_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("sacroiliac_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("sacroiliac_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("sacrum_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("sacrum_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("sacrum_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("sacrum_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("skull_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("skull_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("skull_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("skull_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("skullbase_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("skullbase_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("skullbase_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("skullbase_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t4_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t4_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t4_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t4_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t5_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t5_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t5_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t5_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t6_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t6_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t6_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t6_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t7_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t7_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t7_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t7_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t8_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t8_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t8_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t8_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t9_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t9_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t9_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t9_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t10_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t10_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t10_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t10_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t11_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t11_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t11_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t11_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("t12_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("t12_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("t12_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("t12_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("temporomandibular_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("temporomandibular_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("temporomandibular_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("temporomandibular_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc4_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc4_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc4_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc4_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc5_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc5_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc5_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc5_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc6_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc6_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc6_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc6_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vc7_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vc7_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vc7_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vc7_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vl1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vl1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vl1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vl1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vl2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vl2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vl2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vl2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vl3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vl3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vl3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vl3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vl4_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vl4_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vl4_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vl4_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vl5_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vl5_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vl5_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vl5_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt1_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt1_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt1_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt1_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt2_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt2_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt2_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt2_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt3_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt3_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt3_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt3_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt4_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt4_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt4_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt4_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt5_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt5_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt5_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt5_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt6_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt6_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt6_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt6_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt7_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt7_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt7_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt7_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt8_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt8_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt8_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt8_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt9_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt9_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt9_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt9_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt10_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt10_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt10_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt10_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt11_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt11_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt11_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt11_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("vt12_OI"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("key"),
                                            ProtoField: stringPtr("vt12_key"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("keyValue"),
                                        ProtoField: stringPtr("vt12_keyValue"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("value_changed"),
                                        ProtoField: stringPtr("vt12_changed"),
                                    },
                                    },
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("HumanoidRootPI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("HumanoidRootOI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c4_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c5_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c6_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("c7_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("jaw_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l4_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l5_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_acromioclavicular_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ankle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_calf_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_clavicle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_elbow_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_eyeball_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_eyeball_joint_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_eyebrow_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_eyebrow_joint_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_eyelid_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_eyelid_joint_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_forearm_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_forefoot_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_hand_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_hindfoot_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_hip_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_index_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_knee_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_metatarsal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middistal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_middle_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_midproximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_midtarsal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_pinky_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_ring_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_scapula_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_shoulder_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_sternoclavicular_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_subtalar_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thigh_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thumb1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thumb2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thumb3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thumb_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thumb_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_thumb_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_upperarm_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("l_wrist_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("pelvis_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_acromioclavicular_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ankle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_calf_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_clavicle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_elbow_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_eyeball_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_eyeball_joint_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_eyebrow_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_eyebrow_joint_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_eyelid_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_eyelid_joint_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_forearm_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_forefoot_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_hand_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_hindfoot_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_hip_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_index_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_knee_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_metatarsal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middistal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_middle_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_midproximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_midtarsal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_pinky_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring0_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring_middle_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_ring_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_scapula_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_shoulder_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_sternoclavicular_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_subtalar_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thigh_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thumb1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thumb2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thumb3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thumb_distal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thumb_metacarpal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_thumb_proximal_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_upperarm_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("r_wrist_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("sacroiliac_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("sacrum_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("skull_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("skullbase_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t4_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t5_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t6_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t7_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t8_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t9_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t10_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t11_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("t12_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("temporomandibular_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc4_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc5_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc6_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vc7_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vl1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vl2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vl3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vl4_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vl5_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt1_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt2_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt3_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt4_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt5_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt6_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt7_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt8_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt9_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt10_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt11_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("BehaviorClock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("vt12_OI"),
                                ToField: stringPtr("set_fraction"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("HAnimBodyBehaviorChooser"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFInt32"),
                                Name: stringPtr("supportedLOA"),
                                Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("HumanoidArray"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFInt32"),
                            Name: stringPtr("whichBody"),
                            Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFInt32"),
                            Name: stringPtr("set_whichBody"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFInt32"),
                            Name: stringPtr("whichBody_changed"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("hAnimBehaviorNodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("MFBool"),
                            Name: stringPtr("enabledBehaviorsArray"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFInt32"),
                            Name: stringPtr("enableBehavior"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFInt32"),
                            Name: stringPtr("disableBehavior"),
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
                            Value: stringPtr("0"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Switch{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("BodySwitch"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("whichChoice"),
                                            ProtoField: stringPtr("whichBody"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("children"),
                                        ProtoField: stringPtr("HumanoidArray"),
                                    },
                                    },
                                },
                            },
                            &x3d.Group{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BehaviorArrayHolder"),
                                    },
                                    IS: &x3d.IS{
                                        Connect: []x3d.X3DNode{
                                            &x3d.Connect{
                                                NodeField: stringPtr("children"),
                                                ProtoField: stringPtr("hAnimBehaviorNodes"),
                                        },
                                        },
                                    },
                                Children: []x3d.X3DNode{
                                },
                            },
                            &x3d.TimeSensor{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TimeSensorHolderStartStopTimes"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("startTime"),
                                            ProtoField: stringPtr("startTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("stopTime"),
                                        ProtoField: stringPtr("stopTime"),
                                    },
                                    },
                                },
                            },
                            &x3d.Switch{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SupportedLoaHolder2"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("whichChoice"),
                                            ProtoField: stringPtr("supportedLOA"),
                                    },
                                    },
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("BehaviorSelectionScript"),
                                },
                                Url: x3d.MFString{"HAnimBehaviorPrototypesScript.js", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"},
                                DirectOutput: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("HumanoidArray"),
                                            ProtoField: stringPtr("HumanoidArray"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("whichBody"),
                                        ProtoField: stringPtr("whichBody"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_whichBody"),
                                        ProtoField: stringPtr("set_whichBody"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("whichBody_changed"),
                                        ProtoField: stringPtr("whichBody_changed"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("hAnimBehaviorNodes"),
                                        ProtoField: stringPtr("hAnimBehaviorNodes"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enabledBehaviorsArray"),
                                        ProtoField: stringPtr("enabledBehaviorsArray"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enableBehavior"),
                                        ProtoField: stringPtr("enableBehavior"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("disableBehavior"),
                                        ProtoField: stringPtr("disableBehavior"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("MFNode"),
                                        Name: stringPtr("HumanoidArray"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("whichBody"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("set_whichBody"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("whichBody_changed"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("MFNode"),
                                    Name: stringPtr("hAnimBehaviorNodes"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("MFBool"),
                                    Name: stringPtr("enabledBehaviorsArray"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("enableBehavior"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("disableBehavior"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("timeSensorNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.TimeSensor{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TimeSensorHolderStartStopTimes"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("previousBodyIndex"),
                                    Value: stringPtr("-1"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("traceEnabled"),
                                    Value: stringPtr("true"),
                                },
                                },
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("HAnimBehaviorPrototypes.x3d"),
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BehaviorTest1"),
                    },
                    Name: stringPtr("HAnimBehavior"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("HumanoidRoot_translation_key"),
                            Value: stringPtr("0 0.25 0.5 0.75 1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("HumanoidRoot_translation_keyValue"),
                        Value: stringPtr("0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("r_ankle_key"),
                        Value: stringPtr("0 0.5 1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("r_ankle_keyValue"),
                        Value: stringPtr("0 1 0 0 0 1 0 0.2 0 1 0 0.4"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ChooserTest"),
                    },
                    Name: stringPtr("HAnimBodyBehaviorChooser"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("HumanoidArray"),
                            Children: []x3d.X3DNode{
                                &x3d.HAnimHumanoid{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_DiamondManLOA-1"),
                                    },
                                    Name: stringPtr("DiamondManLOA-1"),
                                    Version: stringPtr("1.0"),
                                },
                            },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("whichBody"),
                        Value: stringPtr("0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("hAnimBehaviorNodes"),
                        Children: []x3d.X3DNode{
                            &x3d.ProtoInstance{
                                Name: stringPtr("HAnimBehavior"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("BehaviorTest1"),
                                },
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabledBehaviorsArray"),
                        Value: stringPtr("true"),
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
	filename := "../data/HAnimBehaviorPrototypes.new.go.x3d"
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