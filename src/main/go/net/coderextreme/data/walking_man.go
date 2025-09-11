
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
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("HAnim"),
                    },
                    Name: stringPtr("humanoid"),
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("hanim_sacroiliac"),
                            },
                            Name: stringPtr("sacroiliac"),
                            Center: &x3d.SFVec3f{0.0, 0.9, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_vt1"),
                                    },
                                    Name: stringPtr("vt1"),
                                    Center: &x3d.SFVec3f{0.0, 1.15, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            &x3d.HAnimSite{
                                                Translation: &x3d.SFVec3f{0.0, 1.15, 0.0},
                                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 3.14159},
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                        },
                                                    },
                                                    Geometry: &x3d.Cone{
                                                        Height: floatPtr(0.5),
                                                        BottomRadius: floatPtr(0.25),
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_skullbase"),
                                            },
                                            Name: stringPtr("skullbase"),
                                            Center: &x3d.SFVec3f{0.0, 1.5, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    &x3d.HAnimSite{
                                                        Translation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                                },
                                                            },
                                                            Geometry: &x3d.Sphere{
                                                                Radius: floatPtr(0.15),
                                                            },
                                                        },
                                                    },
                                            },
                                    },
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_shoulder"),
                                        },
                                        Name: stringPtr("l_shoulder"),
                                        Rotation: &x3d.SFRotation{0.999999999999988, 0.0, 0.0, 0.0327999114990239},
                                        Center: &x3d.SFVec3f{0.25, 1.35, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                &x3d.HAnimSite{
                                                    Translation: &x3d.SFVec3f{0.25, 1.2, 0.0},
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                            },
                                                        },
                                                        Geometry: &x3d.Cylinder{
                                                            Height: floatPtr(0.3),
                                                            Radius: floatPtr(0.04),
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_elbow"),
                                                },
                                                Name: stringPtr("l_elbow"),
                                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 5.52418519655337},
                                                Center: &x3d.SFVec3f{0.25, 1.05, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        &x3d.HAnimSite{
                                                            Translation: &x3d.SFVec3f{0.25, 0.9, 0.0},
                                                            &x3d.Shape{
                                                                Appearance: &x3d.Appearance{
                                                                    Material: &x3d.Material{
                                                                        DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                                    },
                                                                },
                                                                Geometry: &x3d.Cylinder{
                                                                    Height: floatPtr(0.3),
                                                                    Radius: floatPtr(0.04),
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_wrist"),
                                                        },
                                                        Name: stringPtr("l_wrist"),
                                                        Center: &x3d.SFVec3f{0.25, 0.75, 0.0},
                                                },
                                        },
                                    },
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_r_shoulder"),
                                        },
                                        Name: stringPtr("r_shoulder"),
                                        Rotation: &x3d.SFRotation{0.999999999999989, 0.0, 0.0, 6.25038539568056},
                                        Center: &x3d.SFVec3f{-0.25, 1.35, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                &x3d.HAnimSite{
                                                    Translation: &x3d.SFVec3f{-0.25, 1.2, 0.0},
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                            },
                                                        },
                                                        Geometry: &x3d.Cylinder{
                                                            Height: floatPtr(0.3),
                                                            Radius: floatPtr(0.04),
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_elbow"),
                                                },
                                                Name: stringPtr("r_elbow"),
                                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 5.52418519655337},
                                                Center: &x3d.SFVec3f{-0.25, 1.05, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        &x3d.HAnimSite{
                                                            Translation: &x3d.SFVec3f{-0.25, 0.9, 0.0},
                                                            &x3d.Shape{
                                                                Appearance: &x3d.Appearance{
                                                                    Material: &x3d.Material{
                                                                        DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                                    },
                                                                },
                                                                Geometry: &x3d.Cylinder{
                                                                    Height: floatPtr(0.3),
                                                                    Radius: floatPtr(0.04),
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_wrist"),
                                                        },
                                                        Name: stringPtr("r_wrist"),
                                                        Center: &x3d.SFVec3f{-0.25, 0.75, 0.0},
                                                },
                                        },
                                    },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("hanim_l_hip"),
                                },
                                Name: stringPtr("l_hip"),
                                Rotation: &x3d.SFRotation{0.999999999999973, 0.0, 0.0, 6.24218541780581},
                                Center: &x3d.SFVec3f{0.15, 0.9, 0.0},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        &x3d.HAnimSite{
                                            Translation: &x3d.SFVec3f{0.15, 0.7, 0.0},
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                    },
                                                },
                                                Geometry: &x3d.Cylinder{
                                                    Height: floatPtr(0.4),
                                                    Radius: floatPtr(0.05),
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_knee"),
                                        },
                                        Name: stringPtr("l_knee"),
                                        Rotation: &x3d.SFRotation{0.999999999999999, 0.0, 0.0, 1.10160026550293},
                                        Center: &x3d.SFVec3f{0.15, 0.5, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                &x3d.HAnimSite{
                                                    Translation: &x3d.SFVec3f{0.15, 0.3, 0.0},
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                            },
                                                        },
                                                        Geometry: &x3d.Cylinder{
                                                            Height: floatPtr(0.4),
                                                            Radius: floatPtr(0.05),
                                                        },
                                                    },
                                                },
                                        },
                                        &x3d.HAnimSegment{
                                            &x3d.HAnimSite{
                                                Translation: &x3d.SFVec3f{0.15, 0.1, 0.05},
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.07),
                                                    },
                                                },
                                            },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_ankle"),
                                                },
                                                Name: stringPtr("l_ankle"),
                                                Center: &x3d.SFVec3f{0.15, 0.1, 0.0},
                                        },
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("hanim_r_hip"),
                                },
                                Name: stringPtr("r_hip"),
                                Rotation: &x3d.SFRotation{0.999999999999965, 0.0, 0.0, 0.0409998893737808},
                                Center: &x3d.SFVec3f{-0.15, 0.9, 0.0},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        &x3d.HAnimSite{
                                            Translation: &x3d.SFVec3f{-0.15, 0.7, 0.0},
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                    },
                                                },
                                                Geometry: &x3d.Cylinder{
                                                    Height: floatPtr(0.4),
                                                    Radius: floatPtr(0.05),
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_r_knee"),
                                        },
                                        Name: stringPtr("r_knee"),
                                        Rotation: &x3d.SFRotation{0.999999999999999, 0.0, 0.0, 1.10160026550293},
                                        Center: &x3d.SFVec3f{-0.15, 0.5, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                &x3d.HAnimSite{
                                                    Translation: &x3d.SFVec3f{-0.15, 0.3, 0.0},
                                                    &x3d.Shape{
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                            },
                                                        },
                                                        Geometry: &x3d.Cylinder{
                                                            Height: floatPtr(0.4),
                                                            Radius: floatPtr(0.05),
                                                        },
                                                    },
                                                },
                                        },
                                        &x3d.HAnimSegment{
                                            &x3d.HAnimSite{
                                                Translation: &x3d.SFVec3f{-0.15, 0.1, 0.05},
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            DiffuseColor: &x3d.SFColor{0.6, 0.6, 0.6},
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(0.07),
                                                    },
                                                },
                                            },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_ankle"),
                                                },
                                                Name: stringPtr("r_ankle"),
                                                Center: &x3d.SFVec3f{-0.15, 0.1, 0.0},
                                        },
                                },
                            },
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_sacroiliac"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vt1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_skullbase"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_wrist"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_wrist"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_ankle"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_ankle"),
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Clock"),
                    },
                    CycleInterval: doublePtr(2.0),
                    Loop: boolPtr(true),
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("LHipAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, -0.5, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.5},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("RHipAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.5, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("KneeAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.2, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("LShoulderAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.4, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.4, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.4},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("RShoulderAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, -0.4, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.4, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.4},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ElbowAnimator"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, -0.3, 1.0, 0.0, 0.0, -0.8, 1.0, 0.0, 0.0, -0.3, 1.0, 0.0, 0.0, -0.3, 1.0, 0.0, 0.0, -0.3},
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("LHipAnimator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("LHipAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("RHipAnimator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RHipAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("KneeAnimator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KneeAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KneeAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("LShoulderAnimator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("LShoulderAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("RShoulderAnimator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RShoulderAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("ElbowAnimator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ElbowAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ElbowAnimator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("hanim_r_elbow"),
                    ToField: stringPtr("set_rotation"),
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
	filename := "../data/walking_man.new.go.x3d"
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