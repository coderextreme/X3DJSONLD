
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
                    Content: stringPtr("ArtDecoPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."),
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
                Content: stringPtr("Tue, 09 Sep 2025 19:37:50 GMT"),
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
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco00"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                DiffuseColor: &x3d.SFColor{0.282435, 0.085159, 0.134462},
                                SpecularColor: &x3d.SFColor{0.276305, 0.11431, 0.139857},
                                Shininess: floatPtr(0.127273),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco01"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.254777),
                                DiffuseColor: &x3d.SFColor{0.685208, 0.134679, 0.332385},
                                SpecularColor: &x3d.SFColor{0.122449, 0.050035, 0.050035},
                                Shininess: floatPtr(0.071429),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco02"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(1.0),
                                DiffuseColor: &x3d.SFColor{0.536861, 0.0529, 0.245479},
                                SpecularColor: &x3d.SFColor{0.805292, 0.765198, 0.747416},
                                Shininess: floatPtr(0.832432),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco03"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.248649),
                                DiffuseColor: &x3d.SFColor{1.0, 0.452381, 0.40339},
                                SpecularColor: &x3d.SFColor{0.686486, 0.396903, 0.419275},
                                Shininess: floatPtr(0.902703),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco04"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                DiffuseColor: &x3d.SFColor{0.748016, 0.298362, 0.342624},
                                SpecularColor: &x3d.SFColor{0.345455, 0.345455, 0.345455},
                                Shininess: floatPtr(0.69697),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco05"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.24359),
                                DiffuseColor: &x3d.SFColor{0.945455, 0.318988, 0.321717},
                                SpecularColor: &x3d.SFColor{0.072727, 0.021705, 0.010732},
                                Shininess: floatPtr(0.018182),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco06"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25946),
                                DiffuseColor: &x3d.SFColor{0.228655, 0.195513, 0.425484},
                                SpecularColor: &x3d.SFColor{0.324504, 0.404255, 0.404255},
                                Shininess: floatPtr(0.542553),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco07"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.333333),
                                DiffuseColor: &x3d.SFColor{0.200348, 0.100857, 0.320833},
                                SpecularColor: &x3d.SFColor{0.311358, 0.387879, 0.387879},
                                Shininess: floatPtr(0.133333),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco08"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.242424),
                                DiffuseColor: &x3d.SFColor{0.330519, 0.3389, 0.6},
                                SpecularColor: &x3d.SFColor{0.290909, 0.290909, 0.290909},
                                Shininess: floatPtr(0.787879),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco09"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.333333),
                                DiffuseColor: &x3d.SFColor{0.237059, 0.096273, 0.215625},
                                SpecularColor: &x3d.SFColor{0.311358, 0.387879, 0.387879},
                                Shininess: floatPtr(0.133333),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco10"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.242425),
                                DiffuseColor: &x3d.SFColor{0.304, 0.09025, 0.207364},
                                SpecularColor: &x3d.SFColor{0.6665, 0.579046, 0.830303},
                                Shininess: floatPtr(0.072727),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco11"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.258928),
                                DiffuseColor: &x3d.SFColor{0.335631, 0.207672, 0.238304},
                                SpecularColor: &x3d.SFColor{0.198631, 0.075403, 0.138803},
                                EmissiveColor: &x3d.SFColor{0.010638, 0.010638, 0.010638},
                                Shininess: floatPtr(0.021277),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco12"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.240838),
                                DiffuseColor: &x3d.SFColor{0.876873, 0.14715, 0.00856},
                                SpecularColor: &x3d.SFColor{0.193878, 0.029416, 0.029416},
                                Shininess: floatPtr(0.076531),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco13"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                DiffuseColor: &x3d.SFColor{0.794445, 0.249425, 0.0},
                                SpecularColor: &x3d.SFColor{0.62904, 0.194211, 0.033663},
                                Shininess: floatPtr(0.551515),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco14"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                DiffuseColor: &x3d.SFColor{0.510609, 0.17264, 0.059872},
                                SpecularColor: &x3d.SFColor{0.533333, 0.533333, 0.533333},
                                Shininess: floatPtr(0.933333),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco15"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.255814),
                                DiffuseColor: &x3d.SFColor{0.914894, 0.444404, 0.348914},
                                SpecularColor: &x3d.SFColor{0.345745, 0.143066, 0.0},
                                Shininess: floatPtr(0.12766),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco16"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.240838),
                                DiffuseColor: &x3d.SFColor{0.876873, 0.323147, 0.199564},
                                SpecularColor: &x3d.SFColor{0.816327, 0.278677, 0.278677},
                                Shininess: floatPtr(0.80102),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco17"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.242424),
                                DiffuseColor: &x3d.SFColor{0.515625, 0.315496, 0.252441},
                                SpecularColor: &x3d.SFColor{0.533333, 0.533333, 0.533333},
                                Shininess: floatPtr(0.933333),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco18"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.264706),
                                DiffuseColor: &x3d.SFColor{0.0, 0.346939, 0.253624},
                                SpecularColor: &x3d.SFColor{0.0, 0.311074, 0.357143},
                                Shininess: floatPtr(0.316327),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco19"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.259259),
                                DiffuseColor: &x3d.SFColor{0.0, 0.251004, 0.239248},
                                SpecularColor: &x3d.SFColor{0.177935, 0.249369, 0.229278},
                                Shininess: floatPtr(0.060606),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco20"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.24),
                                DiffuseColor: &x3d.SFColor{0.228298, 0.385771, 0.186794},
                                SpecularColor: &x3d.SFColor{0.200464, 0.300145, 0.293518},
                                Shininess: floatPtr(0.393939),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco21"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                DiffuseColor: &x3d.SFColor{0.315389, 0.544, 0.258052},
                                SpecularColor: &x3d.SFColor{0.456, 0.456, 0.456},
                                Shininess: floatPtr(0.509389),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco22"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.246032),
                                DiffuseColor: &x3d.SFColor{0.251104, 0.312562, 0.201724},
                                SpecularColor: &x3d.SFColor{0.209184, 0.113842, 0.111328},
                                Shininess: floatPtr(0.086735),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco23"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.242424),
                                DiffuseColor: &x3d.SFColor{0.392348, 0.456, 0.417708},
                                SpecularColor: &x3d.SFColor{0.533333, 0.533333, 0.533333},
                                Shininess: floatPtr(0.933333),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco24"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.253968),
                                DiffuseColor: &x3d.SFColor{1.0, 0.854922, 0.0},
                                SpecularColor: &x3d.SFColor{0.872449, 0.247119, 0.254214},
                                Shininess: floatPtr(1.0),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco25"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25641),
                                DiffuseColor: &x3d.SFColor{0.795918, 0.505869, 0.093315},
                                SpecularColor: &x3d.SFColor{0.923469, 0.428866, 0.006369},
                                Shininess: floatPtr(0.397959),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco26"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(1.0),
                                DiffuseColor: &x3d.SFColor{0.331633, 0.296582, 0.279057},
                                SpecularColor: &x3d.SFColor{0.311224, 0.25183, 0.133042},
                                Shininess: floatPtr(0.096939),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco27"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.263158),
                                DiffuseColor: &x3d.SFColor{0.345455, 0.163262, 0.122622},
                                SpecularColor: &x3d.SFColor{0.212121, 0.107475, 0.0},
                                Shininess: floatPtr(0.048649),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco28"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.240506),
                                DiffuseColor: &x3d.SFColor{0.277281, 0.104336, 0.0799},
                                SpecularColor: &x3d.SFColor{0.305587, 0.141916, 0.270572},
                                Shininess: floatPtr(0.09697),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco29"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.215686),
                                DiffuseColor: &x3d.SFColor{0.087034, 0.025888, 0.0},
                                SpecularColor: &x3d.SFColor{0.224138, 0.104091, 0.104091},
                                Shininess: floatPtr(0.045918),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco30"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.0),
                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                SpecularColor: &x3d.SFColor{0.293243, 0.297387, 0.290421},
                                Shininess: floatPtr(0.081633),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco31"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25641),
                                DiffuseColor: &x3d.SFColor{0.236364, 0.236364, 0.236364},
                                SpecularColor: &x3d.SFColor{0.29697, 0.245839, 0.295962},
                                Shininess: floatPtr(0.054546),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco32"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.242424),
                                DiffuseColor: &x3d.SFColor{0.38087, 0.382957, 0.417708},
                                SpecularColor: &x3d.SFColor{0.533333, 0.533333, 0.533333},
                                Shininess: floatPtr(0.933333),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco33"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.230089),
                                DiffuseColor: &x3d.SFColor{0.610811, 0.610811, 0.610811},
                                SpecularColor: &x3d.SFColor{0.767568, 0.756757, 0.764964},
                                Shininess: floatPtr(0.897297),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("ArtDeco34"),
                    Appinfo: stringPtr("UniversalMediaMaterials prototype"),
                    Documentation: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
                    ProtoInterface: &x3d.ProtoInterface{
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Material{
                                AmbientIntensity: floatPtr(0.25),
                                SpecularColor: &x3d.SFColor{0.2, 0.2, 0.2},
                                Shininess: floatPtr(0.0),
                            },
                        },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("ArtDecoPrototypes.x3d"),
                },
                &x3d.Anchor{
                    Description: stringPtr("ArtDecoPrototypeExample"),
                    Url: x3d.MFString{"../data/ArtDecoExamples.json", "../data/ArtDecoExamples.x3d", "ArtDecoExamples.json", "ArtDecoExamples.x3d"},
                    Parameter: x3d.MFString{"target=_blank"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.8, 0.4, 0.0},
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"ArtDecoExamples.x3d", "is a Materials Prototype declaration file.", "", "For an example scene using these node,", "click this text and view", "ArtDecoExamples.x3d"},
                                FontStyle: &x3d.FontStyle{
                                    Size: floatPtr(0.8),
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
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
	filename := "../data/ArtDecoPrototypes.new.go.x3d"
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