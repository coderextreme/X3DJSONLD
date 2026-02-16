
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
                    Name: stringPtr("X_ITE"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("Bobble Spheres Full Animation (Final Working)"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Generated from Python script"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.WorldInfo{
                    Title: stringPtr("Bobble Spheres (PBR Full Animation)"),
                },
                &x3d.NavigationInfo{
                },
                &x3d.Background{
                    SkyAngle: x3d.MFFloat{1.57},
                    SkyColor: &x3d.MFColor{[3]float32{0.15,0.25,0.8},[3]float32{0.9,0.9,0.9}},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Initial Camera"),
                    Position: &x3d.SFVec3f{-70.0, 15.0, -25.0},
                    Orientation: &x3d.SFRotation{0.147, 0.989, 0.005, -1.82},
                    FieldOfView: floatPtr(0.349),
                },
                &x3d.DirectionalLight{
                    Direction: &x3d.SFVec3f{-0.5, -1.0, -0.5},
                    Intensity: floatPtr(2.0),
                },
//Static objects
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{0.0, -1000.0, -1.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    BaseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(1000.0),
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    BaseColor: &x3d.SFColor{0.9, 0.9, 0.9},
                                    Roughness: floatPtr(0.0),
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{-4.0, 1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    BaseColor: &x3d.SFColor{1.0, 0.95, 0.9},
                                    Roughness: floatPtr(0.05),
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{4.0, 1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    BaseColor: &x3d.SFColor{0.7, 0.6, 0.5},
                                    Roughness: floatPtr(0.1),
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
//=== DYNAMICALLY GENERATED SPHERES ===
//Example: Matte Sphere with animated color and roughness (Using initialize())
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("T_0"),
                        },
                        Translation: &x3d.SFVec3f{-10.871, 0.2, -10.453},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("M_0"),
                                    },
                                    BaseColor: &x3d.SFColor{0.627, 0.003, 0.165},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.2),
                            },
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("C_0"),
                    },
                    CycleInterval: doublePtr(5.21),
                    Loop: boolPtr(true),
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("PI_0"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-10.871,0.2,-10.453},[3]float32{-10.871,0.6,-10.453},[3]float32{-10.871,0.2,-10.453}},
                },
                &x3d.ColorInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("CI_0"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: &x3d.MFColor{[3]float32{0.627,0.003,0.165},[3]float32{0.011,0.583,0.443},[3]float32{0.627,0.003,0.165}},
                },
                &x3d.ScalarInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SI_0"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: x3d.MFFloat{1.0, 0.4, 1.0},
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Animator_0"),
                    },
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("set_color"),
                            Type: stringPtr("SFColor"),
                            AccessType: stringPtr("inputOnly"),
                    },
                    &x3d.Field{
                        Name: stringPtr("set_roughness"),
                        Type: stringPtr("SFFloat"),
                        AccessType: stringPtr("inputOnly"),
                    },
                    &x3d.Field{
                        Name: stringPtr("targetMaterial"),
                        Type: stringPtr("SFNode"),
                        AccessType: stringPtr("initializeOnly"),
                        Children: []x3d.X3DNode{
                            &x3d.PhysicalMaterial{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("M_0"),
                                },
                            },
                        },
                    },
//ecmascript:
//        var matNode = null; // Variable to hold the material node reference
//
//        function initialize() {
//          // This function runs AFTER the targetMaterial field is connected.
//          // We safely store the reference to the actual material node.
//          matNode = targetMaterial.value;
//        }
//
//        function set_color(value, timestamp) {
//          if (matNode) { // Check if the node reference was stored
//            matNode.baseColor = value;
//          }
//        }
//        function set_roughness(value, timestamp) {
//          if (matNode) {
//            matNode.roughness = value;
//          }
//        }
                    },
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_0"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("PI_0"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("PI_0"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("T_0"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_0"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("CI_0"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("CI_0"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Animator_0"),
                    ToField: stringPtr("set_color"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_0"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("SI_0"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("SI_0"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Animator_0"),
                    ToField: stringPtr("set_roughness"),
                },
//Example: Metal Sphere with animated roughness (Using initialize())
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("T_1"),
                        },
                        Translation: &x3d.SFVec3f{-10.411, 0.2, -9.16},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("M_1"),
                                    },
                                    BaseColor: &x3d.SFColor{0.707, 0.888, 0.536},
                                    Roughness: floatPtr(0.2),
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.2),
                            },
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("C_1"),
                    },
                    CycleInterval: doublePtr(4.15),
                    Loop: boolPtr(true),
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("PI_1"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-10.411,0.2,-9.16},[3]float32{-10.411,0.6,-9.16},[3]float32{-10.411,0.2,-9.16}},
                },
                &x3d.ScalarInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SI_1"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: x3d.MFFloat{0.5, 0.0, 0.5},
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Animator_1"),
                    },
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("set_roughness"),
                            Type: stringPtr("SFFloat"),
                            AccessType: stringPtr("inputOnly"),
                    },
                    &x3d.Field{
                        Name: stringPtr("targetMaterial"),
                        Type: stringPtr("SFNode"),
                        AccessType: stringPtr("initializeOnly"),
                        Children: []x3d.X3DNode{
                            &x3d.PhysicalMaterial{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("M_1"),
                                },
                            },
                        },
                    },
//ecmascript:
//        var matNode = null;
//
//        function initialize() {
//          matNode = targetMaterial.value;
//        }
//
//        function set_roughness(value, timestamp) {
//          if (matNode) {
//            matNode.roughness = value;
//          }
//        }
                    },
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_1"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("PI_1"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("PI_1"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("T_1"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_1"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("SI_1"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("SI_1"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Animator_1"),
                    ToField: stringPtr("set_roughness"),
                },
//The extension-based spheres were already correct and need no changes
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("T_2"),
                        },
                        Translation: &x3d.SFVec3f{-10.155, 0.2, -8.324},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    Roughness: floatPtr(0.05),
                                    IORMaterialExtension: &x3d.IORMaterialExtension{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("IOR_2"),
                                        },
                                        IndexOfRefraction: stringPtr("1.5"),
                                    },
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.2),
                            },
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("C_2"),
                    },
                    CycleInterval: doublePtr(3.88),
                    Loop: boolPtr(true),
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("PI_2"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-10.155,0.2,-8.324},[3]float32{-10.155,0.6,-8.324},[3]float32{-10.155,0.2,-8.324}},
                },
                &x3d.ScalarInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SI_2"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: x3d.MFFloat{1.4, 1.7, 1.4},
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_2"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("PI_2"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("PI_2"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("T_2"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_2"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("SI_2"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("SI_2"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("IOR_2"),
                    ToField: stringPtr("set_indexOfRefraction"),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("T_3"),
                        },
                        Translation: &x3d.SFVec3f{-10.518, 0.2, -7.283},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
                                    Roughness: floatPtr(0.05),
                                    IridescenceMaterialExtension: &x3d.IridescenceMaterialExtension{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("IRI_3"),
                                        },
                                        Iridescence: stringPtr("1"),
                                        IridescenceIndexOfRefraction: stringPtr("1.3"),
                                        IridescenceThicknessMinimum: stringPtr("100"),
                                    },
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(0.2),
                            },
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("C_3"),
                    },
                    CycleInterval: doublePtr(6.0),
                    Loop: boolPtr(true),
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("PI_3"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{-10.518,0.2,-7.283},[3]float32{-10.518,0.6,-7.283},[3]float32{-10.518,0.2,-7.283}},
                },
                &x3d.ScalarInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SI_3"),
                    },
                    Key: x3d.MFFloat{0.0, 0.5, 1.0},
                    KeyValue: x3d.MFFloat{100.0, 700.0, 100.0},
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_3"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("PI_3"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("PI_3"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("T_3"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("C_3"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("SI_3"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.X3DRoute{
                    FromNode: stringPtr("SI_3"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("IRI_3"),
                    ToField: stringPtr("set_iridescenceThicknessMaximum"),
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
	filename := "../data/bobblespheres.new.go.x3d"
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