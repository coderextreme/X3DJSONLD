
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
//meta content='under development' name='warning'/
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("Shaders"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("SimpleShader.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Simple shader example"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Stewart"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("26 May 2009"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("15 October 2009"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("20 October 2019"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.opengl.org/wiki/Fragment_Shader"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("X3D shader example"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("originals/simpleShader.x3dv"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("ShaderTutorialInstantReality.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Titania V3.0.3, http://titania.create3000.de"),
            },
            &x3d.Meta{
                Name: stringPtr("info"),
                Content: stringPtr("World of Titania"),
            },
            &x3d.Meta{
                Name: stringPtr("outputStyle"),
                Content: stringPtr("nicest"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("myPrototype"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("myInputRange"),
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFVec3f"),
                                Value: stringPtr("0.95 0.44 0.22"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("TR"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.9},
                                            },
                                            &x3d.ComposedShader{
                                                Language: stringPtr("GLSL"),
                                                IS: &x3d.IS{
                                                    Connect: []x3d.X3DNode{
                                                        &x3d.Connect{
                                                            NodeField: stringPtr("decis"),
                                                            ProtoField: stringPtr("myInputRange"),
                                                    },
                                                    },
                                                },
                                                Field: []x3d.X3DNode{
                                                    &x3d.Field{
                                                        Name: stringPtr("decis"),
                                                        AccessType: stringPtr("initializeOnly"),
                                                        Type: stringPtr("SFVec3f"),
                                                },
                                            },
                                                Parts: []x3d.X3DNode{
                                                    &x3d.ShaderPart{
                                                        Type: stringPtr("VERTEX"),
                                                },
                                                &x3d.ShaderPart{
                                                    Type: stringPtr("FRAGMENT"),
                                                },
                                                },
                                            },
                                            &x3d.ComposedShader{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("Cobweb"),
                                                },
                                                Language: stringPtr("GLSL"),
                                                Field: []x3d.X3DNode{
                                                    &x3d.Field{
                                                        Name: stringPtr("decis"),
                                                        AccessType: stringPtr("initializeOnly"),
                                                        Type: stringPtr("SFVec3f"),
                                                        Value: stringPtr("0.95 0.77 0.44"),
                                                },
                                            },
                                                Parts: []x3d.X3DNode{
                                                    &x3d.ShaderPart{
                                                        Type: stringPtr("VERTEX"),
                                                },
                                                &x3d.ShaderPart{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("_1"),
                                                    },
                                                    Type: stringPtr("FRAGMENT"),
                                                },
                                                },
                                            },
                                        },
                                        Geometry: &x3d.Sphere{
                                            Radius: floatPtr(1.75),
                                        },
                                    },
                                },
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("SimpleShader"),
                    Metadata: &x3d.MetadataSet{
                        Name: stringPtr("Titania"),
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Titania"),
                        },
                        Reference: stringPtr("http://titania.create3000.de"),
                        &x3d.MetadataSet{
                            Name: stringPtr("Selection"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Selection"),
                            },
                            Reference: stringPtr("http://titania.create3000.de"),
                            &x3d.MetadataSet{
                                Name: stringPtr("nodes"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("nodes"),
                                },
                                Reference: stringPtr("http://titania.create3000.de"),
//NULL
                            },
                        },
                        &x3d.MetadataSet{
                            Name: stringPtr("NavigationInfo"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("NavigationInfo"),
                            },
                            Reference: stringPtr("http://titania.create3000.de"),
                            &x3d.MetadataString{
                                Name: stringPtr("type"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("type"),
                                },
                                Reference: stringPtr("http://titania.create3000.de"),
                                Value: x3d.MFString{"EXAMINE"},
                            },
                        },
                        &x3d.MetadataSet{
                            Name: stringPtr("Viewpoint"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Viewpoint"),
                            },
                            Reference: stringPtr("http://titania.create3000.de"),
                            &x3d.MetadataDouble{
                                Name: stringPtr("position"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("position"),
                                },
                                Reference: stringPtr("http://titania.create3000.de"),
                                Value: x3d.MFDouble{6.24067728185014, 0.00250837343276661, 2.92117542307615},
                            },
                            &x3d.MetadataDouble{
                                Name: stringPtr("orientation"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("orientation"),
                                },
                                Reference: stringPtr("http://titania.create3000.de"),
                                Value: x3d.MFDouble{-0.110173424710488, 0.990158061907379, -0.0863065984000336, 1.21146676119191},
                            },
                            &x3d.MetadataDouble{
                                Name: stringPtr("centerOfRotation"),
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("centerOfRotation"),
                                },
                                Reference: stringPtr("http://titania.create3000.de"),
                                Value: x3d.MFDouble{-0.808320198626341, -0.358072370409949, 0.22817191560906},
                            },
                        },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("myPrototype"),
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
	filename := "../data/SimpleShader.new.go.x3d"
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