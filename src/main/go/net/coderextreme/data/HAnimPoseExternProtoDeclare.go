
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
                    Content: stringPtr("HAnimPoseExternProtoDeclare.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("1 November 2025"),
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
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d"),
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
                    Title: stringPtr("HAnimPoseExternProtoDeclare"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.6,0.6,0.8}},
                },
                &x3d.NavigationInfo{
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("HAnimPose"),
                    Appinfo: stringPtr("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values."),
                    Url: x3d.MFString{"Filename.x3d#HAnimPose", "https://some.address.org/Filename.x3d#HAnimPose"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("parentHAnimHumanoid"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("HAnimHumanoid for this Pose to act upon"),
                            Type: stringPtr("SFNode"),
                    },
                    &x3d.Field{
                        Name: stringPtr("name"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("name of this pose"),
                        Type: stringPtr("SFString"),
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
                    },
                    &x3d.Field{
                        Name: stringPtr("loa"),
                        AccessType: stringPtr("initializeOnly"),
                        Appinfo: stringPtr("default is no loa"),
                        Type: stringPtr("SFInt32"),
                    },
                    &x3d.Field{
                        Name: stringPtr("transitionDuration"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("how many seconds to achieve the pose"),
                        Type: stringPtr("SFTime"),
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
                    },
                    },
                },
                &x3d.Viewpoint{
                    Description: stringPtr("HAnimPoseExternProtoDeclare description"),
                    Position: &x3d.SFVec3f{0.0, 1.0, 4.0},
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DisplayHeader1"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Anchor{
                            Description: stringPtr("go to HAnimPoseExternProtoDeclareIndex page"),
                            Parameter: x3d.MFString{"target=_blank"},
                            Url: x3d.MFString{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Utility scene", "HAnimPoseExternProtoDeclare.x3d"},
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
                                            DiffuseColor: &x3d.SFColor{0.1, 0.3, 0.5},
                                        },
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{3.5, 0.5, 0.001},
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TransparentAppearance"),
                                        },
                                        Material: &x3d.Material{
                                            Transparency: floatPtr(1.0),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DisplayHeader2"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 0.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Anchor{
                            Description: stringPtr("go to HAnimPosePrototypeIndex page"),
                            Parameter: x3d.MFString{"target=_blank"},
                            Url: x3d.MFString{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"This model supports", "HAnimPosePrototype.x3d"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("HeaderFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("PoseTextAppearance"),
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Shape{
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{2.6, 0.5, 0.001},
                            },
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("TransparentAppearance"),
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
	filename := "../data/HAnimPoseExternProtoDeclare.new.go.x3d"
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