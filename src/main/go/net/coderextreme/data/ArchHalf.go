
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
                Content: stringPtr("20 October 2019"),
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
                    Title: stringPtr("ArchHalf.x3d"),
                },
                &x3d.Shape{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Arch"),
                    },
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
                    Geometry: &x3d.IndexedFaceSet{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("ArchIndex"),
                        },
                        Convex: boolPtr(false),
                        CoordIndex: []int32{31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 144, -1, 149, 31, 144, 147, -1, 134, 147, 144, 145, -1, 145, 144, 62, 141, -1, 132, 133, 141, 62, -1, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 143, -1, 148, 94, 143, 146, -1, 142, 128, 146, 143, -1, 140, 125, 143, 142, -1, 125, 126, 127, 140, -1, 31, 94, 95, 32, -1, 32, 95, 96, 33, -1, 33, 96, 97, 34, -1, 34, 97, 98, 35, -1, 35, 98, 99, 36, -1, 36, 99, 100, 37, -1, 37, 100, 101, 38, -1, 38, 101, 102, 39, -1, 39, 102, 103, 40, -1, 40, 103, 104, 41, -1, 41, 104, 105, 42, -1, 42, 105, 106, 43, -1, 43, 106, 107, 44, -1, 44, 107, 108, 45, -1, 45, 108, 109, 46, -1, 46, 109, 110, 47, -1, 47, 110, 111, 48, -1, 48, 111, 112, 49, -1, 49, 112, 113, 50, -1, 50, 113, 114, 51, -1, 51, 114, 115, 52, -1, 52, 115, 116, 53, -1, 53, 116, 117, 54, -1, 54, 117, 118, 55, -1, 55, 118, 119, 56, -1, 56, 119, 120, 57, -1, 57, 120, 121, 58, -1, 58, 121, 122, 59, -1, 59, 122, 123, 60, -1, 60, 123, 124, 61, -1, 61, 124, 125, 62, -1, 148, 149, 147, 146, -1, 146, 147, 134, 128, -1, 128, 134, 145, 142, -1, 140, 141, 145, 142, -1, 127, 133, 141, 140, -1, 127, 126, 132, 133, -1, 126, 132, 62, 125, -1, 31, 94, 143, 144, -1, 142, 143, 144, 145, -1, 140, 125, 62, 141, -1, 31, 94, 148, 149, -1},
                        Solid: boolPtr(false),
                        Coord: &x3d.Coordinate{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("ArchChord"),
                            },
                            Point: &x3d.MFVec3f{[3]float32{2.0,0.0,0.0},[3]float32{1.997498435543818,0.1,0.0},[3]float32{1.98997487421324,0.2,0.0},[3]float32{1.977371993328519,0.3,0.0},[3]float32{1.9595917942265424,0.4,0.0},[3]float32{1.9364916731037085,0.5,0.0},[3]float32{1.907878402833891,0.6,0.0},[3]float32{1.8734993995195193,0.7,0.0},[3]float32{1.833030277982336,0.8,0.0},[3]float32{1.786057109949175,0.9,0.0},[3]float32{1.7320508075688774,1.0,0.0},[3]float32{1.6703293088490068,1.1,0.0},[3]float32{1.6,1.2,0.0},[3]float32{1.5198684153570663,1.3,0.0},[3]float32{1.42828568570857,1.4,0.0},[3]float32{1.3228756555322954,1.5,0.0},[3]float32{1.2,1.6,0.0},[3]float32{1.0535653752852738,1.7,0.0},[3]float32{0.9020947843768965,1.785,0.0},[3]float32{0.7599342076785331,1.85,0.0},[3]float32{0.6244997998398398,1.9,0.0},[3]float32{0.5425633603552678,1.925,0.0},[3]float32{0.4444097208657794,1.95,0.0},[3]float32{0.36181625170796194,1.967,0.0},[3]float32{0.2821347195933173,1.98,0.0},[3]float32{0.19974984355438344,1.99,0.0},[3]float32{0.16718552568927703,1.993,0.0},[3]float32{0.14133294025102577,1.995,0.0},[3]float32{0.10950342460398416,1.997,0.0},[3]float32{0.08942035562443253,1.998,0.0},[3]float32{0.06323764701505419,1.999,0.0},[3]float32{0.0,2.0,0.0},[3]float32{-0.06323764701505419,1.999,0.0},[3]float32{-0.08942035562443253,1.998,0.0},[3]float32{-0.10950342460398416,1.997,0.0},[3]float32{-0.14133294025102577,1.995,0.0},[3]float32{-0.16718552568927703,1.993,0.0},[3]float32{-0.19974984355438344,1.99,0.0},[3]float32{-0.2821347195933173,1.98,0.0},[3]float32{-0.36181625170796194,1.967,0.0},[3]float32{-0.4444097208657794,1.95,0.0},[3]float32{-0.5425633603552678,1.925,0.0},[3]float32{-0.6244997998398398,1.9,0.0},[3]float32{-0.7599342076785331,1.85,0.0},[3]float32{-0.9020947843768965,1.785,0.0},[3]float32{-1.0535653752852738,1.7,0.0},[3]float32{-1.2,1.6,0.0},[3]float32{-1.3228756555322954,1.5,0.0},[3]float32{-1.42828568570857,1.4,0.0},[3]float32{-1.5198684153570663,1.3,0.0},[3]float32{-1.6,1.2,0.0},[3]float32{-1.6703293088490068,1.1,0.0},[3]float32{-1.7320508075688774,1.0,0.0},[3]float32{-1.786057109949175,0.9,0.0},[3]float32{-1.833030277982336,0.8,0.0},[3]float32{-1.8734993995195193,0.7,0.0},[3]float32{-1.907878402833891,0.6,0.0},[3]float32{-1.9364916731037085,0.5,0.0},[3]float32{-1.9595917942265424,0.4,0.0},[3]float32{-1.977371993328519,0.3,0.0},[3]float32{-1.98997487421324,0.2,0.0},[3]float32{-1.997498435543818,0.1,0.0},[3]float32{-2.0,0.0,0.0},[3]float32{2.0,0.0,3.0},[3]float32{1.997498435543818,0.1,3.0},[3]float32{1.98997487421324,0.2,3.0},[3]float32{1.977371993328519,0.3,3.0},[3]float32{1.9595917942265424,0.4,3.0},[3]float32{1.9364916731037085,0.5,3.0},[3]float32{1.907878402833891,0.6,3.0},[3]float32{1.8734993995195193,0.7,3.0},[3]float32{1.833030277982336,0.8,3.0},[3]float32{1.786057109949175,0.9,3.0},[3]float32{1.7320508075688774,1.0,3.0},[3]float32{1.6703293088490068,1.1,3.0},[3]float32{1.6,1.2,3.0},[3]float32{1.5198684153570663,1.3,3.0},[3]float32{1.42828568570857,1.4,3.0},[3]float32{1.3228756555322954,1.5,3.0},[3]float32{1.2,1.6,3.0},[3]float32{1.0535653752852738,1.7,3.0},[3]float32{0.9020947843768965,1.785,3.0},[3]float32{0.7599342076785331,1.85,3.0},[3]float32{0.6244997998398398,1.9,3.0},[3]float32{0.5425633603552678,1.925,3.0},[3]float32{0.4444097208657794,1.95,3.0},[3]float32{0.36181625170796194,1.967,3.0},[3]float32{0.2821347195933173,1.98,3.0},[3]float32{0.19974984355438344,1.99,3.0},[3]float32{0.16718552568927703,1.993,3.0},[3]float32{0.14133294025102577,1.995,3.0},[3]float32{0.10950342460398416,1.997,3.0},[3]float32{0.08942035562443253,1.998,3.0},[3]float32{0.06323764701505419,1.999,3.0},[3]float32{0.0,2.0,3.0},[3]float32{-0.06323764701505419,1.999,3.0},[3]float32{-0.08942035562443253,1.998,3.0},[3]float32{-0.10950342460398416,1.997,3.0},[3]float32{-0.14133294025102577,1.995,3.0},[3]float32{-0.16718552568927703,1.993,3.0},[3]float32{-0.19974984355438344,1.99,3.0},[3]float32{-0.2821347195933173,1.98,3.0},[3]float32{-0.36181625170796194,1.967,3.0},[3]float32{-0.4444097208657794,1.95,3.0},[3]float32{-0.5425633603552678,1.925,3.0},[3]float32{-0.6244997998398398,1.9,3.0},[3]float32{-0.7599342076785331,1.85,3.0},[3]float32{-0.9020947843768965,1.785,3.0},[3]float32{-1.0535653752852738,1.7,3.0},[3]float32{-1.2,1.6,3.0},[3]float32{-1.3228756555322954,1.5,3.0},[3]float32{-1.42828568570857,1.4,3.0},[3]float32{-1.5198684153570663,1.3,3.0},[3]float32{-1.6,1.2,3.0},[3]float32{-1.6703293088490068,1.1,3.0},[3]float32{-1.7320508075688774,1.0,3.0},[3]float32{-1.786057109949175,0.9,3.0},[3]float32{-1.833030277982336,0.8,3.0},[3]float32{-1.8734993995195193,0.7,3.0},[3]float32{-1.907878402833891,0.6,3.0},[3]float32{-1.9364916731037085,0.5,3.0},[3]float32{-1.9595917942265424,0.4,3.0},[3]float32{-1.977371993328519,0.3,3.0},[3]float32{-1.98997487421324,0.2,3.0},[3]float32{-1.997498435543818,0.1,3.0},[3]float32{-2.0,0.0,3.0},[3]float32{-2.0,-1.0,3.0},[3]float32{-2.5,-1.0,3.0},[3]float32{-2.5,2.5,3.0},[3]float32{2.5,2.5,3.0},[3]float32{2.5,-1.0,3.0},[3]float32{2.0,-1.0,3.0},[3]float32{-2.0,-1.0,0.0},[3]float32{-2.5,-1.0,0.0},[3]float32{-2.5,2.5,0.0},[3]float32{2.5,2.5,0.0},[3]float32{2.5,-1.0,0.0},[3]float32{2.0,-1.0,0.0},[3]float32{2.5,0.0,3.0},[3]float32{2.5,0.0,0.0},[3]float32{-2.5,0.0,3.0},[3]float32{-2.5,0.0,0.0},[3]float32{-2.5,2.0,3.0},[3]float32{-2.0,2.0,3.0},[3]float32{-2.0,2.0,0.0},[3]float32{-2.5,2.0,0.0},[3]float32{-2.0,2.5,3.0},[3]float32{-2.0,2.5,0.0},[3]float32{0.0,2.5,3.0},[3]float32{0.0,2.5,0.0},[3]float32{2.0,2.0,3.0},[3]float32{2.5,2.0,3.0},[3]float32{2.5,2.0,0.0},[3]float32{2.0,2.0,0.0},[3]float32{2.0,2.5,3.0},[3]float32{2.0,2.5,0.0}},
                        },
                    },
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("MaterialNode"),
                            },
                            DiffuseColor: &x3d.SFColor{1.0, 0.75, 0.25},
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
	filename := "../data/ArchHalf.new.go.x3d"
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