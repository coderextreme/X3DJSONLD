
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
        Profile: stringPtr("Interchange"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("ArchHalf.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Michele Foti, Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("15 December 2014"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 00:42:02 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ArchModelingDiagrams.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://en.wikipedia.org/wiki/Arch"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("ArchHalf.x3d"),
                },
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Arch"),
                    },
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("MaterialNode"),
                            },
                            DiffuseColor: &x3d.SFColor{1.0, 0.75, 0.25},
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("ArchIndex"),
                        },
                        Solid: boolPtr(false),
                        Convex: boolPtr(false),
                        CoordIndex: []int32{31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 144, -1, 149, 31, 144, 147, -1, 134, 147, 144, 145, -1, 145, 144, 62, 141, -1, 132, 133, 141, 62, -1, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 143, -1, 148, 94, 143, 146, -1, 142, 128, 146, 143, -1, 140, 125, 143, 142, -1, 125, 126, 127, 140, -1, 31, 94, 95, 32, -1, 32, 95, 96, 33, -1, 33, 96, 97, 34, -1, 34, 97, 98, 35, -1, 35, 98, 99, 36, -1, 36, 99, 100, 37, -1, 37, 100, 101, 38, -1, 38, 101, 102, 39, -1, 39, 102, 103, 40, -1, 40, 103, 104, 41, -1, 41, 104, 105, 42, -1, 42, 105, 106, 43, -1, 43, 106, 107, 44, -1, 44, 107, 108, 45, -1, 45, 108, 109, 46, -1, 46, 109, 110, 47, -1, 47, 110, 111, 48, -1, 48, 111, 112, 49, -1, 49, 112, 113, 50, -1, 50, 113, 114, 51, -1, 51, 114, 115, 52, -1, 52, 115, 116, 53, -1, 53, 116, 117, 54, -1, 54, 117, 118, 55, -1, 55, 118, 119, 56, -1, 56, 119, 120, 57, -1, 57, 120, 121, 58, -1, 58, 121, 122, 59, -1, 59, 122, 123, 60, -1, 60, 123, 124, 61, -1, 61, 124, 125, 62, -1, 148, 149, 147, 146, -1, 146, 147, 134, 128, -1, 128, 134, 145, 142, -1, 140, 141, 145, 142, -1, 127, 133, 141, 140, -1, 127, 126, 132, 133, -1, 126, 132, 62, 125, -1, 31, 94, 143, 144, -1, 142, 143, 144, 145, -1, 140, 125, 62, 141, -1, 31, 94, 148, 149, -1},
                        Coord: &x3d.Coordinate{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ArchChord"),
                            },
                            Point: &x3d.MFVec3f{[3]float32{2.0,0.0,0.0},[3]float32{1.997498,0.1,0.0},[3]float32{1.989975,0.2,0.0},[3]float32{1.977372,0.3,0.0},[3]float32{1.959592,0.4,0.0},[3]float32{1.936492,0.5,0.0},[3]float32{1.907878,0.6,0.0},[3]float32{1.873499,0.7,0.0},[3]float32{1.83303,0.8,0.0},[3]float32{1.786057,0.9,0.0},[3]float32{1.732051,1.0,0.0},[3]float32{1.670329,1.1,0.0},[3]float32{1.6,1.2,0.0},[3]float32{1.519868,1.3,0.0},[3]float32{1.428286,1.4,0.0},[3]float32{1.322876,1.5,0.0},[3]float32{1.2,1.6,0.0},[3]float32{1.053565,1.7,0.0},[3]float32{0.9020948,1.785,0.0},[3]float32{0.7599342,1.85,0.0},[3]float32{0.6244998,1.9,0.0},[3]float32{0.5425634,1.925,0.0},[3]float32{0.4444097,1.95,0.0},[3]float32{0.3618163,1.967,0.0},[3]float32{0.2821347,1.98,0.0},[3]float32{0.1997498,1.99,0.0},[3]float32{0.1671855,1.993,0.0},[3]float32{0.1413329,1.995,0.0},[3]float32{0.1095034,1.997,0.0},[3]float32{0.08942036,1.998,0.0},[3]float32{0.06323764,1.999,0.0},[3]float32{0.0,2.0,0.0},[3]float32{-0.06323764,1.999,0.0},[3]float32{-0.08942036,1.998,0.0},[3]float32{-0.1095034,1.997,0.0},[3]float32{-0.1413329,1.995,0.0},[3]float32{-0.1671855,1.993,0.0},[3]float32{-0.1997498,1.99,0.0},[3]float32{-0.2821347,1.98,0.0},[3]float32{-0.3618163,1.967,0.0},[3]float32{-0.4444097,1.95,0.0},[3]float32{-0.5425634,1.925,0.0},[3]float32{-0.6244998,1.9,0.0},[3]float32{-0.7599342,1.85,0.0},[3]float32{-0.9020948,1.785,0.0},[3]float32{-1.053565,1.7,0.0},[3]float32{-1.2,1.6,0.0},[3]float32{-1.322876,1.5,0.0},[3]float32{-1.428286,1.4,0.0},[3]float32{-1.519868,1.3,0.0},[3]float32{-1.6,1.2,0.0},[3]float32{-1.670329,1.1,0.0},[3]float32{-1.732051,1.0,0.0},[3]float32{-1.786057,0.9,0.0},[3]float32{-1.83303,0.8,0.0},[3]float32{-1.873499,0.7,0.0},[3]float32{-1.907878,0.6,0.0},[3]float32{-1.936492,0.5,0.0},[3]float32{-1.959592,0.4,0.0},[3]float32{-1.977372,0.3,0.0},[3]float32{-1.989975,0.2,0.0},[3]float32{-1.997498,0.1,0.0},[3]float32{-2.0,0.0,0.0},[3]float32{2.0,0.0,3.0},[3]float32{1.997498,0.1,3.0},[3]float32{1.989975,0.2,3.0},[3]float32{1.977372,0.3,3.0},[3]float32{1.959592,0.4,3.0},[3]float32{1.936492,0.5,3.0},[3]float32{1.907878,0.6,3.0},[3]float32{1.873499,0.7,3.0},[3]float32{1.83303,0.8,3.0},[3]float32{1.786057,0.9,3.0},[3]float32{1.732051,1.0,3.0},[3]float32{1.670329,1.1,3.0},[3]float32{1.6,1.2,3.0},[3]float32{1.519868,1.3,3.0},[3]float32{1.428286,1.4,3.0},[3]float32{1.322876,1.5,3.0},[3]float32{1.2,1.6,3.0},[3]float32{1.053565,1.7,3.0},[3]float32{0.9020948,1.785,3.0},[3]float32{0.7599342,1.85,3.0},[3]float32{0.6244998,1.9,3.0},[3]float32{0.5425634,1.925,3.0},[3]float32{0.4444097,1.95,3.0},[3]float32{0.3618163,1.967,3.0},[3]float32{0.2821347,1.98,3.0},[3]float32{0.1997498,1.99,3.0},[3]float32{0.1671855,1.993,3.0},[3]float32{0.1413329,1.995,3.0},[3]float32{0.1095034,1.997,3.0},[3]float32{0.08942036,1.998,3.0},[3]float32{0.06323764,1.999,3.0},[3]float32{0.0,2.0,3.0},[3]float32{-0.06323764,1.999,3.0},[3]float32{-0.08942036,1.998,3.0},[3]float32{-0.1095034,1.997,3.0},[3]float32{-0.1413329,1.995,3.0},[3]float32{-0.1671855,1.993,3.0},[3]float32{-0.1997498,1.99,3.0},[3]float32{-0.2821347,1.98,3.0},[3]float32{-0.3618163,1.967,3.0},[3]float32{-0.4444097,1.95,3.0},[3]float32{-0.5425634,1.925,3.0},[3]float32{-0.6244998,1.9,3.0},[3]float32{-0.7599342,1.85,3.0},[3]float32{-0.9020948,1.785,3.0},[3]float32{-1.053565,1.7,3.0},[3]float32{-1.2,1.6,3.0},[3]float32{-1.322876,1.5,3.0},[3]float32{-1.428286,1.4,3.0},[3]float32{-1.519868,1.3,3.0},[3]float32{-1.6,1.2,3.0},[3]float32{-1.670329,1.1,3.0},[3]float32{-1.732051,1.0,3.0},[3]float32{-1.786057,0.9,3.0},[3]float32{-1.83303,0.8,3.0},[3]float32{-1.873499,0.7,3.0},[3]float32{-1.907878,0.6,3.0},[3]float32{-1.936492,0.5,3.0},[3]float32{-1.959592,0.4,3.0},[3]float32{-1.977372,0.3,3.0},[3]float32{-1.989975,0.2,3.0},[3]float32{-1.997498,0.1,3.0},[3]float32{-2.0,0.0,3.0},[3]float32{-2.0,-1.0,3.0},[3]float32{-2.5,-1.0,3.0},[3]float32{-2.5,2.5,3.0},[3]float32{2.5,2.5,3.0},[3]float32{2.5,-1.0,3.0},[3]float32{2.0,-1.0,3.0},[3]float32{-2.0,-1.0,0.0},[3]float32{-2.5,-1.0,0.0},[3]float32{-2.5,2.5,0.0},[3]float32{2.5,2.5,0.0},[3]float32{2.5,-1.0,0.0},[3]float32{2.0,-1.0,0.0},[3]float32{2.5,0.0,3.0},[3]float32{2.5,0.0,0.0},[3]float32{-2.5,0.0,3.0},[3]float32{-2.5,0.0,0.0},[3]float32{-2.5,2.0,3.0},[3]float32{-2.0,2.0,3.0},[3]float32{-2.0,2.0,0.0},[3]float32{-2.5,2.0,0.0},[3]float32{-2.0,2.5,3.0},[3]float32{-2.0,2.5,0.0},[3]float32{0.0,2.5,3.0},[3]float32{0.0,2.5,0.0},[3]float32{2.0,2.0,3.0},[3]float32{2.5,2.0,3.0},[3]float32{2.5,2.0,0.0},[3]float32{2.0,2.0,0.0},[3]float32{2.0,2.5,3.0},[3]float32{2.0,2.5,0.0}},
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
	filename := "../data/ArchHalf.new.go.x3d"
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