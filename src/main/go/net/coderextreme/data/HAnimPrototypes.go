
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
                    Content: stringPtr("HAnimPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes."),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes."),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint)."),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Need support for skin"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Ozan APAYDIN, Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Ozan APAYDIN, Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("15 November 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:09 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("upgrade to match support requirements for HAnim 2.2"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim2001"),
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
                Content: stringPtr("http://HAnim.org/Specifications"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("InterchangableActorsViaDynamicRoutingPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("Humanoid1_1"),
                    Appinfo: stringPtr("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."),
                    Documentation: stringPtr("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("name"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFString"),
                            Name: stringPtr("version"),
                            Value: stringPtr("1.1"),
                            Appinfo: stringPtr("legal values: 1.1 or 2.0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFString"),
                            Name: stringPtr("humanoidVersion"),
                            Appinfo: stringPtr("Version of the humanoid being modeled. Hint: HAnim version 2.0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFString"),
                            Name: stringPtr("info"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("translation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("rotation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("center"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("scale"),
                            Value: stringPtr("1 1 1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("scaleOrientation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxCenter"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxSize"),
                            Value: stringPtr("-1 -1 -1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("humanoidBody"),
                            Appinfo: stringPtr("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton."),
                            Documentation: stringPtr("http://HAnim.org/Specifications/HAnim1.1/#humanoid"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("skeleton"),
                            Appinfo: stringPtr("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"),
                            Documentation: stringPtr("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("joints"),
                            Appinfo: stringPtr("Container field for Joint nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("segments"),
                            Appinfo: stringPtr("Container field for Segment nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("sites"),
                            Appinfo: stringPtr("Container field for Site nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("viewpoints"),
                            Appinfo: stringPtr("Container field for Viewpoint nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFNode"),
                            Name: stringPtr("skinCoord"),
                            Appinfo: stringPtr("Hint: HAnim version 2.0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFNode"),
                            Name: stringPtr("skinNormal"),
                            Appinfo: stringPtr("Hint: HAnim version 2.0"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("HumanoidTransform"),
                                    },
                                    IS: &x3d.IS{
                                        Connect: []x3d.X3DNode{
                                            &x3d.Connect{
                                                NodeField: stringPtr("translation"),
                                                ProtoField: stringPtr("translation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("rotation"),
                                            ProtoField: stringPtr("rotation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("scale"),
                                            ProtoField: stringPtr("scale"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("scaleOrientation"),
                                            ProtoField: stringPtr("scaleOrientation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("center"),
                                            ProtoField: stringPtr("center"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxSize"),
                                            ProtoField: stringPtr("bboxSize"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxCenter"),
                                            ProtoField: stringPtr("bboxCenter"),
                                        },
                                        },
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Group{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HumanoidGroup1"),
                                            },
                                            IS: &x3d.IS{
                                                Connect: []x3d.X3DNode{
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("children"),
                                                        ProtoField: stringPtr("humanoidBody"),
                                                },
                                                },
                                            },
                                        Children: []x3d.X3DNode{
                                        },
                                    },
                                    &x3d.Group{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HumanoidGroup2"),
                                            },
                                            IS: &x3d.IS{
                                                Connect: []x3d.X3DNode{
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("children"),
                                                        ProtoField: stringPtr("skeleton"),
                                                },
                                                },
                                            },
                                        Children: []x3d.X3DNode{
                                        },
                                    },
                                    &x3d.Group{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HumanoidGroup3"),
                                            },
                                            IS: &x3d.IS{
                                                Connect: []x3d.X3DNode{
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("children"),
                                                        ProtoField: stringPtr("viewpoints"),
                                                },
                                                },
                                            },
                                        Children: []x3d.X3DNode{
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Joint"),
                    Appinfo: stringPtr("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."),
                    Documentation: stringPtr("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("name"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("ulimit"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("llimit"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("limitOrientation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFInt32"),
                            Name: stringPtr("skinCoordIndex"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("skinCoordWeight"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("stiffness"),
                            Value: stringPtr("0 0 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("translation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("rotation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("scale"),
                            Value: stringPtr("1 1 1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("scaleOrientation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("center"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxCenter"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxSize"),
                            Value: stringPtr("-1 -1 -1"),
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
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("JointTransform"),
                                    },
                                    IS: &x3d.IS{
                                        Connect: []x3d.X3DNode{
                                            &x3d.Connect{
                                                NodeField: stringPtr("translation"),
                                                ProtoField: stringPtr("translation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("rotation"),
                                            ProtoField: stringPtr("rotation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("scale"),
                                            ProtoField: stringPtr("scale"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("scaleOrientation"),
                                            ProtoField: stringPtr("scaleOrientation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("center"),
                                            ProtoField: stringPtr("center"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxSize"),
                                            ProtoField: stringPtr("bboxSize"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxCenter"),
                                            ProtoField: stringPtr("bboxCenter"),
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
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Segment"),
                    Appinfo: stringPtr("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node."),
                    Documentation: stringPtr("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("name"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("mass"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("centerOfMass"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFFloat"),
                            Name: stringPtr("momentsOfInertia"),
                            Value: stringPtr("0 0 0 0 0 0 0 0 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxCenter"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxSize"),
                            Value: stringPtr("-1 -1 -1"),
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
                            Type: stringPtr("SFNode"),
                            Name: stringPtr("coord"),
                            Appinfo: stringPtr("contains Coordinate nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("displacers"),
                            Appinfo: stringPtr("contains Displacer nodes"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("SegmentGroup"),
                                    },
                                    IS: &x3d.IS{
                                        Connect: []x3d.X3DNode{
                                            &x3d.Connect{
                                                NodeField: stringPtr("bboxSize"),
                                                ProtoField: stringPtr("bboxSize"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxCenter"),
                                            ProtoField: stringPtr("bboxCenter"),
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
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Site"),
                    Appinfo: stringPtr("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."),
                    Documentation: stringPtr("http://HAnim.org/Specifications/HAnim2001/part1/Site.html"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("name"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("translation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("rotation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("scale"),
                            Value: stringPtr("1 1 1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("scaleOrientation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("center"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxCenter"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("bboxSize"),
                            Value: stringPtr("-1 -1 -1"),
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
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("SiteTransform"),
                                    },
                                    IS: &x3d.IS{
                                        Connect: []x3d.X3DNode{
                                            &x3d.Connect{
                                                NodeField: stringPtr("translation"),
                                                ProtoField: stringPtr("translation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("rotation"),
                                            ProtoField: stringPtr("rotation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("scale"),
                                            ProtoField: stringPtr("scale"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("scaleOrientation"),
                                            ProtoField: stringPtr("scaleOrientation"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("center"),
                                            ProtoField: stringPtr("center"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxSize"),
                                            ProtoField: stringPtr("bboxSize"),
                                        },
                                        &x3d.Connect{
                                            NodeField: stringPtr("bboxCenter"),
                                            ProtoField: stringPtr("bboxCenter"),
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
                                Children: []x3d.X3DNode{
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Displacer"),
                    Appinfo: stringPtr("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."),
                    Documentation: stringPtr("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("name"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFInt32"),
                            Name: stringPtr("coordIndex"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFVec3f"),
                            Name: stringPtr("displacements"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.WorldInfo{
                                Info: x3d.MFString{"null body node"},
                            },
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.25),
                            DiffuseColor: &x3d.SFColor{0.795918, 0.505869, 0.093315},
                            SpecularColor: &x3d.SFColor{0.923469, 0.428866, 0.006369},
                            Shininess: floatPtr(0.39),
                        },
                    },
                    Geometry: &x3d.Text{
                        String: x3d.MFString{"Humanoid Animation", "(HAnim) prototype", "implementations"},
                        FontStyle: &x3d.FontStyle{
                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
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
	filename := "../data/HAnimPrototypes.new.go.x3d"
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