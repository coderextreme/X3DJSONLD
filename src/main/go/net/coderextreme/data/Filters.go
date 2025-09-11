
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
                    Content: stringPtr("Filters.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects."),
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
                Content: stringPtr("Tue, 09 Sep 2025 19:37:49 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("CHANGELOG.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.medialab.hmu.gr/minipages/x3domAudio"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("credit for audio files"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("Filters.x3d"),
                },
                &x3d.NavigationInfo{
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.2,0.2,0.2}},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("View entire audio model"),
                    Position: &x3d.SFVec3f{0.0, 500.0, 600.0},
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.5},
                    RetainUserOffsets: boolPtr(true),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TransformAudio1"),
                        },
                        Translation: &x3d.SFVec3f{-200.0, 50.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("audio_emit"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.1, 0.1, 0.1},
                                    SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                    EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(30.0),
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TransformAudio2"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 50.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("audio_emit2"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.1, 0.1, 0.1},
                                    SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                    EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(30.0),
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TransformAudio3"),
                        },
                        Translation: &x3d.SFVec3f{200.0, 50.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("audio_emit3"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.1, 0.1, 0.1},
                                    SpecularColor: &x3d.SFColor{0.01, 0.01, 0.01},
                                    EmissiveColor: &x3d.SFColor{0.8, 0.8, 0.8},
                                },
                            },
                            Geometry: &x3d.Sphere{
                                Radius: floatPtr(30.0),
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("AnimData"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 50.0, 0.0},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("AnimDataBoxH"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 100.0, 0.0},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("AnimDataBoxM"),
                        },
                        Translation: &x3d.SFVec3f{15.0, 100.0, 0.0},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("AnimDataBoxL"),
                        },
                        Translation: &x3d.SFVec3f{30.0, 100.0, 0.0},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("AnimDataBoxMM"),
                        },
                        Translation: &x3d.SFVec3f{-15.0, 100.0, 0.0},
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("AnimDataBoxLM"),
                        },
                        Translation: &x3d.SFVec3f{-30.0, 100.0, 0.0},
                    Children: []x3d.X3DNode{
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
                            Geometry: &x3d.Cylinder{
                                Radius: floatPtr(500.0),
                            },
                        },
                    },
                },
                &x3d.ListenerPointSource{
                    TrackCurrentView: boolPtr(true),
                },
                &x3d.StreamAudioDestination{
                    &x3d.DynamicsCompressor{
                        &x3d.Gain{
                            &x3d.SpatialSound{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Audio1"),
                                },
                                &x3d.Gain{
                                    &x3d.Analyser{
                                        &x3d.BiquadFilter{
                                            Detune: floatPtr(50.0),
                                            Type: stringPtr("ALLPASS"),
                                            Frequency: floatPtr(600.0),
                                            QualityFactor: floatPtr(30.0),
                                            &x3d.AudioClip{
                                                Description: stringPtr("Techno beat"),
                                                Url: x3d.MFString{"sound/techno_beat.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"},
                                                Loop: boolPtr(true),
                                            },
                                        },
                                    },
                                },
                            },
                            &x3d.SpatialSound{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Audio2"),
                                },
                                &x3d.Gain{
                                    &x3d.Analyser{
                                        &x3d.BiquadFilter{
                                            Detune: floatPtr(15.0),
                                            Type: stringPtr("ALLPASS"),
                                            Frequency: floatPtr(600.0),
                                            QualityFactor: floatPtr(15.0),
                                            &x3d.AudioClip{
                                                Description: stringPtr("Simple beat"),
                                                Url: x3d.MFString{"sound/beat.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"},
                                                Loop: boolPtr(true),
                                            },
                                        },
                                    },
                                },
                            },
                            &x3d.SpatialSound{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Audio3"),
                                },
                                &x3d.Gain{
                                    &x3d.Analyser{
                                        &x3d.BiquadFilter{
                                            Type: stringPtr("ALLPASS"),
                                            Frequency: floatPtr(1000.0),
                                            QualityFactor: floatPtr(0.0),
                                            &x3d.AudioClip{
                                                Description: stringPtr("Wobble loop"),
                                                Url: x3d.MFString{"sound/wobble_loop.mp3", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"},
                                                Loop: boolPtr(true),
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
	filename := "../data/Filters.new.go.x3d"
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