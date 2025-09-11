
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("SplitChannels.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."),
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
                Content: stringPtr("Tue, 09 Sep 2025 19:39:22 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("CHANGELOG.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.medialab.hmu.gr/minipages/x3domAudio"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("credit for audio files"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("SplitChannels.x3d"),
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"NONE"},
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.2,0.2,0.21}},
                },
                &x3d.Viewpoint{
                    Position: &x3d.SFVec3f{0.0, 500.0, 600.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                    RetainUserOffsets: boolPtr(true),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("PowerR"),
                        },
                        Translation: &x3d.SFVec3f{100.0, 400.0, 400.0},
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, 40.0, 0.0},
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("audio_emit"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                            SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                            EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{10.0, 80.0, 0.01},
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.7, 37.0, 0.0},
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("audio_emit2"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                            SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                            EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                        },
                                        Texture: &x3d.ImageTexture{
                                            Url: x3d.MFString{"images/line.png", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"},
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{25.0, 83.0, 0.01},
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("volumeRight"),
                                },
                                Translation: &x3d.SFVec3f{0.0, -10.0, 0.0},
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                                Scale: &x3d.SFVec3f{10.0, 10.0, 10.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            AmbientIntensity: floatPtr(0.0933),
                                            DiffuseColor: &x3d.SFColor{0.345, 0.345, 0.882},
                                            SpecularColor: &x3d.SFColor{0.46, 0.46, 0.46},
                                            Shininess: floatPtr(0.51),
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Right Channel Volume"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("VolumeFontStyle"),
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
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("PowerL"),
                        },
                        Translation: &x3d.SFVec3f{-100.0, 400.0, 400.0},
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.0, 40.0, 0.0},
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("audio_emit3"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                            SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                            EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{10.0, 80.0, 0.01},
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{13.2, 37.0, 0.0},
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("audio_emit4"),
                                        },
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{0.0, 1.0, 0.0},
                                            SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                            EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                        },
                                        Texture: &x3d.ImageTexture{
                                            Url: x3d.MFString{"images/line.png", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"},
                                        },
                                    },
                                    Geometry: &x3d.Box{
                                        Size: &x3d.SFVec3f{25.0, 83.0, 0.01},
                                    },
                                },
                            },
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("volumeLeft"),
                                },
                                Translation: &x3d.SFVec3f{0.0, -10.0, 0.0},
                                Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                                Scale: &x3d.SFVec3f{10.0, 10.0, 10.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            AmbientIntensity: floatPtr(0.0933),
                                            DiffuseColor: &x3d.SFColor{0.345, 0.345, 0.882},
                                            SpecularColor: &x3d.SFColor{0.46, 0.46, 0.46},
                                            Shininess: floatPtr(0.51),
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"Left Channel Volume"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("VolumeFontStyle"),
                                            },
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("floor"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.1, 0.1, 0.1},
                                    SpecularColor: &x3d.SFColor{0.5, 0.6, 0.7},
                                    Shininess: floatPtr(0.8),
                                },
                            },
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{1500.0, 10.0, 500.0},
                            },
                        },
                    },
                },
                &x3d.ListenerPointSource{
                    TrackCurrentView: boolPtr(true),
                },
                &x3d.StreamAudioDestination{
                    &x3d.Gain{
                        &x3d.ChannelMerger{
                            &x3d.ChannelSelector{
                                &x3d.Gain{
                                },
                            },
                            &x3d.ChannelSelector{
                                ChannelSelection: int32Ptr(1),
                                &x3d.Gain{
                                },
                            },
                        },
                    },
                },
                &x3d.ChannelSplitter{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ChannelSplitter"),
                    },
                    ChannelCountMode: stringPtr("EXPLICIT"),
                    &x3d.AudioClip{
                        Description: stringPtr("Violin"),
                        Url: x3d.MFString{"sound/violin.mp3", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"},
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Audio3"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 100.0, 0.0},
                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("audio_emit5"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.3, 1.0, 0.3},
                                    SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                    EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                },
                                Texture: &x3d.ImageTexture{
                                    Url: x3d.MFString{"images/loudspeaker.png", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"},
                                },
                            },
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{100.0, 100.0, 0.001},
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
	filename := "../data/SplitChannels.new.go.x3d"
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