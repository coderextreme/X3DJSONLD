
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
                    Content: stringPtr("JoeSkinTexcoordDisplacerKick.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("translated from .x3dv to .xml for web3d archive"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("modified to correct root and vc7 hierarchies"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations."),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("15 January 2004"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("12 January 2017"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:38:39 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("move to a different directory once validated working as HAnim 2"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes"),
            },
            &x3d.Meta{
                Name: stringPtr("error"),
                Content: stringPtr("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Joe D Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Roy Walmsley"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("BS studio translation from .x3dv by Joe using BS Contact"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"),
                    Info: x3d.MFString{"X3D Humanoid V1 LOA3 skeleton", "skin from hanim sites, surface features, and some added points", "390 points"},
                },
                &x3d.NavigationInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Start_NavigationInfo"),
                    },
                    Speed: floatPtr(2.5),
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("blue_Background"),
                    },
                },
                &x3d.SpotLight{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("light1"),
                    },
                    Color: &x3d.SFColor{0.8, 0.8, 1.0},
                    AmbientIntensity: floatPtr(0.7),
                    Location: &x3d.SFVec3f{0.0, 3.0, 3.0},
                    Direction: &x3d.SFVec3f{0.0, 0.0, 0.0},
                    Radius: floatPtr(10.0),
                    BeamWidth: floatPtr(1.5),
                    CutOffAngle: floatPtr(0.6),
                },
                &x3d.PointLight{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("light2"),
                    },
                    Color: &x3d.SFColor{0.8, 0.8, 1.0},
                    AmbientIntensity: floatPtr(0.7),
                    Location: &x3d.SFVec3f{0.0, 10.0, -7.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_InclinedView"),
                    },
                    Description: stringPtr("Scene_Inclined View"),
                    Position: &x3d.SFVec3f{1.62, 1.05, 3.06},
                    Orientation: &x3d.SFRotation{-0.113, 0.993, 0.0347, 0.671},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.85, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_FrontView"),
                    },
                    Description: stringPtr("Scene Front View"),
                    Position: &x3d.SFVec3f{0.0, 0.8, 2.58},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_SideView"),
                    },
                    Description: stringPtr("Scene Side View"),
                    Position: &x3d.SFVec3f{2.6, 0.5, 0.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_BackView"),
                    },
                    Description: stringPtr("Scene Back View"),
                    Position: &x3d.SFVec3f{0.0, 2.5, -3.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_TopView"),
                    },
                    Description: stringPtr("Scene Top View"),
                    Position: &x3d.SFVec3f{0.0, 3.5, 0.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Joe_Humanoid"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Joe_Human"),
                            },
                            Name: stringPtr("Human"),
                            Version: stringPtr("1.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Joe_HumanoidRoot"),
                                    },
                                    Name: stringPtr("humanoid_root"),
                                    Translation: &x3d.SFVec3f{0.3587936, -0.03005362, -0.3715818},
                                    Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 0.24316354478652},
                                    Center: &x3d.SFVec3f{0.0, 0.875, 0.0},
                                    Metadata: &x3d.MetadataSet{
                                        Name: stringPtr("warnings"),
                                        Reference: stringPtr("HAnim"),
                                        &x3d.MetadataString{
                                            Name: stringPtr("SymmetricalLeftRight"),
                                            Reference: stringPtr("correction options: ignore, warn, average, left, right, largest, smallest"),
                                            Value: x3d.MFString{"ignore"},
                                        },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Joe_sacrum"),
                                            },
                                            Name: stringPtr("sacrum"),
                                            &x3d.HAnimSite{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Joe_RootFront_view"),
                                                },
                                                Name: stringPtr("RootFront_view"),
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanimcordsys"),
                                                        },
                                                        Scale: &x3d.SFVec3f{0.175, 0.175, 0.175},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Viewpoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("ViewBodyRootAxes"),
                                                            },
                                                            Description: stringPtr("Joe_HAnim Root HAnimSite Coordinate Axes View"),
                                                        },
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
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Joe_sacroiliac"),
                                            },
                                            Name: stringPtr("sacroiliac"),
                                            Center: &x3d.SFVec3f{0.0, 0.92, 0.0},
                                            SkinCoordIndex: []int32{17, 19, 20, 21, 22, 23, 26, 27, 73, 82, 89, 91, 93},
                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.35, 0.35, 1.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Joe_l_hip"),
                                                    },
                                                    Name: stringPtr("l_hip"),
                                                    Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.357908885886056},
                                                    Center: &x3d.SFVec3f{0.1, 0.92, 0.0},
                                                    SkinCoordIndex: []int32{89, 90, 94, 95, 96, 97},
                                                    SkinCoordWeight: x3d.MFFloat{0.65, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Joe_l_knee"),
                                                            },
                                                            Name: stringPtr("l_knee"),
                                                            Rotation: &x3d.SFRotation{0.0, 0.0, 0.999999999999985, 0.0378909729654183},
                                                            Center: &x3d.SFVec3f{0.115, 0.466, 0.0},
                                                            SkinCoordIndex: []int32{334, 335, 336, 337, 338, 339, 340, 341},
                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("Joe_l_ankle"),
                                                                    },
                                                                    Name: stringPtr("l_ankle"),
                                                                    Rotation: &x3d.SFRotation{-0.999999999999979, 0.0, 0.0, 0.0863270759582537},
                                                                    Center: &x3d.SFVec3f{0.115, 0.069, 0.0},
                                                                    SkinCoordIndex: []int32{342, 343, 344, 345},
                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("Joe_l_subtalar"),
                                                                            },
                                                                            Name: stringPtr("l_subtalar"),
                                                                            Center: &x3d.SFVec3f{0.115, 0.031, 0.03},
                                                                            SkinCoordIndex: []int32{346, 347, 348, 71},
                                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("Joe_l_midtarsal"),
                                                                                    },
                                                                                    Name: stringPtr("l_midtarsal"),
                                                                                    Center: &x3d.SFVec3f{0.115, 0.037, 0.09},
                                                                                    SkinCoordIndex: []int32{349, 350, 351, 352},
                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("Joe_l_metatarsal"),
                                                                                            },
                                                                                            Name: stringPtr("l_metatarsal"),
                                                                                            Center: &x3d.SFVec3f{0.115, 0.02, 0.122},
                                                                                            SkinCoordIndex: []int32{353, 354, 355, 356, 357, 358, 359, 360, 361},
                                                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                    },
                                                                            },
                                                                    },
                                                            },
                                                    },
                                            },
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Joe_r_hip"),
                                                },
                                                Name: stringPtr("r_hip"),
                                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.0},
                                                Center: &x3d.SFVec3f{-0.1, 0.92, 0.0},
                                                SkinCoordIndex: []int32{91, 92, 98, 99, 100, 101, 362, 363},
                                                SkinCoordWeight: x3d.MFFloat{0.65, 1.0, 0.8, 1.0, 1.0, 1.0, 0.4, 0.8},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("Joe_r_knee"),
                                                        },
                                                        Name: stringPtr("r_knee"),
                                                        Rotation: &x3d.SFRotation{0.999999999998595, 0.0, 0.0, 0.00863270759583733},
                                                        Center: &x3d.SFVec3f{-0.05, 0.466, 0.0},
                                                        SkinCoordIndex: []int32{362, 363, 364, 365, 366, 367, 368, 369, 98},
                                                        SkinCoordWeight: x3d.MFFloat{0.6, 0.2, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.2},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("Joe_r_ankle"),
                                                                },
                                                                Name: stringPtr("r_ankle"),
                                                                Rotation: &x3d.SFRotation{-0.999999999999979, 0.0, 0.0, 0.0863270759582537},
                                                                Center: &x3d.SFVec3f{-0.115, 0.069, 0.0},
                                                                SkinCoordIndex: []int32{370, 371, 372, 373},
                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("Joe_r_subtalar"),
                                                                        },
                                                                        Name: stringPtr("r_subtalar"),
                                                                        Center: &x3d.SFVec3f{-0.1, 0.015, -0.01},
                                                                        SkinCoordIndex: []int32{374, 375, 376},
                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("Joe_r_midtarsal"),
                                                                                },
                                                                                Name: stringPtr("r_midtarsal"),
                                                                                Center: &x3d.SFVec3f{-0.115, 0.037, 0.09},
                                                                                SkinCoordIndex: []int32{377, 378, 379, 380},
                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("Joe_r_metatarsal"),
                                                                                        },
                                                                                        Name: stringPtr("r_metatarsal"),
                                                                                        Center: &x3d.SFVec3f{-0.1, 0.01, 0.14},
                                                                                        SkinCoordIndex: []int32{381, 382, 383, 384, 385, 386, 387, 388, 389},
                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                },
                                                                        },
                                                                },
                                                        },
                                                },
                                            },
                                    },
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Joe_vl5"),
                                        },
                                        Name: stringPtr("vl5"),
                                        Center: &x3d.SFVec3f{0.0, 1.045, -0.095},
                                        SkinCoordIndex: []int32{28, 76},
                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Joe_vl4"),
                                                },
                                                Name: stringPtr("vl4"),
                                                Center: &x3d.SFVec3f{0.0, 1.068, -0.085},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("Joe_vl3"),
                                                        },
                                                        Name: stringPtr("vl3"),
                                                        Center: &x3d.SFVec3f{0.0, 1.092, -0.0725},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("Joe_vl2"),
                                                                },
                                                                Name: stringPtr("vl2"),
                                                                Center: &x3d.SFVec3f{0.0, 1.12, -0.065},
                                                                SkinCoordIndex: []int32{16, 18, 25, 83, 84, 85, 86, 87, 88},
                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.7, 1.0, 0.8},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("Joe_vl1"),
                                                                        },
                                                                        Name: stringPtr("vl1"),
                                                                        Center: &x3d.SFVec3f{0.0, 1.1459, -0.0625},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("Joe_vt12"),
                                                                                },
                                                                                Name: stringPtr("vt12"),
                                                                                Center: &x3d.SFVec3f{0.0, 1.179, -0.068},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("Joe_vt11"),
                                                                                        },
                                                                                        Name: stringPtr("vt11"),
                                                                                        Center: &x3d.SFVec3f{0.0, 1.2679, -0.081},
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("Joe_vt10"),
                                                                                                },
                                                                                                Name: stringPtr("vt10"),
                                                                                                Center: &x3d.SFVec3f{0.0, 1.242, -0.09},
                                                                                                SkinCoordIndex: []int32{15},
                                                                                                SkinCoordWeight: x3d.MFFloat{1.0},
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.HAnimJoint{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("Joe_vt9"),
                                                                                                        },
                                                                                                        Name: stringPtr("vt9"),
                                                                                                        Center: &x3d.SFVec3f{0.0, 1.268, -0.1},
                                                                                                        SkinCoordIndex: []int32{13, 14},
                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                        Children: []x3d.X3DNode{
                                                                                                            &x3d.HAnimJoint{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("Joe_vt8"),
                                                                                                                },
                                                                                                                Name: stringPtr("vt8"),
                                                                                                                Center: &x3d.SFVec3f{0.0, 1.294, -0.11},
                                                                                                                Children: []x3d.X3DNode{
                                                                                                                    &x3d.HAnimJoint{
                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                            DEF: stringPtr("Joe_vt7"),
                                                                                                                        },
                                                                                                                        Name: stringPtr("vt7"),
                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.323, -0.1155},
                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                    DEF: stringPtr("Joe_vt6"),
                                                                                                                                },
                                                                                                                                Name: stringPtr("vt6"),
                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.352, -0.12},
                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                            DEF: stringPtr("Joe_vt5"),
                                                                                                                                        },
                                                                                                                                        Name: stringPtr("vt5"),
                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.381, -0.1235},
                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                    DEF: stringPtr("Joe_vt4"),
                                                                                                                                                },
                                                                                                                                                Name: stringPtr("vt4"),
                                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.41, -0.1235},
                                                                                                                                                SkinCoordIndex: []int32{81},
                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0},
                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                            DEF: stringPtr("Joe_vt3"),
                                                                                                                                                        },
                                                                                                                                                        Name: stringPtr("vt3"),
                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.438, -0.12},
                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                    DEF: stringPtr("Joe_vt2"),
                                                                                                                                                                },
                                                                                                                                                                Name: stringPtr("vt2"),
                                                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.468, -0.105},
                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                            DEF: stringPtr("Joe_vt1"),
                                                                                                                                                                        },
                                                                                                                                                                        Name: stringPtr("vt1"),
                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.497, -0.09},
                                                                                                                                                                        SkinCoordIndex: []int32{11, 24},
                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                    DEF: stringPtr("Joe_vc7"),
                                                                                                                                                                                },
                                                                                                                                                                                Name: stringPtr("vc7"),
                                                                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.525, -0.072},
                                                                                                                                                                                SkinCoordIndex: []int32{74, 75},
                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                            DEF: stringPtr("Joe_vc6"),
                                                                                                                                                                                        },
                                                                                                                                                                                        Name: stringPtr("vc6"),
                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.54, -0.05},
                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                    DEF: stringPtr("Joe_vc5"),
                                                                                                                                                                                                },
                                                                                                                                                                                                Name: stringPtr("vc5"),
                                                                                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.552, -0.035},
                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("Joe_vc4"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("vc4"),
                                                                                                                                                                                                        Rotation: &x3d.SFRotation{-0.70710678118655, 0.0, -0.70710678118655, 0.206836443867824},
                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.5675, -0.0256},
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_vc3"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("vc3"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.58225, -0.0185},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_vc2"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("vc2"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.595, -0.0175},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_vc1"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("vc1"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.0, 1.61, -0.015},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_skullbase"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("skullbase"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.0, 1.63, -0.01},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                        Displacers: &x3d.HAnimDisplacer{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_skull_tip_raiser_action"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("skull_tip_raiser_action"),
                                                                                                                                                                                                                                            CoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                                                                                                                                                                                                                                            Displacements: &x3d.MFVec3f{[3]float32{0.0,0.15,0.0},[3]float32{0.0,0.0,0.15},[3]float32{-0.1,0.0,0.15},[3]float32{0.1,0.0,0.05},[3]float32{0.0,-0.02,0.05},[3]float32{-0.15,0.0,0.0},[3]float32{-0.05,0.0,0.0},[3]float32{0.15,0.0,0.0},[3]float32{0.05,0.0,0.0},[3]float32{0.0,0.0,-0.15}},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_eyelid_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                Name: stringPtr("l_eyelid_joint"),
                                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_l_eyeball_joint"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("l_eyeball_joint"),
                                                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_l_eyebrow_joint"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("l_eyebrow_joint"),
                                                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_r_eyelid_joint"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("r_eyelid_joint"),
                                                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_r_eyeball_joint"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("r_eyeball_joint"),
                                                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_r_eyebrow_joint"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("r_eyebrow_joint"),
                                                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("Joe_temporomandibular"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("temporomandibular"),
                                                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.034, 1.659, 0.06},
                                                                                                                                                                                                                                        },
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
                                                                                                                                                                                DEF: stringPtr("Joe_l_sternoclavicular"),
                                                                                                                                                                            },
                                                                                                                                                                            Name: stringPtr("l_sternoclavicular"),
                                                                                                                                                                            Center: &x3d.SFVec3f{0.082, 1.4488, -0.0353},
                                                                                                                                                                            SkinCoordIndex: []int32{12},
                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{1.0},
                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                        DEF: stringPtr("Joe_l_acromioclavicular"),
                                                                                                                                                                                    },
                                                                                                                                                                                    Name: stringPtr("l_acromioclavicular"),
                                                                                                                                                                                    Center: &x3d.SFVec3f{0.0962, 1.4269, -0.0424},
                                                                                                                                                                                    SkinCoordIndex: []int32{79},
                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0},
                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                DEF: stringPtr("Joe_l_shoulder"),
                                                                                                                                                                                            },
                                                                                                                                                                                            Name: stringPtr("l_shoulder"),
                                                                                                                                                                                            Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 0.856568353525275},
                                                                                                                                                                                            Center: &x3d.SFVec3f{0.2, 1.44, -0.04},
                                                                                                                                                                                            SkinCoordIndex: []int32{41, 42, 44, 80, 102, 103, 104, 105},
                                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                        DEF: stringPtr("Joe_l_elbow"),
                                                                                                                                                                                                    },
                                                                                                                                                                                                    Name: stringPtr("l_elbow"),
                                                                                                                                                                                                    Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.97211796045303},
                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.2, 1.1388, -0.04},
                                                                                                                                                                                                    SkinCoordIndex: []int32{45, 46, 47, 109, 110, 111, 112, 113, 115, 116, 117, 118},
                                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("Joe_l_wrist"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("l_wrist"),
                                                                                                                                                                                                            Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.742359239721905},
                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.2, 0.87, -0.04},
                                                                                                                                                                                                            SkinCoordIndex: []int32{119, 120, 121, 122, 123, 124, 125, 126},
                                                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("Joe_l_thumb1"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("l_thumb1"),
                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1924, 0.8472, -0.0534},
                                                                                                                                                                                                                    SkinCoordIndex: []int32{127, 128},
                                                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("Joe_l_thumb2"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("l_thumb2"),
                                                                                                                                                                                                                            Center: &x3d.SFVec3f{0.1951, 0.8226, 0.0246},
                                                                                                                                                                                                                            SkinCoordIndex: []int32{138, 139, 140, 141, 142, 143},
                                                                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("Joe_l_thumb3"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_thumb3"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{0.1955, 0.8159, 0.0464},
                                                                                                                                                                                                                                    SkinCoordIndex: []int32{144, 145, 146, 147, 148, 149, 150, 151, 152},
                                                                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                    },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_index0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_index0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1983, 0.8024, -0.028},
                                                                                                                                                                                                                SkinCoordIndex: []int32{129, 130},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_index1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_index1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1983, 0.7815, -0.028},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{138, 139, 140, 153, 154, 155, 163},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 0.5},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_index2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_index2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.2017, 0.7363, -0.0248},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{166, 167, 168, 169},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_index3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_index3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.2028, 0.7139, -0.0236},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{170, 171, 172, 173, 174, 175, 176, 177, 178},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_middle0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_middle0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1987, 0.8029, -0.053},
                                                                                                                                                                                                                SkinCoordIndex: []int32{131, 132},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_middle1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_middle1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1987, 0.7818, -0.053},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{156, 157, 163, 164},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 0.5, 0.5},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_middle2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_middle2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.2013, 0.7273, -0.0503},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{179, 180, 181, 182},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_middle3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_middle3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.2026, 0.7011, -0.0494},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{183, 184, 185, 186, 187, 188, 189, 190, 191},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_ring0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_ring0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1956, 0.8019, -0.0794},
                                                                                                                                                                                                                SkinCoordIndex: []int32{133, 134},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_ring1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_ring1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1956, 0.7815, -0.0794},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{158, 159, 164, 165},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 0.5, 0.5},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_ring2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_ring2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1973, 0.7287, -0.0777},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{192, 193, 194, 195},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_ring3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_ring3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1983, 0.7045, -0.0767},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{196, 197, 198, 199, 200, 201, 202, 203, 204},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_pinky0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("l_pinky0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1925, 0.8066, -0.1036},
                                                                                                                                                                                                                SkinCoordIndex: []int32{135, 136, 137, 165},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 0.5},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_pinky1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("l_pinky1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1925, 0.7866, -0.1036},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{160, 161, 162},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_l_pinky2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_pinky2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{0.1938, 0.7452, -0.1024},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{205, 206, 207, 208},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_l_pinky3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_pinky3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{0.1948, 0.7277, -0.1017},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{209, 210, 211, 212, 213, 214, 215, 216, 217},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
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
                                                                                                                                                                                DEF: stringPtr("Joe_r_sternoclavicular"),
                                                                                                                                                                            },
                                                                                                                                                                            Name: stringPtr("r_sternoclavicular"),
                                                                                                                                                                            Center: &x3d.SFVec3f{-0.03, 1.46, 0.0},
                                                                                                                                                                            SkinCoordIndex: []int32{10},
                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{1.0},
                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                        DEF: stringPtr("Joe_r_acromioclavicular"),
                                                                                                                                                                                    },
                                                                                                                                                                                    Name: stringPtr("r_acromioclavicular"),
                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.09, 1.41, -0.11},
                                                                                                                                                                                    SkinCoordIndex: []int32{77, 29},
                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 0.9},
                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                DEF: stringPtr("Joe_r_shoulder"),
                                                                                                                                                                                            },
                                                                                                                                                                                            Name: stringPtr("r_shoulder"),
                                                                                                                                                                                            Rotation: &x3d.SFRotation{0.0, 0.0, -1.0, 2.04316353797913},
                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.2, 1.44, -0.04},
                                                                                                                                                                                            SkinCoordIndex: []int32{29, 30, 32, 78, 218, 219, 220, 221, 86, 88},
                                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{0.1, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.3, 0.2},
                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                        DEF: stringPtr("Joe_r_elbow"),
                                                                                                                                                                                                    },
                                                                                                                                                                                                    Name: stringPtr("r_elbow"),
                                                                                                                                                                                                    Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 1.97211796045303},
                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.2, 1.1388, -0.04},
                                                                                                                                                                                                    SkinCoordIndex: []int32{33, 34, 35, 225, 226, 227, 228, 229, 231, 232, 233, 234},
                                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("Joe_r_wrist"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("r_wrist"),
                                                                                                                                                                                                            Rotation: &x3d.SFRotation{0.0, 0.999999999999985, 0.0, 0.16294906139374},
                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.2, 0.89, -0.04},
                                                                                                                                                                                                            SkinCoordIndex: []int32{235, 236, 237, 238, 239, 240, 241, 242},
                                                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("Joe_r_thumb1"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("r_thumb1"),
                                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.2, 0.85, 0.0},
                                                                                                                                                                                                                    SkinCoordIndex: []int32{243, 244},
                                                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("Joe_r_thumb2"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("r_thumb2"),
                                                                                                                                                                                                                            Center: &x3d.SFVec3f{-0.2, 0.82, 0.03},
                                                                                                                                                                                                                            SkinCoordIndex: []int32{254, 255, 256, 257, 258, 259},
                                                                                                                                                                                                                            SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("Joe_r_thumb3"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("r_thumb3"),
                                                                                                                                                                                                                                    Center: &x3d.SFVec3f{-0.2, 0.8, 0.05},
                                                                                                                                                                                                                                    SkinCoordIndex: []int32{260, 261, 262, 263, 264, 265, 266, 267, 268},
                                                                                                                                                                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                    },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_index0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_index0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.84, -0.015},
                                                                                                                                                                                                                SkinCoordIndex: []int32{245, 246},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_index1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_index1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.793, -0.015},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{254, 255, 256, 269, 270, 271, 279},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{0.5, 0.5, 0.5, 1.0, 1.0, 1.0, 0.5},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_index2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_index2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.745, -0.015},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{282, 283, 284, 285},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_index3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_index3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.72, -0.015},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{286, 287, 288, 289, 290, 291, 292, 293, 294},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_middle0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_middle0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.835, -0.04},
                                                                                                                                                                                                                SkinCoordIndex: []int32{247, 248},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_middle1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_middle1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.788, -0.04},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{272, 273, 279, 280},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 0.5, 0.5},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_middle2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_middle2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.74, -0.04},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{295, 296, 297, 298},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_middle3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_middle3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.7142, -0.04},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{299, 300, 301, 302, 303, 304, 305, 306, 307},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_ring0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_ring0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.835, -0.065},
                                                                                                                                                                                                                SkinCoordIndex: []int32{249, 250},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_ring1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_ring1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.793, -0.065},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{274, 275, 280, 281},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 0.5, 0.5},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_ring2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_ring2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.74, -0.065},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{308, 309, 310, 311},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_ring3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_ring3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.7177, -0.065},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{312, 313, 314, 315, 316, 317, 318, 319, 320},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                },
                                                                                                                                                                                                            },
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_pinky0"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("r_pinky0"),
                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.84, -0.085},
                                                                                                                                                                                                                SkinCoordIndex: []int32{251, 252, 253, 281},
                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 0.5},
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_pinky1"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_pinky1"),
                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.79, -0.085},
                                                                                                                                                                                                                        SkinCoordIndex: []int32{276, 277, 278},
                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0},
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("Joe_r_pinky2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_pinky2"),
                                                                                                                                                                                                                                Center: &x3d.SFVec3f{-0.2, 0.755, -0.085},
                                                                                                                                                                                                                                SkinCoordIndex: []int32{321, 322, 323, 324},
                                                                                                                                                                                                                                SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("Joe_r_pinky3"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_pinky3"),
                                                                                                                                                                                                                                        Center: &x3d.SFVec3f{-0.2, 0.735, -0.09},
                                                                                                                                                                                                                                        SkinCoordIndex: []int32{325, 326, 327, 328, 329, 330, 331, 332, 333},
                                                                                                                                                                                                                                        SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
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
                                                        },
                                                },
                                        },
                                    },
                            },
                            Joints: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("Joe_HumanoidRoot"),
                                    },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_sacroiliac"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vl5"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vl4"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vl3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vl2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vl1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt12"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt11"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt10"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt9"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt8"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt7"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt6"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt5"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt4"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vt1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc7"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc6"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc5"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc4"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_vc1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_skullbase"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_temporomandibular"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_acromioclavicular"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_acromioclavicular"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_ankle"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_ankle"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_elbow"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_elbow"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_eyeball_joint"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_eyeball_joint"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_eyebrow_joint"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_eyebrow_joint"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_eyelid_joint"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_eyelid_joint"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_hip"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_hip"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_index0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_index0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_index1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_index1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_index2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_index2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_index3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_index3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_knee"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_knee"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_metatarsal"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_metatarsal"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_middle0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_middle0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_middle1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_middle1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_middle2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_middle2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_middle3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_middle3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_midtarsal"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_midtarsal"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_pinky0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_pinky0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_pinky1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_pinky1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_pinky2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_pinky2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_pinky3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_pinky3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_ring0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_ring0"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_ring1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_ring1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_ring2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_ring2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_ring3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_ring3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_shoulder"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_shoulder"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_sternoclavicular"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_sternoclavicular"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_subtalar"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_subtalar"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_thumb1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_thumb1"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_thumb2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_thumb2"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_thumb3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_thumb3"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_l_wrist"),
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_r_wrist"),
                                },
                            },
                            Segments: []x3d.X3DNode{
                                &x3d.HAnimSegment{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("Joe_sacrum"),
                                    },
                            },
                            &x3d.HAnimSite{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("Joe_RootFront_view"),
                                },
                            },
                            SkinCoord: &x3d.Coordinate{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Joe_SkinCoord"),
                                },
                                Point: &x3d.MFVec3f{[3]float32{0.0,1.77,0.0},[3]float32{0.0,1.665,0.09},[3]float32{-0.033,1.62,0.087},[3]float32{0.033,1.62,0.087},[3]float32{0.0,1.55,0.097},[3]float32{-0.077,1.64,-0.01},[3]float32{-0.0527,1.58,0.015},[3]float32{0.077,1.64,-0.01},[3]float32{0.0527,1.58,0.015},[3]float32{0.0,1.625,-0.0925},[3]float32{-0.03,1.46,0.035},[3]float32{0.0,1.44,0.03},[3]float32{0.03,1.46,0.035},[3]float32{-0.1135,1.318,0.095},[3]float32{0.1135,1.318,0.095},[3]float32{0.0,1.25,0.113},[3]float32{-0.087,1.19,0.09},[3]float32{-0.0935,1.03,0.075},[3]float32{0.087,1.19,0.09},[3]float32{0.0935,1.03,0.075},[3]float32{-0.1425,1.065,0.0033},[3]float32{-0.15,0.9,-0.01},[3]float32{0.1425,1.065,0.0033},[3]float32{0.15,0.9,-0.01},[3]float32{0.0,1.53,-0.084},[3]float32{0.0049,1.1908,-0.1113},[3]float32{-0.0773,1.019,-0.12},[3]float32{0.0773,1.019,-0.12},[3]float32{0.005,1.0915,-0.1091},[3]float32{-0.178,1.4825,-0.0625},[3]float32{-0.17,1.38,0.007},[3]float32{-0.1884,0.8676,-0.036},[3]float32{-0.16,1.38,-0.127},[3]float32{-0.2,1.1388,-0.08},[3]float32{-0.244,1.1388,-0.04},[3]float32{-0.165,1.1388,-0.04},[3]float32{-0.23,1.133,-0.055},[3]float32{-0.1977,0.8169,-0.0177},[3]float32{-0.1941,0.6772,-0.0423},[3]float32{-0.2117,0.8562,-0.0584},[3]float32{-0.1929,0.789,-0.1064},[3]float32{0.175,1.4825,-0.06},[3]float32{0.17,1.38,0.007},[3]float32{0.1901,0.8645,-0.0415},[3]float32{0.16,1.38,-0.125},[3]float32{0.2,1.1388,-0.08},[3]float32{0.165,1.1388,-0.04},[3]float32{0.244,1.1388,-0.04},[3]float32{0.23,1.133,-0.055},[3]float32{0.2009,0.8139,-0.0237},[3]float32{0.2056,0.6743,-0.0482},[3]float32{0.2142,0.8529,-0.0648},[3]float32{0.1929,0.786,-0.1122},[3]float32{-0.1,0.4913,-0.03},[3]float32{-0.17,0.466,0.0},[3]float32{-0.05,0.466,0.0},[3]float32{-0.165,0.01,0.12},[3]float32{-0.15,0.07,0.0},[3]float32{-0.085,0.086,0.0125},[3]float32{-0.09,0.056,0.0125},[3]float32{-0.115,0.02,0.122},[3]float32{-0.115,0.04,-0.055},[3]float32{-0.11,0.011,0.19},[3]float32{0.0993,0.4881,-0.0309},[3]float32{0.17,0.466,0.0},[3]float32{0.05,0.4867,0.0},[3]float32{0.165,0.01,0.12},[3]float32{0.15,0.07,0.0},[3]float32{0.085,0.086,0.0125},[3]float32{0.09,0.056,0.0125},[3]float32{0.115,0.02,0.122},[3]float32{0.115,0.04,-0.055},[3]float32{0.11,0.011,0.19},[3]float32{0.0,0.875,0.0},[3]float32{-0.0646,1.5149,-0.038},[3]float32{0.0646,1.5149,-0.038},[3]float32{0.0,1.07225,0.09},[3]float32{-0.11,1.427,-0.1375},[3]float32{-0.235,1.42,-0.0625},[3]float32{0.11,1.427,-0.1375},[3]float32{0.235,1.42,-0.0625},[3]float32{0.0,1.41,-0.145},[3]float32{0.0,0.925,0.08},[3]float32{-0.087,1.19,-0.09},[3]float32{0.087,1.19,-0.09},[3]float32{0.172,1.32,-0.03},[3]float32{-0.172,1.32,-0.03},[3]float32{0.15,1.23,-0.015},[3]float32{-0.15,1.23,-0.015},[3]float32{0.079,0.92,-0.14},[3]float32{0.1,0.9,0.077},[3]float32{-0.079,0.92,-0.14},[3]float32{-0.1,0.9,0.075},[3]float32{0.0,0.87,0.0},[3]float32{0.171,0.65,0.0},[3]float32{0.02,0.65,0.0},[3]float32{0.1,0.65,-0.08},[3]float32{0.1,0.65,0.07},[3]float32{-0.171,0.65,0.0},[3]float32{-0.02,0.65,0.0},[3]float32{-0.1,0.65,-0.08},[3]float32{-0.1,0.65,0.07},[3]float32{0.25,1.27,-0.04},[3]float32{0.17,1.27,-0.04},[3]float32{0.2,1.27,-0.09},[3]float32{0.2,1.27,0.02},[3]float32{0.244,1.1388,-0.04},[3]float32{0.165,1.1388,-0.04},[3]float32{0.2,1.1388,-0.08},[3]float32{0.2,1.1388,-0.013},[3]float32{0.225,1.0,-0.01},[3]float32{0.225,1.0,-0.07},[3]float32{0.185,1.0,-0.01},[3]float32{0.185,1.0,-0.07},[3]float32{0.2,1.1388,-0.04},[3]float32{0.225,0.92,-0.04},[3]float32{0.175,0.92,-0.04},[3]float32{0.2,0.92,-0.065},[3]float32{0.2,0.92,-0.015},[3]float32{0.225,0.89,-0.04},[3]float32{0.175,0.89,-0.04},[3]float32{0.2,0.89,-0.065},[3]float32{0.2,0.89,-0.015},[3]float32{0.218,0.86,-0.04},[3]float32{0.184,0.86,-0.04},[3]float32{0.2,0.87,-0.07},[3]float32{0.2,0.87,0.0},[3]float32{0.21,0.85,0.0},[3]float32{0.1854,0.85,0.0},[3]float32{0.212,0.84,-0.015},[3]float32{0.183,0.84,-0.015},[3]float32{0.213,0.835,-0.04},[3]float32{0.19,0.835,-0.04},[3]float32{0.211,0.835,-0.065},[3]float32{0.192,0.835,-0.065},[3]float32{0.208,0.84,-0.085},[3]float32{0.19,0.84,-0.085},[3]float32{0.2,0.84,-0.095},[3]float32{0.215,0.82,0.0},[3]float32{0.193,0.815,0.005},[3]float32{0.198,0.8,0.012},[3]float32{0.21,0.82,0.03},[3]float32{0.19,0.82,0.03},[3]float32{0.2,0.835,0.039},[3]float32{0.212,0.8,0.05},[3]float32{0.188,0.8,0.05},[3]float32{0.2,0.807,0.057},[3]float32{0.2,0.793,0.035},[3]float32{0.2,0.774,0.076},[3]float32{0.212,0.78,0.07},[3]float32{0.188,0.78,0.07},[3]float32{0.2,0.785,0.075},[3]float32{0.2,0.77,0.062},[3]float32{0.215,0.793,-0.015},[3]float32{0.187,0.793,-0.015},[3]float32{0.2,0.793,-0.005},[3]float32{0.215,0.788,-0.04},[3]float32{0.187,0.788,-0.04},[3]float32{0.215,0.793,-0.065},[3]float32{0.187,0.793,-0.065},[3]float32{0.21,0.79,-0.085},[3]float32{0.19,0.79,-0.085},[3]float32{0.2,0.79,-0.095},[3]float32{0.19,0.77,-0.0275},[3]float32{0.19,0.77,-0.0525},[3]float32{0.19,0.78,-0.0775},[3]float32{0.212,0.745,-0.015},[3]float32{0.188,0.745,-0.02},[3]float32{0.2,0.745,-0.0255},[3]float32{0.2,0.745,-0.0045},[3]float32{0.211,0.72,-0.015},[3]float32{0.189,0.72,-0.015},[3]float32{0.2,0.72,-0.0252},[3]float32{0.2,0.72,-0.0048},[3]float32{0.21,0.695,-0.015},[3]float32{0.19,0.695,-0.015},[3]float32{0.2,0.695,-0.025},[3]float32{0.2,0.695,-0.005},[3]float32{0.2,0.685,-0.015},[3]float32{0.215,0.74,-0.04},[3]float32{0.185,0.74,-0.04},[3]float32{0.2,0.74,-0.055},[3]float32{0.2,0.74,-0.025},[3]float32{0.21,0.7142,-0.04},[3]float32{0.19,0.7142,-0.04},[3]float32{0.2,0.7142,-0.053},[3]float32{0.2,0.7142,-0.027},[3]float32{0.21,0.68,-0.04},[3]float32{0.19,0.68,-0.04},[3]float32{0.2,0.68,-0.05},[3]float32{0.2,0.68,-0.03},[3]float32{0.2,0.67,-0.04},[3]float32{0.212,0.74,-0.065},[3]float32{0.188,0.74,-0.065},[3]float32{0.2,0.74,-0.0756},[3]float32{0.2,0.74,-0.0542},[3]float32{0.21,0.7177,-0.065},[3]float32{0.19,0.7177,-0.065},[3]float32{0.2,0.7177,-0.0751},[3]float32{0.2,0.7177,-0.0549},[3]float32{0.21,0.695,-0.065},[3]float32{0.19,0.695,-0.065},[3]float32{0.2,0.695,-0.075},[3]float32{0.2,0.695,-0.055},[3]float32{0.2,0.685,-0.065},[3]float32{0.211,0.755,-0.085},[3]float32{0.189,0.755,-0.085},[3]float32{0.2,0.755,-0.0952},[3]float32{0.2,0.755,-0.0748},[3]float32{0.21,0.735,-0.085},[3]float32{0.19,0.735,-0.085},[3]float32{0.2,0.735,-0.0951},[3]float32{0.2,0.735,-0.0749},[3]float32{0.21,0.72,-0.085},[3]float32{0.19,0.72,-0.085},[3]float32{0.2,0.72,-0.095},[3]float32{0.2,0.72,-0.075},[3]float32{0.2,0.71,-0.085},[3]float32{-0.23,1.23,-0.04},[3]float32{-0.16,1.23,-0.04},[3]float32{-0.2,1.235,-0.105},[3]float32{-0.2,1.255,0.02},[3]float32{-0.244,1.1388,-0.04},[3]float32{-0.165,1.1388,-0.04},[3]float32{-0.2,1.1388,-0.08},[3]float32{-0.2,1.1388,0.013},[3]float32{-0.225,1.0,-0.01},[3]float32{-0.225,1.0,-0.07},[3]float32{-0.185,1.0,-0.01},[3]float32{-0.185,1.0,-0.07},[3]float32{-0.2,1.1388,-0.04},[3]float32{-0.225,0.92,-0.04},[3]float32{-0.175,0.92,-0.04},[3]float32{-0.2,0.92,-0.065},[3]float32{-0.2,0.92,-0.015},[3]float32{-0.225,0.89,-0.04},[3]float32{-0.175,0.89,-0.04},[3]float32{-0.2,0.89,-0.065},[3]float32{-0.2,0.89,-0.015},[3]float32{-0.218,0.86,-0.04},[3]float32{-0.184,0.86,-0.04},[3]float32{-0.2,0.87,-0.07},[3]float32{-0.2,0.87,0.0},[3]float32{-0.21,0.85,0.0},[3]float32{-0.1854,0.85,0.0},[3]float32{-0.212,0.84,-0.015},[3]float32{-0.183,0.84,-0.015},[3]float32{-0.213,0.835,-0.04},[3]float32{-0.19,0.835,-0.04},[3]float32{-0.211,0.835,-0.065},[3]float32{-0.192,0.835,-0.065},[3]float32{-0.208,0.84,-0.085},[3]float32{-0.19,0.84,-0.085},[3]float32{-0.2,0.84,-0.095},[3]float32{-0.215,0.82,0.0},[3]float32{-0.193,0.815,0.005},[3]float32{-0.198,0.8,0.012},[3]float32{-0.21,0.82,0.03},[3]float32{-0.19,0.82,0.03},[3]float32{-0.2,0.835,0.039},[3]float32{-0.212,0.8,0.05},[3]float32{-0.188,0.8,0.05},[3]float32{-0.2,0.807,0.057},[3]float32{-0.2,0.793,0.035},[3]float32{-0.2,0.774,0.076},[3]float32{-0.212,0.78,0.07},[3]float32{-0.188,0.78,0.07},[3]float32{-0.2,0.785,0.075},[3]float32{-0.2,0.77,0.062},[3]float32{-0.215,0.793,-0.015},[3]float32{-0.187,0.793,-0.015},[3]float32{-0.2,0.793,-0.005},[3]float32{-0.215,0.788,-0.04},[3]float32{-0.187,0.788,-0.04},[3]float32{-0.215,0.793,-0.065},[3]float32{-0.187,0.793,-0.065},[3]float32{-0.21,0.79,-0.085},[3]float32{-0.19,0.79,-0.085},[3]float32{-0.2,0.79,-0.095},[3]float32{-0.19,0.77,-0.0275},[3]float32{-0.19,0.77,-0.0525},[3]float32{-0.19,0.78,-0.0775},[3]float32{-0.212,0.745,-0.015},[3]float32{-0.188,0.745,-0.02},[3]float32{-0.2,0.745,-0.0255},[3]float32{-0.2,0.745,-0.0045},[3]float32{-0.211,0.72,-0.015},[3]float32{-0.189,0.72,-0.015},[3]float32{-0.2,0.72,-0.0252},[3]float32{-0.2,0.72,-0.0048},[3]float32{-0.21,0.695,-0.015},[3]float32{-0.19,0.695,-0.015},[3]float32{-0.2,0.695,-0.025},[3]float32{-0.2,0.695,-0.005},[3]float32{-0.2,0.685,-0.015},[3]float32{-0.215,0.74,-0.04},[3]float32{-0.185,0.74,-0.04},[3]float32{-0.2,0.74,-0.055},[3]float32{-0.2,0.74,-0.025},[3]float32{-0.21,0.7142,-0.04},[3]float32{-0.19,0.7142,-0.04},[3]float32{-0.2,0.7142,-0.053},[3]float32{-0.2,0.7142,-0.027},[3]float32{-0.21,0.68,-0.04},[3]float32{-0.19,0.68,-0.04},[3]float32{-0.2,0.68,-0.05},[3]float32{-0.2,0.68,-0.03},[3]float32{-0.2,0.67,-0.04},[3]float32{-0.212,0.74,-0.065},[3]float32{-0.188,0.74,-0.065},[3]float32{-0.2,0.74,-0.0756},[3]float32{-0.2,0.74,-0.0542},[3]float32{-0.21,0.7177,-0.065},[3]float32{-0.19,0.7177,-0.065},[3]float32{-0.2,0.7177,-0.0751},[3]float32{-0.2,0.7177,-0.0549},[3]float32{-0.21,0.695,-0.065},[3]float32{-0.19,0.695,-0.065},[3]float32{-0.2,0.695,-0.075},[3]float32{-0.2,0.695,-0.055},[3]float32{-0.2,0.685,-0.065},[3]float32{-0.211,0.755,-0.085},[3]float32{-0.189,0.755,-0.085},[3]float32{-0.2,0.755,-0.0952},[3]float32{-0.2,0.755,-0.0748},[3]float32{-0.21,0.735,-0.085},[3]float32{-0.19,0.735,-0.085},[3]float32{-0.2,0.735,-0.0951},[3]float32{-0.2,0.735,-0.0749},[3]float32{-0.21,0.72,-0.085},[3]float32{-0.19,0.72,-0.085},[3]float32{-0.2,0.72,-0.095},[3]float32{-0.2,0.72,-0.075},[3]float32{-0.2,0.71,-0.085},[3]float32{0.115,0.466,0.06},[3]float32{0.115,0.466,-0.055},[3]float32{0.15,0.466,0.0},[3]float32{0.05,0.466,0.0},[3]float32{0.17,0.3,0.0},[3]float32{0.06,0.3,0.0},[3]float32{0.1,0.3,-0.05},[3]float32{0.1,0.3,0.05},[3]float32{0.15,0.07,0.0},[3]float32{0.085,0.086,0.0125},[3]float32{0.115,0.069,-0.045},[3]float32{0.117,0.0975,0.0615},[3]float32{0.1375,0.006,-0.03},[3]float32{0.095,0.006,-0.03},[3]float32{0.115,0.015,-0.045},[3]float32{0.115,0.06,0.1},[3]float32{0.115,0.0,0.07},[3]float32{0.165,0.0,0.07},[3]float32{0.095,0.0,0.07},[3]float32{0.115,0.04,0.13},[3]float32{0.125,0.0,0.12},[3]float32{0.165,0.0,0.12},[3]float32{0.087,0.0,0.122},[3]float32{0.09,0.012,0.188},[3]float32{0.11,0.011,0.19},[3]float32{0.128,0.011,0.185},[3]float32{0.142,0.011,0.178},[3]float32{0.154,0.01,0.168},[3]float32{-0.115,0.466,0.06},[3]float32{-0.115,0.466,-0.055},[3]float32{-0.17,0.466,0.0},[3]float32{-0.05,0.466,0.0},[3]float32{-0.17,0.3,0.0},[3]float32{-0.06,0.3,0.0},[3]float32{-0.1,0.3,-0.05},[3]float32{-0.1,0.3,0.05},[3]float32{-0.15,0.07,0.0},[3]float32{-0.085,0.086,0.0125},[3]float32{-0.115,0.069,-0.045},[3]float32{-0.117,0.0975,0.0615},[3]float32{-0.1375,0.006,-0.03},[3]float32{-0.095,0.006,-0.03},[3]float32{-0.095,0.006,-0.03},[3]float32{-0.115,0.06,0.1},[3]float32{-0.115,0.0,0.07},[3]float32{-0.165,0.0,0.07},[3]float32{-0.095,0.0,0.07},[3]float32{-0.115,0.04,0.13},[3]float32{-0.125,0.0,0.12},[3]float32{-0.165,0.0,0.12},[3]float32{-0.087,0.0,0.122},[3]float32{-0.09,0.012,0.188},[3]float32{-0.11,0.011,0.19},[3]float32{-0.128,0.011,0.185},[3]float32{-0.142,0.011,0.178},[3]float32{-0.154,0.01,0.168}},
                            },
                            &x3d.Shape{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Joe_Shape"),
                                },
                                Appearance: &x3d.Appearance{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Joe_skin_Appearance"),
                                    },
                                    Material: &x3d.Material{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Joe_skin_Material"),
                                        },
                                        DiffuseColor: &x3d.SFColor{0.3, 0.3, 0.6},
                                        EmissiveColor: &x3d.SFColor{0.3, 0.3, 0.6},
                                    },
                                    Texture: &x3d.ImageTexture{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("JoeSkinImageTexture"),
                                        },
                                        Url: x3d.MFString{"JoeBodyTexture29.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"},
                                    },
                                    TextureTransform: &x3d.TextureTransform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("KickTextureTransform"),
                                        },
                                    },
                                },
                                Geometry: &x3d.IndexedFaceSet{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Joe_skin_IndexedFaceSet"),
                                    },
                                    CreaseAngle: floatPtr(3.14),
                                    CoordIndex: []int32{0, 9, 5, -1, 0, 7, 9, -1, 0, 5, 1, -1, 1, 5, 2, -1, 1, 3, 7, -1, 2, 4, 3, -1, 0, 1, 7, -1, 1, 2, 3, -1, 5, 6, 2, -1, 7, 3, 8, -1, 6, 4, 2, -1, 3, 4, 8, -1, 9, 6, 5, -1, 9, 7, 8, -1, 4, 6, 10, -1, 4, 10, 12, -1, 4, 12, 8, -1, 10, 11, 12, -1, 9, 75, 24, -1, 9, 24, 74, -1, 9, 8, 75, -1, 9, 74, 6, -1, 10, 6, 74, -1, 12, 75, 8, -1, 74, 24, 29, -1, 24, 77, 29, -1, 10, 74, 29, -1, 77, 32, 29, -1, 32, 78, 29, -1, 78, 30, 29, -1, 30, 10, 29, -1, 41, 24, 75, -1, 41, 75, 12, -1, 41, 12, 42, -1, 41, 42, 80, -1, 41, 80, 44, -1, 41, 44, 79, -1, 41, 79, 24, -1, 81, 24, 79, -1, 81, 77, 24, -1, 81, 25, 77, -1, 81, 79, 25, -1, 25, 79, 44, -1, 25, 32, 77, -1, 25, 83, 32, -1, 25, 26, 83, -1, 25, 27, 26, -1, 25, 84, 27, -1, 25, 44, 84, -1, 11, 10, 30, -1, 11, 30, 13, -1, 11, 13, 15, -1, 11, 15, 14, -1, 11, 14, 42, -1, 11, 42, 12, -1, 15, 13, 16, -1, 15, 18, 14, -1, 15, 16, 76, -1, 15, 76, 18, -1, 76, 16, 17, -1, 76, 17, 82, -1, 76, 82, 19, -1, 76, 19, 18, -1, 22, 18, 19, -1, 22, 87, 18, -1, 22, 27, 84, -1, 22, 84, 87, -1, 87, 84, 85, -1, 85, 84, 44, -1, 85, 42, 14, -1, 87, 14, 18, -1, 87, 85, 14, -1, 20, 83, 26, -1, 20, 17, 16, -1, 20, 16, 88, -1, 20, 88, 83, -1, 88, 16, 13, -1, 88, 13, 86, -1, 88, 86, 83, -1, 86, 13, 30, -1, 86, 32, 83, -1, 23, 89, 22, -1, 89, 27, 22, -1, 89, 91, 27, -1, 91, 26, 27, -1, 91, 20, 26, -1, 21, 20, 91, -1, 21, 17, 20, -1, 21, 92, 17, -1, 82, 17, 92, -1, 82, 90, 19, -1, 23, 22, 19, -1, 23, 19, 90, -1, 82, 92, 101, -1, 82, 101, 99, -1, 82, 99, 93, -1, 82, 93, 95, -1, 82, 95, 97, -1, 82, 97, 90, -1, 23, 90, 97, -1, 23, 97, 94, -1, 23, 94, 89, -1, 89, 94, 96, -1, 89, 96, 95, -1, 89, 95, 93, -1, 89, 93, 91, -1, 91, 93, 99, -1, 91, 99, 100, -1, 91, 100, 98, -1, 21, 91, 98, -1, 21, 98, 101, -1, 21, 101, 92, -1, 85, 105, 42, -1, 85, 103, 105, -1, 85, 44, 103, -1, 103, 44, 104, -1, 80, 42, 105, -1, 80, 105, 102, -1, 80, 102, 104, -1, 80, 104, 44, -1, 105, 109, 102, -1, 102, 109, 47, -1, 47, 104, 102, -1, 104, 47, 45, -1, 104, 45, 103, -1, 103, 45, 46, -1, 103, 46, 109, -1, 103, 109, 105, -1, 109, 112, 110, -1, 109, 110, 47, -1, 47, 110, 111, -1, 47, 111, 45, -1, 45, 111, 113, -1, 113, 46, 45, -1, 46, 113, 112, -1, 112, 109, 46, -1, 112, 118, 110, -1, 110, 118, 115, -1, 110, 115, 111, -1, 111, 115, 117, -1, 111, 117, 113, -1, 113, 117, 116, -1, 113, 116, 112, -1, 112, 116, 118, -1, 115, 118, 119, -1, 119, 118, 122, -1, 118, 116, 122, -1, 122, 116, 120, -1, 116, 117, 120, -1, 120, 117, 121, -1, 117, 115, 121, -1, 115, 119, 121, -1, 119, 127, 123, -1, 119, 122, 127, -1, 122, 126, 127, -1, 122, 128, 126, -1, 122, 120, 128, -1, 120, 124, 128, -1, 120, 121, 124, -1, 121, 125, 124, -1, 121, 119, 125, -1, 119, 123, 125, -1, 127, 129, 123, -1, 127, 126, 129, -1, 129, 126, 141, -1, 141, 126, 143, -1, 126, 142, 143, -1, 126, 128, 142, -1, 128, 124, 130, -1, 142, 128, 130, -1, 124, 132, 130, -1, 124, 134, 132, -1, 125, 134, 124, -1, 125, 136, 134, -1, 125, 137, 136, -1, 125, 135, 137, -1, 125, 133, 135, -1, 125, 123, 133, -1, 123, 131, 133, -1, 123, 129, 131, -1, 131, 129, 138, -1, 129, 141, 138, -1, 138, 141, 144, -1, 141, 143, 144, -1, 143, 146, 144, -1, 142, 146, 143, -1, 142, 145, 146, -1, 139, 145, 142, -1, 130, 139, 142, -1, 139, 130, 132, -1, 139, 132, 154, -1, 132, 157, 154, -1, 132, 159, 157, -1, 132, 134, 159, -1, 134, 136, 159, -1, 136, 161, 159, -1, 136, 137, 161, -1, 137, 162, 161, -1, 160, 162, 137, -1, 135, 160, 137, -1, 133, 160, 135, -1, 133, 158, 160, -1, 131, 158, 133, -1, 156, 158, 131, -1, 153, 156, 131, -1, 131, 138, 153, -1, 138, 155, 153, -1, 140, 155, 138, -1, 138, 144, 140, -1, 144, 147, 140, -1, 140, 147, 145, -1, 140, 145, 139, -1, 139, 155, 140, -1, 154, 155, 139, -1, 146, 149, 144, -1, 146, 151, 149, -1, 145, 151, 146, -1, 150, 151, 145, -1, 145, 152, 150, -1, 147, 152, 145, -1, 147, 149, 152, -1, 147, 144, 149, -1, 148, 149, 151, -1, 148, 152, 149, -1, 148, 150, 152, -1, 148, 151, 150, -1, 160, 207, 162, -1, 160, 205, 207, -1, 165, 208, 205, -1, 160, 165, 205, -1, 158, 165, 160, -1, 161, 162, 207, -1, 161, 207, 206, -1, 165, 206, 208, -1, 206, 165, 161, -1, 161, 165, 159, -1, 207, 209, 211, -1, 205, 209, 207, -1, 205, 212, 209, -1, 205, 208, 212, -1, 206, 212, 208, -1, 206, 210, 212, -1, 206, 207, 210, -1, 207, 211, 210, -1, 209, 212, 213, -1, 212, 216, 213, -1, 212, 214, 216, -1, 210, 214, 212, -1, 210, 215, 214, -1, 210, 211, 215, -1, 209, 215, 211, -1, 209, 213, 215, -1, 217, 213, 216, -1, 217, 215, 213, -1, 217, 214, 215, -1, 217, 216, 214, -1, 158, 194, 165, -1, 192, 194, 158, -1, 164, 195, 192, -1, 158, 164, 192, -1, 156, 164, 158, -1, 159, 194, 165, -1, 159, 194, 193, -1, 159, 193, 195, -1, 159, 195, 164, -1, 159, 164, 157, -1, 157, 164, 180, -1, 192, 198, 194, -1, 192, 196, 198, -1, 192, 195, 196, -1, 195, 199, 196, -1, 196, 199, 200, -1, 199, 203, 200, -1, 193, 199, 195, -1, 193, 197, 199, -1, 193, 198, 197, -1, 193, 194, 198, -1, 199, 201, 203, -1, 197, 201, 199, -1, 197, 198, 201, -1, 198, 202, 201, -1, 196, 202, 198, -1, 200, 202, 196, -1, 204, 202, 200, -1, 204, 201, 202, -1, 204, 203, 201, -1, 204, 200, 203, -1, 156, 181, 164, -1, 156, 179, 181, -1, 156, 182, 179, -1, 156, 163, 182, -1, 163, 180, 182, -1, 157, 180, 163, -1, 164, 181, 180, -1, 179, 182, 183, -1, 182, 186, 183, -1, 182, 184, 186, -1, 180, 184, 182, -1, 180, 181, 184, -1, 181, 185, 184, -1, 179, 185, 181, -1, 183, 185, 179, -1, 183, 186, 187, -1, 186, 190, 187, -1, 184, 190, 186, -1, 184, 188, 190, -1, 184, 185, 188, -1, 185, 189, 188, -1, 185, 183, 189, -1, 183, 187, 189, -1, 191, 189, 187, -1, 191, 188, 189, -1, 191, 190, 188, -1, 191, 187, 190, -1, 153, 163, 156, -1, 153, 168, 163, -1, 153, 166, 168, -1, 153, 169, 166, -1, 155, 169, 153, -1, 155, 167, 169, -1, 154, 167, 155, -1, 154, 163, 167, -1, 154, 157, 163, -1, 163, 168, 167, -1, 166, 169, 170, -1, 169, 173, 170, -1, 169, 171, 173, -1, 169, 167, 171, -1, 167, 168, 171, -1, 168, 172, 171, -1, 168, 170, 172, -1, 170, 168, 166, -1, 170, 173, 174, -1, 173, 177, 174, -1, 173, 175, 177, -1, 173, 171, 175, -1, 171, 172, 175, -1, 172, 176, 175, -1, 172, 174, 176, -1, 170, 174, 172, -1, 178, 176, 174, -1, 178, 175, 176, -1, 178, 177, 175, -1, 178, 174, 177, -1, 86, 30, 221, -1, 86, 221, 219, -1, 86, 219, 32, -1, 32, 219, 220, -1, 78, 32, 220, -1, 78, 220, 218, -1, 78, 218, 221, -1, 78, 221, 30, -1, 221, 225, 219, -1, 219, 225, 35, -1, 35, 33, 219, -1, 33, 220, 219, -1, 33, 34, 220, -1, 220, 34, 218, -1, 221, 218, 34, -1, 34, 225, 221, -1, 225, 226, 228, -1, 225, 228, 35, -1, 35, 228, 229, -1, 35, 229, 33, -1, 33, 229, 227, -1, 33, 227, 34, -1, 34, 227, 226, -1, 34, 226, 225, -1, 226, 234, 228, -1, 228, 234, 232, -1, 232, 229, 228, -1, 232, 233, 229, -1, 229, 233, 227, -1, 227, 233, 231, -1, 227, 231, 226, -1, 226, 231, 234, -1, 231, 235, 234, -1, 235, 238, 234, -1, 234, 238, 232, -1, 238, 236, 232, -1, 232, 236, 233, -1, 236, 237, 233, -1, 233, 237, 231, -1, 231, 237, 235, -1, 235, 239, 243, -1, 235, 243, 238, -1, 238, 243, 242, -1, 238, 242, 244, -1, 238, 244, 236, -1, 236, 244, 240, -1, 236, 240, 237, -1, 237, 240, 241, -1, 237, 241, 235, -1, 235, 241, 239, -1, 243, 239, 245, -1, 243, 245, 242, -1, 245, 257, 242, -1, 257, 259, 242, -1, 242, 259, 258, -1, 242, 258, 244, -1, 244, 246, 240, -1, 258, 246, 244, -1, 240, 246, 248, -1, 240, 248, 250, -1, 241, 240, 250, -1, 241, 250, 252, -1, 241, 252, 253, -1, 241, 253, 251, -1, 241, 251, 249, -1, 241, 249, 239, -1, 239, 249, 247, -1, 239, 247, 245, -1, 247, 254, 245, -1, 245, 254, 257, -1, 254, 260, 257, -1, 257, 260, 259, -1, 259, 260, 262, -1, 258, 259, 262, -1, 258, 262, 261, -1, 255, 258, 261, -1, 246, 258, 255, -1, 255, 248, 246, -1, 255, 270, 248, -1, 248, 270, 273, -1, 248, 273, 275, -1, 248, 275, 250, -1, 250, 275, 252, -1, 252, 275, 277, -1, 252, 277, 253, -1, 253, 277, 278, -1, 276, 253, 278, -1, 251, 253, 276, -1, 249, 251, 276, -1, 249, 276, 274, -1, 247, 249, 274, -1, 272, 247, 274, -1, 269, 247, 272, -1, 247, 269, 254, -1, 254, 269, 271, -1, 256, 254, 271, -1, 254, 256, 260, -1, 260, 256, 263, -1, 256, 261, 263, -1, 256, 255, 261, -1, 255, 256, 271, -1, 270, 255, 271, -1, 262, 260, 265, -1, 262, 265, 267, -1, 261, 262, 267, -1, 266, 261, 267, -1, 261, 266, 268, -1, 263, 261, 268, -1, 263, 268, 265, -1, 263, 265, 260, -1, 264, 267, 265, -1, 264, 265, 268, -1, 264, 268, 266, -1, 264, 266, 267, -1, 276, 278, 323, -1, 276, 323, 321, -1, 281, 321, 324, -1, 276, 321, 281, -1, 274, 276, 281, -1, 277, 323, 278, -1, 277, 322, 323, -1, 281, 324, 322, -1, 322, 277, 281, -1, 277, 275, 281, -1, 323, 327, 325, -1, 321, 323, 325, -1, 321, 325, 328, -1, 321, 328, 324, -1, 322, 324, 328, -1, 322, 328, 326, -1, 322, 326, 323, -1, 323, 326, 327, -1, 325, 329, 328, -1, 328, 329, 332, -1, 328, 332, 330, -1, 326, 328, 330, -1, 326, 330, 331, -1, 326, 331, 327, -1, 325, 327, 331, -1, 325, 331, 329, -1, 333, 332, 329, -1, 333, 329, 331, -1, 333, 331, 330, -1, 333, 330, 332, -1, 274, 281, 310, -1, 308, 274, 310, -1, 280, 308, 311, -1, 274, 308, 280, -1, 272, 274, 280, -1, 275, 310, 281, -1, 275, 309, 310, -1, 275, 311, 309, -1, 275, 280, 311, -1, 275, 273, 280, -1, 273, 296, 280, -1, 308, 310, 314, -1, 308, 314, 312, -1, 308, 312, 311, -1, 311, 312, 315, -1, 312, 316, 315, -1, 315, 316, 319, -1, 309, 311, 315, -1, 309, 315, 313, -1, 309, 313, 314, -1, 309, 314, 310, -1, 315, 319, 317, -1, 313, 315, 317, -1, 313, 317, 314, -1, 314, 317, 318, -1, 312, 314, 318, -1, 316, 312, 318, -1, 320, 316, 318, -1, 320, 318, 317, -1, 320, 317, 319, -1, 320, 319, 316, -1, 272, 280, 297, -1, 272, 297, 295, -1, 272, 295, 298, -1, 272, 298, 279, -1, 279, 298, 296, -1, 273, 279, 296, -1, 280, 296, 297, -1, 295, 299, 298, -1, 298, 299, 302, -1, 298, 302, 300, -1, 296, 298, 300, -1, 296, 300, 297, -1, 297, 300, 301, -1, 295, 297, 301, -1, 299, 295, 301, -1, 299, 303, 302, -1, 302, 303, 306, -1, 300, 302, 306, -1, 300, 306, 304, -1, 300, 304, 301, -1, 301, 304, 305, -1, 301, 305, 299, -1, 299, 305, 303, -1, 307, 303, 305, -1, 307, 305, 304, -1, 307, 304, 306, -1, 307, 306, 303, -1, 269, 272, 279, -1, 269, 279, 284, -1, 269, 284, 282, -1, 269, 282, 285, -1, 271, 269, 285, -1, 271, 285, 283, -1, 270, 271, 283, -1, 270, 283, 279, -1, 270, 279, 273, -1, 279, 283, 284, -1, 282, 286, 285, -1, 285, 286, 289, -1, 285, 289, 287, -1, 285, 287, 283, -1, 283, 287, 284, -1, 284, 287, 288, -1, 284, 288, 286, -1, 286, 282, 284, -1, 286, 290, 289, -1, 289, 290, 293, -1, 289, 293, 291, -1, 289, 291, 287, -1, 287, 291, 288, -1, 288, 291, 292, -1, 288, 292, 290, -1, 286, 288, 290, -1, 294, 290, 292, -1, 294, 292, 291, -1, 294, 291, 293, -1, 294, 293, 290, -1, 97, 334, 336, -1, 97, 336, 94, -1, 94, 336, 96, -1, 336, 335, 96, -1, 96, 335, 95, -1, 95, 335, 337, -1, 95, 337, 334, -1, 95, 334, 97, -1, 334, 341, 336, -1, 336, 341, 338, -1, 336, 338, 335, -1, 335, 338, 340, -1, 335, 340, 337, -1, 337, 340, 339, -1, 337, 339, 334, -1, 334, 339, 341, -1, 341, 345, 342, -1, 341, 342, 338, -1, 338, 342, 340, -1, 340, 342, 344, -1, 340, 344, 339, -1, 339, 344, 343, -1, 339, 343, 345, -1, 339, 345, 341, -1, 345, 349, 342, -1, 342, 349, 351, -1, 342, 351, 346, -1, 342, 346, 344, -1, 71, 346, 348, -1, 71, 344, 346, -1, 71, 348, 347, -1, 71, 347, 344, -1, 344, 347, 343, -1, 343, 347, 352, -1, 343, 352, 349, -1, 343, 349, 345, -1, 349, 352, 356, -1, 349, 356, 353, -1, 349, 353, 355, -1, 349, 355, 351, -1, 354, 356, 352, -1, 354, 352, 350, -1, 354, 350, 351, -1, 354, 351, 355, -1, 353, 356, 357, -1, 353, 357, 358, -1, 353, 358, 359, -1, 353, 359, 360, -1, 353, 360, 361, -1, 353, 361, 355, -1, 354, 357, 356, -1, 350, 346, 351, -1, 348, 346, 347, -1, 350, 347, 346, -1, 350, 352, 347, -1, 354, 358, 357, -1, 354, 359, 358, -1, 354, 360, 359, -1, 354, 361, 360, -1, 354, 355, 361, -1, 101, 362, 365, -1, 101, 365, 99, -1, 99, 365, 100, -1, 100, 365, 363, -1, 100, 363, 98, -1, 98, 363, 364, -1, 98, 364, 101, -1, 101, 364, 362, -1, 362, 369, 367, -1, 362, 367, 365, -1, 365, 367, 363, -1, 363, 367, 368, -1, 363, 367, 368, -1, 363, 368, 366, -1, 363, 366, 364, -1, 364, 366, 362, -1, 362, 366, 369, -1, 369, 373, 371, -1, 369, 371, 367, -1, 367, 371, 368, -1, 368, 371, 372, -1, 368, 372, 366, -1, 366, 372, 370, -1, 366, 370, 369, -1, 369, 370, 373, -1, 373, 377, 380, -1, 373, 380, 375, -1, 373, 375, 371, -1, 371, 375, 372, -1, 372, 375, 376, -1, 372, 376, 374, -1, 372, 374, 370, -1, 370, 374, 379, -1, 373, 370, 379, -1, 373, 379, 377, -1, 377, 379, 383, -1, 377, 383, 381, -1, 377, 381, 384, -1, 377, 384, 380, -1, 381, 383, 389, -1, 381, 389, 388, -1, 381, 388, 387, -1, 381, 387, 386, -1, 381, 386, 385, -1, 381, 385, 384, -1, 376, 375, 374, -1, 378, 379, 374, -1, 378, 374, 375, -1, 378, 375, 380, -1, 382, 386, 387, -1, 382, 387, 388, -1, 382, 388, 389, -1, 382, 389, 383, -1, 382, 383, 379, -1, 382, 379, 378, -1, 382, 378, 380, -1, 382, 380, 384, -1, 382, 384, 385, -1, 382, 385, 386, -1},
                                    TexCoord: &x3d.TextureCoordinate{
                                        Point: &x3d.MFVec2f{[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5},[2]float32{0.5,0.0},[2]float32{0.0,0.5},[2]float32{0.0,0.0},[2]float32{0.5,0.5}},
                                    },
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("Joe_SkinCoord"),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Group{
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
                                DEF: stringPtr("HumanoidRoot_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.1, 0.4, 0.6, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 0.5, -1.0, 0.0, 0.0, 0.1, -1.0, 0.0, 0.0, 0.5, -1.0, 0.0, 0.0, 0.5},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("HumanoidRoot_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.6, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{1.0,0.3,-1.0},[3]float32{0.4,-0.04,-0.4},[3]float32{-0.18,0.1,0.0},[3]float32{-0.2,0.15,0.15}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("sacroiliac_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.1, 0.3, 0.45, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 1.5, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.5, 1.0, 0.0, 0.0, 1.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.35, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.2, 1.0, 0.0, 1.0, 0.5, 1.0, 0.0, 0.0, 1.4},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_subtalar_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_midtarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_metatarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_hip_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 1.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_knee_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, 0.1, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_ankle_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_subtalar_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_midtarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_metatarsal_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vl5_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vl4_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vl3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vl2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vl1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt12_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt11_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt10_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt9_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt8_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt7_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt6_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt5_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt4_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vt1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc7_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc6_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc5_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc4_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.3, 0.4, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 1.0, 0.25, -1.0, 0.0, -1.0, 0.35, 1.0, 0.0, 0.0, 0.75, 1.0, 0.0, 1.0, 0.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("vc1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("skullbase_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, -1.0, 0.0, 0.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.35},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_eyelid_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_eyeball_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_eyebrow_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_eyelid_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_eyeball_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_eyebrow_joint_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("temporomandibular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_sternoclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_acromioclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, -1.0, 0.0, 1.0, 1.75},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 3.0, -1.0, 0.0, 0.0, 0.75, -1.0, -1.0, 0.0, 0.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 0.8, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.3, 0.0, -0.5, 1.0, 1.3, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_thumb1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_thumb2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_thumb3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_index0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_index1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_index2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_index3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_middle0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_middle1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_middle2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_middle3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_ring0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_ring1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_ring2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_ring3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_pinky0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_pinky1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_pinky2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("l_pinky3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_sternoclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_acromioclavicular_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_shoulder_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, -1.0, 2.5, 0.0, 0.0, -1.0, 1.5, 0.0, 0.0, -1.0, 1.75},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_elbow_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 3.0, -1.0, 0.0, 0.0, 0.75, -1.0, -1.0, 0.0, 0.5},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_wrist_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.7, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.3, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0, 1.0, 0.0, -1.0, 0.0, 0.3},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_thumb1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_thumb2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_thumb3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_index0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_index1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_index2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_index3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_middle0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_middle1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_middle2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_middle3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_ring0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_ring1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_ring2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_ring3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_pinky0_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_pinky1_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_pinky2_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("r_pinky3_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.5, 0.75, 1.0},
                            KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.5, 0.0, 0.0, 1.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("DisplacersAnimationGroup"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.ScalarInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("skull_tipInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.1, 0.2, 0.35, 0.6, 0.7, 0.85, 0.88, 0.94, 0.97, 1.0},
                            KeyValue: x3d.MFFloat{0.0, 0.0, 0.0, 0.0, 0.2, 0.4, 1.0, 0.0, 1.0, 0.4, 0.0},
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("SkinTextureTransformAnimationGroup"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.ScalarInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("SkinTextureTransformInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.2, 0.4, 0.5, 0.6, 0.7, 0.8, 1.0},
                            KeyValue: x3d.MFFloat{0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 0.0},
                        },
                    },
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SBall"),
                                },
                                Translation: &x3d.SFVec3f{-0.4289544, 0.211555, -0.4289544},
                                Rotation: &x3d.SFRotation{-0.707106781186548, 0.0, -0.707106781186548, 0.663672910426961},
                                Scale: &x3d.SFVec3f{0.23, 0.23, 0.23},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("ball_Shape"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("ball_Appearance"),
                                        },
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("ball_Material"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.3, 0.3, 1.0},
                                            EmissiveColor: &x3d.SFColor{0.3, 0.3, 0.33},
                                        },
                                        Texture: &x3d.ImageTexture{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("JoeSkinImageTexture"),
                                            },
                                        },
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("ball_IndexedFaceSet"),
                                        },
                                        CoordIndex: []int32{0, 1, 2, -1, 0, 2, 3, -1, 0, 3, 4, -1, 0, 4, 5, -1, 0, 5, 6, -1, 0, 6, 7, -1, 0, 7, 8, -1, 0, 8, 9, -1, 0, 9, 10, -1, 0, 10, 11, -1, 0, 11, 12, -1, 0, 12, 1, -1, 1, 13, 14, -1, 1, 14, 2, -1, 2, 14, 15, -1, 2, 15, 3, -1, 3, 15, 16, -1, 3, 16, 4, -1, 4, 16, 17, -1, 4, 17, 5, -1, 5, 17, 18, -1, 5, 18, 6, -1, 6, 18, 19, -1, 6, 19, 7, -1, 7, 19, 20, -1, 7, 20, 8, -1, 8, 20, 21, -1, 8, 21, 9, -1, 9, 21, 22, -1, 9, 22, 10, -1, 10, 22, 23, -1, 10, 23, 11, -1, 11, 23, 24, -1, 11, 24, 12, -1, 12, 24, 13, -1, 12, 13, 1, -1, 13, 25, 26, -1, 13, 26, 14, -1, 14, 26, 27, -1, 14, 27, 15, -1, 15, 27, 28, -1, 15, 28, 16, -1, 16, 28, 29, -1, 16, 29, 17, -1, 17, 29, 30, -1, 17, 30, 18, -1, 18, 30, 31, -1, 18, 31, 19, -1, 19, 31, 32, -1, 19, 32, 20, -1, 20, 32, 33, -1, 20, 33, 21, -1, 21, 33, 34, -1, 21, 34, 22, -1, 22, 34, 35, -1, 22, 35, 23, -1, 23, 35, 36, -1, 23, 36, 24, -1, 24, 36, 25, -1, 24, 25, 13, -1, 25, 37, 38, -1, 25, 38, 26, -1, 26, 38, 39, -1, 26, 39, 27, -1, 27, 39, 40, -1, 27, 40, 28, -1, 28, 40, 41, -1, 28, 41, 29, -1, 29, 41, 42, -1, 29, 42, 30, -1, 30, 42, 43, -1, 30, 43, 31, -1, 31, 43, 44, -1, 31, 44, 32, -1, 32, 44, 45, -1, 32, 45, 33, -1, 33, 45, 46, -1, 33, 46, 34, -1, 34, 46, 47, -1, 34, 47, 35, -1, 35, 47, 48, -1, 35, 48, 36, -1, 36, 48, 37, -1, 36, 37, 25, -1, 37, 49, 50, -1, 37, 50, 38, -1, 38, 50, 51, -1, 38, 51, 39, -1, 39, 51, 52, -1, 39, 52, 40, -1, 40, 52, 53, -1, 40, 53, 41, -1, 41, 53, 54, -1, 41, 54, 42, -1, 42, 54, 55, -1, 42, 55, 43, -1, 43, 55, 56, -1, 43, 56, 44, -1, 44, 56, 57, -1, 44, 57, 45, -1, 45, 57, 58, -1, 45, 58, 46, -1, 46, 58, 59, -1, 46, 59, 47, -1, 47, 59, 60, -1, 47, 60, 48, -1, 48, 60, 49, -1, 48, 49, 37, -1, 61, 50, 49, -1, 61, 51, 50, -1, 61, 52, 51, -1, 61, 53, 52, -1, 61, 54, 53, -1, 61, 55, 54, -1, 61, 56, 55, -1, 61, 57, 56, -1, 61, 58, 57, -1, 61, 59, 58, -1, 61, 60, 59, -1, 61, 49, 60, -1},
                                        Coord: &x3d.Coordinate{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Ball_Coordinates"),
                                            },
                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.4675,0.0},[3]float32{0.0,0.4049,-0.2338},[3]float32{-0.1169,0.4049,-0.2024},[3]float32{-0.2024,0.4049,-0.1169},[3]float32{-0.2338,0.4049,0.0},[3]float32{-0.2024,0.4049,0.1169},[3]float32{-0.1169,0.4049,0.2024},[3]float32{0.0,0.4049,0.2338},[3]float32{0.1169,0.4049,0.2024},[3]float32{0.2024,0.4049,0.1169},[3]float32{0.2338,0.4049,0.0},[3]float32{0.2024,0.4049,-0.1169},[3]float32{0.1169,0.4049,-0.2024},[3]float32{0.0,0.2338,-0.4049},[3]float32{-0.2024,0.2338,-0.3506},[3]float32{-0.3506,0.2338,-0.2024},[3]float32{-0.4049,0.2338,0.0},[3]float32{-0.3506,0.2338,0.2024},[3]float32{-0.2024,0.2338,0.3506},[3]float32{0.0,0.2338,0.4049},[3]float32{0.2024,0.2338,0.3506},[3]float32{0.3506,0.2338,0.2024},[3]float32{0.4049,0.2338,0.0},[3]float32{0.3506,0.2338,-0.2024},[3]float32{0.2024,0.2338,-0.3506},[3]float32{0.0,0.0,-0.4675},[3]float32{-0.2338,0.0,-0.4049},[3]float32{-0.4049,0.0,-0.2338},[3]float32{-0.4675,0.0,0.0},[3]float32{-0.4049,0.0,0.2338},[3]float32{-0.2338,0.0,0.4049},[3]float32{0.0,0.0,0.4675},[3]float32{0.2338,0.0,0.4049},[3]float32{0.4049,0.0,0.2338},[3]float32{0.4675,0.0,0.0},[3]float32{0.4049,0.0,-0.2338},[3]float32{0.2338,0.0,-0.4049},[3]float32{0.0,-0.2338,-0.4049},[3]float32{-0.2024,-0.2338,-0.3506},[3]float32{-0.3506,-0.2338,-0.2024},[3]float32{-0.4049,-0.2338,0.0},[3]float32{-0.3506,-0.2338,0.2024},[3]float32{-0.2024,-0.2338,0.3506},[3]float32{0.0,-0.2338,0.4049},[3]float32{0.2024,-0.2338,0.3506},[3]float32{0.3506,-0.2338,0.2024},[3]float32{0.4049,-0.2338,0.0},[3]float32{0.3506,-0.2338,-0.2024},[3]float32{0.2024,-0.2338,-0.3506},[3]float32{0.0,-0.4049,-0.2338},[3]float32{-0.1169,-0.4049,-0.2024},[3]float32{-0.2024,-0.4049,-0.1169},[3]float32{-0.2338,-0.4049,0.0},[3]float32{-0.2024,-0.4049,0.1169},[3]float32{-0.1169,-0.4049,0.2024},[3]float32{0.0,-0.4049,0.2338},[3]float32{0.1169,-0.4049,0.2024},[3]float32{0.2024,-0.4049,0.1169},[3]float32{0.2338,-0.4049,0.0},[3]float32{0.2024,-0.4049,-0.1169},[3]float32{0.1169,-0.4049,-0.2024},[3]float32{0.0,-0.4675,0.0}},
                                        },
                                    },
                                },
                                &x3d.Viewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("ballView_1"),
                                    },
                                    Description: stringPtr("Ball View"),
                                },
                            },
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ball_TranslationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 0.409, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{-1.0,0.4,-1.0},[3]float32{0.0,0.07,0.0},[3]float32{0.05,0.06,0.05},[3]float32{2.0,4.0,10.0}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ball_RotationInterpolator"),
                            },
                            Key: x3d.MFFloat{0.0, 0.4, 0.41, 0.71, 1.0},
                            KeyValue: x3d.MFRotation{1.0, 0.0, 1.0, 0.25, -1.0, 0.0, -1.0, 1.35, -1.0, 1.0, -1.0, 3.35, -1.0, 0.2, -1.0, 3.0, -1.0, 0.2, -1.0, 3.0},
                        },
                    },
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                Scale: &x3d.SFVec3f{0.2, 0.2, 0.2},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("AxisLinesShape"),
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Circle0"),
                                },
                                Scale: &x3d.SFVec3f{1.175, 1.0, 1.175},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("circle_Shape"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("circle0_Appearance"),
                                        },
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("circle0_Material"),
                                            },
                                            AmbientIntensity: floatPtr(0.9),
                                            DiffuseColor: &x3d.SFColor{0.9, 0.0, 0.7},
                                            EmissiveColor: &x3d.SFColor{0.425, 0.486, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.IndexedLineSet{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Orbit1"),
                                        },
                                        CoordIndex: []int32{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, -1},
                                        Coord: &x3d.Coordinate{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("circle_Coordinates"),
                                            },
                                            Point: &x3d.MFVec3f{[3]float32{1.0,0.0,0.0},[3]float32{0.995,0.0,-0.105},[3]float32{0.979,0.0,-0.208},[3]float32{0.951,0.0,-0.309},[3]float32{0.914,0.0,-0.407},[3]float32{0.866,0.0,-0.5},[3]float32{0.809,0.0,-0.588},[3]float32{0.743,0.0,-0.669},[3]float32{0.669,0.0,-0.743},[3]float32{0.588,0.0,-0.809},[3]float32{0.5,0.0,-0.866},[3]float32{0.407,0.0,-0.914},[3]float32{0.309,0.0,-0.951},[3]float32{0.208,0.0,-0.978},[3]float32{0.105,0.0,-0.995},[3]float32{0.0,0.0,-1.0},[3]float32{-0.105,0.0,-0.994522},[3]float32{-0.208,0.0,-0.978},[3]float32{-0.309,0.0,-0.951},[3]float32{-0.407,0.0,-0.914},[3]float32{-0.5,0.0,-0.866},[3]float32{-0.588,0.0,-0.809},[3]float32{-0.669,0.0,-0.743},[3]float32{-0.743,0.0,-0.669},[3]float32{-0.809,0.0,-0.588},[3]float32{-0.866,0.0,-0.5},[3]float32{-0.914,0.0,-0.407},[3]float32{-0.951,0.0,-0.309},[3]float32{-0.978,0.0,-0.208},[3]float32{-0.995,0.0,-0.105},[3]float32{-1.0,0.0,0.0},[3]float32{-0.995,0.0,0.105},[3]float32{-0.978,0.0,0.208},[3]float32{-0.951,0.0,0.309},[3]float32{-0.914,0.0,0.407},[3]float32{-0.866,0.0,0.5},[3]float32{-0.809,0.0,0.588},[3]float32{-0.743,0.0,0.669},[3]float32{-0.669,0.0,0.743},[3]float32{-0.588,0.0,0.809},[3]float32{-0.5,0.0,0.866},[3]float32{-0.407,0.0,0.914},[3]float32{-0.309,0.0,0.951},[3]float32{-0.208,0.0,0.978},[3]float32{-0.105,0.0,0.995},[3]float32{0.0,0.0,1.0},[3]float32{0.105,0.0,0.995},[3]float32{0.208,0.0,0.978},[3]float32{0.309,0.0,0.951},[3]float32{0.407,0.0,0.914},[3]float32{0.5,0.0,0.866},[3]float32{0.588,0.0,0.809},[3]float32{0.669,0.0,0.743},[3]float32{0.743,0.0,0.669},[3]float32{0.809,0.0,0.588},[3]float32{0.866,0.0,0.5},[3]float32{0.914,0.0,0.407},[3]float32{0.951,0.0,0.309},[3]float32{0.978,0.0,0.208},[3]float32{0.995,0.0,0.104},[3]float32{1.0,0.0,0.0}},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Circle1"),
                                },
                                Scale: &x3d.SFVec3f{0.5, 1.0, 0.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("circle1_Shape"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("circle1_Appearance"),
                                        },
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("circle1_Material"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.9, 0.0, 0.7},
                                            EmissiveColor: &x3d.SFColor{0.424956, 0.483976, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.IndexedLineSet{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("Orbit1"),
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Circle2"),
                                },
                                Scale: &x3d.SFVec3f{0.25, 1.0, 0.25},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("circle2_Shape"),
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("circle2_Appearance"),
                                        },
                                        Material: &x3d.Material{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("circle2_Material"),
                                            },
                                            DiffuseColor: &x3d.SFColor{0.9, 0.0, 0.7},
                                            EmissiveColor: &x3d.SFColor{0.424956, 0.483976, 1.0},
                                        },
                                    },
                                    Geometry: &x3d.IndexedLineSet{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("Orbit1"),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("HumanoidRoot_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("sacroiliac_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_subtalar_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_midtarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_metatarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_hip_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_knee_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_ankle_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_subtalar_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_midtarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_metatarsal_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vl5_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vl4_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vl3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vl2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vl1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt12_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt11_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt10_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt9_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt8_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt7_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt6_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt5_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt4_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vt1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc7_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc6_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc5_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc4_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("vc1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("skullbase_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_eyelid_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_eyeball_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_eyebrow_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_eyelid_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_eyeball_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_eyebrow_joint_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("temporomandibular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_sternoclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_acromioclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_thumb1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_thumb2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_thumb3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_index0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_index1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_index2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_index3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_middle0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_middle1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_middle2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_middle3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_ring0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_ring1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_ring2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_ring3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_pinky0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_pinky1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_pinky2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("l_pinky3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_sternoclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_acromioclavicular_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_shoulder_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_elbow_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_wrist_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_thumb1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_thumb2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_thumb3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_index0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_index1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_index2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_index3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_middle0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_middle1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_middle2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_middle3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_ring0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_ring1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_ring2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_ring3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_pinky0_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_pinky1_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_pinky2_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("r_pinky3_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("HumanoidRoot_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_HumanoidRoot"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_HumanoidRoot"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("sacroiliac_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_sacroiliac"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_subtalar_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_subtalar"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_midtarsal_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_midtarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_metatarsal_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_metatarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_hip_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_hip"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_knee_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_knee"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_ankle_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_ankle"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_subtalar_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_subtalar"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_midtarsal_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_midtarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_metatarsal_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_metatarsal"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vl5_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vl4_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vl4"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vl3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vl3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vl2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vl2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vl1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vl1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt12_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt12"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt11_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt11"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt10_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt10"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt9_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt9"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt8_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt8"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt7_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt7"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt6_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt6"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt5_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt4_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt4"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vt1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vt1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc7_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc7"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc6_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc6"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc5_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc4_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc4"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("vc1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_vc1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("skullbase_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_eyelid_joint_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_eyelid_joint"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_eyeball_joint_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_eyeball_joint"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_eyebrow_joint_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_eyebrow_joint"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_eyelid_joint_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_eyelid_joint"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_eyeball_joint_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_eyeball_joint"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_eyebrow_joint_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_eyebrow_joint"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("temporomandibular_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_temporomandibular"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_sternoclavicular_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_sternoclavicular"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_acromioclavicular_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_acromioclavicular"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_thumb1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_thumb1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_thumb2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_thumb2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_thumb3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_thumb3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_index0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_index0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_index1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_index1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_index2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_index2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_index3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_index3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_middle0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_middle0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_middle1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_middle1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_middle2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_middle2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_middle3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_middle3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_ring0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_ring0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_ring1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_ring1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_ring2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_ring2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_ring3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_ring3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_pinky0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_pinky0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_pinky1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_pinky1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_pinky2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_pinky2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("l_pinky3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_l_pinky3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_sternoclavicular_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_sternoclavicular"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_acromioclavicular_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_acromioclavicular"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_shoulder_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_shoulder"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_elbow_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_elbow"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_wrist_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_wrist"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_thumb1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_thumb1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_thumb2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_thumb2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_thumb3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_thumb3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_index0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_index0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_index1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_index1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_index2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_index2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_index3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_index3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_middle0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_middle0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_middle1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_middle1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_middle2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_middle2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_middle3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_middle3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_ring0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_ring0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_ring1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_ring1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_ring2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_ring2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_ring3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_ring3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_pinky0_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_pinky0"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_pinky1_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_pinky1"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_pinky2_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_pinky2"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("r_pinky3_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_r_pinky3"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("skull_tipInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("skull_tipInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Joe_skull_tip_raiser_action"),
                    ToField: stringPtr("set_weight"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("SkinTextureTransformInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("SkinTextureTransformInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("KickTextureTransform"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("ball_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ball_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("SBall"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("KickTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("ball_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("ball_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("SBall"),
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
	filename := "../data/JoeSkinTexcoordDisplacerKick.new.go.x3d"
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