
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
                    Content: stringPtr("ObliqueStrategies.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Text scripting and animation example using Oblique Strategies card set by Brian Eno."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman, John Kelly, Ben Cheng"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("3 November 2013"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("10 November 2019"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("oblique.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ObliqueStrategies.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ObliqueStrategiesScript.js"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.eno-web.co.uk/obliques.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://gothpunk.com/haiku-intro.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.rtqe.net/ObliqueStrategies/OSintro.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://en.wikipedia.org/wiki/Oblique_Strategies"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("Brian Eno, Oblique Strategies"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("images/ObliqueStrategiesEntryScreen.png"),
            },
            &x3d.Meta{
                Name: stringPtr("Sound"),
                Content: stringPtr("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"),
            },
            &x3d.Meta{
                Name: stringPtr("Sound"),
                Content: stringPtr("translate_tts_HelloX3D.mp3"),
            },
            &x3d.Meta{
                Name: stringPtr("Sound"),
                Content: stringPtr("translate_tts_HelloX3D.wav"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("multiliingual translation parameter"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://gist.github.com/alotaiba/1728771"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"),
            },
            &x3d.Meta{
                Name: stringPtr("Sound"),
                Content: stringPtr("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"),
            },
            &x3d.Meta{
                Name: stringPtr("Sound"),
                Content: stringPtr("translate_tts_HelloX3D4.mp3"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://cloud.google.com/translate/docs/basic/translating-text"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
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
                    Title: stringPtr("ObliqueStrategies.x3d"),
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"NONE"},
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.419608,0.427451,1.0}},
                },
                &x3d.Transform{
                        Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                        Translation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.TouchSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("RandomTextClickedSensor"),
                            },
                            Description: stringPtr("Select to see a new strategy"),
                        },
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"Oblique Strategies", "", "(Over One Hundred Worthwhile Dilemmas)", "", "by Brian Eno and Peter Schmidt"},
                                FontStyle: &x3d.FontStyle{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("MessageFont"),
                                    },
                                    Family: x3d.MFString{"SANS"},
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                    Style: stringPtr("BOLD"),
                                },
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                },
                            },
                        },
                        &x3d.Transform{
                                Scale: &x3d.SFVec3f{10.0, 3.0, 1.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("HeadlineClickSurface"),
                                    },
                                    Geometry: &x3d.IndexedFaceSet{
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Solid: boolPtr(false),
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{1.0,1.0,0.0},[3]float32{1.0,-1.0,0.0},[3]float32{-1.0,-1.0,0.0},[3]float32{-1.0,1.0,0.0}},
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            AmbientIntensity: floatPtr(0.245763),
                                            DiffuseColor: &x3d.SFColor{0.34773, 0.090909, 0.005289},
                                            Shininess: floatPtr(0.07),
                                            SpecularColor: &x3d.SFColor{0.336735, 0.051091, 0.051091},
                                            Transparency: floatPtr(0.8),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Script{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("TextScript"),
                    },
                    Url: x3d.MFString{"ObliqueStrategiesScript.js", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"},
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("index"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("index for active strategy card, -1 means no selection"),
                            Type: stringPtr("SFInt32"),
                            Value: stringPtr("0"),
                    },
                    &x3d.Field{
                        Name: stringPtr("string_changed"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("latest strategy card value"),
                        Type: stringPtr("MFString"),
                    },
                    &x3d.Field{
                        Name: stringPtr("textToSpeechUrl"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("\"url to invoke Google Translate\""),
                        Type: stringPtr("MFString"),
                    },
                    &x3d.Field{
                        Name: stringPtr("newCardTime"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("activate Sound node"),
                        Type: stringPtr("SFTime"),
                    },
                    &x3d.Field{
                        Name: stringPtr("selectPreviousCard"),
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("selectNextCard"),
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("selectRandomCard"),
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("traceEnabled"),
                        AccessType: stringPtr("initializeOnly"),
                        Appinfo: stringPtr("controls console tracing"),
                        Type: stringPtr("SFBool"),
                        Value: stringPtr("true"),
                    },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("CardTransform"),
                        },
                        Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                        Translation: &x3d.SFVec3f{0.0, -1.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CardText"),
                                },
                                FontStyle: &x3d.FontStyle{
                                    Family: x3d.MFString{"SANS"},
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                    Style: stringPtr("BOLD"),
                                },
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                },
                            },
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("string_changed"),
                            FromNode: stringPtr("TextScript"),
                            ToField: stringPtr("string"),
                            ToNode: stringPtr("CardText"),
                        },
                        &x3d.Sound{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("CardSoundSpatialization"),
                            },
                            MaxBack: floatPtr(100.0),
                            MaxFront: floatPtr(100.0),
                            MinBack: floatPtr(20.0),
                            MinFront: floatPtr(20.0),
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
                            Source: &x3d.AudioClip{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("TextToSpeechAudioClip"),
                                },
                                Description: stringPtr("sends strategy text google translate"),
                                Url: x3d.MFString{"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium", "translate_tts_mp3FileFormatNotSupported.wav", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"},
                            },
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("textToSpeechUrl"),
                            FromNode: stringPtr("TextScript"),
                            ToField: stringPtr("url"),
                            ToNode: stringPtr("TextToSpeechAudioClip"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("newCardTime"),
                            FromNode: stringPtr("TextScript"),
                            ToField: stringPtr("startTime"),
                            ToNode: stringPtr("TextToSpeechAudioClip"),
                        },
                    },
                },
                &x3d.Transform{
                        Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                        Translation: &x3d.SFVec3f{-3.2, 2.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.TouchSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("PreviousTextClickedSensor"),
                            },
                            Description: stringPtr("Select to see previous strategy"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isActive"),
                            FromNode: stringPtr("PreviousTextClickedSensor"),
                            ToField: stringPtr("selectPreviousCard"),
                            ToNode: stringPtr("TextScript"),
                        },
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"previous"},
                                FontStyle: &x3d.FontStyle{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("MessageFont"),
                                    },
                                },
                            },
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("InterfaceAppearance"),
                                },
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{1.0, 0.0, 0.6},
                                },
                            },
                        },
                        &x3d.Transform{
                                Scale: &x3d.SFVec3f{2.0, 0.6, 1.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("TransparentClickSurface"),
                                    },
//support Selectable Text with a scalable IFS
                                    Geometry: &x3d.IndexedFaceSet{
                                        CoordIndex: []int32{0, 1, 2, 3, -1},
                                        Solid: boolPtr(false),
                                        Coord: &x3d.Coordinate{
                                            Point: &x3d.MFVec3f{[3]float32{1.0,1.0,0.0},[3]float32{1.0,-1.0,0.0},[3]float32{-1.0,-1.0,0.0},[3]float32{-1.0,1.0,0.0}},
                                        },
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
                        Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                        Translation: &x3d.SFVec3f{3.5, 2.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.TouchSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("NextTextClickedSensor"),
                            },
                            Description: stringPtr("Select to see next strategy"),
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isActive"),
                            FromNode: stringPtr("NextTextClickedSensor"),
                            ToField: stringPtr("selectNextCard"),
                            ToNode: stringPtr("TextScript"),
                        },
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"next"},
                                FontStyle: &x3d.FontStyle{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("MessageFont"),
                                    },
                                },
                            },
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("InterfaceAppearance"),
                                },
                            },
                        },
                        &x3d.Transform{
                                Scale: &x3d.SFVec3f{1.2, 0.6, 1.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("TransparentClickSurface"),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                        Translation: &x3d.SFVec3f{-3.3, -0.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.TouchSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("RandomTextClickedSensor"),
                            },
                        },
                        &x3d.X3DRoute{
                            FromField: stringPtr("isActive"),
                            FromNode: stringPtr("RandomTextClickedSensor"),
                            ToField: stringPtr("selectRandomCard"),
                            ToNode: stringPtr("TextScript"),
                        },
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"random"},
                                FontStyle: &x3d.FontStyle{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("MessageFont"),
                                    },
                                },
                            },
                            Appearance: &x3d.Appearance{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    USE: stringPtr("InterfaceAppearance"),
                                },
                            },
                        },
                        &x3d.Transform{
                                Scale: &x3d.SFVec3f{1.8, 0.6, 1.0},
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("TransparentClickSurface"),
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        Scale: &x3d.SFVec3f{0.4, 0.4, 0.4},
                        Translation: &x3d.SFVec3f{3.3, -0.5, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Anchor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("TextToSpeechAnchor"),
                            },
                            Description: stringPtr("text to speech in browser"),
                            Parameter: x3d.MFString{"target=_blank"},
                            Url: x3d.MFString{"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"},
                            X3DRoute:                            X3DRoute: []x3d.X3DNode{
                                &x3d.X3DRoute{
                                    FromField: stringPtr("textToSpeechUrl"),
                                    FromNode: stringPtr("TextScript"),
                                    ToField: stringPtr("url"),
                                    ToNode: stringPtr("TextToSpeechAnchor"),
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"speech"},
                                        FontStyle: &x3d.FontStyle{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("MessageFont"),
                                            },
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("InterfaceAppearance"),
                                        },
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Scale: &x3d.SFVec3f{1.8, 0.6, 1.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("TransparentClickSurface"),
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
	fmt.Println("\n--- Validating XML against X3D 4.1 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.1 schema!")
	*/
	filename := "../data/ObliqueStrategies.new.go.x3d"
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