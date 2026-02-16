
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
                    Content: stringPtr("ViewFrustumExample.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("16 August 2008"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("20 October 2019"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ViewFrustumPrototype.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("drawing"),
                Content: stringPtr("ViewFrustumComputation.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("ViewFrustumOverheadView.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("ViewFrustumObliqueView.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("ViewpointCalculator.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("ViewpointCalculatorComposed.png"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("view culling frustum"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"),
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
                    Title: stringPtr("ViewFrustumExample.x3d"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("ViewFrustum from above, looking down"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                    Position: &x3d.SFVec3f{0.0, 40.0, 0.0},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("ViewFrustum from point of view"),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("ViewFrustum behind point of view"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 15.0},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("ViewFrustum oblique side view"),
                    Orientation: &x3d.SFRotation{0.8005, 0.5926, 0.0898, -0.3743},
                    Position: &x3d.SFVec3f{-5.0, 5.0, 20.0},
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"EXAMINE", "FLY", "ANY"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ViewFrustum"),
                    Appinfo: stringPtr("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"),
                    Url: x3d.MFString{"ViewFrustumPrototype.x3d#ViewFrustum"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("ViewpointNode"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("required: insert Viewpoint DEF or USE node for view of interest"),
                            Type: stringPtr("SFNode"),
                    },
                    &x3d.Field{
                        Name: stringPtr("NavigationInfoNode"),
                        AccessType: stringPtr("initializeOnly"),
                        Appinfo: stringPtr("required: insert NavigationInfo DEF or USE node of interest"),
                        Type: stringPtr("SFNode"),
                    },
                    &x3d.Field{
                        Name: stringPtr("visible"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("whether or not frustum geometry is rendered"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("lineColor"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"),
                        Type: stringPtr("SFColor"),
                    },
                    &x3d.Field{
                        Name: stringPtr("frustumColor"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"),
                        Type: stringPtr("SFColor"),
                    },
                    &x3d.Field{
                        Name: stringPtr("transparency"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("transparency of ViewFrustum hull geometry, default value 0.5"),
                        Type: stringPtr("SFFloat"),
                    },
                    &x3d.Field{
                        Name: stringPtr("aspectRatio"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("assumed ratio height/width, default value 0.75"),
                        Type: stringPtr("SFFloat"),
                    },
                    &x3d.Field{
                        Name: stringPtr("trace"),
                        AccessType: stringPtr("initializeOnly"),
                        Appinfo: stringPtr("debug support, default false"),
                        Type: stringPtr("SFBool"),
                    },
                    },
                },
//Example use
                &x3d.ProtoInstance{
                    Name: stringPtr("ViewFrustum"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("ViewpointNode"),
//prefer empty description to prevent entry in player's ViewpointList
                            Children: []x3d.X3DNode{
                                &x3d.Viewpoint{
                                    Description: stringPtr("ViewFrustum ViewpointNode"),
                                },
                            },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("NavigationInfoNode"),
                        Children: []x3d.X3DNode{
                            &x3d.NavigationInfo{
                                VisibilityLimit: floatPtr(15.0),
                            },
                        },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("visible"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("lineColor"),
                        Value: stringPtr("0.9 0.9 0.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("frustumColor"),
                        Value: stringPtr("0.8 0.8 0.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("transparency"),
                        Value: stringPtr("0.75"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("trace"),
                        Value: stringPtr("true"),
                    },
                    },
                },
//Visualization assists
                &x3d.Inline{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("GridXZ"),
                    },
                    Url: x3d.MFString{"GridXZ_20x20Fixed.x3d"},
                },
                &x3d.Transform{
                        Scale: &x3d.SFVec3f{5.0, 5.0, 5.0},
                    Children: []x3d.X3DNode{
                        &x3d.Inline{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("CoordinateAxes"),
                            },
                            Url: x3d.MFString{"CoordinateAxes.x3d"},
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
	filename := "../data/ViewFrustumExample.new.go.x3d"
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