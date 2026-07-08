
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
                    Content: stringPtr("Trebuchet.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Working model of a 14th century Trebuchet Catapult."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("LT Joe Roth"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("20 June 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("20 October 2019"),
            },
            &x3d.Meta{
                Name: stringPtr("version"),
                Content: stringPtr("7.8"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://trebuchet.com"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://members.home.net/dimona"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("trebuchet catapult Monty Python"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
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
                    Title: stringPtr("Trebuchet.x3d"),
                },
                &x3d.Background{
                    BackUrl: x3d.MFString{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"},
                    BottomUrl: x3d.MFString{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"},
                    FrontUrl: x3d.MFString{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"},
                    GroundAngle: x3d.MFFloat{1.309, 1.570796},
                    GroundColor: &x3d.MFColor{[3]float32{0.1,0.1,0.0},[3]float32{0.4,0.25,0.2},[3]float32{0.6,0.6,0.6}},
                    LeftUrl: x3d.MFString{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"},
                    RightUrl: x3d.MFString{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"},
                    SkyAngle: x3d.MFFloat{1.309, 1.57079},
                    SkyColor: &x3d.MFColor{[3]float32{0.0,0.2,0.7},[3]float32{0.0,0.5,1.0},[3]float32{1.0,1.0,1.0}},
                    TopUrl: x3d.MFString{"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"},
                },
                &x3d.Sound{
                    MaxBack: floatPtr(1000.0),
                    MaxFront: floatPtr(1000.0),
                    Source: &x3d.AudioClip{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("HolyGrail"),
                        },
                        Description: stringPtr("HolyGrail"),
                        Loop: boolPtr(true),
                        Url: x3d.MFString{"holygral.mp3", "http://www.nps.navy.mil/code32/vrml/holygral.mp3"},
                    },
                },
                &x3d.Shape{
                    Geometry: &x3d.Box{
                        Size: &x3d.SFVec3f{10000.0, 1.0, 10000.0},
                    },
                    Appearance: &x3d.Appearance{
                        Texture: &x3d.ImageTexture{
                            Url: x3d.MFString{"grass.jpg", "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"},
                        },
                    },
                },
                &x3d.Transform{
                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                        Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                        Translation: &x3d.SFVec3f{10.5, 6.5, 4.5},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TextAppearance"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                    EmissiveColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"Click Sling to Select Projectile"},
                                FontStyle: &x3d.FontStyle{
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                        Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                        Translation: &x3d.SFVec3f{11.0, 5.5, 6.0},
                    Children: []x3d.X3DNode{
                        &x3d.Switch{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Weight"),
                            },
                            WhichChoice: int32Ptr(0),
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TextAppearance"),
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Click Here to Change Counter Weight (50 lbs)"},
                                        },
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TextAppearance"),
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Click Here to Change Counter Weight (500 lbs)"},
                                        },
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TextAppearance"),
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Click Here to Change Counter Weight (1000 lbs)"},
                                        },
                                    },
                                },
                            },
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TextAppearance"),
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Click Here to Change Counter Weight (10000 lbs)"},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.TouchSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("weightselector"),
                            },
                            Description: stringPtr("weight selector"),
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{8.0, 0.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{20.0, 1.0, 1.0},
                                    },
                                    Appearance: &x3d.Appearance{
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
                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                        Translation: &x3d.SFVec3f{10.0, 0.5, 4.5},
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("launch"),
                                },
                                Translation: &x3d.SFVec3f{0.0, 2.0, 5.0},
                            Children: []x3d.X3DNode{
                                &x3d.Billboard{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.0},
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"LAUNCH"},
                                            FontStyle: &x3d.FontStyle{
                                            },
                                        },
                                    },
                                    &x3d.Transform{
                                            Translation: &x3d.SFVec3f{2.0, 0.3, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Geometry: &x3d.Box{
                                                    Size: &x3d.SFVec3f{5.0, 1.0, 1.0},
                                                },
                                                Appearance: &x3d.Appearance{
                                                    Material: &x3d.Material{
                                                        Transparency: floatPtr(1.0),
                                                    },
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Switch{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PigdogMonk"),
                                        },
                                        WhichChoice: int32Ptr(-1),
                                        &x3d.Group{
                                            Children: []x3d.X3DNode{
                                                &x3d.Sound{
                                                    MaxBack: floatPtr(1000.0),
                                                    MaxFront: floatPtr(1000.0),
                                                    Source: &x3d.AudioClip{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("PigDogSound"),
                                                        },
                                                        Description: stringPtr("PigDogSound"),
                                                        Url: x3d.MFString{"pigdog.wav", "http://www.nps.navy.mil/code32/vrml/pigdog.wav"},
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Group{
                                            Children: []x3d.X3DNode{
                                                &x3d.Sound{
                                                    MaxBack: floatPtr(1000.0),
                                                    MaxFront: floatPtr(1000.0),
                                                    Source: &x3d.AudioClip{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("MonkSound"),
                                                        },
                                                        Description: stringPtr("MonkSound"),
                                                        Url: x3d.MFString{"monks.wav", "http://www.nps.navy.mil/code32/vrml/monks.wav"},
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.TouchSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Launch"),
                                    },
                                    Description: stringPtr("launch!"),
                                },
                            },
                        },
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Switch{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("projectilename"),
                                    },
                                    WhichChoice: int32Ptr(0),
                                    &x3d.Group{
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("TextAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"Bowling Ball (10 lbs)"},
                                                    FontStyle: &x3d.FontStyle{
                                                        Size: floatPtr(0.5),
                                                    },
                                                },
                                            },
                                            &x3d.Sound{
                                                MaxBack: floatPtr(1000.0),
                                                MaxFront: floatPtr(1000.0),
                                                Priority: floatPtr(1.0),
                                                Source: &x3d.AudioClip{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HolyHandGrenadeSound"),
                                                    },
                                                    Description: stringPtr("HolyHandGrenadeSound"),
                                                    Url: x3d.MFString{"grenade.wav", "http://www.nps.navy.mil/code32/vrml/grenade.wav"},
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Group{
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("TextAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"Cow (1000 lbs)"},
                                                    FontStyle: &x3d.FontStyle{
                                                        Size: floatPtr(0.5),
                                                    },
                                                },
                                            },
                                            &x3d.Sound{
                                                MaxBack: floatPtr(1000.0),
                                                MaxFront: floatPtr(1000.0),
                                                Source: &x3d.AudioClip{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("CowSound"),
                                                    },
                                                    Description: stringPtr("CowSound"),
                                                    Url: x3d.MFString{"lavache.wav", "http://www.nps.navy.mil/code32/vrml/lavache.wav"},
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Group{
                                        Children: []x3d.X3DNode{
                                            &x3d.Shape{
                                                Appearance: &x3d.Appearance{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("TextAppearance"),
                                                    },
                                                },
                                                Geometry: &x3d.Text{
                                                    String: x3d.MFString{"Chicken (5 lbs)"},
                                                    FontStyle: &x3d.FontStyle{
                                                        Size: floatPtr(0.5),
                                                    },
                                                },
                                            },
                                            &x3d.Sound{
                                                MaxBack: floatPtr(1000.0),
                                                MaxFront: floatPtr(1000.0),
                                                Priority: floatPtr(1.0),
                                                Source: &x3d.AudioClip{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HamsterSound"),
                                                    },
                                                    Description: stringPtr("HamsterSound"),
                                                    Url: x3d.MFString{"hamster.wav", "http://www.nps.navy.mil/code32/vrml/hamster.wav"},
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.67},
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("aft"),
                                },
                                Translation: &x3d.SFVec3f{5.0, 5.0, 15.0},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{-2.5, -4.5, -2.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("launch"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Translation: &x3d.SFVec3f{0.0, 3.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("plank"),
                            },
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{25.0, 1.0, 1.0},
                            },
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("wood"),
                                },
                                Texture: &x3d.ImageTexture{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("woodTexture"),
                                    },
                                    Url: x3d.MFString{"wood.gif", "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"},
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("angledsupport"),
                                },
                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.0},
                                Translation: &x3d.SFVec3f{-5.0, 10.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("plank"),
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("angledsupport2"),
                                },
                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -1.0},
                                Translation: &x3d.SFVec3f{5.0, 10.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("plank"),
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("verticalsupport"),
                                },
                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                Scale: &x3d.SFVec3f{0.9, 1.0, 1.0},
                                Translation: &x3d.SFVec3f{0.0, 11.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("plank"),
                                    },
                                },
//Main Verticle Support
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("horizontalsupport"),
                                },
                                Scale: &x3d.SFVec3f{0.4, 1.0, 1.0},
                                Translation: &x3d.SFVec3f{0.0, 10.0, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("plank"),
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                Scale: &x3d.SFVec3f{0.6, 1.0, 1.0},
                                Translation: &x3d.SFVec3f{0.0, 5.0, 10.0},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.4},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("plank"),
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("panel"),
                                },
                                Translation: &x3d.SFVec3f{0.0, 18.2, -0.3},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{5.0, 5.0, 0.5},
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("wood"),
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                                Translation: &x3d.SFVec3f{0.0, 0.6, 2.5},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Geometry: &x3d.Extrusion{
                                                BeginCap: boolPtr(false),
                                                CrossSection: &x3d.MFVec2f{[2]float32{1.0,-0.38},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,-0.38},[2]float32{-1.0,-1.1},[2]float32{1.0,-1.1},[2]float32{1.0,-0.38}},
                                                EndCap: boolPtr(false),
                                                Solid: boolPtr(false),
                                                Spine: &x3d.MFVec3f{[3]float32{0.0,6.0,0.0},[3]float32{0.0,-11.0,0.0}},
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("wood"),
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("flinger"),
                                },
                                Center: &x3d.SFVec3f{7.0, 0.0, 0.0},
                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 0.82},
                                Scale: &x3d.SFVec3f{0.9, 1.0, 1.0},
                                Translation: &x3d.SFVec3f{-7.0, 18.0, 2.5},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Geometry: &x3d.Box{
                                                Size: &x3d.SFVec3f{35.0, 1.0, 1.0},
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("wood"),
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{7.0, 0.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Geometry: &x3d.Box{
                                                        Size: &x3d.SFVec3f{8.0, 2.0, 2.0},
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("wood"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Scale: &x3d.SFVec3f{0.2, 0.2, 0.2},
                                        Translation: &x3d.SFVec3f{-15.0, -1.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Torus"),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                },
                                            },
                                            Geometry: &x3d.Extrusion{
                                                BeginCap: boolPtr(false),
                                                Convex: boolPtr(false),
                                                CreaseAngle: floatPtr(1.57),
                                                CrossSection: &x3d.MFVec2f{[2]float32{0.9,0.0},[2]float32{0.81,-0.34},[2]float32{0.63,-0.63},[2]float32{0.34,-0.83},[2]float32{0.0,-0.9},[2]float32{-0.34,-0.81},[2]float32{-0.63,-0.63},[2]float32{-0.81,-0.34},[2]float32{-0.9,0.0},[2]float32{-0.81,0.34},[2]float32{-0.63,0.63},[2]float32{-0.34,0.81},[2]float32{0.0,0.9},[2]float32{0.38,0.81},[2]float32{0.63,0.63},[2]float32{0.81,0.34},[2]float32{0.9,0.0}},
                                                EndCap: boolPtr(false),
                                                Spine: &x3d.MFVec3f{[3]float32{2.0,0.0,0.0},[3]float32{1.85,0.0,0.77},[3]float32{1.41,0.0,1.41},[3]float32{0.77,0.0,1.85},[3]float32{0.0,0.0,2.0},[3]float32{-0.77,0.0,1.85},[3]float32{-1.41,0.0,1.41},[3]float32{-1.85,0.0,0.77},[3]float32{-2.0,0.0,0.0},[3]float32{-1.85,0.0,-0.77},[3]float32{-1.41,0.0,-1.41},[3]float32{-0.77,0.0,-1.85},[3]float32{0.0,0.0,-2.0},[3]float32{0.77,0.0,-1.85},[3]float32{1.41,0.0,-1.41},[3]float32{1.85,0.0,-0.77},[3]float32{2.0,0.0,0.0}},
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{1.0, 0.0, 2.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("rope"),
                                                        },
                                                        Texture: &x3d.ImageTexture{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("woodTexture"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(1.5),
                                                    },
                                                },
//knott
                                            },
                                        },
                                    },
                                },
//The Unicorn
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.2},
                                        Scale: &x3d.SFVec3f{0.2, 0.2, 0.2},
                                        Translation: &x3d.SFVec3f{-18.3, 0.3, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Geometry: &x3d.Cylinder{
                                                Height: floatPtr(10.0),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, -2.5, 0.0},
                                            Children: []x3d.X3DNode{
//The Unicorn
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Torus"),
                                                    },
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-2.0, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            Geometry: &x3d.Sphere{
                                                                Radius: floatPtr(1.5),
                                                            },
                                                            Appearance: &x3d.Appearance{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("rope"),
                                                                },
                                                            },
                                                        },
//Knott
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.2},
                                                Translation: &x3d.SFVec3f{15.0, 55.0, -11.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                        Scale: &x3d.SFVec3f{5.0, 5.0, 5.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("rope"),
                                                                },
                                                            },
                                                            Geometry: &x3d.Extrusion{
                                                                BeginCap: boolPtr(false),
                                                                CreaseAngle: floatPtr(0.76),
                                                                CrossSection: &x3d.MFVec2f{[2]float32{0.1,0.0},[2]float32{0.092,-0.038},[2]float32{0.071,-0.071},[2]float32{0.038,-0.092},[2]float32{0.0,-0.1},[2]float32{-0.038,-0.092},[2]float32{-0.071,-0.071},[2]float32{-0.092,-0.038},[2]float32{-0.1,0.0},[2]float32{-0.092,0.038},[2]float32{-0.071,0.071},[2]float32{-0.038,0.092},[2]float32{0.0,0.1},[2]float32{0.038,0.092},[2]float32{0.071,0.071},[2]float32{0.092,0.038},[2]float32{0.1,0.0}},
                                                                EndCap: boolPtr(false),
                                                                Solid: boolPtr(false),
                                                                Spine: &x3d.MFVec3f{[3]float32{-15.2,1.4,2.2},[3]float32{-12.0,-0.8,2.2}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.7},
                                        Translation: &x3d.SFVec3f{-17.0, -4.5, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                Scale: &x3d.SFVec3f{0.2, 0.2, 0.2},
                                            Children: []x3d.X3DNode{
//Knot
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Torus"),
                                                    },
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-1.0, 0.0, 1.7},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            Geometry: &x3d.Sphere{
                                                                Radius: floatPtr(1.5),
                                                            },
                                                            Appearance: &x3d.Appearance{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("rope"),
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("RnS"),
                                        },
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("ropes"),
                                                },
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -0.82},
                                                        Translation: &x3d.SFVec3f{7.0, -26.0, -2.5},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("rope"),
                                                                },
                                                            },
                                                            Geometry: &x3d.Extrusion{
                                                                BeginCap: boolPtr(false),
                                                                CreaseAngle: floatPtr(0.76),
                                                                CrossSection: &x3d.MFVec2f{[2]float32{0.1,0.0},[2]float32{0.092,-0.038},[2]float32{0.071,-0.071},[2]float32{0.038,-0.092},[2]float32{0.0,-0.1},[2]float32{-0.038,-0.092},[2]float32{-0.071,-0.071},[2]float32{-0.092,-0.038},[2]float32{-0.1,0.0},[2]float32{-0.092,0.038},[2]float32{-0.071,0.071},[2]float32{-0.038,0.092},[2]float32{0.0,0.1},[2]float32{0.038,0.092},[2]float32{0.071,0.071},[2]float32{0.092,0.038},[2]float32{0.1,0.0}},
                                                                EndCap: boolPtr(false),
                                                                Solid: boolPtr(false),
                                                                Spine: &x3d.MFVec3f{[3]float32{-33.0,0.9,2.5},[3]float32{-18.5,1.9,2.55}},
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Appearance: &x3d.Appearance{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("rope"),
                                                                },
                                                            },
                                                            Geometry: &x3d.Extrusion{
                                                                BeginCap: boolPtr(false),
                                                                CreaseAngle: floatPtr(0.76),
                                                                CrossSection: &x3d.MFVec2f{[2]float32{0.1,0.0},[2]float32{0.092,-0.038},[2]float32{0.071,-0.071},[2]float32{0.038,-0.092},[2]float32{0.0,-0.1},[2]float32{-0.038,-0.092},[2]float32{-0.071,-0.071},[2]float32{-0.092,-0.038},[2]float32{-0.1,0.0},[2]float32{-0.092,0.038},[2]float32{-0.071,0.071},[2]float32{-0.038,0.092},[2]float32{0.0,0.1},[2]float32{0.038,0.092},[2]float32{0.071,0.071},[2]float32{0.092,0.038},[2]float32{0.1,0.0}},
                                                                EndCap: boolPtr(false),
                                                                Solid: boolPtr(false),
                                                                Spine: &x3d.MFVec3f{[3]float32{-35.7,-0.8,2.5},[3]float32{-18.8,-0.8,2.55}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("sling"),
                                                },
                                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -0.82},
                                                Translation: &x3d.SFVec3f{-4.0, -15.3, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Transform{
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Transform{
                                                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                                                                Scale: &x3d.SFVec3f{1.0, 1.3, 1.0},
                                                                Translation: &x3d.SFVec3f{0.5, 0.0, -1.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Transform{
                                                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Transform{
                                                                                Scale: &x3d.SFVec3f{0.3, 0.3, 0.3},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("halfsling"),
                                                                                    },
                                                                                    Appearance: &x3d.Appearance{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            DEF: stringPtr("clear"),
                                                                                        },
                                                                                        Material: &x3d.Material{
                                                                                            Transparency: floatPtr(0.5),
                                                                                        },
                                                                                    },
                                                                                    Geometry: &x3d.Extrusion{
                                                                                        CrossSection: &x3d.MFVec2f{[2]float32{0.0,0.0},[2]float32{0.0,5.0},[2]float32{0.5,7.0},[2]float32{1.0,8.0},[2]float32{2.0,9.0},[2]float32{3.0,11.0},[2]float32{3.5,11.2},[2]float32{4.0,11.0},[2]float32{5.0,9.0},[2]float32{6.0,8.0},[2]float32{6.5,7.0},[2]float32{6.7,5.0},[2]float32{6.7,0.0},[2]float32{0.0,0.0}},
                                                                                        Spine: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.1,0.0,0.0}},
                                                                                    },
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Scale: &x3d.SFVec3f{0.3, 0.3, 0.3},
                                                                                        Translation: &x3d.SFVec3f{0.0, -3.5, 11.5},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Shape{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                USE: stringPtr("Torus"),
                                                                                            },
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.0, 0.0, 2.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Shape{
                                                                                                    Appearance: &x3d.Appearance{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            USE: stringPtr("rope"),
                                                                                                        },
                                                                                                    },
                                                                                                    Geometry: &x3d.Sphere{
                                                                                                        Radius: floatPtr(1.5),
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                        &x3d.Transform{
                                                                                Scale: &x3d.SFVec3f{0.3, 0.3, 0.3},
                                                                                Translation: &x3d.SFVec3f{2.0, 0.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("halfsling"),
                                                                                    },
                                                                                },
                                                                                &x3d.Transform{
                                                                                        Scale: &x3d.SFVec3f{0.3, 0.3, 0.3},
                                                                                        Translation: &x3d.SFVec3f{0.0, -3.5, 11.3},
                                                                                    Children: []x3d.X3DNode{
                                                                                        &x3d.Shape{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                USE: stringPtr("Torus"),
                                                                                            },
                                                                                        },
                                                                                        &x3d.Transform{
                                                                                                Translation: &x3d.SFVec3f{0.0, 0.0, 2.0},
                                                                                            Children: []x3d.X3DNode{
                                                                                                &x3d.Shape{
                                                                                                    Appearance: &x3d.Appearance{
                                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                                            USE: stringPtr("rope"),
                                                                                                        },
                                                                                                    },
                                                                                                    Geometry: &x3d.Sphere{
                                                                                                        Radius: floatPtr(1.5),
                                                                                                    },
                                                                                                },
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{1.0, -1.0, 0.0},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.Shape{
                                                                                    Geometry: &x3d.Extrusion{
                                                                                        BeginCap: boolPtr(false),
                                                                                        CreaseAngle: floatPtr(0.785),
                                                                                        CrossSection: &x3d.MFVec2f{[2]float32{1.0,0.0},[2]float32{0.92,-0.38},[2]float32{0.71,-0.71},[2]float32{0.38,-0.92},[2]float32{0.0,-1.0},[2]float32{-0.38,-0.92},[2]float32{-0.71,-0.71},[2]float32{-0.92,-0.38},[2]float32{-1.0,0.0}},
                                                                                        EndCap: boolPtr(false),
                                                                                        Solid: boolPtr(false),
                                                                                        Spine: &x3d.MFVec3f{[3]float32{0.0,-1.0,0.0},[3]float32{0.0,1.0,0.0}},
                                                                                    },
                                                                                    Appearance: &x3d.Appearance{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            USE: stringPtr("clear"),
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.TouchSensor{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("LauncheeChoice"),
                                                                    },
                                                                    Description: stringPtr("launcher choice"),
                                                                },
                                                            },
                                                        },
                                                        &x3d.Transform{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("projectiletransform"),
                                                                },
                                                                Scale: &x3d.SFVec3f{0.01, 0.01, 0.01},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Switch{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("projectile"),
                                                                    },
                                                                    WhichChoice: int32Ptr(0),
                                                                    &x3d.Group{
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Transform{
                                                                                    Translation: &x3d.SFVec3f{0.0, 0.7, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.Shape{
                                                                                        Geometry: &x3d.Sphere{
                                                                                            Radius: floatPtr(0.7),
                                                                                        },
                                                                                        Appearance: &x3d.Appearance{
                                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                                DEF: stringPtr("black"),
                                                                                            },
                                                                                            Material: &x3d.Material{
                                                                                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                                                                                SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.Group{
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Transform{
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.Inline{
                                                                                        Url: x3d.MFString{"cow.wrl", "http://www.uoguelph.ca/~dchiu/cow.wrl"},
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.Group{
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Transform{
                                                                                    Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                                                                                    Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                                                                                    Translation: &x3d.SFVec3f{0.0, 0.7, 0.0},
                                                                                Children: []x3d.X3DNode{
                                                                                    &x3d.Inline{
                                                                                        Url: x3d.MFString{"vrml_ginger.wrl", "http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"},
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
                        &x3d.Transform{
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                Translation: &x3d.SFVec3f{0.0, 18.0, 2.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Cylinder{
                                        Height: floatPtr(8.0),
                                        Radius: floatPtr(0.4),
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                            SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                        },
                                    },
                                },
//Top Pivot
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("verticalweight"),
                                },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{4.0, 18.0, 1.8},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Geometry: &x3d.Box{
                                                Size: &x3d.SFVec3f{1.0, 10.0, 0.5},
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("wood"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{4.0, 18.0, 3.2},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Geometry: &x3d.Box{
                                                Size: &x3d.SFVec3f{1.0, 10.0, 0.5},
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("wood"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{4.0, 14.0, 2.5},
                                    Children: []x3d.X3DNode{
//CounterWeight
                                        &x3d.Shape{
                                            Geometry: &x3d.Cylinder{
                                                Height: floatPtr(4.0),
                                                Radius: floatPtr(1.5),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                                    SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Translation: &x3d.SFVec3f{4.0, 22.0, 2.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Geometry: &x3d.Cylinder{
                                                Height: floatPtr(2.5),
                                                Radius: floatPtr(0.3),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                                    SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 1.57},
                                Scale: &x3d.SFVec3f{0.2, 0.2, 0.2},
                                Translation: &x3d.SFVec3f{-11.5, -1.0, 2.0},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("screw"),
                                        },
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("Torus"),
                                            },
                                        },
                                        &x3d.Transform{
                                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                                                Translation: &x3d.SFVec3f{0.0, 0.0, 7.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Geometry: &x3d.Cylinder{
                                                        Height: floatPtr(10.0),
                                                        Radius: floatPtr(0.7),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            SpecularColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.0, 7.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("screw"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                    },
                                },
//Release Pin
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("Pin"),
                                        },
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                                        Translation: &x3d.SFVec3f{0.0, 0.0, -3.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("screw"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, 0.0, 5.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("plank"),
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("angledsupport"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("angledsupport2"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("verticalsupport"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("horizontalsupport"),
                                        },
                                    Children: []x3d.X3DNode{
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                                        Scale: &x3d.SFVec3f{0.6, 1.0, 1.0},
                                        Translation: &x3d.SFVec3f{0.0, -11.0, -2.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("horizontalsupport"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, -1.57},
                                        Scale: &x3d.SFVec3f{0.6, 1.0, 1.0},
                                        Translation: &x3d.SFVec3f{0.0, 5.0, -10.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 0.4},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("plank"),
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.0, 0.6},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("panel"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{10.0, -1.0, 2.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Axle"),
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{1.0, 1.0, 8.0},
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("wood"),
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Translation: &x3d.SFVec3f{0.0, 0.0, 4.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("wheel"),
                                            },
                                            Geometry: &x3d.Cylinder{
                                                Radius: floatPtr(2.0),
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("wood"),
                                                },
                                            },
                                        },
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("tracks"),
                                            },
                                            Geometry: &x3d.Sphere{
                                                Radius: floatPtr(1.5),
                                            },
                                            Appearance: &x3d.Appearance{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("black"),
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, 0.55, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hub"),
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        Radius: floatPtr(1.5),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("black"),
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Translation: &x3d.SFVec3f{0.0, 0.0, -4.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("wheel"),
                                            },
                                        },
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("tracks"),
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, -0.55, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("hub"),
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-10.0, -1.0, 2.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("Axle"),
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Translation: &x3d.SFVec3f{0.0, 0.0, 4.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("wheel"),
                                            },
                                        },
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("tracks"),
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, 0.55, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("hub"),
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 1.57},
                                        Translation: &x3d.SFVec3f{0.0, 0.0, -4.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("wheel"),
                                            },
                                        },
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("tracks"),
                                            },
                                        },
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{0.0, -0.55, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("hub"),
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -0.6},
                                        Translation: &x3d.SFVec3f{0.0, 100.0, 400.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{1.0, 3.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Side"),
                                                },
                                            },
                                        },
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("launch"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                        &x3d.Transform{
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("LauncheeChoice"),
                                                    },
                                                },
                                                &x3d.Switch{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("projectilename"),
                                                    },
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{2.5, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            Geometry: &x3d.Box{
                                                                Size: &x3d.SFVec3f{5.0, 0.5, 0.5},
                                                            },
                                                            Appearance: &x3d.Appearance{
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
                                                Scale: &x3d.SFVec3f{0.5, 0.5, 0.5},
                                                Translation: &x3d.SFVec3f{0.0, -1.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("weightselector"),
                                                    },
                                                },
                                                &x3d.Switch{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("Weight"),
                                                    },
                                                },
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{8.0, 0.0, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            Geometry: &x3d.Box{
                                                                Size: &x3d.SFVec3f{17.0, 1.0, 0.5},
                                                            },
                                                            Appearance: &x3d.Appearance{
                                                                Material: &x3d.Material{
                                                                    Transparency: floatPtr(1.0),
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("ProjectileTransform"),
                                        },
                                        Translation: &x3d.SFVec3f{14.25, 1.25, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Switch{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("projectile"),
                                            },
                                        },
                                        &x3d.Transform{
                                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                                                Translation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Projectile Cam"),
                                                    Position: &x3d.SFVec3f{0.0, 0.0, 15.0},
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{20.0, 2.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Front"),
                                                },
                                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Fore"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{-8.0, 4.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                Rotation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                                            Children: []x3d.X3DNode{
                                                &x3d.Viewpoint{
                                                    Description: stringPtr("Aft"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Script{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("WeightScript"),
                                    },
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("set_boolean"),
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFBool"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("whichchoice"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFInt32"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("CounterWeight"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFFloat"),
                                    },
//ecmascript:
//
//
//function initialize ()
//{
//	whichchoice =0;
//	CounterWeight=100;
//}
//
//function set_boolean ( boolean_input, eventTime)
//{
//
//	if ( boolean_input== false ) { return; } // ignore the unclick
//        whichchoice = whichchoice +1;
//	if (whichchoice == 0)CounterWeight=50.00;
//	if (whichchoice == 1)CounterWeight=500.00;
//	if (whichchoice == 2)CounterWeight=1000.00;
//	if (whichchoice == 3)CounterWeight=10000.00;
//        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }
//
//
//        Browser.println ('CounterWeight ='+CounterWeight);
//}
                                    },
                                },
                                &x3d.Script{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("LauncheeScript"),
                                    },
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("set_boolean"),
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFBool"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("whichchoice"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFInt32"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("ProjectileWeight"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFFloat"),
                                    },
//ecmascript:
//
//function set_boolean (boolean_input, eventTime)
//{
//	if ( boolean_input== false ) { return; } // ignore unclick
//        whichchoice = whichchoice +1;
//        if (whichchoice == 0)ProjectileWeight=10.00;
//        if (whichchoice == 1)ProjectileWeight=1000.00;
//	if (whichchoice == 2)ProjectileWeight=5;
//
//	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }
//	Browser.println ('Projectile Weight'+ProjectileWeight);
//}
                                    },
                                },
                                &x3d.Script{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("PigdogMonkScript"),
                                    },
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("set_boolean"),
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFBool"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("whichchoice"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFInt32"),
                                    },
//ecmascript:
//
//function set_boolean (boolean_input, eventTime)
//{
//	if ( boolean_input== false ) { return; } // ignore unclick
//
//        whichchoice = whichchoice +1;
//
//        if ( whichchoice ==2 )  whichchoice = 0;
//
//
//}
                                    },
                                },
                                &x3d.Script{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Mover"),
                                    },
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("set_fraction"),
                                            AccessType: stringPtr("inputOnly"),
                                            Type: stringPtr("SFFloat"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("set_MassCounterWeight"),
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFFloat"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("set_MassProjectileWeight"),
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFFloat"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("MassCounterWeight"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("1"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("MassProjectileWeight"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("1"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("transparent"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFVec3f"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("value_changed"),
                                        AccessType: stringPtr("outputOnly"),
                                        Type: stringPtr("SFVec3f"),
                                    },
//ecmascript:
//
//function initialize ()
//{
//	MassCounterWeight=100;
//	MassProjectileWeight=10;
//	Browser.println ('MassCounterWeight =' + MassCounterWeight);
//	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);
//}
//
//function set_MassProjectileWeight (value, timestamp)
//{
//	MassProjectileWeight = value;
//	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);
//}
//function set_MassCounterWeight (value2, timestamp)
//{
//	MassCounterWeight = value2;
//	Browser.println ('new MassCounterWeight =' + MassCounterWeight);
//}
//
//
//function set_fraction ( fraction, eventTime )
//{
//	var TrebuchetHeight=45;
//	var Height =25;
//      	var x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;
//	// start at TrebuchetHeight and keep along z axis (z=zero)
//	var y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);
//        var z = 0;
//        transparent = new SFVec3f (1,1,1);
//     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)
//		{
//		x=x-10;
//		y=y+1;
//		transparent = new SFVec3f(.01, .01, .01);
//			}
//
//	value_changed = new SFVec3f (x, y, z);
//	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);
//}
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("clock"),
                    },
                    CycleInterval: doublePtr(10.0),
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("verticalweightpath"),
                    },
                    Key: x3d.MFFloat{0.0, 0.1, 0.2, 0.2, 0.3, 0.9},
                    KeyValue: &x3d.MFVec3f{[3]float32{1.4,1.6,0.0},[3]float32{1.0,-8.0,0.0},[3]float32{-3.5,-12.0,0.0},[3]float32{-3.5,-12.0,0.0},[3]float32{1.2,-8.0,0.0},[3]float32{1.4,1.6,0.0}},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("flingerangles"),
                    },
                    Key: x3d.MFFloat{0.0, 0.1, 0.2, 0.2, 0.3, 0.9},
                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.82, 0.0, 0.0, 1.0, -0.77, 0.0, 0.0, 1.0, -1.57, 0.0, 0.0, 1.0, -1.57, 0.0, 0.0, 1.0, -0.77, 0.0, 0.0, 1.0, 0.82},
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("pinpath"),
                    },
                    Key: x3d.MFFloat{0.0, 0.01, 0.95, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,-3.0},[3]float32{0.0,0.0,-10.0},[3]float32{0.0,0.0,-10.0},[3]float32{0.0,0.0,-3.0}},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("RnSAngels"),
                    },
                    Key: x3d.MFFloat{0.0, 0.7, 1.0},
                    KeyValue: x3d.MFRotation{0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -3.14, 0.0, 0.0, 1.0, 0.0},
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("invisiable"),
                    },
                    Key: x3d.MFFloat{0.0, 0.2, 0.98, 0.99},
                    KeyValue: &x3d.MFVec3f{[3]float32{1.0,1.0,1.0},[3]float32{0.01,0.01,0.01},[3]float32{0.01,0.01,0.01},[3]float32{1.0,1.0,1.0}},
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("clock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("invisiable"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("invisiable"),
                    ToField: stringPtr("set_scale"),
                    ToNode: stringPtr("projectiletransform"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("CounterWeight"),
                    FromNode: stringPtr("WeightScript"),
                    ToField: stringPtr("set_MassCounterWeight"),
                    ToNode: stringPtr("Mover"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("ProjectileWeight"),
                    FromNode: stringPtr("LauncheeScript"),
                    ToField: stringPtr("set_MassProjectileWeight"),
                    ToNode: stringPtr("Mover"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("clock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("Mover"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("Mover"),
                    ToField: stringPtr("set_translation"),
                    ToNode: stringPtr("ProjectileTransform"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("transparent"),
                    FromNode: stringPtr("Mover"),
                    ToField: stringPtr("set_scale"),
                    ToNode: stringPtr("ProjectileTransform"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("touchTime"),
                    FromNode: stringPtr("Launch"),
                    ToField: stringPtr("set_startTime"),
                    ToNode: stringPtr("clock"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("isActive"),
                    FromNode: stringPtr("Launch"),
                    ToField: stringPtr("set_boolean"),
                    ToNode: stringPtr("PigdogMonkScript"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("touchTime"),
                    FromNode: stringPtr("Launch"),
                    ToField: stringPtr("set_startTime"),
                    ToNode: stringPtr("PigDogSound"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("touchTime"),
                    FromNode: stringPtr("Launch"),
                    ToField: stringPtr("set_startTime"),
                    ToNode: stringPtr("MonkSound"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("whichchoice"),
                    FromNode: stringPtr("PigdogMonkScript"),
                    ToField: stringPtr("whichChoice"),
                    ToNode: stringPtr("PigdogMonk"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("touchTime"),
                    FromNode: stringPtr("LauncheeChoice"),
                    ToField: stringPtr("set_startTime"),
                    ToNode: stringPtr("HolyHandGrenadeSound"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("touchTime"),
                    FromNode: stringPtr("LauncheeChoice"),
                    ToField: stringPtr("set_startTime"),
                    ToNode: stringPtr("CowSound"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("touchTime"),
                    FromNode: stringPtr("LauncheeChoice"),
                    ToField: stringPtr("set_startTime"),
                    ToNode: stringPtr("HamsterSound"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("isActive"),
                    FromNode: stringPtr("LauncheeChoice"),
                    ToField: stringPtr("set_boolean"),
                    ToNode: stringPtr("LauncheeScript"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("whichchoice"),
                    FromNode: stringPtr("LauncheeScript"),
                    ToField: stringPtr("whichChoice"),
                    ToNode: stringPtr("projectile"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("whichchoice"),
                    FromNode: stringPtr("LauncheeScript"),
                    ToField: stringPtr("whichChoice"),
                    ToNode: stringPtr("projectilename"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("isActive"),
                    FromNode: stringPtr("weightselector"),
                    ToField: stringPtr("set_boolean"),
                    ToNode: stringPtr("WeightScript"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("whichchoice"),
                    FromNode: stringPtr("WeightScript"),
                    ToField: stringPtr("whichChoice"),
                    ToNode: stringPtr("Weight"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("clock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("flingerangles"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("flingerangles"),
                    ToField: stringPtr("set_rotation"),
                    ToNode: stringPtr("flinger"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("clock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("verticalweightpath"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("verticalweightpath"),
                    ToField: stringPtr("set_translation"),
                    ToNode: stringPtr("verticalweight"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("clock"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("pinpath"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("pinpath"),
                    ToField: stringPtr("set_translation"),
                    ToNode: stringPtr("Pin"),
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
	filename := "../data/Trebuchet.new.go.x3d"
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