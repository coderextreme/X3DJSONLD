
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("ArtDecoExamples.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("David Roussel"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("James Harney, Don Brutzman NPS"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("7 April 2002"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:37:49 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://vrmlstuff.free.fr/materials"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("Universal Media Material Library"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco00"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco00", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00", "ArtDecoPrototypes.wrl#ArtDeco00", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco01"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco01", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01", "ArtDecoPrototypes.wrl#ArtDeco01", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco02"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco02", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02", "ArtDecoPrototypes.wrl#ArtDeco02", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco03"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco03", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03", "ArtDecoPrototypes.wrl#ArtDeco03", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco04"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco04", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04", "ArtDecoPrototypes.wrl#ArtDeco04", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco05"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco05", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05", "ArtDecoPrototypes.wrl#ArtDeco05", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco06"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco06", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06", "ArtDecoPrototypes.wrl#ArtDeco06", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco07"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco07", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07", "ArtDecoPrototypes.wrl#ArtDeco07", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco08"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco08", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08", "ArtDecoPrototypes.wrl#ArtDeco08", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco09"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco09", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09", "ArtDecoPrototypes.wrl#ArtDeco09", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco10"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco10", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10", "ArtDecoPrototypes.wrl#ArtDeco10", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco11"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco11", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11", "ArtDecoPrototypes.wrl#ArtDeco11", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco12"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco12", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12", "ArtDecoPrototypes.wrl#ArtDeco12", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco13"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco13", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13", "ArtDecoPrototypes.wrl#ArtDeco13", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco14"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco14", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14", "ArtDecoPrototypes.wrl#ArtDeco14", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco15"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco15", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15", "ArtDecoPrototypes.wrl#ArtDeco15", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco16"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco16", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16", "ArtDecoPrototypes.wrl#ArtDeco16", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco17"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco17", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17", "ArtDecoPrototypes.wrl#ArtDeco17", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco18"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco18", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18", "ArtDecoPrototypes.wrl#ArtDeco18", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco19"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco19", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19", "ArtDecoPrototypes.wrl#ArtDeco19", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco20"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco20", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20", "ArtDecoPrototypes.wrl#ArtDeco20", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco21"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco21", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21", "ArtDecoPrototypes.wrl#ArtDeco21", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco22"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco22", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22", "ArtDecoPrototypes.wrl#ArtDeco22", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco23"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco23", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23", "ArtDecoPrototypes.wrl#ArtDeco23", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco24"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco24", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24", "ArtDecoPrototypes.wrl#ArtDeco24", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco25"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco25", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25", "ArtDecoPrototypes.wrl#ArtDeco25", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco26"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco26", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26", "ArtDecoPrototypes.wrl#ArtDeco26", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco27"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco27", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27", "ArtDecoPrototypes.wrl#ArtDeco27", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco28"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco28", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28", "ArtDecoPrototypes.wrl#ArtDeco28", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco29"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco29", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29", "ArtDecoPrototypes.wrl#ArtDeco29", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco30"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco30", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30", "ArtDecoPrototypes.wrl#ArtDeco30", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco31"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco31", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31", "ArtDecoPrototypes.wrl#ArtDeco31", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco32"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco32", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32", "ArtDecoPrototypes.wrl#ArtDeco32", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco33"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco33", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33", "ArtDecoPrototypes.wrl#ArtDeco33", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"},
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ArtDeco34"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    Url: x3d.MFString{"../data/ArtDecoPrototypes.json#ArtDeco34", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34", "ArtDecoPrototypes.wrl#ArtDeco34", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"},
                },
                &x3d.WorldInfo{
                    Title: stringPtr("ArtDecoExamples.x3d"),
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                        &x3d.NavigationInfo{
                            Headlight: boolPtr(false),
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Front"),
                            },
                            Description: stringPtr("Front view"),
                            Position: &x3d.SFVec3f{0.0, 0.0, 12.0},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("PersRight"),
                            },
                            Description: stringPtr("Low Right"),
                            Position: &x3d.SFVec3f{6.9282, -6.9282, 6.9282},
                            Orientation: &x3d.SFRotation{0.74291, 0.30772, 0.59447, 1.2171},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("PersLeft"),
                            },
                            Description: stringPtr("Low Left"),
                            Position: &x3d.SFVec3f{-6.9282, -6.9282, 6.9282},
                            Orientation: &x3d.SFRotation{0.74291, -0.30772, -0.59447, 1.2171},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Back"),
                            },
                            Description: stringPtr("Back view"),
                            Position: &x3d.SFVec3f{0.0, 0.0, -12.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 3.1416},
                        },
                        &x3d.Transform{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Close_travel"),
                                },
                                Translation: &x3d.SFVec3f{0.0, 0.8508334, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.PositionInterpolator{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Close_Mover"),
                                    },
                                    Key: x3d.MFFloat{0.0, 0.25, 0.5, 0.75, 1.0},
                                    KeyValue: &x3d.MFVec3f{[3]float32{0.0,2.5,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,-2.5,0.0},[3]float32{0.0,0.0,0.0},[3]float32{0.0,2.5,0.0}},
                                },
                                &x3d.TimeSensor{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Close_Time"),
                                    },
                                    CycleInterval: doublePtr(12.0),
                                    Loop: boolPtr(true),
                                },
                                &x3d.Viewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Close"),
                                    },
                                    Description: stringPtr("Close Front"),
                                    Position: &x3d.SFVec3f{0.0, 0.0, 6.0},
                                },
                            },
                        },
                        &x3d.DirectionalLight{
                            Direction: &x3d.SFVec3f{1.0, -1.0, -1.0},
                        },
                        &x3d.DirectionalLight{
                            Intensity: floatPtr(0.5),
                            Direction: &x3d.SFVec3f{0.0, 1.0, -0.5},
                        },
                        &x3d.Anchor{
                            Description: stringPtr("Return to front view"),
                            Url: x3d.MFString{"#Front"},
                            Children: []x3d.X3DNode{
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.0, -0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Inline{
                                            Url: x3d.MFString{"../data/gridBack.json", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d", "gridBack.wrl", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"},
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View00"),
                            },
                            Description: stringPtr("ArtDeco00"),
                            Position: &x3d.SFVec3f{-3.75, 3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-3.75, 3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco00 view"),
                                    Url: x3d.MFString{"#View00"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco00"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Ball"),
                                                },
                                                Radius: floatPtr(0.5),
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco00 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("TextMat"),
                                                            },
                                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 1.0},
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco00"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("Style"),
                                                            },
                                                            Family: x3d.MFString{"SANS"},
                                                            Style: stringPtr("BOLD"),
                                                            Size: floatPtr(0.3),
                                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View01"),
                            },
                            Description: stringPtr("ArtDeco01"),
                            Position: &x3d.SFVec3f{-2.25, 3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.25, 3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco01 view"),
                                    Url: x3d.MFString{"#View01"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco01"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco01 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco01"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View02"),
                            },
                            Description: stringPtr("ArtDeco02"),
                            Position: &x3d.SFVec3f{-0.75, 3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-0.75, 3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco02 view"),
                                    Url: x3d.MFString{"#View02"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco02"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco02 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco02"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View03"),
                            },
                            Description: stringPtr("ArtDeco03"),
                            Position: &x3d.SFVec3f{0.75, 3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.75, 3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco03 view"),
                                    Url: x3d.MFString{"#View03"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco03"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco03 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco03"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View04"),
                            },
                            Description: stringPtr("ArtDeco04"),
                            Position: &x3d.SFVec3f{2.25, 3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.25, 3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco04 view"),
                                    Url: x3d.MFString{"#View04"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco04"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco04 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco04"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View05"),
                            },
                            Description: stringPtr("ArtDeco05"),
                            Position: &x3d.SFVec3f{3.75, 3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{3.75, 3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco05 view"),
                                    Url: x3d.MFString{"#View05"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco05"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco05 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco05"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View06"),
                            },
                            Description: stringPtr("ArtDeco06"),
                            Position: &x3d.SFVec3f{-3.75, 2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-3.75, 2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco06 view"),
                                    Url: x3d.MFString{"#View06"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco06"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco06 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco06"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View07"),
                            },
                            Description: stringPtr("ArtDeco07"),
                            Position: &x3d.SFVec3f{-2.25, 2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.25, 2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco07 view"),
                                    Url: x3d.MFString{"#View07"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco07"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco07 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco07"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View08"),
                            },
                            Description: stringPtr("ArtDeco08"),
                            Position: &x3d.SFVec3f{-0.75, 2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-0.75, 2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco08 view"),
                                    Url: x3d.MFString{"#View08"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco08"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco08 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco08"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View09"),
                            },
                            Description: stringPtr("ArtDeco09"),
                            Position: &x3d.SFVec3f{0.75, 2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.75, 2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco09 view"),
                                    Url: x3d.MFString{"#View09"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco09"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco09 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco09"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View10"),
                            },
                            Description: stringPtr("ArtDeco10"),
                            Position: &x3d.SFVec3f{2.25, 2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.25, 2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco10 view"),
                                    Url: x3d.MFString{"#View10"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco10"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco10 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco10"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View11"),
                            },
                            Description: stringPtr("ArtDeco11"),
                            Position: &x3d.SFVec3f{3.75, 2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{3.75, 2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco11 view"),
                                    Url: x3d.MFString{"#View11"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco11"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco11 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco11"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View12"),
                            },
                            Description: stringPtr("ArtDeco12"),
                            Position: &x3d.SFVec3f{-3.75, 0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-3.75, 0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco12 view"),
                                    Url: x3d.MFString{"#View12"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco12"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco12 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco12"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View13"),
                            },
                            Description: stringPtr("ArtDeco13"),
                            Position: &x3d.SFVec3f{-2.25, 0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.25, 0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco13 view"),
                                    Url: x3d.MFString{"#View13"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco13"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco13 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco13"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View14"),
                            },
                            Description: stringPtr("ArtDeco14"),
                            Position: &x3d.SFVec3f{-0.75, 0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-0.75, 0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco14 view"),
                                    Url: x3d.MFString{"#View14"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco14"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco14 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco14"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View15"),
                            },
                            Description: stringPtr("ArtDeco15"),
                            Position: &x3d.SFVec3f{0.75, 0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.75, 0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco15 view"),
                                    Url: x3d.MFString{"#View15"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco15"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco15 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco15"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View16"),
                            },
                            Description: stringPtr("ArtDeco16"),
                            Position: &x3d.SFVec3f{2.25, 0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.25, 0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco16 view"),
                                    Url: x3d.MFString{"#View16"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco16"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco16 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco16"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View17"),
                            },
                            Description: stringPtr("ArtDeco17"),
                            Position: &x3d.SFVec3f{3.75, 0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{3.75, 0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco17 view"),
                                    Url: x3d.MFString{"#View17"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco17"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco17 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco17"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View18"),
                            },
                            Description: stringPtr("ArtDeco18"),
                            Position: &x3d.SFVec3f{-3.75, -0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-3.75, -0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco18 view"),
                                    Url: x3d.MFString{"#View18"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco18"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco18 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco18"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View19"),
                            },
                            Description: stringPtr("ArtDeco19"),
                            Position: &x3d.SFVec3f{-2.25, -0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.25, -0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco19 view"),
                                    Url: x3d.MFString{"#View19"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco19"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco19 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco19"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View20"),
                            },
                            Description: stringPtr("ArtDeco20"),
                            Position: &x3d.SFVec3f{-0.75, -0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-0.75, -0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco20 view"),
                                    Url: x3d.MFString{"#View20"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco20"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco20 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco20"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View21"),
                            },
                            Description: stringPtr("ArtDeco21"),
                            Position: &x3d.SFVec3f{0.75, -0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.75, -0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco21 view"),
                                    Url: x3d.MFString{"#View21"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco21"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco21 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco21"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View22"),
                            },
                            Description: stringPtr("ArtDeco22"),
                            Position: &x3d.SFVec3f{2.25, -0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.25, -0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco22 view"),
                                    Url: x3d.MFString{"#View22"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco22"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco22 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco22"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View23"),
                            },
                            Description: stringPtr("ArtDeco23"),
                            Position: &x3d.SFVec3f{3.75, -0.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{3.75, -0.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco23 view"),
                                    Url: x3d.MFString{"#View23"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco23"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco23 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco23"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View24"),
                            },
                            Description: stringPtr("ArtDeco24"),
                            Position: &x3d.SFVec3f{-3.75, -2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-3.75, -2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco24 view"),
                                    Url: x3d.MFString{"#View24"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco24"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco24 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco24"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View25"),
                            },
                            Description: stringPtr("ArtDeco25"),
                            Position: &x3d.SFVec3f{-2.25, -2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.25, -2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco25 view"),
                                    Url: x3d.MFString{"#View25"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco25"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco25 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco25"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View26"),
                            },
                            Description: stringPtr("ArtDeco26"),
                            Position: &x3d.SFVec3f{-0.75, -2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-0.75, -2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco26 view"),
                                    Url: x3d.MFString{"#View26"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco26"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco26 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco26"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View27"),
                            },
                            Description: stringPtr("ArtDeco27"),
                            Position: &x3d.SFVec3f{0.75, -2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.75, -2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco27 view"),
                                    Url: x3d.MFString{"#View27"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco27"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco27 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco27"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View28"),
                            },
                            Description: stringPtr("ArtDeco28"),
                            Position: &x3d.SFVec3f{2.25, -2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.25, -2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco28 view"),
                                    Url: x3d.MFString{"#View28"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco28"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco28 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco28"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View29"),
                            },
                            Description: stringPtr("ArtDeco29"),
                            Position: &x3d.SFVec3f{3.75, -2.25, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{3.75, -2.25, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco29 view"),
                                    Url: x3d.MFString{"#View29"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco29"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco29 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco29"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View30"),
                            },
                            Description: stringPtr("ArtDeco30"),
                            Position: &x3d.SFVec3f{-3.75, -3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-3.75, -3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco30 view"),
                                    Url: x3d.MFString{"#View30"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco30"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco30 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco30"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View31"),
                            },
                            Description: stringPtr("ArtDeco31"),
                            Position: &x3d.SFVec3f{-2.25, -3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-2.25, -3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco31 view"),
                                    Url: x3d.MFString{"#View31"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco31"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco31 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco31"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View32"),
                            },
                            Description: stringPtr("ArtDeco32"),
                            Position: &x3d.SFVec3f{-0.75, -3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{-0.75, -3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco32 view"),
                                    Url: x3d.MFString{"#View32"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco32"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco32 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco32"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View33"),
                            },
                            Description: stringPtr("ArtDeco33"),
                            Position: &x3d.SFVec3f{0.75, -3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{0.75, -3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco33 view"),
                                    Url: x3d.MFString{"#View33"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco33"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco33 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco33"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View34"),
                            },
                            Description: stringPtr("ArtDeco34"),
                            Position: &x3d.SFVec3f{2.25, -3.75, 3.0},
                        },
                        &x3d.Transform{
                                Translation: &x3d.SFVec3f{2.25, -3.75, 0.0},
                            Children: []x3d.X3DNode{
                                &x3d.Anchor{
                                    Description: stringPtr("ArtDeco34 view"),
                                    Url: x3d.MFString{"#View34"},
                                    Children: []x3d.X3DNode{
                                        &x3d.Shape{
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.ProtoInstance{
                                                    Name: stringPtr("ArtDeco34"),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Ball"),
                                                },
                                            },
                                        },
                                    },
                                },
                                &x3d.Transform{
                                        Translation: &x3d.SFVec3f{0.0, 0.3, 0.5},
                                    Children: []x3d.X3DNode{
                                        &x3d.Anchor{
                                            Description: stringPtr("ArtDeco34 view source documentation"),
                                            Url: x3d.MFString{"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34", "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"},
                                            Parameter: x3d.MFString{"target=_source"},
                                            Children: []x3d.X3DNode{
                                                &x3d.Shape{
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("TextMat"),
                                                            },
                                                        },
                                                    },
                                                    Geometry: &x3d.Text{
                                                        String: x3d.MFString{"ArtDeco34"},
                                                        FontStyle: &x3d.FontStyle{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("Style"),
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
                &x3d.ROUTE{
                    FromNode: stringPtr("Close_Time"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Close_Mover"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Close_Mover"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Close_travel"),
                    ToField: stringPtr("set_translation"),
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
	filename := "../data/ArtDecoExamples.new.go.x3d"
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