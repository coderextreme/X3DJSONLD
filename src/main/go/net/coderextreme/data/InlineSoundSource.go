
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
                    Content: stringPtr("InlineSoundSource.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."),
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
                Content: stringPtr("4 August 2021"),
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
                Content: stringPtr("https://medialab.hmu.gr/minipages/x3domAudio"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"),
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
                    Title: stringPtr("InlineSoundSource.x3d"),
                },
                &x3d.NavigationInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("NAV"),
                    },
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
                    Description: stringPtr("Camera001"),
                    FarDistance: floatPtr(0.0),
                    NearDistance: floatPtr(1.0),
                    Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -0.523599},
                    Position: &x3d.SFVec3f{0.0, 2000.0, 3500.0},
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
                            Geometry: &x3d.IndexedFaceSet{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Box001-GEOMETRY"),
                                },
                                CoordIndex: []int32{0, 1, 2, -1, 3, 4, 5, -1, 6, 7, 8, -1, 9, 10, 11, -1, 12, 13, 14, -1, 15, 16, 17, -1, 18, 19, 20, -1, 21, 22, 23, -1, 24, 25, 26, -1, 27, 28, 29, -1, 30, 31, 32, -1, 33, 34, 35, -1},
                                Solid: boolPtr(false),
                                Coord: &x3d.Coordinate{
                                    Point: &x3d.MFVec3f{[3]float32{-1000.0,0.0,1000.0},[3]float32{-1000.0,0.0,-1000.0},[3]float32{1000.0,0.0,-1000.0},[3]float32{1000.0,0.0,-1000.0},[3]float32{1000.0,0.0,1000.0},[3]float32{-1000.0,0.0,1000.0},[3]float32{-1000.0,8.031588,1000.0},[3]float32{1000.0,8.031588,1000.0},[3]float32{1000.0,8.031588,-1000.0},[3]float32{1000.0,8.031588,-1000.0},[3]float32{-1000.0,8.031588,-1000.0},[3]float32{-1000.0,8.031588,1000.0},[3]float32{-1000.0,0.0,1000.0},[3]float32{1000.0,0.0,1000.0},[3]float32{1000.0,8.031588,1000.0},[3]float32{1000.0,8.031588,1000.0},[3]float32{-1000.0,8.031588,1000.0},[3]float32{-1000.0,0.0,1000.0},[3]float32{1000.0,0.0,1000.0},[3]float32{1000.0,0.0,-1000.0},[3]float32{1000.0,8.031588,-1000.0},[3]float32{1000.0,8.031588,-1000.0},[3]float32{1000.0,8.031588,1000.0},[3]float32{1000.0,0.0,1000.0},[3]float32{1000.0,0.0,-1000.0},[3]float32{-1000.0,0.0,-1000.0},[3]float32{-1000.0,8.031588,-1000.0},[3]float32{-1000.0,8.031588,-1000.0},[3]float32{1000.0,8.031588,-1000.0},[3]float32{1000.0,0.0,-1000.0},[3]float32{-1000.0,0.0,-1000.0},[3]float32{-1000.0,0.0,1000.0},[3]float32{-1000.0,8.031588,1000.0},[3]float32{-1000.0,8.031588,1000.0},[3]float32{-1000.0,8.031588,-1000.0},[3]float32{-1000.0,0.0,-1000.0}},
                                },
                                Normal: &x3d.Normal{
                                    Vector: &x3d.MFVec3f{[3]float32{0.0,-1.0,0.0},[3]float32{0.0,-1.0,0.0},[3]float32{0.0,-1.0,0.0},[3]float32{0.0,-1.0,0.0},[3]float32{0.0,-1.0,0.0},[3]float32{0.0,-1.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,1.0,0.0},[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,1.0},[3]float32{0.0,0.0,1.0},[3]float32{1.0,0.0,0.0},[3]float32{1.0,0.0,0.0},[3]float32{1.0,0.0,0.0},[3]float32{1.0,0.0,0.0},[3]float32{1.0,0.0,0.0},[3]float32{1.0,0.0,0.0},[3]float32{0.0,0.0,-1.0},[3]float32{0.0,0.0,-1.0},[3]float32{0.0,0.0,-1.0},[3]float32{0.0,0.0,-1.0},[3]float32{0.0,0.0,-1.0},[3]float32{0.0,0.0,-1.0},[3]float32{-1.0,0.0,0.0},[3]float32{-1.0,0.0,0.0},[3]float32{-1.0,0.0,0.0},[3]float32{-1.0,0.0,0.0},[3]float32{-1.0,0.0,0.0},[3]float32{-1.0,0.0,0.0}},
                                },
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("InlineScene"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.Inline{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("inline"),
                            },
                            Url: x3d.MFString{"x3d/example1.x3d", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d", "x3d/example1.wrl", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"},
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
	filename := "../data/InlineSoundSource.new.go.x3d"
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