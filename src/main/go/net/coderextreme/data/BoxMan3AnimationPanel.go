
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
                    Content: stringPtr("BoxMan3AnimationPanel.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Joe Williams and James Smith - james@vapourtech.com"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joe Williams and Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr(".x3d to .x3d translation used BS Contact Geo 8.203"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("1 March 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("revision"),
                Content: stringPtr("12 January 2017"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("14 January 2017"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:37:50 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("error"),
                Content: stringPtr("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("BoxManAnimationPanelInclined.png"),
            },
            &x3d.Meta{
                Name: stringPtr("MovingImage"),
                Content: stringPtr("BoxManAnimationPanel.mp4"),
            },
            &x3d.Meta{
                Name: stringPtr("MovingImage"),
                Content: stringPtr("https://www.youtube.com/watch?v=8tI83Rtg_DU"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://twitter.com/Web3DConsortium/status/820638047523913728"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://twitter.com/Web3DConsortium/status/820642726009978881"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("originals/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("BoxMan3.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Models/HAnim2001/boxman"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.vapourtech.com/team/james/boxman.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim2001"),
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
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/X3dToVrml97.xslt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.vapourtech.com"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org"),
            },
            &x3d.Meta{
                Name: stringPtr("rights"),
                Content: stringPtr("(C) 2000 James Smith - james@vapourtech.com"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("BoxMan3 - A Seamless VRML Human"),
                    Info: x3d.MFString{"(C) 2000 James Smith - james@vapourtech.com", "http://www.vapourtech.com/team/james/boxman.wrl", "Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"},
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.75,0.75,0.75}},
                    GroundColor: &x3d.MFColor{[3]float32{0.6,0.6,0.6}},
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("boxman_Humanoid"),
                    },
                    Name: stringPtr("Humanoid"),
                    Info: x3d.MFString{"authorName=James Smith", "authorEmail=james@vapourtech.com", "copyright=(C) 2000 James Smith - james@vapourtech.com", "humanoidVersion=1.0"},
                    Version: stringPtr("1.0"),
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("boxman_humanoid_root"),
                            },
                            Name: stringPtr("humanoid_root"),
                            Center: &x3d.SFVec3f{0.0, 0.9723, -0.0728},
                            SkinCoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimSegment{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_sacrum"),
                                    },
                                    Name: stringPtr("sacrum"),
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{0.0, 0.9723, -0.0728},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("SphereYellow"),
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                                    },
                                                },
                                                Geometry: &x3d.Sphere{
                                                    Radius: floatPtr(0.02),
                                                },
                                            },
                                        },
                                    },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_l_hip"),
                                    },
                                    Name: stringPtr("l_hip"),
                                    Center: &x3d.SFVec3f{0.0956, 0.9364, 0.0},
                                    SkinCoordIndex: []int32{12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43},
                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_thigh"),
                                            },
                                            Name: stringPtr("l_thigh"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{0.0956, 0.9364, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_knee"),
                                            },
                                            Name: stringPtr("l_knee"),
                                            Center: &x3d.SFVec3f{0.0956, 0.5095, -0.0036},
                                            SkinCoordIndex: []int32{36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63},
                                            SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_calf"),
                                                    },
                                                    Name: stringPtr("l_calf"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.0956, 0.5095, -0.0036},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("SphereYellow"),
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_ankle"),
                                                    },
                                                    Name: stringPtr("l_ankle"),
                                                    Rotation: &x3d.SFRotation{-0.999999999999999, 0.0, 0.0, 0.934517418078819},
                                                    Center: &x3d.SFVec3f{0.0946, 0.0762, -0.0261},
                                                    SkinCoordIndex: []int32{64, 65, 66, 67, 68, 69, 70, 71},
                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_l_hindfoot"),
                                                            },
                                                            Name: stringPtr("l_hindfoot"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.0946, 0.0762, -0.0261},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereYellow"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_l_midtarsal"),
                                                            },
                                                            Name: stringPtr("l_midtarsal"),
                                                            Center: &x3d.SFVec3f{0.1079, 0.0317, 0.067},
                                                            SkinCoordIndex: []int32{72, 73, 74, 75, 76, 77, 78, 79},
                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("boxman_l_middistal"),
                                                                    },
                                                                    Name: stringPtr("l_middistal"),
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{0.1079, 0.0317, 0.067},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Shape{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("SphereYellow"),
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("boxman_l_middistal_tip"),
                                                                        },
                                                                        Name: stringPtr("l_middistal_tip"),
                                                                        Translation: &x3d.SFVec3f{0.095, 0.0005, 0.1924},
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("SphereRed"),
                                                                            },
                                                                            Appearance: &x3d.Appearance{
                                                                                Material: &x3d.Material{
                                                                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                                                                },
                                                                            },
                                                                            Geometry: &x3d.Sphere{
                                                                                Radius: floatPtr(0.02),
                                                                            },
                                                                        },
                                                                    },
                                                            },
                                                    },
                                            },
                                    },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("boxman_r_hip"),
                                },
                                Name: stringPtr("r_hip"),
                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.84517416925276},
                                Center: &x3d.SFVec3f{-0.0956, 0.9364, 0.0},
                                SkinCoordIndex: []int32{80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111},
                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_r_thigh"),
                                        },
                                        Name: stringPtr("r_thigh"),
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{-0.0956, 0.9364, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("SphereYellow"),
                                                    },
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_r_knee"),
                                        },
                                        Name: stringPtr("r_knee"),
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.81193032768473},
                                        Center: &x3d.SFVec3f{-0.0956, 0.5095, -0.0036},
                                        SkinCoordIndex: []int32{104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131},
                                        SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("boxman_r_calf"),
                                                },
                                                Name: stringPtr("r_calf"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-0.0956, 0.5095, -0.0036},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("SphereYellow"),
                                                            },
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("boxman_r_ankle"),
                                                },
                                                Name: stringPtr("r_ankle"),
                                                Rotation: &x3d.SFRotation{-0.999999999999999, 0.0, 0.0, 0.934517418078819},
                                                Center: &x3d.SFVec3f{-0.0946, 0.0762, -0.0261},
                                                SkinCoordIndex: []int32{132, 133, 134, 135, 136, 137, 138, 139},
                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("boxman_r_hindfoot"),
                                                        },
                                                        Name: stringPtr("r_hindfoot"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-0.0946, 0.0762, -0.0261},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("SphereYellow"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("boxman_r_midtarsal"),
                                                        },
                                                        Name: stringPtr("r_midtarsal"),
                                                        Center: &x3d.SFVec3f{-0.1079, 0.0317, 0.067},
                                                        SkinCoordIndex: []int32{140, 141, 142, 143, 144, 145, 146, 147},
                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("boxman_r_middistal"),
                                                                },
                                                                Name: stringPtr("r_middistal"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.1079, 0.0317, 0.067},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("SphereYellow"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("boxman_r_middistal_tip"),
                                                                    },
                                                                    Name: stringPtr("r_middistal_tip"),
                                                                    Translation: &x3d.SFVec3f{-0.095, 0.0005, 0.1924},
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereRed"),
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                },
                                        },
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("boxman_vl5"),
                                },
                                Name: stringPtr("vl5"),
                                Center: &x3d.SFVec3f{0.0, 1.0817, -0.0728},
                                SkinCoordIndex: []int32{148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167},
                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_l5"),
                                        },
                                        Name: stringPtr("l5"),
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, 1.0817, -0.0728},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("SphereYellow"),
                                                    },
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("boxman_skullbase"),
                                        },
                                        Name: stringPtr("skullbase"),
                                        Rotation: &x3d.SFRotation{-0.999999999999998, 0.0, 0.0, 0.567582977341481},
                                        Center: &x3d.SFVec3f{0.0, 1.644, 0.036},
                                        SkinCoordIndex: []int32{168, 169, 170, 171, 172, 173, 174, 175},
                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("boxman_skull"),
                                                },
                                                Name: stringPtr("skull"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0, 1.644, 0.036},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("SphereYellow"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_skull_tip"),
                                                    },
                                                    Name: stringPtr("skull_tip"),
                                                    Translation: &x3d.SFVec3f{-0.0029, 1.7771, 0.0274},
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                        },
                                },
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_l_shoulder"),
                                    },
                                    Name: stringPtr("l_shoulder"),
                                    Rotation: &x3d.SFRotation{-0.168396082523642, 0.0, 0.98571941209996, 1.75368175088092},
                                    Center: &x3d.SFVec3f{0.1968, 1.4642, -0.0265},
                                    SkinCoordIndex: []int32{176, 177, 178, 179, 180, 181, 182, 183},
                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_upperarm"),
                                            },
                                            Name: stringPtr("l_upperarm"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{0.1968, 1.4642, -0.0265},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_l_elbow"),
                                            },
                                            Name: stringPtr("l_elbow"),
                                            Rotation: &x3d.SFRotation{0.976795664618561, -0.214173363382058, 0.0, 4.35600755948079},
                                            Center: &x3d.SFVec3f{0.1982, 1.1622, -0.0557},
                                            SkinCoordIndex: []int32{184, 185, 186, 187, 188, 189, 190, 191},
                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_forearm"),
                                                    },
                                                    Name: stringPtr("l_forearm"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.1982, 1.1622, -0.0557},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("SphereYellow"),
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_l_wrist"),
                                                    },
                                                    Name: stringPtr("l_wrist"),
                                                    Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.379691598867005},
                                                    Center: &x3d.SFVec3f{0.1972, 0.8929, -0.069},
                                                    SkinCoordIndex: []int32{192, 193, 194, 195, 196, 197, 198, 199},
                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_l_hand"),
                                                            },
                                                            Name: stringPtr("l_hand"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.1972, 0.8929, -0.069},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereYellow"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("boxman_l_hand_tip"),
                                                                },
                                                                Name: stringPtr("l_hand_tip"),
                                                                Translation: &x3d.SFVec3f{0.1912, 0.6976, -0.071},
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("SphereRed"),
                                                                    },
                                                                },
                                                            },
                                                    },
                                            },
                                    },
                                },
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("boxman_r_shoulder"),
                                    },
                                    Name: stringPtr("r_shoulder"),
                                    Rotation: &x3d.SFRotation{0.168396082523642, 0.0, 0.98571941209996, 4.52950355629867},
                                    Center: &x3d.SFVec3f{-0.1968, 1.4642, -0.0265},
                                    SkinCoordIndex: []int32{200, 201, 202, 203, 204, 205, 206, 207},
                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_r_upperarm"),
                                            },
                                            Name: stringPtr("r_upperarm"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{-0.1968, 1.4642, -0.0265},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("SphereYellow"),
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("boxman_r_elbow"),
                                            },
                                            Name: stringPtr("r_elbow"),
                                            Rotation: &x3d.SFRotation{0.976795664618562, 0.214173363382058, 0.0, 4.35600755948079},
                                            Center: &x3d.SFVec3f{-0.1982, 1.1622, -0.0557},
                                            SkinCoordIndex: []int32{208, 209, 210, 211, 212, 213, 214, 215},
                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_r_forearm"),
                                                    },
                                                    Name: stringPtr("r_forearm"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{-0.1982, 1.1622, -0.0557},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("SphereYellow"),
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("boxman_r_wrist"),
                                                    },
                                                    Name: stringPtr("r_wrist"),
                                                    Rotation: &x3d.SFRotation{0.0, -1.0, 0.0, 0.379691598867005},
                                                    Center: &x3d.SFVec3f{-0.1972, 0.8929, -0.069},
                                                    SkinCoordIndex: []int32{216, 217, 218, 219, 220, 221, 222, 223},
                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("boxman_r_hand"),
                                                            },
                                                            Name: stringPtr("r_hand"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{-0.1972, 0.8929, -0.069},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("SphereYellow"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("boxman_r_hand_tip"),
                                                                },
                                                                Name: stringPtr("r_hand_tip"),
                                                                Translation: &x3d.SFVec3f{-0.1912, 0.6976, -0.071},
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("SphereRed"),
                                                                    },
                                                                },
                                                            },
                                                    },
                                            },
                                    },
                                },
                            },
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("boxman_humanoid_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_skullbase"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_vl5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_ankle"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_ankle"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_midtarsal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_midtarsal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_wrist"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_wrist"),
                        },
                    },
                    Segments: []x3d.X3DNode{
                        &x3d.HAnimSegment{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("boxman_sacrum"),
                            },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l5"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_skull"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_calf"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_calf"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_forearm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_forearm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hand"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hand"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hindfoot"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hindfoot"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_middistal"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_middistal"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_thigh"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_thigh"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_upperarm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_upperarm"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_skull_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_hand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_hand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_l_middistal_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("boxman_r_middistal_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("boxman_BoxMan_view"),
                        },
                        Name: stringPtr("BoxMan_view"),
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Inclined_View"),
                            },
                            Description: stringPtr("Inclined View"),
                            Position: &x3d.SFVec3f{2.0, 0.9, 2.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.78},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Front_View"),
                            },
                            Description: stringPtr("Front View"),
                            Position: &x3d.SFVec3f{0.0, 1.0, 3.0},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Best_View"),
                            },
                            Description: stringPtr("Right-side View"),
                            Position: &x3d.SFVec3f{-3.0, 1.0, 0.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Side_View"),
                            },
                            Description: stringPtr("Left-side View"),
                            Position: &x3d.SFVec3f{3.0, 1.0, 0.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Top_View"),
                            },
                            Description: stringPtr("Top View"),
                            Position: &x3d.SFVec3f{0.0, 3.0, 0.0},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                    },
                    SkinCoord: &x3d.Coordinate{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("SKINCOORD"),
                        },
                        Point: &x3d.MFVec3f{[3]float32{-0.05,1.0,0.05},[3]float32{0.05,1.0,0.05},[3]float32{0.03,0.97,-0.1},[3]float32{-0.03,0.97,-0.1},[3]float32{0.03,0.94,-0.075},[3]float32{-0.03,0.94,-0.075},[3]float32{0.0,0.92,0.0},[3]float32{0.0,0.94,0.03},[3]float32{-0.12,1.06,0.05},[3]float32{0.12,1.06,0.05},[3]float32{0.12,1.06,-0.1},[3]float32{-0.12,1.06,-0.1},[3]float32{0.0456,0.9364,0.05},[3]float32{0.1456,0.9364,0.05},[3]float32{0.1456,0.9364,-0.05},[3]float32{0.0456,0.9364,-0.05},[3]float32{0.0456,0.9,0.05},[3]float32{0.1456,0.9,0.05},[3]float32{0.1456,0.9,-0.05},[3]float32{0.0456,0.9,-0.05},[3]float32{0.0456,0.8,0.05},[3]float32{0.1456,0.8,0.05},[3]float32{0.1456,0.8,-0.05},[3]float32{0.0456,0.8,-0.05},[3]float32{0.0456,0.7,0.05},[3]float32{0.1456,0.7,0.05},[3]float32{0.1456,0.7,-0.05},[3]float32{0.0456,0.7,-0.05},[3]float32{0.0456,0.6,0.05},[3]float32{0.1456,0.6,0.05},[3]float32{0.1456,0.6,-0.05},[3]float32{0.0456,0.6,-0.05},[3]float32{0.0456,0.55,0.05},[3]float32{0.1456,0.55,0.05},[3]float32{0.1456,0.55,-0.05},[3]float32{0.0456,0.55,-0.05},[3]float32{0.0456,0.52,0.05},[3]float32{0.1456,0.52,0.05},[3]float32{0.1456,0.52,-0.05},[3]float32{0.0456,0.52,-0.05},[3]float32{0.0456,0.5,0.05},[3]float32{0.1456,0.5,0.05},[3]float32{0.1456,0.5,-0.05},[3]float32{0.0456,0.5,-0.05},[3]float32{0.0454,0.43,0.045},[3]float32{0.1454,0.43,0.045},[3]float32{0.1454,0.43,-0.055},[3]float32{0.0454,0.43,-0.055},[3]float32{0.0452,0.36,0.04},[3]float32{0.1452,0.36,0.04},[3]float32{0.1452,0.36,-0.06},[3]float32{0.0452,0.36,-0.06},[3]float32{0.045,0.29,0.035},[3]float32{0.145,0.29,0.035},[3]float32{0.145,0.29,-0.065},[3]float32{0.045,0.29,-0.065},[3]float32{0.0448,0.21,0.03},[3]float32{0.1448,0.21,0.03},[3]float32{0.1448,0.21,-0.07},[3]float32{0.0448,0.21,-0.07},[3]float32{0.0446,0.1262,0.025},[3]float32{0.1446,0.1262,0.025},[3]float32{0.1446,0.1262,-0.075},[3]float32{0.0446,0.1262,-0.075},[3]float32{0.0446,0.0762,0.025},[3]float32{0.1446,0.0762,0.025},[3]float32{0.1446,0.0,-0.075},[3]float32{0.0446,0.0,-0.075},[3]float32{0.0446,0.0562,0.057},[3]float32{0.1446,0.0562,0.057},[3]float32{0.1446,0.0,0.057},[3]float32{0.0446,0.0,0.057},[3]float32{0.0446,0.0562,0.087},[3]float32{0.1446,0.0562,0.087},[3]float32{0.1446,0.0,0.087},[3]float32{0.0446,0.0,0.087},[3]float32{0.0446,0.0562,0.1924},[3]float32{0.1446,0.0562,0.1924},[3]float32{0.1446,0.0,0.1924},[3]float32{0.0446,0.0,0.1924},[3]float32{-0.0456,0.9364,0.05},[3]float32{-0.1456,0.9364,0.05},[3]float32{-0.1456,0.9364,-0.05},[3]float32{-0.0456,0.9364,-0.05},[3]float32{-0.0456,0.9,0.05},[3]float32{-0.1456,0.9,0.05},[3]float32{-0.1456,0.9,-0.05},[3]float32{-0.0456,0.9,-0.05},[3]float32{-0.0456,0.8,0.05},[3]float32{-0.1456,0.8,0.05},[3]float32{-0.1456,0.8,-0.05},[3]float32{-0.0456,0.8,-0.05},[3]float32{-0.0456,0.7,0.05},[3]float32{-0.1456,0.7,0.05},[3]float32{-0.1456,0.7,-0.05},[3]float32{-0.0456,0.7,-0.05},[3]float32{-0.0456,0.6,0.05},[3]float32{-0.1456,0.6,0.05},[3]float32{-0.1456,0.6,-0.05},[3]float32{-0.0456,0.6,-0.05},[3]float32{-0.0456,0.55,0.05},[3]float32{-0.1456,0.55,0.05},[3]float32{-0.1456,0.55,-0.05},[3]float32{-0.0456,0.55,-0.05},[3]float32{-0.0456,0.52,0.05},[3]float32{-0.1456,0.52,0.05},[3]float32{-0.1456,0.52,-0.05},[3]float32{-0.0456,0.52,-0.05},[3]float32{-0.0456,0.5,0.05},[3]float32{-0.1456,0.5,0.05},[3]float32{-0.1456,0.5,-0.05},[3]float32{-0.0456,0.5,-0.05},[3]float32{-0.0454,0.43,0.045},[3]float32{-0.1454,0.43,0.045},[3]float32{-0.1454,0.43,-0.055},[3]float32{-0.0454,0.43,-0.055},[3]float32{-0.0452,0.36,0.04},[3]float32{-0.1452,0.36,0.04},[3]float32{-0.1452,0.36,-0.06},[3]float32{-0.0452,0.36,-0.06},[3]float32{-0.045,0.29,0.035},[3]float32{-0.145,0.29,0.035},[3]float32{-0.145,0.29,-0.065},[3]float32{-0.045,0.29,-0.065},[3]float32{-0.0448,0.21,0.03},[3]float32{-0.1448,0.21,0.03},[3]float32{-0.1448,0.21,-0.07},[3]float32{-0.0448,0.21,-0.07},[3]float32{-0.0446,0.1262,0.025},[3]float32{-0.1446,0.1262,0.025},[3]float32{-0.1446,0.1262,-0.075},[3]float32{-0.0446,0.1262,-0.075},[3]float32{-0.0446,0.0762,0.025},[3]float32{-0.1446,0.0762,0.025},[3]float32{-0.1446,0.0,-0.075},[3]float32{-0.0446,0.0,-0.075},[3]float32{-0.0446,0.0562,0.057},[3]float32{-0.1446,0.0562,0.057},[3]float32{-0.1446,0.0,0.057},[3]float32{-0.0446,0.0,0.057},[3]float32{-0.0446,0.0562,0.087},[3]float32{-0.1446,0.0562,0.087},[3]float32{-0.1446,0.0,0.087},[3]float32{-0.0446,0.0,0.087},[3]float32{-0.0446,0.0562,0.1924},[3]float32{-0.1446,0.0562,0.1924},[3]float32{-0.1446,0.0,0.1924},[3]float32{-0.0446,0.0,0.1924},[3]float32{-0.12,1.1,0.05},[3]float32{0.12,1.1,0.05},[3]float32{0.12,1.1,-0.1},[3]float32{-0.12,1.1,-0.1},[3]float32{-0.14,1.42,0.045},[3]float32{0.14,1.42,0.045},[3]float32{0.14,1.42,-0.09},[3]float32{-0.14,1.42,-0.09},[3]float32{-0.24,1.52,0.035},[3]float32{0.24,1.52,0.035},[3]float32{0.24,1.52,-0.09},[3]float32{-0.24,1.52,-0.09},[3]float32{-0.05,1.56,0.03},[3]float32{0.05,1.56,0.03},[3]float32{0.05,1.56,-0.06},[3]float32{-0.05,1.56,-0.06},[3]float32{-0.05,1.6,0.06},[3]float32{0.05,1.6,0.06},[3]float32{0.05,1.62,-0.03},[3]float32{-0.05,1.62,-0.03},[3]float32{-0.07,1.777,0.13},[3]float32{0.07,1.777,0.13},[3]float32{0.07,1.777,-0.03},[3]float32{-0.07,1.777,-0.03},[3]float32{-0.07,1.6,0.13},[3]float32{0.07,1.6,0.13},[3]float32{0.07,1.66,-0.03},[3]float32{-0.07,1.66,-0.03},[3]float32{0.16,1.42,0.015},[3]float32{0.24,1.5,0.015},[3]float32{0.24,1.5,-0.075},[3]float32{0.16,1.42,-0.075},[3]float32{0.17,1.18,-0.025},[3]float32{0.23,1.18,-0.025},[3]float32{0.23,1.18,-0.085},[3]float32{0.17,1.18,-0.085},[3]float32{0.17,1.14,-0.025},[3]float32{0.23,1.14,-0.025},[3]float32{0.23,1.14,-0.085},[3]float32{0.17,1.14,-0.085},[3]float32{0.18,0.91,-0.05},[3]float32{0.22,0.91,-0.05},[3]float32{0.22,0.91,-0.09},[3]float32{0.18,0.91,-0.09},[3]float32{0.18,0.87,-0.02},[3]float32{0.22,0.87,-0.02},[3]float32{0.22,0.87,-0.1},[3]float32{0.18,0.87,-0.1},[3]float32{0.18,0.6976,-0.02},[3]float32{0.22,0.6976,-0.02},[3]float32{0.22,0.6976,-0.1},[3]float32{0.18,0.6976,-0.1},[3]float32{-0.16,1.42,0.015},[3]float32{-0.24,1.5,0.015},[3]float32{-0.24,1.5,-0.075},[3]float32{-0.16,1.42,-0.075},[3]float32{-0.17,1.18,-0.025},[3]float32{-0.23,1.18,-0.025},[3]float32{-0.23,1.18,-0.085},[3]float32{-0.17,1.18,-0.085},[3]float32{-0.17,1.14,-0.025},[3]float32{-0.23,1.14,-0.025},[3]float32{-0.23,1.14,-0.085},[3]float32{-0.17,1.14,-0.085},[3]float32{-0.18,0.91,-0.05},[3]float32{-0.22,0.91,-0.05},[3]float32{-0.22,0.91,-0.09},[3]float32{-0.18,0.91,-0.09},[3]float32{-0.18,0.87,-0.02},[3]float32{-0.22,0.87,-0.02},[3]float32{-0.22,0.87,-0.1},[3]float32{-0.18,0.87,-0.1},[3]float32{-0.18,0.6976,-0.02},[3]float32{-0.22,0.6976,-0.02},[3]float32{-0.22,0.6976,-0.1},[3]float32{-0.18,0.6976,-0.1}},
                    },
                    &x3d.Group{
                        Children: []x3d.X3DNode{
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TrouserSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 1.0},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{0, 7, 1, -1, 8, 0, 1, -1, 1, 9, 8, -1, 10, 2, 3, -1, 3, 11, 10, -1, 2, 4, 5, -1, 5, 3, 2, -1, 4, 6, 5, -1, 7, 12, 1, -1, 1, 12, 13, -1, 13, 9, 1, -1, 9, 13, 14, -1, 14, 10, 9, -1, 10, 14, 15, -1, 15, 2, 10, -1, 12, 7, 6, -1, 6, 15, 12, -1, 15, 6, 4, -1, 4, 2, 15, -1, 0, 80, 7, -1, 81, 80, 0, -1, 0, 8, 81, -1, 82, 81, 8, -1, 8, 11, 82, -1, 83, 82, 11, -1, 11, 3, 83, -1, 6, 7, 80, -1, 80, 83, 6, -1, 5, 6, 83, -1, 83, 3, 5, -1, 12, 16, 17, -1, 17, 13, 12, -1, 13, 17, 18, -1, 18, 14, 13, -1, 14, 18, 19, -1, 19, 15, 14, -1, 15, 19, 16, -1, 16, 12, 15, -1, 16, 20, 21, -1, 21, 17, 16, -1, 17, 21, 22, -1, 22, 18, 17, -1, 18, 22, 23, -1, 23, 19, 18, -1, 19, 23, 20, -1, 20, 16, 19, -1, 20, 24, 25, -1, 25, 21, 20, -1, 21, 25, 26, -1, 26, 22, 21, -1, 22, 26, 27, -1, 27, 23, 22, -1, 23, 27, 24, -1, 24, 20, 23, -1, 24, 28, 29, -1, 29, 25, 24, -1, 25, 29, 30, -1, 30, 26, 25, -1, 26, 30, 31, -1, 31, 27, 26, -1, 27, 31, 28, -1, 28, 24, 27, -1, 28, 32, 33, -1, 33, 29, 28, -1, 29, 33, 34, -1, 34, 30, 29, -1, 30, 34, 35, -1, 35, 31, 30, -1, 31, 35, 32, -1, 32, 28, 31, -1, 32, 36, 37, -1, 37, 33, 32, -1, 33, 37, 38, -1, 38, 34, 33, -1, 34, 38, 39, -1, 39, 35, 34, -1, 35, 39, 36, -1, 36, 32, 35, -1, 36, 40, 41, -1, 41, 37, 36, -1, 37, 41, 42, -1, 42, 38, 37, -1, 38, 42, 43, -1, 43, 39, 38, -1, 39, 43, 40, -1, 40, 36, 39, -1, 40, 44, 45, -1, 45, 41, 40, -1, 41, 45, 46, -1, 46, 42, 41, -1, 42, 46, 47, -1, 47, 43, 42, -1, 43, 47, 44, -1, 44, 40, 43, -1, 44, 48, 49, -1, 49, 45, 44, -1, 45, 49, 50, -1, 50, 46, 45, -1, 46, 50, 51, -1, 51, 47, 46, -1, 47, 51, 48, -1, 48, 44, 47, -1, 48, 52, 53, -1, 53, 49, 48, -1, 49, 53, 54, -1, 54, 50, 49, -1, 50, 54, 55, -1, 55, 51, 50, -1, 51, 55, 52, -1, 52, 48, 51, -1, 52, 56, 57, -1, 57, 53, 52, -1, 53, 57, 58, -1, 58, 54, 53, -1, 54, 58, 59, -1, 59, 55, 54, -1, 55, 59, 56, -1, 56, 52, 55, -1, 56, 60, 61, -1, 61, 57, 56, -1, 57, 61, 62, -1, 62, 58, 57, -1, 58, 62, 63, -1, 63, 59, 58, -1, 59, 63, 60, -1, 60, 56, 59, -1, 81, 85, 84, -1, 84, 80, 81, -1, 82, 86, 85, -1, 85, 81, 82, -1, 83, 87, 86, -1, 86, 82, 83, -1, 80, 84, 87, -1, 87, 83, 80, -1, 85, 89, 88, -1, 88, 84, 85, -1, 86, 90, 89, -1, 89, 85, 86, -1, 87, 91, 90, -1, 90, 86, 87, -1, 84, 88, 91, -1, 91, 87, 84, -1, 89, 93, 92, -1, 92, 88, 89, -1, 90, 94, 93, -1, 93, 89, 90, -1, 91, 95, 94, -1, 94, 90, 91, -1, 88, 92, 95, -1, 95, 91, 88, -1, 93, 97, 96, -1, 96, 92, 93, -1, 94, 98, 97, -1, 97, 93, 94, -1, 95, 99, 98, -1, 98, 94, 95, -1, 92, 96, 99, -1, 99, 95, 92, -1, 97, 101, 100, -1, 100, 96, 97, -1, 98, 102, 101, -1, 101, 97, 98, -1, 99, 103, 102, -1, 102, 98, 99, -1, 96, 100, 103, -1, 103, 99, 96, -1, 101, 105, 104, -1, 104, 100, 101, -1, 102, 106, 105, -1, 105, 101, 102, -1, 103, 107, 106, -1, 106, 102, 103, -1, 100, 104, 107, -1, 107, 103, 100, -1, 105, 109, 108, -1, 108, 104, 105, -1, 106, 110, 109, -1, 109, 105, 106, -1, 107, 111, 110, -1, 110, 106, 107, -1, 104, 108, 111, -1, 111, 107, 104, -1, 109, 113, 112, -1, 112, 108, 109, -1, 110, 114, 113, -1, 113, 109, 110, -1, 111, 115, 114, -1, 114, 110, 111, -1, 108, 112, 115, -1, 115, 111, 108, -1, 113, 117, 116, -1, 116, 112, 113, -1, 114, 118, 117, -1, 117, 113, 114, -1, 115, 119, 118, -1, 118, 114, 115, -1, 112, 116, 119, -1, 119, 115, 112, -1, 117, 121, 120, -1, 120, 116, 117, -1, 118, 122, 121, -1, 121, 117, 118, -1, 119, 123, 122, -1, 122, 118, 119, -1, 116, 120, 123, -1, 123, 119, 116, -1, 121, 125, 124, -1, 124, 120, 121, -1, 122, 126, 125, -1, 125, 121, 122, -1, 123, 127, 126, -1, 126, 122, 123, -1, 120, 124, 127, -1, 127, 123, 120, -1, 125, 129, 128, -1, 128, 124, 125, -1, 126, 130, 129, -1, 129, 125, 126, -1, 127, 131, 130, -1, 130, 126, 127, -1, 124, 128, 131, -1, 131, 127, 124, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ShoeSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{60, 64, 65, -1, 65, 61, 60, -1, 61, 65, 66, -1, 66, 62, 61, -1, 62, 66, 67, -1, 67, 63, 62, -1, 63, 67, 64, -1, 64, 60, 63, -1, 64, 68, 69, -1, 69, 65, 64, -1, 65, 69, 70, -1, 70, 66, 65, -1, 66, 70, 71, -1, 71, 67, 66, -1, 67, 71, 68, -1, 68, 64, 67, -1, 68, 72, 73, -1, 73, 69, 68, -1, 69, 73, 74, -1, 74, 70, 69, -1, 70, 74, 75, -1, 75, 71, 70, -1, 71, 75, 72, -1, 72, 68, 71, -1, 72, 76, 77, -1, 77, 73, 72, -1, 73, 77, 78, -1, 78, 74, 73, -1, 74, 78, 79, -1, 79, 75, 74, -1, 75, 79, 76, -1, 76, 72, 75, -1, 76, 79, 78, -1, 78, 77, 76, -1, 129, 133, 132, -1, 132, 128, 129, -1, 130, 134, 133, -1, 133, 129, 130, -1, 131, 135, 134, -1, 134, 130, 131, -1, 128, 132, 135, -1, 135, 131, 128, -1, 133, 137, 136, -1, 136, 132, 133, -1, 134, 138, 137, -1, 137, 133, 134, -1, 135, 139, 138, -1, 138, 134, 135, -1, 132, 136, 139, -1, 139, 135, 132, -1, 137, 141, 140, -1, 140, 136, 137, -1, 138, 142, 141, -1, 141, 137, 138, -1, 139, 143, 142, -1, 142, 138, 139, -1, 136, 140, 143, -1, 143, 139, 136, -1, 141, 145, 144, -1, 144, 140, 141, -1, 142, 146, 145, -1, 145, 141, 142, -1, 143, 147, 146, -1, 146, 142, 143, -1, 140, 144, 147, -1, 147, 143, 140, -1, 145, 146, 147, -1, 147, 144, 145, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("ShirtSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{148, 8, 9, -1, 9, 149, 148, -1, 149, 9, 10, -1, 10, 150, 149, -1, 150, 10, 11, -1, 11, 151, 150, -1, 151, 11, 8, -1, 8, 148, 151, -1, 152, 148, 149, -1, 149, 153, 152, -1, 153, 149, 150, -1, 150, 154, 153, -1, 154, 150, 151, -1, 151, 155, 154, -1, 155, 151, 148, -1, 148, 152, 155, -1, 156, 152, 153, -1, 153, 157, 156, -1, 158, 154, 155, -1, 155, 159, 158, -1, 160, 156, 157, -1, 157, 161, 160, -1, 161, 157, 158, -1, 158, 162, 161, -1, 162, 158, 159, -1, 159, 163, 162, -1, 163, 159, 156, -1, 156, 160, 163, -1, 164, 160, 161, -1, 161, 165, 164, -1, 165, 161, 162, -1, 162, 166, 165, -1, 166, 162, 163, -1, 163, 167, 166, -1, 167, 163, 160, -1, 160, 164, 167, -1, 153, 176, 177, -1, 177, 157, 153, -1, 157, 177, 178, -1, 178, 158, 157, -1, 158, 178, 179, -1, 179, 154, 158, -1, 154, 179, 176, -1, 176, 153, 154, -1, 176, 180, 181, -1, 181, 177, 176, -1, 177, 181, 182, -1, 182, 178, 177, -1, 178, 182, 183, -1, 183, 179, 178, -1, 179, 183, 180, -1, 180, 176, 179, -1, 180, 184, 185, -1, 185, 181, 180, -1, 181, 185, 186, -1, 186, 182, 181, -1, 182, 186, 187, -1, 187, 183, 182, -1, 183, 187, 184, -1, 184, 180, 183, -1, 184, 188, 189, -1, 189, 185, 184, -1, 185, 189, 190, -1, 190, 186, 185, -1, 186, 190, 191, -1, 191, 187, 186, -1, 187, 191, 188, -1, 188, 184, 187, -1, 152, 156, 201, -1, 201, 200, 152, -1, 156, 159, 202, -1, 202, 201, 156, -1, 159, 155, 203, -1, 203, 202, 159, -1, 155, 152, 200, -1, 200, 203, 155, -1, 201, 205, 204, -1, 204, 200, 201, -1, 202, 206, 205, -1, 205, 201, 202, -1, 203, 207, 206, -1, 206, 202, 203, -1, 200, 204, 207, -1, 207, 203, 200, -1, 205, 209, 208, -1, 208, 204, 205, -1, 206, 210, 209, -1, 209, 205, 206, -1, 207, 211, 210, -1, 210, 206, 207, -1, 204, 208, 211, -1, 211, 207, 204, -1, 209, 213, 212, -1, 212, 208, 209, -1, 210, 214, 213, -1, 213, 209, 210, -1, 211, 215, 214, -1, 214, 210, 211, -1, 208, 212, 215, -1, 215, 211, 208, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HeadHandsFleshToneSkin"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{1.0, 0.75, 0.75},
                                        Transparency: floatPtr(0.5),
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoordIndex: []int32{172, 164, 165, -1, 165, 173, 172, -1, 173, 165, 166, -1, 166, 174, 173, -1, 174, 166, 167, -1, 167, 175, 174, -1, 175, 167, 164, -1, 164, 172, 175, -1, 168, 172, 173, -1, 173, 169, 168, -1, 169, 173, 174, -1, 174, 170, 169, -1, 170, 174, 175, -1, 175, 171, 170, -1, 171, 175, 172, -1, 172, 168, 171, -1, 171, 168, 169, -1, 169, 170, 171, -1, 188, 192, 193, -1, 193, 189, 188, -1, 189, 193, 194, -1, 194, 190, 189, -1, 190, 194, 195, -1, 195, 191, 190, -1, 191, 195, 192, -1, 192, 188, 191, -1, 192, 196, 197, -1, 197, 193, 192, -1, 193, 197, 198, -1, 198, 194, 193, -1, 194, 198, 199, -1, 199, 195, 194, -1, 195, 199, 196, -1, 196, 192, 195, -1, 196, 199, 198, -1, 198, 197, 196, -1, 213, 217, 216, -1, 216, 212, 213, -1, 214, 218, 217, -1, 217, 213, 214, -1, 215, 219, 218, -1, 218, 214, 215, -1, 212, 216, 219, -1, 219, 215, 212, -1, 217, 221, 220, -1, 220, 216, 217, -1, 218, 222, 221, -1, 221, 217, 218, -1, 219, 223, 222, -1, 222, 218, 219, -1, 216, 220, 223, -1, 223, 219, 216, -1, 221, 222, 223, -1, 223, 220, 221, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SkinLines"),
                                },
                                Appearance: &x3d.Appearance{
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                    },
                                },
                                Geometry: &x3d.IndexedLineSet{
                                    CoordIndex: []int32{0, 7, 1, -1, 8, 0, 1, -1, 1, 9, 8, -1, 10, 2, 3, -1, 3, 11, 10, -1, 2, 4, 5, -1, 5, 3, 2, -1, 4, 6, 5, -1, 7, 12, 1, -1, 1, 12, 13, -1, 13, 9, 1, -1, 9, 13, 14, -1, 14, 10, 9, -1, 10, 14, 15, -1, 15, 2, 10, -1, 12, 7, 6, -1, 6, 15, 12, -1, 15, 6, 4, -1, 4, 2, 15, -1, 0, 80, 7, -1, 81, 80, 0, -1, 0, 8, 81, -1, 82, 81, 8, -1, 8, 11, 82, -1, 83, 82, 11, -1, 11, 3, 83, -1, 6, 7, 80, -1, 80, 83, 6, -1, 5, 6, 83, -1, 83, 3, 5, -1, 12, 16, 17, -1, 17, 13, 12, -1, 13, 17, 18, -1, 18, 14, 13, -1, 14, 18, 19, -1, 19, 15, 14, -1, 15, 19, 16, -1, 16, 12, 15, -1, 16, 20, 21, -1, 21, 17, 16, -1, 17, 21, 22, -1, 22, 18, 17, -1, 18, 22, 23, -1, 23, 19, 18, -1, 19, 23, 20, -1, 20, 16, 19, -1, 20, 24, 25, -1, 25, 21, 20, -1, 21, 25, 26, -1, 26, 22, 21, -1, 22, 26, 27, -1, 27, 23, 22, -1, 23, 27, 24, -1, 24, 20, 23, -1, 24, 28, 29, -1, 29, 25, 24, -1, 25, 29, 30, -1, 30, 26, 25, -1, 26, 30, 31, -1, 31, 27, 26, -1, 27, 31, 28, -1, 28, 24, 27, -1, 28, 32, 33, -1, 33, 29, 28, -1, 29, 33, 34, -1, 34, 30, 29, -1, 30, 34, 35, -1, 35, 31, 30, -1, 31, 35, 32, -1, 32, 28, 31, -1, 32, 36, 37, -1, 37, 33, 32, -1, 33, 37, 38, -1, 38, 34, 33, -1, 34, 38, 39, -1, 39, 35, 34, -1, 35, 39, 36, -1, 36, 32, 35, -1, 36, 40, 41, -1, 41, 37, 36, -1, 37, 41, 42, -1, 42, 38, 37, -1, 38, 42, 43, -1, 43, 39, 38, -1, 39, 43, 40, -1, 40, 36, 39, -1, 40, 44, 45, -1, 45, 41, 40, -1, 41, 45, 46, -1, 46, 42, 41, -1, 42, 46, 47, -1, 47, 43, 42, -1, 43, 47, 44, -1, 44, 40, 43, -1, 44, 48, 49, -1, 49, 45, 44, -1, 45, 49, 50, -1, 50, 46, 45, -1, 46, 50, 51, -1, 51, 47, 46, -1, 47, 51, 48, -1, 48, 44, 47, -1, 48, 52, 53, -1, 53, 49, 48, -1, 49, 53, 54, -1, 54, 50, 49, -1, 50, 54, 55, -1, 55, 51, 50, -1, 51, 55, 52, -1, 52, 48, 51, -1, 52, 56, 57, -1, 57, 53, 52, -1, 53, 57, 58, -1, 58, 54, 53, -1, 54, 58, 59, -1, 59, 55, 54, -1, 55, 59, 56, -1, 56, 52, 55, -1, 56, 60, 61, -1, 61, 57, 56, -1, 57, 61, 62, -1, 62, 58, 57, -1, 58, 62, 63, -1, 63, 59, 58, -1, 59, 63, 60, -1, 60, 56, 59, -1, 81, 85, 84, -1, 84, 80, 81, -1, 82, 86, 85, -1, 85, 81, 82, -1, 83, 87, 86, -1, 86, 82, 83, -1, 80, 84, 87, -1, 87, 83, 80, -1, 85, 89, 88, -1, 88, 84, 85, -1, 86, 90, 89, -1, 89, 85, 86, -1, 87, 91, 90, -1, 90, 86, 87, -1, 84, 88, 91, -1, 91, 87, 84, -1, 89, 93, 92, -1, 92, 88, 89, -1, 90, 94, 93, -1, 93, 89, 90, -1, 91, 95, 94, -1, 94, 90, 91, -1, 88, 92, 95, -1, 95, 91, 88, -1, 93, 97, 96, -1, 96, 92, 93, -1, 94, 98, 97, -1, 97, 93, 94, -1, 95, 99, 98, -1, 98, 94, 95, -1, 92, 96, 99, -1, 99, 95, 92, -1, 97, 101, 100, -1, 100, 96, 97, -1, 98, 102, 101, -1, 101, 97, 98, -1, 99, 103, 102, -1, 102, 98, 99, -1, 96, 100, 103, -1, 103, 99, 96, -1, 101, 105, 104, -1, 104, 100, 101, -1, 102, 106, 105, -1, 105, 101, 102, -1, 103, 107, 106, -1, 106, 102, 103, -1, 100, 104, 107, -1, 107, 103, 100, -1, 105, 109, 108, -1, 108, 104, 105, -1, 106, 110, 109, -1, 109, 105, 106, -1, 107, 111, 110, -1, 110, 106, 107, -1, 104, 108, 111, -1, 111, 107, 104, -1, 109, 113, 112, -1, 112, 108, 109, -1, 110, 114, 113, -1, 113, 109, 110, -1, 111, 115, 114, -1, 114, 110, 111, -1, 108, 112, 115, -1, 115, 111, 108, -1, 113, 117, 116, -1, 116, 112, 113, -1, 114, 118, 117, -1, 117, 113, 114, -1, 115, 119, 118, -1, 118, 114, 115, -1, 112, 116, 119, -1, 119, 115, 112, -1, 117, 121, 120, -1, 120, 116, 117, -1, 118, 122, 121, -1, 121, 117, 118, -1, 119, 123, 122, -1, 122, 118, 119, -1, 116, 120, 123, -1, 123, 119, 116, -1, 121, 125, 124, -1, 124, 120, 121, -1, 122, 126, 125, -1, 125, 121, 122, -1, 123, 127, 126, -1, 126, 122, 123, -1, 120, 124, 127, -1, 127, 123, 120, -1, 125, 129, 128, -1, 128, 124, 125, -1, 126, 130, 129, -1, 129, 125, 126, -1, 127, 131, 130, -1, 130, 126, 127, -1, 124, 128, 131, -1, 131, 127, 124, -1, 60, 64, 65, -1, 65, 61, 60, -1, 61, 65, 66, -1, 66, 62, 61, -1, 62, 66, 67, -1, 67, 63, 62, -1, 63, 67, 64, -1, 64, 60, 63, -1, 64, 68, 69, -1, 69, 65, 64, -1, 65, 69, 70, -1, 70, 66, 65, -1, 66, 70, 71, -1, 71, 67, 66, -1, 67, 71, 68, -1, 68, 64, 67, -1, 68, 72, 73, -1, 73, 69, 68, -1, 69, 73, 74, -1, 74, 70, 69, -1, 70, 74, 75, -1, 75, 71, 70, -1, 71, 75, 72, -1, 72, 68, 71, -1, 72, 76, 77, -1, 77, 73, 72, -1, 73, 77, 78, -1, 78, 74, 73, -1, 74, 78, 79, -1, 79, 75, 74, -1, 75, 79, 76, -1, 76, 72, 75, -1, 76, 79, 78, -1, 78, 77, 76, -1, 129, 133, 132, -1, 132, 128, 129, -1, 130, 134, 133, -1, 133, 129, 130, -1, 131, 135, 134, -1, 134, 130, 131, -1, 128, 132, 135, -1, 135, 131, 128, -1, 133, 137, 136, -1, 136, 132, 133, -1, 134, 138, 137, -1, 137, 133, 134, -1, 135, 139, 138, -1, 138, 134, 135, -1, 132, 136, 139, -1, 139, 135, 132, -1, 137, 141, 140, -1, 140, 136, 137, -1, 138, 142, 141, -1, 141, 137, 138, -1, 139, 143, 142, -1, 142, 138, 139, -1, 136, 140, 143, -1, 143, 139, 136, -1, 141, 145, 144, -1, 144, 140, 141, -1, 142, 146, 145, -1, 145, 141, 142, -1, 143, 147, 146, -1, 146, 142, 143, -1, 140, 144, 147, -1, 147, 143, 140, -1, 145, 146, 147, -1, 147, 144, 145, -1, 148, 8, 9, -1, 9, 149, 148, -1, 149, 9, 10, -1, 10, 150, 149, -1, 150, 10, 11, -1, 11, 151, 150, -1, 151, 11, 8, -1, 8, 148, 151, -1, 152, 148, 149, -1, 149, 153, 152, -1, 153, 149, 150, -1, 150, 154, 153, -1, 154, 150, 151, -1, 151, 155, 154, -1, 155, 151, 148, -1, 148, 152, 155, -1, 156, 152, 153, -1, 153, 157, 156, -1, 158, 154, 155, -1, 155, 159, 158, -1, 160, 156, 157, -1, 157, 161, 160, -1, 161, 157, 158, -1, 158, 162, 161, -1, 162, 158, 159, -1, 159, 163, 162, -1, 163, 159, 156, -1, 156, 160, 163, -1, 164, 160, 161, -1, 161, 165, 164, -1, 165, 161, 162, -1, 162, 166, 165, -1, 166, 162, 163, -1, 163, 167, 166, -1, 167, 163, 160, -1, 160, 164, 167, -1, 153, 176, 177, -1, 177, 157, 153, -1, 157, 177, 178, -1, 178, 158, 157, -1, 158, 178, 179, -1, 179, 154, 158, -1, 154, 179, 176, -1, 176, 153, 154, -1, 176, 180, 181, -1, 181, 177, 176, -1, 177, 181, 182, -1, 182, 178, 177, -1, 178, 182, 183, -1, 183, 179, 178, -1, 179, 183, 180, -1, 180, 176, 179, -1, 180, 184, 185, -1, 185, 181, 180, -1, 181, 185, 186, -1, 186, 182, 181, -1, 182, 186, 187, -1, 187, 183, 182, -1, 183, 187, 184, -1, 184, 180, 183, -1, 184, 188, 189, -1, 189, 185, 184, -1, 185, 189, 190, -1, 190, 186, 185, -1, 186, 190, 191, -1, 191, 187, 186, -1, 187, 191, 188, -1, 188, 184, 187, -1, 152, 156, 201, -1, 201, 200, 152, -1, 156, 159, 202, -1, 202, 201, 156, -1, 159, 155, 203, -1, 203, 202, 159, -1, 155, 152, 200, -1, 200, 203, 155, -1, 201, 205, 204, -1, 204, 200, 201, -1, 202, 206, 205, -1, 205, 201, 202, -1, 203, 207, 206, -1, 206, 202, 203, -1, 200, 204, 207, -1, 207, 203, 200, -1, 205, 209, 208, -1, 208, 204, 205, -1, 206, 210, 209, -1, 209, 205, 206, -1, 207, 211, 210, -1, 210, 206, 207, -1, 204, 208, 211, -1, 211, 207, 204, -1, 209, 213, 212, -1, 212, 208, 209, -1, 210, 214, 213, -1, 213, 209, 210, -1, 211, 215, 214, -1, 214, 210, 211, -1, 208, 212, 215, -1, 215, 211, 208, -1, 172, 164, 165, -1, 165, 173, 172, -1, 173, 165, 166, -1, 166, 174, 173, -1, 174, 166, 167, -1, 167, 175, 174, -1, 175, 167, 164, -1, 164, 172, 175, -1, 168, 172, 173, -1, 173, 169, 168, -1, 169, 173, 174, -1, 174, 170, 169, -1, 170, 174, 175, -1, 175, 171, 170, -1, 171, 175, 172, -1, 172, 168, 171, -1, 171, 168, 169, -1, 169, 170, 171, -1, 188, 192, 193, -1, 193, 189, 188, -1, 189, 193, 194, -1, 194, 190, 189, -1, 190, 194, 195, -1, 195, 191, 190, -1, 191, 195, 192, -1, 192, 188, 191, -1, 192, 196, 197, -1, 197, 193, 192, -1, 193, 197, 198, -1, 198, 194, 193, -1, 194, 198, 199, -1, 199, 195, 194, -1, 195, 199, 196, -1, 196, 192, 195, -1, 196, 199, 198, -1, 198, 197, 196, -1, 213, 217, 216, -1, 216, 212, 213, -1, 214, 218, 217, -1, 217, 213, 214, -1, 215, 219, 218, -1, 218, 214, 215, -1, 212, 216, 219, -1, 219, 215, 212, -1, 217, 221, 220, -1, 220, 216, 217, -1, 218, 222, 221, -1, 221, 217, 218, -1, 219, 223, 222, -1, 222, 218, 219, -1, 216, 220, 223, -1, 223, 219, 216, -1, 221, 222, 223, -1, 223, 220, 221, -1},
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("SKINCOORD"),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("StopAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("StopTimer"),
                            },
                            CycleInterval: doublePtr(5.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_humanoid_root_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_humanoid_root_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_sacroiliac_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_subtalar_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_midtarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_metatarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_subtalar_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_midtarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_metatarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vl5_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vl4_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vl3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vl2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vl1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt12_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt11_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt10_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt9_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt8_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt7_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt6_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt5_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt4_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vt1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc7_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc6_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc5_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc4_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_vc1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_skullbase_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_eyeball_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_eyeball_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_sternoclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_acromioclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_thumb1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_thumb2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_thumb3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_index0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_index1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_index2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_index3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_middle0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_middle1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_middle2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_middle3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_ring0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_ring1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_ring2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_ring3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_pinky0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_pinky1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_pinky2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_l_pinky3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_sternoclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_acromioclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_thumb1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_thumb2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_thumb3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_index0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_index1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_index2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_index3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_middle0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_middle1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_middle2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_middle3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_ring0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_ring1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_ring2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_ring3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_pinky0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_pinky1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_pinky2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stop_r_pinky3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("StandAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("StandTimer"),
                            },
                            CycleInterval: doublePtr(5.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.015, 1.0, 0.0, 0.0, 0.17, -1.0, 0.0, 0.0, 0.025, 1.0, 0.0, 0.0, 0.01, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.25, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_head_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_eyeball_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.45, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_eyeball_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.45, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.1, 1.0, 0.0, 0.0, 0.27, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_index1_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.1, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.3, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_index2_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.4, 0.0, 0.0, 1.0, 0.32, 0.0, 0.0, 1.0, 0.25, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Stand_r_index3_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.3, 0.0, 0.0, 1.0, 0.35, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("PitchesAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("PitchTimer"),
                            },
                            CycleInterval: doublePtr(5.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.5, -1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.75, -1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_head_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.55, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.55, -1.0, 0.0, 0.0, 1.05, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitches_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.125, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.15,0.0},[3]float32{0.0,-0.7,0.0},[3]float32{0.0,-0.15,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.15,0.0},[3]float32{0.0,-0.7,0.0},[3]float32{0.0,-0.15,0.0},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.25, 1.0, 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.27, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Pitch_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.25, 1.0, 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.27, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("YawsAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("YawTimer"),
                            },
                            CycleInterval: doublePtr(5.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_head_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaws_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.1, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.24, 0.0, -1.0, 0.0, 0.4, 0.0, 1.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Yaw_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("RollsAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("RollTimer"),
                            },
                            CycleInterval: doublePtr(5.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, -1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, -1.0, 3.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 3.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_head_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.25, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.25, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Rolls_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.125, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.25,0.0},[3]float32{0.0,-0.8,0.0},[3]float32{0.0,-0.25,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.25,0.0},[3]float32{0.0,-0.8,0.0},[3]float32{0.0,-0.25,0.0},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.22, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.05, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -0.2, 0.0, 0.0, 1.0, -0.22, 0.0, 0.0, 1.0, -0.2, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -0.05, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Roll_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("WalkAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("WalkTimer"),
                            },
                            CycleInterval: doublePtr(1.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.4583, 0.5, 0.6667, 0.75, 0.7917, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.3533, -1.0, 0.0, 0.0, 0.1072, 1.0, 0.0, 0.0, 0.2612, 1.0, 0.0, 0.0, 0.1268, -1.0, 0.0, 0.0, 0.01793, -1.0, 0.0, 0.0, 0.05824, -1.0, 0.0, 0.0, 0.2398, -1.0, 0.0, 0.0, 0.35, -1.0, 0.0, 0.0, 0.3322, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.2917, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.8573, 1.0, 0.0, 0.0, 0.8926, 1.0, 0.0, 0.0, 0.5351, 1.0, 0.0, 0.0, 0.1756, 1.0, 0.0, 0.0, 0.1194, 1.0, 0.0, 0.0, 0.3153, 1.0, 0.0, 0.0, 0.09354, 1.0, 0.0, 0.0, 0.08558, 1.0, 0.0, 0.0, 0.2475, 1.0, 0.0, 0.0, 0.8573},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.2917, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-0.5831, 0.03511, 0.8116, 0.1481, -0.995, 0.02296, 0.09674, 0.4683, -1.0, 0.00192, 0.007964, 0.4732, -0.998, -0.0158, -0.06102, 0.5079, -0.9911, -0.03541, -0.1286, 0.5419, -0.9131, -0.06243, -0.403, 0.3361, -0.4306, -0.07962, -0.899, 0.07038, 1.0, 0.0, 0.0, 0.2571, 0.9891, -0.02805, 0.1444, 0.3879, -0.5831, 0.03511, 0.8116, 0.1481},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.125, 0.2083, 0.375, 0.6667, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.06714, -1.0, 0.0, 0.0, 0.2152, -1.0, 0.0, 0.0, 0.3184, -1.0, 0.0, 0.0, 0.4717, -1.0, 0.0, 0.0, 0.2912, 1.0, 0.0, 0.0, 0.1222, -1.0, 0.0, 0.0, 0.06714},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2083, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.3226, 1.0, 0.0, 0.0, 0.1556, 1.0, 0.0, 0.0, 0.08678, 1.0, 0.0, 0.0, 0.8751, 1.0, 0.0, 0.0, 1.131, 1.0, 0.0, 0.0, 0.09961, 1.0, 0.0, 0.0, 0.3942, 1.0, 0.0, 0.0, 0.3226},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-0.873, 0.06094, 0.484, 0.2865, 0.9963, -0.01057, 0.08481, 0.2488, 0.9965, 0.01591, -0.08222, 0.3836, -0.7018, -0.03223, -0.7117, 0.1289, -1.0, 0.0, 0.0, 0.5518, -0.9964, 0.02231, 0.0817, 0.5351, -0.9809, 0.04912, 0.1881, 0.5204, -0.873, 0.06094, 0.484, 0.2865},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, -1.0, 0.1056, 0.0, 0.0, 1.0, 0.09018, 0.0, 0.0, -1.0, 0.1056},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-0.8129, 0.4759, -0.3357, 0.1346, 0.1533, -0.9878, 0.02582, 0.3902, -0.5701, 0.7604, -0.311, 0.366, -0.8129, 0.4759, -0.3357, 0.1346},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.411508, -1.0, 0.0, 0.0, 0.0925011, -1.0, 0.0, 0.0, 0.572568, -1.0, 0.0, 0.0, 0.411508},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.09346, 1.0, 0.0, 0.0, 0.3197, -1.0, 0.0, 0.0, 0.1564, -1.0, 0.0, 0.0, 0.09346},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{0.0, -1.0, 0.0, 0.461076, -0.330195, -0.927451, 0.175516, 0.538852, 0.0327774, -0.999314, -0.0172185, 0.492033, 0.0, -1.0, 0.0, 0.461076},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.0659878, -1.0, 0.0, 0.0, 0.488383, -1.0, 0.0, 0.0, 0.0177536, -1.0, 0.0, 0.0, 0.0659878},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.1189, -1.0, 0.0, 0.0, 0.1861, 1.0, 0.0, 0.0, 0.3357, 1.0, 0.0, 0.0, 0.1189},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_head_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.375, 0.4167, 0.5, 0.5833, 0.6667, 0.75, 0.8333, 0.9167, 1.0},
                            KeyValue: x3d.MFRotation{0.0, -1.0, 0.0, 0.08642, 0.0, 1.0, 0.0, 0.1825, 0.0, 1.0, 0.0, 0.1505, 0.0, 1.0, 0.0, 0.1053, 0.0, 1.0, 0.0, 0.04391, 0.0, -1.0, 0.0, 0.03119, 0.0, -1.0, 0.0, 0.07936, 0.0, -1.0, 0.0, 0.1616, 0.0, -1.0, 0.0, 0.155, 0.0, -1.0, 0.0, 0.08642},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2083, 0.375, 0.75, 0.8333, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0826, -0.01972, -0.5974, 0.8017, 0.08231, 0.009296, -0.9648, 0.2627, 0.1734, -0.01238, 0.9549, -0.2968, 0.08732, -0.008125, 0.9691, -0.2463, 0.158, 0.0, 1.0, 0.0, 0.0826},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.04167, 0.125, 0.1667, 0.2083, 0.25, 0.2917, 0.375, 0.4583, 0.5, 0.5417, 0.5833, 0.625, 0.7083, 0.75, 0.7917, 0.875, 0.9167, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,-0.00928,0.0},[3]float32{0.0,-0.003858,0.0},[3]float32{0.0,-0.008847,0.0},[3]float32{0.0,-0.01486,0.0},[3]float32{0.0,-0.02641,0.0},[3]float32{0.0,-0.03934,0.0},[3]float32{0.0,-0.0502,0.0},[3]float32{0.0,-0.07469,0.0},[3]float32{0.0,-0.02732,0.0},[3]float32{0.0,-0.01608,0.0},[3]float32{0.0,-0.01129,0.0},[3]float32{0.0,-0.005819,0.0},[3]float32{0.0,-0.002004,0.0},[3]float32{0.0,-0.002579,0.0},[3]float32{0.0,-0.0143,0.0},[3]float32{0.0,-0.03799,0.0},[3]float32{0.0,-0.05648,0.0},[3]float32{0.0,-0.045,0.0},[3]float32{0.0,-0.00928,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.25, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Walk_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.25, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("RunAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("RunTimer"),
                            },
                            CycleInterval: doublePtr(0.9),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_hip_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                            KeyValue: x3d.MFRotation{-0.99, 0.033, 0.04, 1.42, -0.99, 0.1328, 0.067, 0.42, 0.99, 0.014, 0.009, 0.9, -0.99, 0.0703, 0.05, 0.7, -0.99, 0.033, 0.04, 1.42},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_knee_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 1.01, 1.0, 0.0, 0.0, 0.426, 1.0, 0.0, 0.0, 0.705, 1.0, 0.0, 0.0, 2.179, 1.0, 0.0, 0.0, 1.01},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_ankle_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.22, 0.3, 0.4, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0374, -1.0, 0.0, 0.0, 0.1037, -1.0, 0.0, 0.0, 0.4328, 1.0, 0.0, 0.0, 0.1929, 1.0, 0.0, 0.0, 0.03574},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_hip_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7091, 1.0},
                            KeyValue: x3d.MFRotation{0.99, -0.014, 0.009, 0.9, -0.99, -0.0703, -0.05, 0.7, -0.99, -0.033, 0.04, 1.42, -0.99, -0.1328, -0.067, 0.42, 0.99, -0.014, 0.009, 0.9},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_knee_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7091, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.705, 1.0, 0.0, 0.0, 2.179, 1.0, 0.0, 0.0, 1.01, 1.0, 0.0, 0.0, 0.426, 1.0, 0.0, 0.0, 0.705},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_ankle_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 0.71, 0.8, 0.82, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.2323, -1.0, 0.0, 0.0, 0.07843, -1.0, 0.0, 0.0, 0.32, -1.0, 0.0, 0.0, 0.374, -1.0, 0.0, 0.0, 0.3478, 1.0, 0.0, 0.0, 0.2323},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_shoulder_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                            KeyValue: x3d.MFRotation{0.99, -0.074, 0.25, 1.5, 0.99, -0.092, 0.44, 0.3, -0.99, 0.136, 0.25, 0.85, 0.99, -0.081, 0.38, 0.4, 0.99, -0.074, 0.25, 1.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_elbow_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 1.85, -0.99, -0.19, 0.18, 1.35, -1.0, 0.0, 0.0, 0.975, -0.99, -0.09, -0.02, 1.55, -1.0, 0.0, 0.0, 1.85},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_wrist_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{-0.25, -1.0, 0.08, 0.14, 0.25, 1.0, 0.08, 0.14, 0.0, 0.0, 1.0, 0.0, -0.25, 1.0, 0.08, -0.14, -0.25, 1.0, 0.08, 0.14},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_shoulder_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7091, 1.0},
                            KeyValue: x3d.MFRotation{-0.99, -0.136, -0.25, 0.85, 0.99, 0.081, -0.38, 0.4, 0.99, 0.074, -0.25, 1.5, 0.99, 0.081, -0.38, 0.4, -0.99, -0.136, -0.25, 0.85},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_elbow_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7091, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.975, -0.99, 0.09, 0.02, 1.55, -1.0, 0.0, 0.0, 1.85, -0.99, 0.19, -0.18, 1.35, -1.0, 0.0, 0.0, 0.975},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_wrist_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.917742, -0.237244, -0.318536, 0.214273, -0.917742, -0.237244, -0.318536, 0.214273},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_lower_body_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2182, 0.4909, 0.7455, 1.0},
                            KeyValue: x3d.MFRotation{0.0, -1.0, 0.0, 0.125, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.125, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 0.125},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_head_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7091, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.08, 1.0, 0.0, 0.0, 0.12, 1.0, 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.3, 1.0, 0.0, 0.0, 0.08},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_neck_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7091, 1.0},
                            KeyValue: x3d.MFRotation{0.7, 0.0, 0.0, 0.4, -0.7, -0.7, 0.0, 0.4, 0.0, 0.0, 0.0, 0.4, -0.7, 0.7, 0.0, 0.4, 0.7, 0.0, 0.0, 0.4},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_upper_body_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2545, 0.4909, 0.7636, 1.0},
                            KeyValue: x3d.MFRotation{0.97, 0.65, 0.086, 0.5, 0.9, 0.003, -0.02, 0.38, 0.95, -0.68, -0.086, 0.5, 0.9, 0.004, -0.025, 0.4, 0.97, 0.65, 0.086, 0.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_whole_body_RotationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.06, 1.0, 0.0, 0.0, 0.167, 1.0, 0.0, 0.0, 0.06, 1.0, 0.0, 0.0, 0.168, 1.0, 0.0, 0.0, 0.06},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_whole_body_TranslationInterpolator_Run"),
                            },
                            Key: x3d.MFFloat{0.0, 0.22, 0.3, 0.31, 0.5, 0.69, 0.7, 0.78, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,-0.01,0.0},[3]float32{0.0,-0.037,0.0},[3]float32{0.0,-0.049,0.0},[3]float32{0.0,-0.037,0.0},[3]float32{0.0,-0.01,0.0},[3]float32{0.0,-0.037,0.0},[3]float32{0.0,-0.049,0.0},[3]float32{0.0,-0.037,0.0},[3]float32{0.0,-0.01,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.25, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.27, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Run_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.25, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.27, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("JumpAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("JumpTimer"),
                            },
                            CycleInterval: doublePtr(3.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.1, 0.15, 0.25, 0.28, 0.32, 0.35, 0.64, 0.76, 0.84, 0.88, 0.92, 0.96, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.6735, -1.0, 0.0, 0.0, 0.6735, -1.0, 0.0, 0.0, 0.3527, -1.0, 0.0, 0.0, 0.3038, -1.0, 0.0, 0.0, 0.07964, 1.0, 0.0, 0.0, 1.3, 1.0, 0.0, 0.0, 0.6509, 1.0, 0.0, 0.0, 0.3001, -1.0, 0.0, 0.0, 0.2087, -1.0, 0.0, 0.0, 0.3756, -1.0, 0.0, 0.0, 0.3279, -1.0, 0.0, 0.0, 0.1193, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.25, 0.3, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 2.5, 1.0, 0.0, 0.0, 1.7, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.9507, 1.0, 0.0, 0.0, 0.5845, 1.0, 0.0, 0.0, 0.9054, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.18, 0.24, 0.26, 0.28, 0.32, 0.48, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.63, -1.0, 0.0, 0.0, 1.7, -1.0, 0.0, 0.0, 1.55, -1.0, 0.0, 0.0, 0.8943, -1.0, 0.0, 0.0, 0.3698, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.4963, -1.0, 0.0, 0.0, 0.3829, -1.0, 0.0, 0.0, 0.5169, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.84, 0.88, 0.92, 0.96, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.625, -1.0, 0.0, 0.0, 0.625, -1.0, 0.0, 0.0, 0.3364, -1.0, 0.0, 0.0, 0.2742, -1.0, 0.0, 0.0, 0.05078, 1.0, 0.0, 0.0, 0.2833, 1.0, 0.0, 0.0, 0.6667, 1.0, 0.0, 0.0, 0.2833, -1.0, 0.0, 0.0, 0.2108, -1.0, 0.0, 0.0, 0.375, -1.0, 0.0, 0.0, 0.3146, -1.0, 0.0, 0.0, 0.1174, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 2.047, 1.0, 0.0, 0.0, 2.047, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.566, 1.0, 0.0, 0.0, 0.5913, 1.0, 0.0, 0.0, 0.9235, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.36, 0.4, 0.44, 0.48, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 4.349, 1.0, 0.0, 0.0, 4.349, 1.0, 0.0, 0.0, 4.615, -1.0, 0.0, 0.0, 0.9136, -1.0, 0.0, 0.0, 0.3614, 0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.7869, -1.0, 0.0, 0.0, 0.3918, -1.0, 0.0, 0.0, 0.5433, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.76, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.1892, 1.0, 0.0, 0.0, 0.1892, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -0.0585279, 0.983903, -0.168849, 1.85956, -0.0585279, 0.983903, -0.168849, 1.85956, -0.00222418, 0.99801, -0.0630095, 1.46072, 0.0, 1.0, 0.0, 0.497349, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.04151, -1.0, 0.0, 0.0, 0.04151, -1.0, 0.0, 0.0, 0.5855, -1.0, 0.0, 0.0, 0.5852, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.9992, 0.02042, 0.03558, 4.688, 0.9992, 0.02042, 0.03558, 4.688, 0.9989, -0.04623, 0.005159, 4.079, -0.8687, -0.2525, -0.4261, 1.501, -0.941, -0.2893, -0.1754, 0.4788, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.48, 0.52, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0672928, 0.989475, -0.128107, 4.15574, 0.0672928, 0.989475, -0.128107, 4.15574, 0.00364942, 0.999901, 0.0135896, 4.5822, 0.0, -1.0, 0.0, 0.655922, -0.00050618, -0.999999, 0.0012782, 1.28397, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.58, 0.72, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 1.13, -1.0, 0.0, 0.0, 1.7, -1.0, 0.0, 0.0, 1.7, -1.0, 0.0, 0.0, 0.4, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.64, 0.76, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -0.9987, 0.02554, 0.04498, 1.57, -0.9987, 0.02554, 0.04498, 1.57, 1.0, 0.0004113, 0.003055, 4.114, -0.8413, 0.3238, 0.4329, 1.453, -0.877, 0.4198, 0.2337, 0.6009, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_head_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.76, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.5989, -1.0, 0.0, 0.0, 0.5989, -1.0, 0.0, 0.0, 0.3216, 1.0, 0.0, 0.0, 0.06503, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.76, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.1942, -1.0, 0.0, 0.0, 0.1942, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.2284, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.22, 0.28, 0.34, 0.71, 0.88, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.05, 1.0, 0.0, 0.0, 1.051, -1.0, 0.0, 0.0, 0.257, 1.0, 0.0, 0.0, 0.2171, 1.0, 0.0, 0.0, 0.3465, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.28, 0.32, 0.48, 0.64, 0.76, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.3273, 1.0, 0.0, 0.0, 0.3273, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.04, 0.07, 0.11, 0.15, 0.19, 0.22, 0.25, 0.27, 0.31, 0.33, 0.35, 0.38, 0.53, 0.544, 0.76, 0.8, 0.84, 0.88, 0.92, 0.96, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-0.01264,-0.01289},[3]float32{0.0,-0.04712,-0.03738},[3]float32{-0.0003345,-0.1049,-0.05353},[3]float32{-0.0005712,-0.1892,-0.06561},[3]float32{-0.0008233,-0.286,-0.06276},[3]float32{-0.0009591,-0.3795,-0.05148},[3]float32{-0.00106,-0.4484,-0.03656},[3]float32{-0.00106,-0.4484,-0.03656},[3]float32{-0.001122,-0.25,-0.1499},[3]float32{-0.0008616,-0.05,-0.06358},[3]float32{-0.0005128,0.15,-0.05488},[3]float32{0.0004779,0.55,0.02732},[3]float32{0.0001728,1.385,0.006873},[3]float32{0.00017,1.395,0.0069},[3]float32{0.0,0.35,0.02148},[3]float32{0.0,-0.01299,-0.01057},[3]float32{0.0,-0.06932,-0.01064},[3]float32{0.0001365,-0.1037,-0.005059},[3]float32{0.0001279,-0.07198,-0.007596},[3]float32{0.000141,-0.01626,-0.004935},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.22, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.05, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -0.2, 0.0, 0.0, 1.0, -0.22, 0.0, 0.0, 1.0, -0.2, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -0.05, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.1, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -1.0, 0.24, 0.0, -1.0, 0.0, 0.4, 0.0, 1.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, -0.1, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.6, 0.0, 1.0, 0.0, 0.1, 0.0, 1.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.8, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.6, 0.0, -1.0, 0.0, 0.8, 0.0, 1.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 1.1, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Jump_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 1.1, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("KickAnimation"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("KickTimer"),
                            },
                            CycleInterval: doublePtr(3.73),
                            Loop: boolPtr(true),
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.22, 0.0, 0.0, 1.0, 0.2, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.05, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_shoulder_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.76, -0.25, 0.0, 1.0, 1.76, 0.0, 0.0, 1.0, 1.256, 0.0, 0.0, 1.0, 0.05, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_ForeArm_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.55, -1.0, 0.25, 0.0, 2.55, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_wrist_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.55, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 1.1, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_sternoclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -0.2, 0.0, 0.0, 1.0, -0.22, 0.0, 0.0, 1.0, -0.2, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_acromioclavicular_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -0.05, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_shoulder_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -1.76, 0.25, 0.0, 1.0, -1.76, 0.0, 0.0, 1.0, -1.256, 0.0, 0.0, 1.0, -0.05, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_ForeArm_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.55, 1.0, 0.25, 0.0, -2.55, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_wrist_RollInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, -0.55, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_thumb1_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 1.1, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_hip_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.3, 0.5, 0.6, 0.9, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 1.75, -1.0, 0.0, 0.0, 2.25, -1.0, 0.0, 0.0, 2.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_knee_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.95, 1.0, 0.0, 0.0, 1.75, -1.0, 0.0, 0.0, 0.28, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_hip_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.3, 0.5, 0.6, 0.9, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_l_knee_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_ankle_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, -1.0, 0.0, 0.0, 0.9, -1.0, 0.0, 0.0, 0.95, 1.0, 0.0, 0.0, 0.75, -1.0, 0.0, 0.0, 0.05, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_r_metatarsal_PitchInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.5, -1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.75, -1.0, 0.0, 0.0, 0.2, 1.0, 0.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_sacroiliac_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.1, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -1.0, 0.24, 0.0, -1.0, 0.0, 0.4, 0.0, 1.0, 0.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_vl5_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_vc6_YawInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_lower_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_upper_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_whole_body_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_whole_body_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Kick_neck_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.55, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.7, 1.0, 0.0, 0.0, 0.5, 0.0, 0.0, 1.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Interface"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CoordinateSystemFloor"),
                                },
                                Scale: &x3d.SFVec3f{0.1, 0.1, 0.1},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("AxisLinesShape"),
                                    },
                                    Geometry: &x3d.IndexedLineSet{
                                        ColorPerVertex: boolPtr(false),
                                        ColorIndex: []int32{0, 1, 2},
                                        CoordIndex: []int32{0, 1, -1, 0, 2, -1, 0, 3, -1},
                                        Color: &x3d.Color{
                                            Color: &x3d.MFColor{[3]float32{1.0,0.0,0.0},[3]float32{0.0,0.6,0.0},[3]float32{0.0,0.0,1.0}},
                                        },
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{1.0,0.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,0.0,1.0}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.ProximitySensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("HudProx"),
                            },
                            Size: &x3d.SFVec3f{50.0, 50.0, 50.0},
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("HudXform"),
                                },
                                Translation: &x3d.SFVec3f{2.0, 1.0, 2.0},
                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.78},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{-0.4, -0.01, -0.75},
                                        Scale: &x3d.SFVec3f{0.02, 0.02, 0.02},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Stand_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -0.9, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Stand_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("StandText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("text_color"),
                                                            },
                                                            AmbientIntensity: floatPtr(1.0),
                                                            DiffuseColor: &x3d.SFColor{0.819, 0.521, 0.169},
                                                            SpecularColor: &x3d.SFColor{0.819, 0.521, 0.169},
                                                            EmissiveColor: &x3d.SFColor{0.819, 0.521, 0.169},
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Stand"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Stand_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Clear"),
                                                            },
                                                            AmbientIntensity: floatPtr(1.0),
                                                            DiffuseColor: &x3d.SFColor{0.0, 0.5, 0.0},
                                                            EmissiveColor: &x3d.SFColor{0.0, 0.5, 0.0},
                                                            Transparency: floatPtr(0.8),
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("Backing"),
                                                        },
                                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{-0.2,-0.25,-0.01},[3]float32{3.0,-0.25,-0.01},[3]float32{3.0,1.0,-0.01},[3]float32{-0.2,1.0,-0.01}},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Pitch_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -2.4, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Pitch_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("PitchText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Pitch"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Pitch_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Yaw_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -3.8, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Yaw_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("YawText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Yaw"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Yaw_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Roll_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -5.2, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Roll_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("RollText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Roll"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Roll_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Walk_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -6.6, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Walk_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("WalkText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Walk"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Walk_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Run_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -8.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Run_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("RunText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Run"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Run_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Jump_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -9.4, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Jump_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("JumpText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Jump"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Jump_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Kick_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, -10.8, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Kick_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("KickText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Kick"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Kick_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Stop_Text"),
                                                },
                                                Translation: &x3d.SFVec3f{0.0, 0.4, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Stop_Touch"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("StopText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"Default"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                        },
                                                    },
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Stop_Back"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Clear"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.IndexedFaceSet{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("Backing"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("SceneLabel"),
                                                },
                                                Translation: &x3d.SFVec3f{1.3, 3.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("SceneLabelText"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("text_color"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"BoxMan3", "Animation"},
                                                        FontStyle: &x3d.FontStyle{
                                                            Family: x3d.MFString{"SANS"},
                                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_humanoid_root_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_humanoid_root_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_sacroiliac_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_subtalar_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_midtarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_metatarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_subtalar_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_midtarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_metatarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vl5_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vl4_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vl3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vl2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vl1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt12_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt11_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt10_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt9_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt8_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt7_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt6_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt5_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt4_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vt1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc7_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc6_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc5_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc4_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_vc1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_skullbase_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_eyeball_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_eyeball_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_sternoclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_acromioclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_thumb1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_thumb2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_thumb3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_index0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_index1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_index2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_index3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_middle0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_middle1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_middle2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_middle3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_ring0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_ring1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_ring2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_ring3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_pinky0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_pinky1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_pinky2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_l_pinky3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_sternoclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_acromioclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_thumb1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_thumb2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_thumb3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_index0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_index1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_index2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_index3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_middle0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_middle1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_middle2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_middle3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_ring0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_ring1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_ring2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_ring3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_pinky0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_pinky1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_pinky2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StopTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stop_r_pinky3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_humanoid_root_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_humanoid_root_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_midtarsal_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_midtarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_midtarsal_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_midtarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_vl5_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_skullbase_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_head_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_eyeball_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_eyeball_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_index1_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_index2_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StandTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Stand_r_index3_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_head_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_head_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitches_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("PitchTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Pitch_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_head_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitches_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_head_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaws_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("YawTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Yaw_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_head_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaws_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_head_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Rolls_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RollTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Roll_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_head_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Rolls_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_head_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WalkTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Walk_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_head_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_ankle_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_knee_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_hip_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_ankle_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_knee_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_hip_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_lower_body_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_wrist_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_elbow_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_shoulder_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_wrist_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_elbow_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_shoulder_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_head_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_neck_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_upper_body_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_whole_body_RotationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_whole_body_TranslationInterpolator_Run"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RunTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Run_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_r_ankle_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_r_knee_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_r_hip_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_l_ankle_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_l_knee_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_l_hip_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_r_wrist_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_r_elbow_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_r_shoulder_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_l_wrist_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_l_elbow_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_l_shoulder_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_head_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_whole_body_RotationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_whole_body_TranslationInterpolator_Run"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_head_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("JumpTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Jump_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_head_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_shoulder_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_ForeArm_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_wrist_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_sternoclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_acromioclavicular_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_shoulder_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_ForeArm_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_wrist_RollInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_thumb1_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_hip_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_knee_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_hip_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_l_knee_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_ankle_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_r_metatarsal_PitchInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_sacroiliac_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_vl5_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_vc6_YawInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_lower_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_upper_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_whole_body_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_whole_body_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Kick_neck_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_l_shoulder_RollInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_l_ForeArm_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_l_wrist_RollInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_shoulder_RollInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_ForeArm_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_wrist_RollInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_hip_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_knee_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_ankle_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_l_hip_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_l_knee_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_r_ankle_PitchInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_vl5_YawInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_whole_body_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_whole_body_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("boxman_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("HudProx"),
                    FromField: stringPtr("position_changed"),
                    ToNode: stringPtr("HudXform"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("HudProx"),
                    FromField: stringPtr("orientation_changed"),
                    ToNode: stringPtr("HudXform"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stand_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Pitch_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Yaw_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Walk_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Roll_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Run_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Jump_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Kick_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StandTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("PitchTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("YawTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RollTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("WalkTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("RunTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("JumpTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("KickTimer"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Stop_Touch"),
                    FromField: stringPtr("touchTime"),
                    ToNode: stringPtr("StopTimer"),
                    ToField: stringPtr("set_startTime"),
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
	filename := "../data/BoxMan3AnimationPanel.new.go.x3d"
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