
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
        Profile: stringPtr("Full"),
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
                    Content: stringPtr("Bobble Spheres (Prototyped, Final Corrected)"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Full scene using robust prototypes with safe node referencing in scripts to prevent race conditions. Populated with 100+ animated spheres."),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("AnimatedMatteSphere"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("initialPosition"),
                                Value: stringPtr("0 0.2 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("animationDuration"),
                            Value: stringPtr("5"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("startColor"),
                            Value: stringPtr("1 0 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("endColor"),
                            Value: stringPtr("0 0 1"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Root"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.PhysicalMaterial{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Mat"),
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
                                    DEF: stringPtr("Clock"),
                                },
                            },
                            &x3d.PositionInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.ColorInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Animator"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("initialPosition"),
                                            ProtoField: stringPtr("initialPosition"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFColor"),
                                        Name: stringPtr("set_color"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("initialPosition"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("matNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.PhysicalMaterial{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("Mat"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("position_keyValue"),
                                },
//ecmascript:
//            var safeMatNode = null; // Variable to safely hold the material node reference
//            function initialize() {
//              // Safely cache the reference to the material node. This runs after the field is connected.
//              safeMatNode = matNode.value;
//              // Set up position animation via event
//              var pos = initialPosition;
//              var raisedPos = new SFVec3f(pos.x, pos.y + 0.4, pos.z);
//              position_keyValue = new MFVec3f([pos, raisedPos, pos]);
//            }
//            function set_color(value) {
//              // Use the safely cached reference
//              if (safeMatNode) safeMatNode.baseColorFactor = value;
//            }
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Animator"),
                                FromField: stringPtr("position_keyValue"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_keyValue"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("PI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("Root"),
                                ToField: stringPtr("set_translation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("CI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("Animator"),
                                ToField: stringPtr("set_color"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("AnimatedMetalSphere"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("initialPosition"),
                                Value: stringPtr("0 0.2 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("animationDuration"),
                            Value: stringPtr("5"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("metalColor"),
                            Value: stringPtr("0.8 0.8 0.8"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("startRoughness"),
                            Value: stringPtr("0.5"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("endRoughness"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Root"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.PhysicalMaterial{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Mat"),
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
                                    DEF: stringPtr("Clock"),
                                },
                            },
                            &x3d.PositionInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.ScalarInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Animator"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("initialPosition"),
                                            ProtoField: stringPtr("initialPosition"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Name: stringPtr("set_roughness"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("initialPosition"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("matNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.PhysicalMaterial{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("Mat"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("position_keyValue"),
                                },
//ecmascript:
//            var safeMatNode = null;
//            function initialize() {
//              safeMatNode = matNode.value;
//              var pos = initialPosition;
//              var raisedPos = new SFVec3f(pos.x, pos.y + 0.4, pos.z);
//              position_keyValue = new MFVec3f([pos, raisedPos, pos]);
//            }
//            function set_roughness(value) {
//              if (safeMatNode) safeMatNode.roughnessFactor = value;
//            }
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Animator"),
                                FromField: stringPtr("position_keyValue"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_keyValue"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("PI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("Root"),
                                ToField: stringPtr("set_translation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("SI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("SI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("Animator"),
                                ToField: stringPtr("set_roughness"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("AnimatedGlassSphere"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("initialPosition"),
                                Value: stringPtr("0 0.2 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("animationDuration"),
                            Value: stringPtr("4"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("startIOR"),
                            Value: stringPtr("1.4"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("endIOR"),
                            Value: stringPtr("1.7"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Root"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.PhysicalMaterial{
                                                Extensions: &x3d.IORMaterialExtension{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                    },
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
                                    DEF: stringPtr("Clock"),
                                },
                                CycleInterval: doublePtr(5.0),
                                Loop: boolPtr(true),
                            },
                            &x3d.PositionInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.ScalarInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PositionSetup"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("initialPosition"),
                                            ProtoField: stringPtr("initialPosition"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFVec3f"),
                                        Name: stringPtr("initialPosition"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("position_keyValue"),
                                },
//ecmascript:
//            function initialize() {
//              var pos = initialPosition;
//              var raisedPos = new SFVec3f(pos.x, pos.y + 0.4, pos.z);
//              position_keyValue = new MFVec3f([pos, raisedPos, pos]);
//            }
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("PositionSetup"),
                                FromField: stringPtr("position_keyValue"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_keyValue"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("PI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("Root"),
                                ToField: stringPtr("set_translation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("SI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("SI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("IORext"),
                                ToField: stringPtr("set_indexOfRefraction"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFVec3f"),
                                Name: stringPtr("initialPosition"),
                                Value: stringPtr("0 0.2 0"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("animationDuration"),
                            Value: stringPtr("6"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("startThickness"),
                            Value: stringPtr("100"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("endThickness"),
                            Value: stringPtr("700"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Root"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.PhysicalMaterial{
                                                Extensions: &x3d.IridescenceMaterialExtension{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                    },
                                                    Iridescence: floatPtr(1.0),
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
                                    DEF: stringPtr("Clock"),
                                },
                            },
                            &x3d.PositionInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.ScalarInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SI"),
                                },
                                Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("PositionSetup"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("initialPosition"),
                                            ProtoField: stringPtr("initialPosition"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFVec3f"),
                                        Name: stringPtr("initialPosition"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("position_keyValue"),
                                },
//ecmascript:
//            function initialize() {
//              var pos = initialPosition;
//              var raisedPos = new SFVec3f(pos.x, pos.y + 0.4, pos.z);
//              position_keyValue = new MFVec3f([pos, raisedPos, pos]);
//            }
                                },
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("PositionSetup"),
                                FromField: stringPtr("position_keyValue"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_keyValue"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("PI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("PI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("Root"),
                                ToField: stringPtr("set_translation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("Clock"),
                                FromField: stringPtr("fraction_changed"),
                                ToNode: stringPtr("SI"),
                                ToField: stringPtr("set_fraction"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("SI"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("IRIext"),
                                ToField: stringPtr("set_iridescenceThicknessMaximum"),
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("Bobble Spheres (Prototyped)"),
                },
                &x3d.EnvironmentLight{
                    Intensity: floatPtr(0.1),
                },
                &x3d.NavigationInfo{
                },
                &x3d.Background{
                    SkyAngle: x3d.MFFloat{1.57},
                    SkyColor: &x3d.MFColor{[3]float32{0.15,0.25,0.8},[3]float32{0.9,0.9,0.9}},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Overview Camera"),
                    Position: &x3d.SFVec3f{0.0, 18.0, 28.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.55},
                },
                &x3d.DirectionalLight{
                    Intensity: floatPtr(2.0),
                    Direction: &x3d.SFVec3f{-0.5, -1.0, -0.5},
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{0.0, -1000.0, -1.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.PhysicalMaterial{
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
                                },
                            },
                            Geometry: &x3d.Sphere{
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-10.5 0.2 -7.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-10.8 0.2 -10.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.9 0.1 0.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.8 0.5"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-10.1 0.2 -8.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-10 0.2 -6.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("1 1 0.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.2 0.3 1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.1 0.2 -10.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.33"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.6"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.4 0.2 -9.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("200"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("600"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-8.7 0.2 5.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.8 0.7 0.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-7.5 0.2 9.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.1 0.9 0.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.9 0.1 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-6.2 0.2 -7.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-5.5 0.2 2.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("150"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("750"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-3.1 0.2 -6.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.9 0.9 0.95"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.05"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-1.8 0.2 8.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.5 0.5 0.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.2 0.8 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("1.2 0.2 -9.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.45"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.65"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("2.7 0.2 6.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("300"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("800"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("5.1 0.2 -4.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.9 0.8 0.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.2"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("6.3 0.2 8.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.1 0.1 0.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.9 0.9 0.1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("7.8 0.2 -1.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.5"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("9.4 0.2 9.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("120"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("680"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("10.8 0.2 -3.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.7 0.7 0.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.2"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-8.2 0.2 -8.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("1 0.5 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.5 0 1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-6.8 0.2 10.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.9"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-2.5 0.2 -2.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("250"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("650"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("3.3 0.2 3.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.95 0.85 0.75"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.15"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("8.8 0.2 -8.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.2 0.2 0.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.9 0.9 0.9"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.7 0.2 1.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.71"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.36"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.6 0.2 3.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.1 0.7 0.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.5 0.1 0.1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.4 0.2 -5.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.2 0.2 0.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.8 0.7 0.2"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.3 0.2 6.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("206"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("784"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-8.8 0.2 -2.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.32"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.54"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-8.4 0.2 8.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.9 0.8 0.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.02"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.43"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-8.2 0.2 4.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0 0.8 0.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.3 0.1 0.1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-7.5 0.2 -10.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0.1 0.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.6 0.2"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-7.2 0.2 2.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("158"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("588"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-6.9 0.2 7.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.57"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.77"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-6.5 0.2 -3.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.8 0.7 0.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.07"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.4"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-5.9 0.2 -7.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0 0.8 0.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.9 0.1 0.6"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-5.3 0.2 5.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.66"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.4"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-2.9 0.2 10.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("289"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("526"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-2.6 0.2 -5.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.9 0.8 0.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.19"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.58"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-1.9 0.2 3.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0.1 0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.7 0.7"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-1.4 0.2 7.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.37"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.72"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("1.3 0.2 -7.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("249"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("479"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("1.6 0.2 5.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.13"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.6"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("2.1 0.2 -3.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.5 0.4 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.4 0.4 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("2.4 0.2 9.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.48"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.75"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("3.1 0.2 -9.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("103"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("622"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("3.6 0.2 1.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.7 0.8 0.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.09"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.33"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("5.3 0.2 6.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0 0.7 0.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.9 0.1 0.1"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("5.6 0.2 -8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0.1 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.7 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("6.1 0.2 2.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.51"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.32"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("6.7 0.2 -2.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("264"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("578"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("7.1 0.2 10.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.7 0.8 0.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.54"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("7.4 0.2 5.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0.1 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0 0.7 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("8 0.2 8.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.37"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("8.3 0.2 -6.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("219"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("588"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("9.2 0.2 2.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.15"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.52"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("9.6 0.2 -10.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0.1 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0 0.7 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("10.1 0.2 6.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.76"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.58"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("10.4 0.2 -1.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("256"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("536"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("10.7 0.2 4.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.7 0.1 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.7 0.7"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-9.1 0.2 5.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.55"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.76"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-8.6 0.2 -8.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("158"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("421"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-7.9 0.2 1.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.8 0.8 0.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.04"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.33"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-7.3 0.2 6.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0 0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.8 0.7"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-6.8 0.2 -4.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.62"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.48"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-5.2 0.2 9.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("239"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("479"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-4.9 0.2 -1.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.8 0.7 0.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.42"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-3.5 0.2 2.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0 0.8 0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.8 0.1 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-2.2 0.2 7.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.34"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.53"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("-1.5 0.2 -10.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("156"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("681"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("1.2 0.2 2.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.13"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.37"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("1.8 0.2 -6.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.7 0.1 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.1 0.7 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("2.3 0.2 6.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.71"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.55"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("3.3 0.2 10.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("152"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("627"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("5.1 0.2 -1.9"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.8 0.8 0.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.58"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("5.8 0.2 1.3"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("3.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0 0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0 0.9 0.7"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("6.3 0.2 7.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.76"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.5"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("6.9 0.2 -6.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("136"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("582"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("7.5 0.2 4.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("metalColor"),
                        Value: stringPtr("0.8 0.7 0.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.16"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.31"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("8.1 0.2 -2.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("5.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.8 0.1 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0 0.7 0.8"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedGlassSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("8.7 0.2 9.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.2"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startIOR"),
                        Value: stringPtr("1.55"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endIOR"),
                        Value: stringPtr("1.35"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedBubbleSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("9.3 0.2 1.4"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("7.6"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startThickness"),
                        Value: stringPtr("286"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endThickness"),
                        Value: stringPtr("537"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMetalSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("10.4 0.2 7.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("6.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startRoughness"),
                        Value: stringPtr("0.08"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endRoughness"),
                        Value: stringPtr("0.44"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("AnimatedMatteSphere"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("10.8 0.2 -4.8"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("animationDuration"),
                        Value: stringPtr("4.7"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("startColor"),
                        Value: stringPtr("0.1 0.8 0"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("endColor"),
                        Value: stringPtr("0.7 0 0.8"),
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
	filename := "../data/bobblespheres.new.go.x3d"
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