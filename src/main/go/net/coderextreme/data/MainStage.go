
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
                    Content: stringPtr("MainStage.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Main stage for HAnim scene Winter and Spring."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Carol McDonald, Joe Williams, Katy Schildmeyer, and John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joe Williams and Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("25 May 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:52:28 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("MainStageREADME.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("originals/0WSMainStage09g.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("hint"),
                Content: stringPtr("containerField=watchList changed to containerField=children in X3D 4.0"),
            },
            &x3d.Meta{
                Name: stringPtr("MovingImage"),
                Content: stringPtr("WinterAndSpring3 by Joe Williams https://youtu.be/5HrX7_uu9mU"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("MainStage.x3d"),
                },
                &x3d.NavigationInfo{
                    Headlight: boolPtr(false),
                    TransitionTime: doublePtr(0.0),
                },
                &x3d.DirectionalLight{
                    Global: boolPtr(true),
                    Intensity: floatPtr(0.75),
                    Direction: &x3d.SFVec3f{0.0, 0.0, 1.0},
                },
                &x3d.DirectionalLight{
                    Global: boolPtr(true),
                    Intensity: floatPtr(0.75),
                },
                &x3d.DirectionalLight{
                    Global: boolPtr(true),
                    Intensity: floatPtr(0.75),
                    Direction: &x3d.SFVec3f{1.0, 0.0, 0.0},
                },
                &x3d.DirectionalLight{
                    Global: boolPtr(true),
                    Intensity: floatPtr(0.75),
                    Direction: &x3d.SFVec3f{-1.0, 0.0, 0.0},
                },
                &x3d.DirectionalLight{
                    Global: boolPtr(true),
                    Intensity: floatPtr(0.75),
                    Direction: &x3d.SFVec3f{0.0, -0.75, 0.0},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("StartTIME"),
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("DelayTIME"),
                    },
                    CycleInterval: doublePtr(0.5),
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Clock100Seconds"),
                    },
                    CycleInterval: doublePtr(100.0),
                },
                &x3d.BooleanFilter{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("DelayFILTER"),
                    },
                },
                &x3d.TimeTrigger{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Clock100SecondsTRIGGER"),
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("WSAudio"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Sound{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("SceneMusic1"),
                            },
                            Spatialize: boolPtr(false),
                            Location: &x3d.SFVec3f{-5.0, 10.0, 10.0},
                            MinBack: floatPtr(25.0),
                            MinFront: floatPtr(25.0),
                            MaxBack: floatPtr(50.0),
                            MaxFront: floatPtr(50.0),
                            Source: &x3d.AudioClip{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Melodies1"),
                                },
                                Description: stringPtr("John Harrison with the Wichita State University Chamber"),
                                Url: x3d.MFString{"audio/Winter_Spring_rv2_keyedMono.wav", "audio/winter_spring_rv2_keyed_143.wav", "audio/winter_spring_rv2_keyed.mp3", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/audio/Winter_Spring_rv2_keyedMono.wav", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/audio/winter_spring_rv2_keyed_143.wav", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/audio/winter_spring_rv2_keyed.mp3"},
                            },
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("GrampsStage"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("StageSurface"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Floor"),
                                        },
                                        Translation: &x3d.SFVec3f{15.0, -0.3, 15.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    DiffuseColor: &x3d.SFColor{0.0, 0.8, 0.0},
                                                    SpecularColor: &x3d.SFColor{0.0, 0.4, 0.0},
                                                    EmissiveColor: &x3d.SFColor{0.0, 0.7, 0.0},
                                                },
                                                Texture: &x3d.ImageTexture{
                                                    Url: x3d.MFString{"images/Lawn.jpg", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/Lawn.jpg"},
                                                },
                                            },
                                            Geometry: &x3d.Box{
                                                Size: &x3d.SFVec3f{1500.0, 0.1, 1500.0},
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PathwaySurface1"),
                                        },
                                        Translation: &x3d.SFVec3f{0.0, -0.15, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("PathMeshTopSurface"),
                                            },
                                            Url: x3d.MFString{"PathMeshTopSurface.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d", "PathMeshTopSurface.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.wrl"},
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PathwaySurface2"),
                                        },
                                        Translation: &x3d.SFVec3f{0.0, -0.1, 0.1},
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("PathMeshTopSurface"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PathwayGrid"),
                                        },
                                        Translation: &x3d.SFVec3f{0.0, -0.12, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Pathway"),
                                            },
                                            Url: x3d.MFString{"Pathway.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Pathway.x3d", "Pathway.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Pathway.wrl"},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("StageDecorations"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BushesTransform"),
                                        },
                                        Translation: &x3d.SFVec3f{0.0, -0.2, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Bushes"),
                                            },
                                            Url: x3d.MFString{"Bushes.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Bushes.x3d", "Bushes.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Bushes.wrl"},
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BorderFlowers"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("FlowerSet"),
                                            },
                                            Url: x3d.MFString{"FlowerSet.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerSet.x3d", "FlowerSet.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerSet.wrl"},
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TwoFlowerGardens"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("FlowerGardens"),
                                            },
                                            Url: x3d.MFString{"FlowerGardens.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerGardens.x3d", "FlowerGardens.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerGardens.wrl"},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Group{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TitlesandViewpointsInOrderofAppearance"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Viewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Scene_StageFarView"),
                                    },
                                    Description: stringPtr("Stage Far View"),
                                    Position: &x3d.SFVec3f{-15.0, 10.0, 32.0},
                                    Orientation: &x3d.SFRotation{0.5, 1.76, 0.3, -1.0},
                                    CenterOfRotation: &x3d.SFVec3f{9.8557, 0.0, 3.5},
                                },
                                &x3d.Group{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TitleSet1of2"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("TitleSet1"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("WinterAndSpringTitle"),
                                                        },
                                                        Translation: &x3d.SFVec3f{10.0, 10.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Viewpoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("WinterAndSpringTitleView"),
                                                            },
                                                            Description: stringPtr("Look at WS title"),
                                                            Position: &x3d.SFVec3f{0.0, 0.75, 4.0},
                                                            Orientation: &x3d.SFRotation{-0.15, 0.0, 0.0, 0.2},
                                                            Jump: boolPtr(false),
                                                        },
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                },
                                                                Texture: &x3d.ImageTexture{
                                                                    Url: x3d.MFString{"images/WinterAndSpring.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WinterAndSpring.png"},
                                                                },
                                                            },
                                                            Geometry: &x3d.Box{
                                                                Size: &x3d.SFVec3f{4.0, 3.0, 0.25},
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("WSAuthorsTitle"),
                                                        },
                                                        Translation: &x3d.SFVec3f{10.0, 10.0, -5.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Viewpoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("WSAuthorsTitleView"),
                                                            },
                                                            Description: stringPtr("Look at Authors title"),
                                                            Position: &x3d.SFVec3f{0.0, 1.0, 5.0},
                                                            Orientation: &x3d.SFRotation{-0.15, 0.0, 0.0, 0.2},
                                                            Jump: boolPtr(false),
                                                        },
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                },
                                                                Texture: &x3d.ImageTexture{
                                                                    Url: x3d.MFString{"images/WSAuthorsAll.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSAuthorsAll.png"},
                                                                },
                                                            },
                                                            Geometry: &x3d.Box{
                                                                Size: &x3d.SFVec3f{4.0, 3.0, 0.25},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Group{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("SceneViewpoints01"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Viewpoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Scene_GrampsBack1View"),
                                            },
                                            Description: stringPtr("Looking down the path"),
                                            Position: &x3d.SFVec3f{7.0, 2.0, -6.5},
                                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -2.7},
                                            CenterOfRotation: &x3d.SFVec3f{7.0, 1.5, 0.0},
                                        },
                                        &x3d.Viewpoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Scene_KidsRunningTowardGramps"),
                                            },
                                            Description: stringPtr("Grand Kids Running"),
                                            Position: &x3d.SFVec3f{11.0, 1.6, 4.0},
                                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.5},
                                            CenterOfRotation: &x3d.SFVec3f{10.0, 0.8, 4.0},
                                        },
                                    },
                                },
                                &x3d.Group{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("CharactersAndCharacterViewpoints"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Gramps"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("GrampsBox"),
                                                        },
                                                        Translation: &x3d.SFVec3f{6.6, 0.0, 0.5},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Viewpoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Gramps01View"),
                                                            },
                                                            Description: stringPtr("Look at Gramps"),
                                                            Position: &x3d.SFVec3f{0.0, 4.0, 11.0},
                                                            Orientation: &x3d.SFRotation{-0.25, 0.0, 0.0, 0.3},
                                                        },
                                                        &x3d.Viewpoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Gramps03View"),
                                                            },
                                                            Description: stringPtr("Look at Heart over Gramps Shoulder"),
                                                            Position: &x3d.SFVec3f{-1.0, 2.0, -8.0},
                                                            Orientation: &x3d.SFRotation{0.0, 0.7, 0.0, 3.0},
                                                        },
                                                        &x3d.Inline{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Gramps11"),
                                                            },
                                                            Url: x3d.MFString{"Gramps11.x3dv", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/Gramps11.x3dv"},
                                                        },
                                                        &x3d.Inline{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("JointCoordinateAxes"),
                                                            },
                                                            Url: x3d.MFString{"JointCoordinateAxes.x3dv", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/JointCoordinateAxes.x3d"},
                                                        },
                                                        &x3d.Transform{
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Inline{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("CaneFitting"),
                                                                    },
                                                                    Url: x3d.MFString{"CaneFitting.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/CaneFitting.x3d", "CaneFitting.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/CaneFitting.wrl"},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("GrampsGrandKids"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("Leif"),
                                                        },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Transform{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("LeifBox"),
                                                                },
                                                                Translation: &x3d.SFVec3f{-7.9962, 0.0046, 3.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Viewpoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("LeifView"),
                                                                    },
                                                                    Description: stringPtr("Look at Leif"),
                                                                    Position: &x3d.SFVec3f{0.0, 2.0, 4.0},
                                                                    Orientation: &x3d.SFRotation{-0.25, 0.0, 0.0, 0.5},
                                                                },
                                                                &x3d.Inline{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("LeifAnimated"),
                                                                    },
                                                                    Url: x3d.MFString{"LeifAnimated.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/LeifAnimated.x3d", "LeifAnimated.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/LeifAnimated.wrl"},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("Lily"),
                                                        },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Transform{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("LilyBox"),
                                                                },
                                                                Translation: &x3d.SFVec3f{-8.0962, 0.0046, 5.6},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Viewpoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("Lilyview"),
                                                                    },
                                                                    Description: stringPtr("Look at Lily"),
                                                                    Position: &x3d.SFVec3f{0.0, 2.0, 4.0},
                                                                    Orientation: &x3d.SFRotation{-0.25, 0.0, 0.0, 0.5},
                                                                },
                                                                &x3d.Inline{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("LilyAnimated"),
                                                                    },
                                                                    Url: x3d.MFString{"LilyAnimated.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/LilyAnimated.x3d", "LilyAnimated.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/LilyAnimated.wrl"},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("Tufani"),
                                                        },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Transform{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("TufaniBox"),
                                                                },
                                                                Translation: &x3d.SFVec3f{-8.0962, 0.0046, 6.4},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Viewpoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("Tufaniview"),
                                                                    },
                                                                    Description: stringPtr("Look at Tufani"),
                                                                    Position: &x3d.SFVec3f{0.0, 2.0, 4.0},
                                                                    Orientation: &x3d.SFRotation{-0.25, 0.0, 0.0, 0.5},
                                                                },
                                                                &x3d.Inline{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("TufaniAnimated"),
                                                                    },
                                                                    Url: x3d.MFString{"TufaniAnimated.x3d", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TufaniAnimated.x3d", "TufaniAnimated.wrl", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TufaniAnimated.wrl"},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.PositionInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.43, 0.55, 0.63, 0.73, 0.85, 0.86, 0.88, 0.9, 0.92, 0.94, 0.96, 0.98, 1.0},
                                            KeyValue: &x3d.MFVec3f{[3]float32{6.6,0.0,0.5},[3]float32{6.8557,0.0,0.5},[3]float32{6.8557,0.0,0.5},[3]float32{9.8557,0.0,3.5},[3]float32{9.8557,0.1,3.5},[3]float32{9.8557,0.0,3.5},[3]float32{14.3558,0.0,8.0},[3]float32{16.8558,0.0,15.0},[3]float32{21.3557,0.0,24.5},[3]float32{21.3557,0.05,24.5},[3]float32{21.3557,0.0,24.5},[3]float32{21.3557,0.05,24.5},[3]float32{21.3557,0.0,24.5},[3]float32{21.3557,0.05,24.5},[3]float32{21.3557,0.0,24.5},[3]float32{21.3557,0.1,24.5},[3]float32{21.3557,0.0,24.5}},
                                        },
                                        &x3d.OrientationInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Gramps_HumanoidRoot_RotationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.25, 0.43, 0.55, 0.63, 0.73, 0.85, 0.88, 0.9, 0.92, 0.94, 0.96, 0.98, 1.0},
                                            KeyValue: &x3d.MFRotation{0.0, 1.0, 0.0, 1.65, 0.0, 1.0, 0.0, 1.65, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, -0.5, 0.0, 1.0, 0.0, -1.0, 0.0, 1.0, 0.0, -1.7, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.35, 0.0, 1.0, 0.0, 0.36, 0.0, 1.0, 0.0, 0.36},
                                        },
                                        &x3d.PositionInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Leif_Root_TranslationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.21, 0.223, 0.43, 0.55, 0.63, 0.73, 0.75, 0.85, 0.9, 1.0},
                                            KeyValue: &x3d.MFVec3f{[3]float32{-7.9962,0.0046,3.0},[3]float32{-7.9962,0.0046,3.0},[3]float32{-7.9962,0.0046,3.0},[3]float32{-7.9962,0.1046,3.0},[3]float32{-7.9962,0.0046,3.0},[3]float32{9.0038,0.0796,2.4999},[3]float32{11.5048,0.0796,3.4999},[3]float32{16.0038,0.0796,7.8699},[3]float32{18.5038,0.1796,14.8699},[3]float32{18.5038,0.0796,14.8699},[3]float32{23.0038,0.0796,24.3699},[3]float32{23.0038,0.0796,24.3699},[3]float32{23.0038,0.0796,24.3699}},
                                        },
                                        &x3d.OrientationInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Leif_HumanoidRoot_RotationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.05, 0.11, 0.22, 0.25, 0.43, 0.55, 0.63, 0.73, 0.85, 0.88, 0.9, 0.92, 0.94, 0.96, 0.98, 1.0},
                                            KeyValue: &x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.5, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3},
                                        },
                                        &x3d.PositionInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.225, 0.43, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                                            KeyValue: &x3d.MFVec3f{[3]float32{-8.0962,0.0046,5.6},[3]float32{-8.0962,0.0046,5.6},[3]float32{-8.0962,0.0046,5.6},[3]float32{-8.0962,0.0046,5.6},[3]float32{8.9038,0.0796,3.0999},[3]float32{10.1538,0.0796,3.0999},[3]float32{15.1538,0.0796,7.8499},[3]float32{17.6538,0.0796,14.8499},[3]float32{22.1538,0.0796,24.3499},[3]float32{22.1538,0.0796,24.3499},[3]float32{22.1538,0.0796,24.3499}},
                                        },
                                        &x3d.OrientationInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Lily_HumanoidRoot_RotationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.07, 0.11, 0.22, 0.25, 0.43, 0.55, 0.63, 0.73, 0.85, 0.88, 0.9, 0.92, 0.94, 0.96, 0.98, 1.0},
                                            KeyValue: &x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.5, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3},
                                        },
                                        &x3d.PositionInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.227, 0.43, 0.55, 0.63, 0.73, 0.85, 0.86, 1.0},
                                            KeyValue: &x3d.MFVec3f{[3]float32{-8.0962,0.0046,6.4},[3]float32{-8.0962,0.0046,6.4},[3]float32{-8.0962,0.0046,6.4},[3]float32{-8.0962,0.0046,6.4},[3]float32{8.7038,0.0796,3.8999},[3]float32{9.2038,0.0796,3.6499},[3]float32{13.6538,0.0796,7.7699},[3]float32{16.1538,0.0796,14.7699},[3]float32{20.6538,0.0796,24.2699},[3]float32{20.6538,0.0796,24.2699},[3]float32{20.6538,0.0796,24.2699}},
                                        },
                                        &x3d.OrientationInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Tufani_HumanoidRoot_RotationInterpolator"),
                                            },
                                            Key: x3d.MFFloat{0.0, 0.09, 0.11, 0.22, 0.25, 0.43, 0.55, 0.63, 0.73, 0.85, 0.88, 0.9, 0.92, 0.94, 0.96, 0.98, 1.0},
                                            KeyValue: &x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.6, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.5, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3, 0.0, 1.0, 0.0, 0.3},
                                        },
                                    },
                                },
                                &x3d.Group{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("SceneViewPoints02"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("WSDedicationTitle"),
                                                },
                                                Translation: &x3d.SFVec3f{10.0, 10.0, -10.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("WSDedicationTitleView"),
                                                    },
                                                    Description: stringPtr("Look at Dedication title"),
                                                    Position: &x3d.SFVec3f{0.0, 1.0, 5.0},
                                                    Orientation: &x3d.SFRotation{-0.15, 0.0, 0.0, 0.2},
                                                    Jump: boolPtr(false),
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                        },
                                                        Texture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"images/WSDedicationR1.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSDedicationR1.png"},
                                                        },
                                                    },
                                                    Geometry: &x3d.Box{
                                                        Size: &x3d.SFVec3f{4.0, 3.0, 0.25},
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("WSThanksTitle"),
                                                },
                                                Translation: &x3d.SFVec3f{10.0, 10.0, -15.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("WSThanksTitleView"),
                                                    },
                                                    Description: stringPtr("Look at Thanks title"),
                                                    Position: &x3d.SFVec3f{0.0, 1.0, 5.0},
                                                    Orientation: &x3d.SFRotation{-0.15, 0.0, 0.0, 0.2},
                                                    Jump: boolPtr(false),
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                        },
                                                        Texture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"images/WSThanksR2trimmed.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSThanksR2trimmed.png"},
                                                        },
                                                    },
                                                    Geometry: &x3d.Box{
                                                        Size: &x3d.SFVec3f{4.0, 3.0, 0.25},
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("WSMusicCreditsTitle"),
                                                },
                                                Translation: &x3d.SFVec3f{10.0, 10.0, -20.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("WSMusicCreditsTitleView"),
                                                    },
                                                    Description: stringPtr("Look at Music Credits title"),
                                                    Position: &x3d.SFVec3f{0.0, 1.0, 5.0},
                                                    Orientation: &x3d.SFRotation{-0.15, 0.0, 0.0, 0.2},
                                                    Jump: boolPtr(false),
                                                },
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                        },
                                                        Texture: &x3d.ImageTexture{
                                                            Url: x3d.MFString{"images/WSMusicCreditAll.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSMusicCreditAll.png"},
                                                        },
                                                    },
                                                    Geometry: &x3d.Box{
                                                        Size: &x3d.SFVec3f{4.0, 3.0, 0.25},
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
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_StageFarViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 1.0},
                    KeyValue: &x3d.MFBool{true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("WinterAndSpringTitleViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.03, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("WSAuthorsTitleViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.06, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_GrampsBack1ViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.09, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Scene_KidsRunningTowardGrampsSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.23, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("LeifViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.3, 1.0},
                    KeyValue: &x3d.MFBool{false, false, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("LilyViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.33, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TufaniViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.36, 1.0},
                    KeyValue: &x3d.MFBool{false, false, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Gramps01ViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.56, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Gramps03ViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.75, 1.0},
                    KeyValue: &x3d.MFBool{false, true, true},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("WSDedicationTitleViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.89, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("WSThanksTitleViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.93, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.BooleanSequencer{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("WSMusicCreditsTitleViewSequencer"),
                    },
                    Key: x3d.MFFloat{0.0, 0.96, 1.0},
                    KeyValue: &x3d.MFBool{false, true, false},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("BackgroundsAndBackgroundSwitching"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Background{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background1Black"),
                            },
                            GroundColor: &x3d.MFColor{[3]float32{0.0,0.0,0.0}},
                        },
                        &x3d.Background{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background2GraySkyGreenGrass"),
                            },
                            FrontUrl: x3d.MFString{"images/SCENE_FOG_1.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/SCENE_FOG_1.png"},
                            BackUrl: x3d.MFString{"images/SCENE_FOG_1.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/SCENE_FOG_1.png"},
                            LeftUrl: x3d.MFString{"images/SCENE_FOG_1.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/SCENE_FOG_1.png"},
                            RightUrl: x3d.MFString{"images/SCENE_FOG_1.png", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/SCENE_FOG_1.png"},
                            SkyColor: &x3d.MFColor{[3]float32{0.827,0.827,0.827}},
                            GroundAngle: x3d.MFFloat{1.57},
                            GroundColor: &x3d.MFColor{[3]float32{0.956,0.639,0.0},[3]float32{0.721,1.0,0.501}},
                        },
                        &x3d.Background{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background3BlueSkyGreenGrass"),
                            },
                            SkyColor: &x3d.MFColor{[3]float32{0.0,0.71,0.886}},
                            GroundAngle: x3d.MFFloat{1.57},
                            GroundColor: &x3d.MFColor{[3]float32{0.356,0.639,0.0},[3]float32{0.721,1.0,0.501}},
                        },
                        &x3d.Background{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background4DarkGrey"),
                            },
                            SkyColor: &x3d.MFColor{[3]float32{0.6,0.6,0.6}},
                        },
                        &x3d.BooleanSequencer{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background1BlackSequencer"),
                            },
                            Key: x3d.MFFloat{0.0, 0.9, 1.0},
                            KeyValue: &x3d.MFBool{true, true, true},
                        },
                        &x3d.BooleanSequencer{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background2GraySkyGreenGrassSequencer"),
                            },
                            Key: x3d.MFFloat{0.0, 0.09, 1.0},
                            KeyValue: &x3d.MFBool{false, true, false},
                        },
                        &x3d.BooleanSequencer{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background3SkyBlueGreenGrassSequencer"),
                            },
                            Key: x3d.MFFloat{0.0, 0.22, 1.0},
                            KeyValue: &x3d.MFBool{false, true, false},
                        },
                        &x3d.BooleanSequencer{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Background4DarkGreySequencer"),
                            },
                            Key: x3d.MFFloat{0.0, 0.85, 1.0},
                            KeyValue: &x3d.MFBool{false, true, false},
                        },
                    },
                },
                &x3d.LoadSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("EveryInlineLoadSensor"),
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("PathMeshTopSurface"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("Pathway"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("Bushes"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("FlowerSet"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("FlowerGardens"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("Gramps11"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("JointCoordinateAxes"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("CaneFitting"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("LeifAnimated"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("LilyAnimated"),
                        },
                    },
                    &x3d.Inline{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("TufaniAnimated"),
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StartTIME"),
                    FromField: stringPtr("cycleTime"),
                    ToNode: stringPtr("StartTIME"),
                    ToField: stringPtr("set_stopTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StartTIME"),
                    FromField: stringPtr("stopTime_changed"),
                    ToNode: stringPtr("DelayTIME"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("DelayTIME"),
                    FromField: stringPtr("isActive"),
                    ToNode: stringPtr("DelayFILTER"),
                    ToField: stringPtr("set_boolean"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("DelayFILTER"),
                    FromField: stringPtr("inputFalse"),
                    ToNode: stringPtr("Clock100SecondsTRIGGER"),
                    ToField: stringPtr("set_boolean"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100SecondsTRIGGER"),
                    FromField: stringPtr("triggerTime"),
                    ToNode: stringPtr("Clock100Seconds"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StartTIME"),
                    FromField: stringPtr("stopTime_changed"),
                    ToNode: stringPtr("Melodies1"),
                    ToField: stringPtr("set_startTime"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Gramps_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("GrampsBox"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Gramps_HumanoidRoot_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Gramps_HumanoidRoot_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("GrampsBox"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Leif_Root_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Leif_Root_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("LeifBox"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Leif_HumanoidRoot_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Leif_HumanoidRoot_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("LeifBox"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Lily_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("LilyBox"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Lily_HumanoidRoot_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Lily_HumanoidRoot_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("LilyBox"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Tufani_HumanoidRoot_TranslationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("TufaniBox"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Tufani_HumanoidRoot_RotationInterpolator"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Tufani_HumanoidRoot_RotationInterpolator"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("TufaniBox"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Scene_StageFarViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Scene_StageFarViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Scene_StageFarView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("WinterAndSpringTitleViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WinterAndSpringTitleViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("WinterAndSpringTitleView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("WSAuthorsTitleViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WSAuthorsTitleViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("WSAuthorsTitleView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Scene_GrampsBack1ViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Scene_GrampsBack1ViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Scene_GrampsBack1View"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Scene_KidsRunningTowardGrampsSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Scene_KidsRunningTowardGrampsSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Scene_KidsRunningTowardGramps"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("LeifViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("LeifViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("LeifView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("LilyViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("LilyViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Lilyview"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("TufaniViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TufaniViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Tufaniview"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Gramps01ViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Gramps01ViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Gramps01View"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Gramps03ViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Gramps03ViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Gramps03View"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("WSDedicationTitleViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WSDedicationTitleViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("WSDedicationTitleView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("WSThanksTitleViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WSThanksTitleViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("WSThanksTitleView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("WSMusicCreditsTitleViewSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("WSMusicCreditsTitleViewSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("WSMusicCreditsTitleView"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background1BlackSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background2GraySkyGreenGrassSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background3SkyBlueGreenGrassSequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Clock100Seconds"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Background4DarkGreySequencer"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background1BlackSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background1Black"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background2GraySkyGreenGrassSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background2GraySkyGreenGrass"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background3SkyBlueGreenGrassSequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background3BlueSkyGreenGrass"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Background4DarkGreySequencer"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Background4DarkGrey"),
                    ToField: stringPtr("set_bind"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("EveryInlineLoadSensor"),
                    FromField: stringPtr("loadTime"),
                    ToNode: stringPtr("StartTIME"),
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
	filename := "../data/MainStage.new.go.x3d"
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