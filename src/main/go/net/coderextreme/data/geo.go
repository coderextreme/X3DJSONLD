
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
//<component name='Shape' level='4'></component>
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("Scripting"),
                    Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("EnvironmentalEffects"),
                Level: int32Ptr(3),
            },
            &x3d.Component{
                Name: stringPtr("Shaders"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("CubeMapTexturing"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Texturing"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Rendering"),
                Level: int32Ptr(1),
            },
            &x3d.Component{
                Name: stringPtr("Grouping"),
                Level: int32Ptr(3),
            },
            &x3d.Component{
                Name: stringPtr("Core"),
                Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("geo.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("John Carlson"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("manual"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("a sphere"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"ANY", "EXAMINE", "FLY", "LOOKAT"},
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("Tour"),
                    },
                    Description: stringPtr("Tour Views"),
                },
//Viewpoint position='0 0 4' description='sphere in road'/
                &x3d.Background{
                    BackUrl: x3d.MFString{"../resources/images/bBK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"},
                    BottomUrl: x3d.MFString{"../resources/images/bBT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"},
                    FrontUrl: x3d.MFString{"../resources/images/bFR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"},
                    LeftUrl: x3d.MFString{"../resources/images/bLF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"},
                    RightUrl: x3d.MFString{"../resources/images/bRT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"},
                    TopUrl: x3d.MFString{"../resources/images/bTP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"},
                },
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Geometry: &x3d.Sphere{
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.7, 0.7, 0.7},
                                    SpecularColor: &x3d.SFColor{0.5, 0.5, 0.5},
                                },
                                Texture: &x3d.ComposedCubeMapTexture{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("texture"),
                                    },
                                    BackTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/bBK.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"},
                                    },
                                    BottomTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/bBT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"},
                                    },
                                    FrontTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/bFR.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"},
                                    },
                                    LeftTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/bLF.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"},
                                    },
                                    RightTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/bRT.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"},
                                    },
                                    TopTexture: &x3d.ImageTexture{
                                        Url: x3d.MFString{"../resources/images/bTP.png", "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"},
                                    },
                                },
                                &x3d.ComposedShader{
                                    Language: stringPtr("GLSL"),
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("chromaticDispertion"),
                                            AccessType: stringPtr("inputOutput"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0.98 1 1.033"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("cube"),
                                        Type: stringPtr("SFNode"),
                                        AccessType: stringPtr("inputOutput"),
                                        Children: []x3d.X3DNode{
                                            &x3d.ComposedCubeMapTexture{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("texture"),
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("bias"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("scale"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("power"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("2"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"../shaders/x3dom.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("common"),
                                        },
                                        Url: x3d.MFString{"../shaders/common.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"},
                                        Type: stringPtr("FRAGMENT"),
                                    },
                                    },
                                },
                                &x3d.ComposedShader{
                                    Language: stringPtr("GLSL"),
                                    Field: []x3d.X3DNode{
                                        &x3d.Field{
                                            Name: stringPtr("chromaticDispertion"),
                                            AccessType: stringPtr("initializeOnly"),
                                            Type: stringPtr("SFVec3f"),
                                            Value: stringPtr("0.98 1 1.033"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("cube"),
                                        Type: stringPtr("SFNode"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Children: []x3d.X3DNode{
                                            &x3d.ComposedCubeMapTexture{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("texture"),
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("bias"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("scale"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("0.5"),
                                    },
                                    &x3d.Field{
                                        Name: stringPtr("power"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("2"),
                                    },
                                },
                                    Parts: []x3d.X3DNode{
                                        &x3d.ShaderPart{
                                            Url: x3d.MFString{"../shaders/x_ite.vs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"},
                                            Type: stringPtr("VERTEX"),
                                    },
                                    &x3d.ShaderPart{
                                        Url: x3d.MFString{"../shaders/x_ite.fs", "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"},
                                        Type: stringPtr("FRAGMENT"),
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
	filename := "../data/geo.new.go.x3d"
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