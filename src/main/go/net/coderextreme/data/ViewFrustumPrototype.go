
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
                    Content: stringPtr("ViewFrustumPrototype.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."),
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
                Content: stringPtr("Tue, 09 Sep 2025 19:39:30 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ViewFrustumExample.x3d"),
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
                Name: stringPtr("subject"),
                Content: stringPtr("view culling frustum"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("ViewFrustum"),
                    Appinfo: stringPtr("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFNode"),
                                Name: stringPtr("ViewpointNode"),
                                Appinfo: stringPtr("required: insert Viewpoint DEF or USE node for view of interest"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFNode"),
                            Name: stringPtr("NavigationInfoNode"),
                            Appinfo: stringPtr("required: insert NavigationInfo DEF or USE node of interest"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("visible"),
                            Value: stringPtr("true"),
                            Appinfo: stringPtr("whether or not frustum geometry is rendered"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("lineColor"),
                            Value: stringPtr("0.9 0.9 0.9"),
                            Appinfo: stringPtr("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("frustumColor"),
                            Value: stringPtr("0.8 0.8 0.8"),
                            Appinfo: stringPtr("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("transparency"),
                            Value: stringPtr("0.5"),
                            Appinfo: stringPtr("transparency of ViewFrustum hull geometry, default value 0.5"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("aspectRatio"),
                            Value: stringPtr("0.75"),
                            Appinfo: stringPtr("assumed ratio height/width, default value 0.75"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("trace"),
                            Appinfo: stringPtr("debug support, default false"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Switch{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("VisibilitySwitch"),
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PositionTransform"),
                                        },
                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14159},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("OrientationTransform"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            IS: &x3d.IS{
                                                                Material:                                                                Connect: []x3d.X3DNode{
                                                                    &x3d.Connect{
                                                                        NodeField: stringPtr("emissiveColor"),
                                                                        ProtoField: stringPtr("lineColor"),
                                                                },
                                                                },
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedLineSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("FrustumLines"),
                                                        },
                                                        CoordIndex: []int32{0, 1, 2, 3, 0, -1, 4, 5, 6, 7, 4, -1, 0, 4, -1, 1, 5, -1, 2, 6, -1, 3, 7, -1},
                                                        Coord: &x3d.Coordinate{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("FrustumCoordinate"),
                                                            },
                                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("FrustumAppearance"),
                                                        },
                                                        Material: &x3d.Material{
                                                            IS: &x3d.IS{
                                                                Material:                                                                Connect: []x3d.X3DNode{
                                                                    &x3d.Connect{
                                                                        NodeField: stringPtr("diffuseColor"),
                                                                        ProtoField: stringPtr("frustumColor"),
                                                                },
                                                                Material: &x3d.Connect{
                                                                    NodeField: stringPtr("transparency"),
                                                                    ProtoField: stringPtr("transparency"),
                                                                },
                                                                },
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Extrusion{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("FrustumExtrusion"),
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("FrustumAppearance"),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.08),
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("GeometryComputationScript"),
                                },
                                DirectOutput: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("visible"),
                                            ProtoField: stringPtr("visible"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("ViewpointNode"),
                                        ProtoField: stringPtr("ViewpointNode"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("NavigationInfoNode"),
                                        ProtoField: stringPtr("NavigationInfoNode"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("aspectRatio"),
                                        ProtoField: stringPtr("aspectRatio"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("trace"),
                                        ProtoField: stringPtr("trace"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFBool"),
                                        Name: stringPtr("visible"),
                                        Appinfo: stringPtr("Whether or not frustum geometry is rendered"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("visibilitySwitchSelection"),
                                    Appinfo: stringPtr("Adjust Switch selection to make geometry visible or not"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("ViewpointNode"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("NavigationInfoNode"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("FrustumCoordinate"),
                                    Children: []x3d.X3DNode{
                                        &x3d.Coordinate{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("FrustumCoordinate"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("FrustumExtrusion"),
                                    Children: []x3d.X3DNode{
                                        &x3d.Extrusion{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("FrustumExtrusion"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("recompute"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("aspectRatio"),
                                    Appinfo: stringPtr("assumed ratio height/width"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("position_changed"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFRotation"),
                                    Name: stringPtr("orientation_changed"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("spine_changed"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec2f"),
                                    Name: stringPtr("scale_changed"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("point_changed"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("trace"),
                                },
//ViewFrustumPrototypeScript.js
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("GeometryComputationScript"),
                                FromField: stringPtr("visibilitySwitchSelection"),
                                ToNode: stringPtr("VisibilitySwitch"),
                                ToField: stringPtr("set_whichChoice"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("GeometryComputationScript"),
                                FromField: stringPtr("position_changed"),
                                ToNode: stringPtr("PositionTransform"),
                                ToField: stringPtr("set_translation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("GeometryComputationScript"),
                                FromField: stringPtr("orientation_changed"),
                                ToNode: stringPtr("OrientationTransform"),
                                ToField: stringPtr("set_rotation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("GeometryComputationScript"),
                                FromField: stringPtr("spine_changed"),
                                ToNode: stringPtr("FrustumExtrusion"),
                                ToField: stringPtr("set_spine"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("GeometryComputationScript"),
                                FromField: stringPtr("scale_changed"),
                                ToNode: stringPtr("FrustumExtrusion"),
                                ToField: stringPtr("set_scale"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("GeometryComputationScript"),
                                FromField: stringPtr("point_changed"),
                                ToNode: stringPtr("FrustumCoordinate"),
                                ToField: stringPtr("set_point"),
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("ViewFrustumPrototype.x3d"),
                },
                &x3d.Anchor{
                    Description: stringPtr("ViewFrustum Example"),
                    Url: x3d.MFString{"ViewFrustumExample.x3d"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.8, 0.4, 0.0},
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"ViewFrustumPrototype.x3d", "is a Prototype declaration file.", "For an example scene using the prototype,", "click this text and view", "ViewFrustumExample.x3d"},
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
	filename := "../data/ViewFrustumPrototype.new.go.x3d"
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