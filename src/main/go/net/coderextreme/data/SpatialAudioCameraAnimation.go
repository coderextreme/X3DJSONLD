
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
        Profile: stringPtr("Full"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("SpatialAudioCameraAnimation.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("28 October 2020"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("5 December 2021"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("CHANGELOG.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("credit for audio files"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.medialab.hmu.gr/minipages/x3domAudio"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"),
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
                    Title: stringPtr("SpatialAudioCameraAnimation.x3d"),
                },
                &x3d.NavigationInfo{
                },
                &x3d.Background{
                    BackUrl: x3d.MFString{"images/generic/BK1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"},
                    BottomUrl: x3d.MFString{"images/generic/DN1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"},
                    FrontUrl: x3d.MFString{"images/generic/FR1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"},
                    LeftUrl: x3d.MFString{"images/generic/LF1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"},
                    RightUrl: x3d.MFString{"images/generic/RT1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"},
                    TopUrl: x3d.MFString{"images/generic/UP1.png", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Camera001"),
                    },
                    Description: stringPtr("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.523599},
                    Position: &x3d.SFVec3f{0.0, 2000.0, 3500.0},
                },
                &x3d.TimeSensor{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TIMER"),
                    },
                    CycleInterval: doublePtr(33.333332),
                    Loop: boolPtr(true),
                },
                &x3d.PositionInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Camera001-POS-INTERP"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,2000.0,3500.0},[3]float32{0.0,2000.0,0.0},[3]float32{0.0,2000.0,-3500.0},[3]float32{0.0,2000.0,0.0},[3]float32{0.0,2000.0,3500.0}},
                },
                &x3d.OrientationInterpolator{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Camera001-ROT-INTERP"),
                    },
                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                    KeyValue: x3d.MFRotation{1.0, 0.0, 0.0, -0.523599, 0.99999, 0.003554, 0.002727, -1.309007, 0.0, -0.965926, -0.258819, -3.141593, 0.002282, -0.793351, -0.60876, -3.135645, 1.0, -0.000001, 0.0, -0.523599},
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("TIMER"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("Camera001-POS-INTERP"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("Camera001-POS-INTERP"),
                    ToField: stringPtr("set_position"),
                    ToNode: stringPtr("Camera001"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("fraction_changed"),
                    FromNode: stringPtr("TIMER"),
                    ToField: stringPtr("set_fraction"),
                    ToNode: stringPtr("Camera001-ROT-INTERP"),
                },
                &x3d.X3DRoute{
                    FromField: stringPtr("value_changed"),
                    FromNode: stringPtr("Camera001-ROT-INTERP"),
                    ToField: stringPtr("set_orientation"),
                    ToNode: stringPtr("Camera001"),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Floor"),
                        },
                        Translation: &x3d.SFVec3f{1.241, 0.0, 0.358},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("WireColor"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.122, 0.114, 0.125},
                                },
                            },
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{2000.0, 1.0, 2000.0},
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TransformAudio1"),
                        },
                        Translation: &x3d.SFVec3f{-933.123474, 0.0, -926.253235},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("WireColor_1"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.690196, 0.101961, 0.101961},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(100.0),
                            },
                        },
                        &x3d.Billboard{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("violin"),
                                    },
                                    Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                                    Scale: &x3d.SFVec3f{100.0, 100.0, 100.0},
                                    Translation: &x3d.SFVec3f{0.0, 100.0, 0.0},
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                AmbientIntensity: floatPtr(0.0933),
                                                DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                Shininess: floatPtr(0.51),
                                                SpecularColor: &x3d.SFColor{0.46, 0.46, 0.46},
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Violin"},
                                            FontStyle: &x3d.FontStyle{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("ModelFontStyle"),
                                                },
                                                Family: x3d.MFString{"Times", "SERIF"},
                                                Style: stringPtr("BOLD"),
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
                            DEF: stringPtr("TransformAudio2"),
                        },
                        Translation: &x3d.SFVec3f{933.475586, 0.0, 924.423218},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("WireColor_2"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.105882, 0.694118, 0.580392},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(100.0),
                            },
                        },
                        &x3d.Billboard{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("saxophone"),
                                    },
                                    Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                                    Scale: &x3d.SFVec3f{100.0, 100.0, 100.0},
                                    Translation: &x3d.SFVec3f{0.0, 100.0, 0.0},
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                AmbientIntensity: floatPtr(0.0933),
                                                DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                Shininess: floatPtr(0.51),
                                                SpecularColor: &x3d.SFColor{0.46, 0.46, 0.46},
                                            },
                                        },
                                        Geometry: &x3d.Text{
                                            String: x3d.MFString{"Saxophone"},
                                            FontStyle: &x3d.FontStyle{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("ModelFontStyle"),
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.ListenerPointSource{
                    TrackCurrentView: boolPtr(true),
                },
                &x3d.StreamAudioDestination{
                    &x3d.SpatialSound{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Audio1"),
                        },
                        &x3d.Gain{
                            &x3d.AudioClip{
                                Description: stringPtr("Violin"),
                                Loop: boolPtr(true),
                                Url: x3d.MFString{"sound/violin.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"},
                            },
                        },
                    },
                    &x3d.SpatialSound{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Audio2"),
                        },
                        &x3d.Gain{
                            &x3d.AudioClip{
                                Description: stringPtr("Saxophone"),
                                Loop: boolPtr(true),
                                Url: x3d.MFString{"sound/saxophone.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"},
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
	fmt.Println("\n--- Validating XML against X3D 4.1 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.1 schema!")
	*/
	filename := "../data/SpatialAudioCameraAnimation.new.go.x3d"
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