
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
                Content: stringPtr("4 July 2020"),
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
                    Title: stringPtr("HAnimBehaviorPrototypes.x3d"),
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("HAnimBehavior"),
                    Appinfo: stringPtr("The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior."),
                    Documentation: stringPtr("https://www.web3d.org/files/specifications/19774/V1.0/"),
                    ProtoInterface: &x3d.ProtoInterface{
//supported Level of Articulation (LOA)
//shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations
//TODO: add other X3D 3.0 TimeSensor fields (pause etc.)
//Not supported: animated translation of individual joints
//pass in key/keyValue array pairs for single PositionInterpolator
//pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("supportedLOA"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."),
                                Type: stringPtr("SFInt32"),
                                Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("is this behavior enabled?"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("cycleInterval"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("how long do these interpolators take to execute?"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("loop"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)."),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        &x3d.Field{
                            Name: stringPtr("startTime"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("when time now >= startTime isActive becomes true and TimeSensor becomes active"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("stopTime"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("pauseTime"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("resumeTime"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive"),
                            Type: stringPtr("SFTime"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("cycleTime"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isActive"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("isActive true/false events are sent when TimeSensor starts/stops running"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isPaused"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("isPaused true/false events are sent when TimeSensor is paused/resumed"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("elapsedTime"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("time"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("continuously sends the absolute time (since January 1 1970)"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("fraction_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle."),
                            Type: stringPtr("SFFloat"),
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_translation_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_translation_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFVec3f"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_translation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFVec3f"),
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_rotation_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_rotation_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidRoot_rotation_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c4_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c4_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c4_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c5_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c5_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c5_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c6_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c6_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c6_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("c7_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c7_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("c7_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("jaw_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("jaw_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("jaw_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l4_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l4_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l4_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l5_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l5_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l5_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_acromioclavicular_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_acromioclavicular_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_acromioclavicular_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ankle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ankle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ankle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_calf_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_calf_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_calf_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_clavicle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_clavicle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_clavicle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_elbow_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_elbow_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_elbow_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyeball_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyeball_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyeball_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyeball_joint_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyeball_joint_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyeball_joint_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyebrow_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyebrow_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyebrow_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyebrow_joint_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyebrow_joint_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyebrow_joint_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyelid_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyelid_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyelid_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyelid_joint_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyelid_joint_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_eyelid_joint_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_forearm_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_forearm_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_forearm_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_forefoot_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_forefoot_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_forefoot_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hand_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hand_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hand_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hindfoot_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hindfoot_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hindfoot_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hip_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hip_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_hip_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_index_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_knee_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_knee_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_knee_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_metatarsal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_metatarsal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_metatarsal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middistal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middistal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middistal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_middle_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midproximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midproximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midproximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midtarsal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midtarsal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_midtarsal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_pinky_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_ring_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_scapula_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_scapula_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_scapula_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_shoulder_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_shoulder_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_shoulder_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_sternoclavicular_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_sternoclavicular_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_sternoclavicular_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_subtalar_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_subtalar_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_subtalar_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thigh_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thigh_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thigh_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_thumb_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_upperarm_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_upperarm_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_upperarm_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("l_wrist_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_wrist_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("l_wrist_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("pelvis_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("pelvis_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("pelvis_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_acromioclavicular_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_acromioclavicular_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_acromioclavicular_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ankle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ankle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ankle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_calf_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_calf_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_calf_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_clavicle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_clavicle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_clavicle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_elbow_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_elbow_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_elbow_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyeball_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyeball_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyeball_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyeball_joint_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyeball_joint_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyeball_joint_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyebrow_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyebrow_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyebrow_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyebrow_joint_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyebrow_joint_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyebrow_joint_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyelid_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyelid_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyelid_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyelid_joint_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyelid_joint_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_eyelid_joint_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_forearm_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_forearm_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_forearm_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_forefoot_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_forefoot_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_forefoot_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hand_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hand_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hand_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hindfoot_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hindfoot_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hindfoot_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hip_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hip_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_hip_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_index_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_knee_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_knee_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_knee_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_metatarsal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_metatarsal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_metatarsal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middistal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middistal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middistal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_middle_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midproximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midproximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midproximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midtarsal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midtarsal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_midtarsal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_pinky_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring0_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring0_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring0_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_middle_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_middle_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_middle_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_ring_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_scapula_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_scapula_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_scapula_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_shoulder_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_shoulder_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_shoulder_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_sternoclavicular_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_sternoclavicular_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_sternoclavicular_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_subtalar_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_subtalar_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_subtalar_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thigh_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thigh_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thigh_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_distal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_distal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_distal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_metacarpal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_metacarpal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_metacarpal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_proximal_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_proximal_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_thumb_proximal_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_upperarm_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_upperarm_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_upperarm_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("r_wrist_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_wrist_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("r_wrist_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("sacroiliac_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("sacroiliac_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("sacroiliac_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("sacrum_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("sacrum_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("sacrum_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("skull_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("skull_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("skull_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("skullbase_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("skullbase_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("skullbase_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t10_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t10_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t10_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t11_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t11_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t11_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t12_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t12_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t12_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t4_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t4_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t4_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t5_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t5_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t5_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t6_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t6_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t6_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t7_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t7_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t7_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t8_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t8_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t8_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("t9_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t9_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("t9_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("temporomandibular_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("temporomandibular_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("temporomandibular_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc4_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc4_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc4_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc5_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc5_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc5_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc6_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc6_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc6_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vc7_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc7_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vc7_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vl1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vl2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vl3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vl4_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl4_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl4_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vl5_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl5_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vl5_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt10_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt10_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt10_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt11_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt11_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt11_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt12_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt12_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt12_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt1_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt1_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt1_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt2_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt2_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt2_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt3_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt3_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt3_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt4_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt4_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt4_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt5_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt5_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt5_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt6_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt6_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt6_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt7_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt7_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt7_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt8_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt8_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt8_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        &x3d.Field{
                            Name: stringPtr("vt9_key"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt9_keyValue"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFRotation"),
//no default value
                        },
                        &x3d.Field{
                            Name: stringPtr("vt9_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFRotation"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
//design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators
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
                                        NodeField: stringPtr("stopTime"),
                                        ProtoField: stringPtr("stopTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("pauseTime"),
                                        ProtoField: stringPtr("pauseTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("resumeTime"),
                                        ProtoField: stringPtr("resumeTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("cycleTime"),
                                        ProtoField: stringPtr("cycleTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isActive"),
                                        ProtoField: stringPtr("isActive"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isPaused"),
                                        ProtoField: stringPtr("isPaused"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("elapsedTime"),
                                        ProtoField: stringPtr("elapsedTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("time"),
                                        ProtoField: stringPtr("time"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("fraction_changed"),
                                        ProtoField: stringPtr("fraction_changed"),
                                    },
                                    },
                                },
                            },
//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
                            &x3d.Switch{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SupportedLoaHolder1"),
                                },
                                WhichChoice: int32Ptr(-1),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("HumanoidRootPI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("HumanoidRootOI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c4_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c5_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c6_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("c7_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("jaw_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l4_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l5_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_acromioclavicular_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ankle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_calf_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_clavicle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_elbow_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_eyeball_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_eyeball_joint_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_eyebrow_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_eyebrow_joint_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_eyelid_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_eyelid_joint_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_forearm_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_forefoot_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_hand_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_hindfoot_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_hip_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_index_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_knee_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_metatarsal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middistal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_middle_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_midproximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_midtarsal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_pinky_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_ring_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_scapula_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_shoulder_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_sternoclavicular_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_subtalar_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thigh_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thumb1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thumb2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thumb3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thumb_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thumb_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_thumb_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_upperarm_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("l_wrist_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("pelvis_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_acromioclavicular_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ankle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_calf_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_clavicle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_elbow_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_eyeball_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_eyeball_joint_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_eyebrow_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_eyebrow_joint_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_eyelid_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_eyelid_joint_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_forearm_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_forefoot_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_hand_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_hindfoot_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_hip_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_index_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_knee_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_metatarsal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middistal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_middle_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_midproximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_midtarsal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_pinky_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring0_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring_middle_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_ring_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_scapula_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_shoulder_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_sternoclavicular_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_subtalar_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thigh_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thumb1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thumb2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thumb3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thumb_distal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thumb_metacarpal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_thumb_proximal_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_upperarm_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("r_wrist_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("sacroiliac_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("sacrum_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("skull_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("skullbase_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t4_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t5_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t6_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t7_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t8_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t9_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t10_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t11_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("t12_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("temporomandibular_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc4_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc5_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc6_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vc7_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vl1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vl2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vl3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vl4_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vl5_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt1_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt2_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt3_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt4_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt5_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt6_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt7_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt8_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt9_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt10_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt11_OI"),
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
                            &x3d.X3DRoute{
                                FromField: stringPtr("fraction_changed"),
                                FromNode: stringPtr("BehaviorClock"),
                                ToField: stringPtr("set_fraction"),
                                ToNode: stringPtr("vt12_OI"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("HAnimBodyBehaviorChooser"),
                    Appinfo: stringPtr("The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time."),
                    ProtoInterface: &x3d.ProtoInterface{
//TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs
//accessType="inputOutput" avoided to maintain backwards compatilibility with VRML97 scripting constraints
//shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs
//TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName
//TODO: consider addBody, removeBody, addBehavior, removeBehavior
//TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("supportedLOA"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."),
                                Type: stringPtr("SFInt32"),
                                Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("HumanoidArray"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("[HAnimHumanoid] nodes only"),
                            Type: stringPtr("MFNode"),
//default NULL
                        },
                        &x3d.Field{
                            Name: stringPtr("whichBody"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("whichBody is selected default is initial member of HumanoidArray"),
                            Type: stringPtr("SFInt32"),
                            Value: stringPtr("-1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_whichBody"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("whichBody is selected default is none"),
                            Type: stringPtr("SFInt32"),
                        },
                        &x3d.Field{
                            Name: stringPtr("whichBody_changed"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("whichBody is selected default is none"),
                            Type: stringPtr("SFInt32"),
                        },
                        &x3d.Field{
                            Name: stringPtr("hAnimBehaviorNodes"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time."),
                            Type: stringPtr("MFNode"),
//default NULL
                        },
                        &x3d.Field{
                            Name: stringPtr("enabledBehaviorsArray"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("indicate which HAnimBehavior nodes are activated, empty indicates all enabled true"),
                            Type: stringPtr("MFBool"),
//no default values
                        },
                        &x3d.Field{
                            Name: stringPtr("enableBehavior"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("enable corresponding behavior identified by index number"),
                            Type: stringPtr("SFInt32"),
                        },
                        &x3d.Field{
                            Name: stringPtr("disableBehavior"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("disable corresponding behavior identified by index number"),
                            Type: stringPtr("SFInt32"),
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
                                WhichChoice: int32Ptr(-1),
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
//note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless
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
                                WhichChoice: int32Ptr(-1),
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
                                DirectOutput: boolPtr(true),
                                Url: x3d.MFString{"HAnimBehaviorPrototypesScript.js", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"},
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
                                        Name: stringPtr("HumanoidArray"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Appinfo: stringPtr("[HAnimHumanoid] nodes only"),
                                        Type: stringPtr("MFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("whichBody"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("whichBody is selected default is none"),
                                    Type: stringPtr("SFInt32"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_whichBody"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("whichBody is selected default is none"),
                                    Type: stringPtr("SFInt32"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("whichBody_changed"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("whichBody is selected default is none"),
                                    Type: stringPtr("SFInt32"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("hAnimBehaviorNodes"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("[HAnimBehavior] nodes only"),
                                    Type: stringPtr("MFNode"),
//TODO: might consider accessType="inputOutput" if VRML97 compatibility not needed
                                },
                                &x3d.Field{
                                    Name: stringPtr("enabledBehaviorsArray"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("MFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("enableBehavior"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("enable corresponding behavior"),
                                    Type: stringPtr("SFInt32"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("disableBehavior"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("enable corresponding behavior"),
                                    Type: stringPtr("SFInt32"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("timeSensorNode"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.TimeSensor{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TimeSensorHolderStartStopTimes"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("previousBodyIndex"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("remember prior body index to avoid unnecessary ROUTE teardown and creation"),
                                    Type: stringPtr("SFInt32"),
                                    Value: stringPtr("-1"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("traceEnabled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Value: stringPtr("true"),
                                },
                                },
                            },
                        },
                    },
                },
//TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.
                &x3d.ProtoInstance{
                    Name: stringPtr("HAnimBehavior"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BehaviorTest1"),
                    },
//only one PositionInterpolator key/keyValue definition for entire humanoid - optional
//must have paired overrides of each key/keyValue array being defined
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
                    Name: stringPtr("HAnimBodyBehaviorChooser"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ChooserTest"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("HumanoidArray"),
                            Children: []x3d.X3DNode{
                                &x3d.HAnimHumanoid{
                                    Name: stringPtr("DiamondManLOA-1"),
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_DiamondManLOA-1"),
                                    },
                                    Version: stringPtr("2.0"),
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
	fmt.Println("\n--- Validating XML against X3D 4.1 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.1 schema!")
	*/
	filename := "../data/HAnimBehaviorPrototypes.new.go.x3d"
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