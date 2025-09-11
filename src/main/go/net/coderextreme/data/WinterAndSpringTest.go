
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
                    Content: stringPtr("WinterAndSpringTest.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("1 May 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:30 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"),
                    Info: x3d.MFString{"X3D Humanoid LOA3 skeleton plus others", "Lots points"},
                },
                &x3d.NavigationInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Start_NavigationInfo"),
                    },
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Male"),
                    Position: &x3d.SFVec3f{0.0, 1.0, -2.0},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("gray_Background"),
                    },
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("dark_gray_Background"),
                    },
                },
                &x3d.Background{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("black_Background"),
                    },
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
                        DEF: stringPtr("Scene_IFrontView"),
                    },
                    Description: stringPtr("Scene_Front View"),
                    Position: &x3d.SFVec3f{0.0, 0.8, 2.58},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_OldMan_ISideView"),
                    },
                    Description: stringPtr("Scene_Side View"),
                    Position: &x3d.SFVec3f{-2.6, 1.5, 1.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_ISideView"),
                    },
                    Description: stringPtr("Scene_Side View"),
                    Position: &x3d.SFVec3f{-5.0, 1.5, 1.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_Full_ISideView"),
                    },
                    Description: stringPtr("Scene_Side View"),
                    Position: &x3d.SFVec3f{-10.0, 1.5, 1.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_OneBush_ISideView"),
                    },
                    Description: stringPtr("Scene_Side View"),
                    Position: &x3d.SFVec3f{-20.0, 1.5, 1.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_TwoBush_ISideView"),
                    },
                    Description: stringPtr("Scene_Side View"),
                    Position: &x3d.SFVec3f{-10.0, 1.5, 1.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 0.8, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_BackView"),
                    },
                    Description: stringPtr("Scene_Back View"),
                    Position: &x3d.SFVec3f{0.0, 1.5, -5.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_OldMan_BackView"),
                    },
                    Description: stringPtr("Scene_Back View"),
                    Position: &x3d.SFVec3f{0.0, 1.5, -2.5},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.14},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_Full_BackView"),
                    },
                    Description: stringPtr("Scene_Back View"),
                    Position: &x3d.SFVec3f{0.0, 1.5, -20.0},
                    Orientation: &x3d.SFRotation{0.0, 1.0, 15.0, 3.14},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_TopView"),
                    },
                    Description: stringPtr("Scene_Top View"),
                    Position: &x3d.SFVec3f{0.0, 3.5, 0.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.5708},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.5, 0.0},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("OldMan_Humanoid"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("OldMan"),
                            },
                            Name: stringPtr("Walk"),
                            Loa: int32Ptr(3),
                            Metadata: &x3d.MetadataSet{
                                Name: stringPtr("warnings"),
                                Reference: stringPtr("HAnim"),
                                &x3d.MetadataString{
                                    Name: stringPtr("SymmetricalLeftRight"),
                                    Reference: stringPtr("correction options: ignore, warn, average, left, right, largest, smallest"),
                                    Value: x3d.MFString{"ignore"},
                                },
                            },
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("OldMan_humanoid_root"),
                                    },
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("OldMan_sacrum"),
                                            },
                                            Name: stringPtr("sacrum"),
                                            &x3d.HAnimSite{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("OldMan_RootBack_view"),
                                                },
                                                Name: stringPtr("RootBack_view"),
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
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("OldMan_Shape"),
                                                            },
                                                            Appearance: &x3d.Appearance{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("OldMan_skin_Appearance"),
                                                                },
                                                                Material: &x3d.Material{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("OldMan_skin_Material"),
                                                                    },
                                                                    DiffuseColor: &x3d.SFColor{0.3, 0.3, 0.6},
                                                                    EmissiveColor: &x3d.SFColor{0.3, 0.3, 0.6},
                                                                },
                                                                Texture: &x3d.ImageTexture{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("OldManSkinImageTexture"),
                                                                    },
                                                                    Url: x3d.MFString{"OldManBodyTexture29.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"},
                                                                },
                                                                TextureTransform: &x3d.TextureTransform{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("KickTextureTransform"),
                                                                    },
                                                                },
                                                            },
                                                            Geometry: &x3d.IndexedFaceSet{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("OldMan_skin_IndexedFaceSet"),
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
                                                DEF: stringPtr("OldMan_sacroiliac"),
                                            },
                                            Name: stringPtr("sacroiliac"),
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("OldMan_l_hip"),
                                                    },
                                                    Name: stringPtr("l_hip"),
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("OldMan_l_knee"),
                                                            },
                                                            Name: stringPtr("l_knee"),
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("OldMan_l_talocrural"),
                                                                    },
                                                                    Name: stringPtr("l_talocrural"),
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("Joe_l_tarsometatarsal_2"),
                                                                            },
                                                                            Name: stringPtr("l_tarsometatarsal_2"),
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("Joe_l_metatarsophalangeal_2"),
                                                                                    },
                                                                                    Name: stringPtr("l_metatarsophalangeal_2"),
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.HAnimJoint{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("Joe_l_tarsal_distal_interphalangeal_2"),
                                                                                            },
                                                                                            Name: stringPtr("l_tarsal_distal_interphalangeal_2"),
                                                                                            Center: &x3d.SFVec3f{0.115, 0.02, 0.122},
                                                                                    },
                                                                            },
                                                                    },
                                                            },
                                                    },
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("OldMan_r_hip"),
                                                        },
                                                        Name: stringPtr("l_hip"),
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("OldMan_r_knee"),
                                                                },
                                                                Name: stringPtr("l_knee"),
                                                        },
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("OldMan_r_talocrural"),
                                                            },
                                                            Name: stringPtr("l_talocrural"),
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("Joe_r_tarsometatarsal_2"),
                                                                    },
                                                                    Name: stringPtr("r_tarsometatarsal_2"),
                                                                    Center: &x3d.SFVec3f{-0.1, 0.015, -0.01},
                                                                    SkinCoordIndex: []int32{374, 375, 376},
                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimJoint{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("Joe_r_metatarsophalangeal_2"),
                                                                            },
                                                                            Name: stringPtr("r_metatarsophalangeal_2"),
                                                                            Center: &x3d.SFVec3f{-0.115, 0.037, 0.09},
                                                                            SkinCoordIndex: []int32{377, 378, 379, 380},
                                                                            SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimJoint{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("Joe_r_tarsal_distal_interphalangeal_2"),
                                                                                    },
                                                                                    Name: stringPtr("r_tarsal_distal_interphalangeal_2"),
                                                                                    Center: &x3d.SFVec3f{-0.1, 0.01, 0.14},
                                                                                    SkinCoordIndex: []int32{381, 382, 383, 384, 385, 386, 387, 388, 389},
                                                                                    SkinCoordWeight: x3d.MFFloat{1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0},
                                                                            },
                                                                    },
                                                            },
                                                        },
                                                    },
                                            },
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("OldMan_vl5"),
                                                },
                                                Name: stringPtr("vl5"),
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("MeshName_vl4"),
                                                        },
                                                        Name: stringPtr("vl4"),
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("OldMan_vl3"),
                                                                },
                                                                Name: stringPtr("vl3"),
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimJoint{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("MeshName_vl2"),
                                                                        },
                                                                        Name: stringPtr("vl2"),
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.HAnimJoint{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("OldMan_vl1"),
                                                                                },
                                                                                Name: stringPtr("vl1"),
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.HAnimJoint{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("MeshName_vt12"),
                                                                                        },
                                                                                        Name: stringPtr("vt12"),
                                                                                        Children: []x3d.X3DNode{
                                                                                            &x3d.HAnimJoint{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    DEF: stringPtr("OldMan_vt11"),
                                                                                                },
                                                                                                Name: stringPtr("vt11"),
                                                                                                Children: []x3d.X3DNode{
                                                                                                    &x3d.HAnimJoint{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            DEF: stringPtr("MeshName_vt10"),
                                                                                                        },
                                                                                                        Name: stringPtr("vt10"),
                                                                                                        Children: []x3d.X3DNode{
                                                                                                            &x3d.HAnimJoint{
                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                    DEF: stringPtr("MeshName_vt9"),
                                                                                                                },
                                                                                                                Name: stringPtr("vt9"),
                                                                                                                Children: []x3d.X3DNode{
                                                                                                                    &x3d.HAnimJoint{
                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                            DEF: stringPtr("MeshName_vt8"),
                                                                                                                        },
                                                                                                                        Name: stringPtr("vt8"),
                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                    DEF: stringPtr("OldMan_vt7"),
                                                                                                                                },
                                                                                                                                Name: stringPtr("vt7"),
                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                            DEF: stringPtr("MeshName_vt6"),
                                                                                                                                        },
                                                                                                                                        Name: stringPtr("vt6"),
                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                    DEF: stringPtr("MeshName_vt5"),
                                                                                                                                                },
                                                                                                                                                Name: stringPtr("vt5"),
                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                            DEF: stringPtr("OldMan_vt4"),
                                                                                                                                                        },
                                                                                                                                                        Name: stringPtr("vt4"),
                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                    DEF: stringPtr("MeshName_vt3"),
                                                                                                                                                                },
                                                                                                                                                                Name: stringPtr("vt3"),
                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                            DEF: stringPtr("OldMan_vt2"),
                                                                                                                                                                        },
                                                                                                                                                                        Name: stringPtr("vt2"),
                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                    DEF: stringPtr("MeshName_vt1"),
                                                                                                                                                                                },
                                                                                                                                                                                Name: stringPtr("vt1"),
                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                            DEF: stringPtr("OldMan_vc7"),
                                                                                                                                                                                        },
                                                                                                                                                                                        Name: stringPtr("vc7"),
                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                    DEF: stringPtr("MeshName_vc6"),
                                                                                                                                                                                                },
                                                                                                                                                                                                Name: stringPtr("vc6"),
                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                            DEF: stringPtr("MeshName_vc5"),
                                                                                                                                                                                                        },
                                                                                                                                                                                                        Name: stringPtr("vc5"),
                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                    DEF: stringPtr("OldMan_vc4"),
                                                                                                                                                                                                                },
                                                                                                                                                                                                                Name: stringPtr("vc4"),
                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                            DEF: stringPtr("MeshName_vc3"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("vc3"),
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("MeshName_vc2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("vc2"),
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_vc1"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("vc1"),
                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_skullbase"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                Name: stringPtr("skullbase"),
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
                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_l_eyelid_joint"),
                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                        Name: stringPtr("l_eyelid_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_eyeball_joint"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("l_eyeball_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_eyebrow_joint"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("l_eyebrow_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_eyelid_joint"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("r_eyelid_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_eyeball_joint"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("r_eyeball_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_eyebrow_joint"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("r_eyebrow_joint"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_temporomandibular"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("temporomandibular"),
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
                                                                                                                                                                                        DEF: stringPtr("OldMan_l_acromioclavicular"),
                                                                                                                                                                                    },
                                                                                                                                                                                    Name: stringPtr("l_acromioclavicular"),
                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                DEF: stringPtr("OldMan_l_sternoclavicular"),
                                                                                                                                                                                            },
                                                                                                                                                                                            Name: stringPtr("l_sternoclavicular"),
                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_shoulder"),
                                                                                                                                                                                                    },
                                                                                                                                                                                                    Name: stringPtr("l_shoulder"),
                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_elbow"),
                                                                                                                                                                                                            },
                                                                                                                                                                                                            Name: stringPtr("l_elbow"),
                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_radiocarpal"),
                                                                                                                                                                                                                    },
                                                                                                                                                                                                                    Name: stringPtr("l_radiocarpal"),
                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_carpometacarpal_1"),
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            Name: stringPtr("l_carpometacarpal_1"),
                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_metacarpophalangeal_1"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_metacarpophalangeal_1"),
                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("l_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                            },
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_l_carpometacarpal_2"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("l_carpometacarpal_2"),
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_l_metacarpophalangeal_2"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_metacarpophalangeal_2"),
                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_l_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                Name: stringPtr("l_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_l_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                        Name: stringPtr("l_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_carpometacarpal_3"),
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    Name: stringPtr("l_carpometacarpal_3"),
                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_metacarpophalangeal_3"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("l_metacarpophalangeal_3"),
                                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("l_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                            Name: stringPtr("l_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_l_carpometacarpal_4"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("l_carpometacarpal_4"),
                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_l_metacarpophalangeal_4"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                Name: stringPtr("l_metacarpophalangeal_4"),
                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_l_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                        Name: stringPtr("l_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_l_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                Name: stringPtr("l_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_carpometacarpal_5"),
                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                            Name: stringPtr("l_carpometacarpal_5"),
                                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_metacarpophalangeal_5"),
                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                    Name: stringPtr("l_metacarpophalangeal_5"),
                                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_l_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                            Name: stringPtr("l_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_l_carpal_distal_interphalangeal_5"),
                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                    Name: stringPtr("l_carpal_distal_interphalangeal_5"),
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
                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_sternoclavicular"),
                                                                                                                                                                                                                        },
                                                                                                                                                                                                                        Name: stringPtr("r_sternoclavicular"),
                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_acromioclavicular"),
                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                Name: stringPtr("r_acromioclavicular"),
                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_shoulder"),
                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                        Name: stringPtr("r_shoulder"),
                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_elbow"),
                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                Name: stringPtr("r_elbow"),
                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_radiocarpal"),
                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                        Name: stringPtr("r_radiocarpal"),
                                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_carpometacarpal_1"),
                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                Name: stringPtr("r_carpometacarpal_1"),
                                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_metacarpophalangeal_1"),
                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                        Name: stringPtr("r_metacarpophalangeal_1"),
                                                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                                Name: stringPtr("r_carpal_interphalangeal_1"),
                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_carpometacarpal_2"),
                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                    Name: stringPtr("r_carpometacarpal_2"),
                                                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_r_metacarpophalangeal_2"),
                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                            Name: stringPtr("r_metacarpophalangeal_2"),
                                                                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                                    Name: stringPtr("r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_r_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                                            Name: stringPtr("r_carpal_distal_interphalangeal_2"),
                                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_carpometacarpal_3"),
                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                        Name: stringPtr("r_carpometacarpal_3"),
                                                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_metacarpophalangeal_3"),
                                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                                Name: stringPtr("r_metacarpophalangeal_3"),
                                                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                                        Name: stringPtr("r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                                                Name: stringPtr("r_carpal_distal_interphalangeal_3"),
                                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_r_carpometacarpal_4"),
                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                            Name: stringPtr("r_carpometacarpal_4"),
                                                                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_metacarpophalangeal_4"),
                                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                                    Name: stringPtr("r_metacarpophalangeal_4"),
                                                                                                                                                                                                                                                                                    Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                        &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                                DEF: stringPtr("OldMan_r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                                            Name: stringPtr("r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                                                                                                                                                            Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                                &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                                        DEF: stringPtr("OldMan_r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                                                    Name: stringPtr("r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                                    },
                                                                                                                                                                                                                                                                            },
                                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_carpometacarpal_5"),
                                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                                Name: stringPtr("r_carpometacarpal_5"),
                                                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_metacarpophalangeal_5"),
                                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                                        Name: stringPtr("r_metacarpophalangeal_5"),
                                                                                                                                                                                                                                                                                        Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                            &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                                    DEF: stringPtr("OldMan_r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                                                                                                },
                                                                                                                                                                                                                                                                                                Name: stringPtr("r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                                                                                                                                                Children: []x3d.X3DNode{
                                                                                                                                                                                                                                                                                                    &x3d.HAnimJoint{
                                                                                                                                                                                                                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                                                                                                                                                                                                                            DEF: stringPtr("OldMan_r_carpal_distal_interphalangeal_5"),
                                                                                                                                                                                                                                                                                                        },
                                                                                                                                                                                                                                                                                                        Name: stringPtr("r_carpal_distal_interphalangeal_5"),
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
	filename := "../data/WinterAndSpringTest.new.go.x3d"
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