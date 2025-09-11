
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
                    Content: stringPtr("PathMeshTopSurface.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Pathway for HAnim scene Winter and Spring."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Carol McDonald"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joe Williams and Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("27 May 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Mon, 08 Sep 2025 01:48:30 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("source"),
                Content: stringPtr("originals/PathMeshTopSurface.x3dv"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.NavigationInfo{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("pathTop"),
                    },
                    Headlight: boolPtr(false),
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{26.39594,0.075,25.67472},[3]float32{26.00195,0.075,25.75502},[3]float32{26.25982,0.075,25.00694},[3]float32{25.86584,0.075,25.08724},[3]float32{26.1237,0.075,24.33916},[3]float32{25.72972,0.075,24.41947}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{26.39918,0.075,23.57728},[3]float32{26.53329,0.075,24.23526},[3]float32{25.5916,0.075,23.74189},[3]float32{25.72572,0.075,24.39987}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.58761,0.075,23.72229},[3]float32{25.45349,0.075,23.06431},[3]float32{26.39518,0.075,23.55768},[3]float32{26.26106,0.075,22.8997}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.84348,0.075,22.96441},[3]float32{25.4495,0.075,23.04472},[3]float32{25.57125,0.075,21.62885},[3]float32{25.17726,0.075,21.70916}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.72724,0.075,28.63393},[3]float32{25.59312,0.075,27.97596},[3]float32{26.53481,0.075,28.46932},[3]float32{26.40069,0.075,27.81134}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{26.26258,0.075,27.13377},[3]float32{26.3967,0.075,27.79175},[3]float32{25.85879,0.075,27.21607},[3]float32{25.99291,0.075,27.87405},[3]float32{25.45501,0.075,27.29838},[3]float32{25.58913,0.075,27.95636}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.59236,0.075,25.85892},[3]float32{25.78936,0.075,25.81877},[3]float32{25.98635,0.075,25.77861},[3]float32{25.72848,0.075,26.5267},[3]float32{25.92547,0.075,26.48655},[3]float32{26.12247,0.075,26.44639},[3]float32{25.8646,0.075,27.19448},[3]float32{26.06159,0.075,27.15432},[3]float32{26.25858,0.075,27.11417}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.17878,0.075,25.94323},[3]float32{25.57277,0.075,25.86292},[3]float32{25.3149,0.075,26.611},[3]float32{25.70888,0.075,26.53069},[3]float32{25.45101,0.075,27.27878},[3]float32{25.845,0.075,27.19847}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.17478,0.075,25.92363},[3]float32{25.04066,0.075,25.26565},[3]float32{25.98236,0.075,25.75902},[3]float32{25.84824,0.075,25.10104}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.03667,0.075,25.24605},[3]float32{24.90255,0.075,24.58807},[3]float32{25.44046,0.075,25.16375},[3]float32{25.30634,0.075,24.50577},[3]float32{25.84424,0.075,25.08144},[3]float32{25.71012,0.075,24.42346}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.03991,0.075,23.14862},[3]float32{25.43389,0.075,23.06831},[3]float32{25.17602,0.075,23.81639},[3]float32{25.57001,0.075,23.73609},[3]float32{25.31214,0.075,24.48417},[3]float32{25.70613,0.075,24.40386}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.62632,0.075,23.23292},[3]float32{25.02031,0.075,23.15261},[3]float32{24.89856,0.075,24.56848},[3]float32{25.29254,0.075,24.48817}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.62233,0.075,23.21332},[3]float32{24.48821,0.075,22.55534},[3]float32{25.4299,0.075,23.04871},[3]float32{25.29578,0.075,22.39073}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.48421,0.075,22.53575},[3]float32{24.3501,0.075,21.87777},[3]float32{25.29178,0.075,22.37114},[3]float32{25.15767,0.075,21.71316}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.48745,0.075,20.43831},[3]float32{24.88144,0.075,20.358},[3]float32{24.75968,0.075,21.77387},[3]float32{25.15367,0.075,21.69356}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.74009,0.075,21.77786},[3]float32{24.3461,0.075,21.85817},[3]float32{24.46785,0.075,20.44231},[3]float32{24.07387,0.075,20.52261}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.1763,0.075,30.15769},[3]float32{25.04218,0.075,29.49971},[3]float32{25.58009,0.075,30.07539},[3]float32{25.44597,0.075,29.41741},[3]float32{25.98387,0.075,29.99308},[3]float32{25.84975,0.075,29.3351}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.03819,0.075,29.48012},[3]float32{24.90407,0.075,28.82214},[3]float32{25.44197,0.075,29.39781},[3]float32{25.30785,0.075,28.73983},[3]float32{25.84576,0.075,29.31551},[3]float32{25.71164,0.075,28.65753}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.04142,0.075,27.38268},[3]float32{25.43541,0.075,27.30237},[3]float32{25.17754,0.075,28.05046},[3]float32{25.57153,0.075,27.97015},[3]float32{25.31366,0.075,28.71824},[3]float32{25.70764,0.075,28.63793}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.62784,0.075,27.46698},[3]float32{24.82483,0.075,27.42683},[3]float32{25.02183,0.075,27.38668},[3]float32{24.76396,0.075,28.13476},[3]float32{24.96095,0.075,28.09461},[3]float32{25.15794,0.075,28.05445},[3]float32{24.90007,0.075,28.80254},[3]float32{25.09706,0.075,28.76239},[3]float32{25.29406,0.075,28.72223}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.62384,0.075,27.44739},[3]float32{24.55679,0.075,27.1184},[3]float32{24.48973,0.075,26.78941},[3]float32{25.43142,0.075,27.28278},[3]float32{25.36436,0.075,26.95379},[3]float32{25.2973,0.075,26.6248}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.48573,0.075,26.76981},[3]float32{24.35161,0.075,26.11183},[3]float32{25.2933,0.075,26.6052},[3]float32{25.15918,0.075,25.94722}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{25.15519,0.075,25.92762},[3]float32{24.7612,0.075,26.00793},[3]float32{24.88295,0.075,24.59207},[3]float32{24.48897,0.075,24.67238}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.07538,0.075,24.75668},[3]float32{24.46937,0.075,24.67637},[3]float32{24.34762,0.075,26.09224},[3]float32{24.7416,0.075,26.01193}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.07139,0.075,24.73708},[3]float32{23.93727,0.075,24.0791},[3]float32{24.87896,0.075,24.57247},[3]float32{24.74484,0.075,23.91449}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.60673,0.075,23.23692},[3]float32{24.74084,0.075,23.89489},[3]float32{24.20294,0.075,23.31922},[3]float32{24.33706,0.075,23.9772},[3]float32{23.79915,0.075,23.40153},[3]float32{23.93328,0.075,24.05951}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.60273,0.075,23.21732},[3]float32{24.40574,0.075,23.25747},[3]float32{24.20874,0.075,23.29763},[3]float32{24.46661,0.075,22.54954},[3]float32{24.26962,0.075,22.58969},[3]float32{24.07263,0.075,22.62985},[3]float32{24.3305,0.075,21.88176},[3]float32{24.1335,0.075,21.92192},[3]float32{23.93651,0.075,21.96207}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.52293,0.075,22.04637},[3]float32{23.91691,0.075,21.96606},[3]float32{23.65904,0.075,22.71415},[3]float32{24.05303,0.075,22.63384},[3]float32{23.79516,0.075,23.38193},[3]float32{24.18915,0.075,23.30162}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.51893,0.075,22.02678},[3]float32{23.38481,0.075,21.3688},[3]float32{24.3265,0.075,21.86217},[3]float32{24.19238,0.075,21.20419}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.05427,0.075,20.52661},[3]float32{24.18839,0.075,21.18459},[3]float32{23.2467,0.075,20.69122},[3]float32{23.38082,0.075,21.3492}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.05028,0.075,20.50701},[3]float32{23.65629,0.075,20.58732},[3]float32{23.91416,0.075,19.83923},[3]float32{23.52017,0.075,19.91954},[3]float32{23.77804,0.075,19.17146},[3]float32{23.38405,0.075,19.25176}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.97047,0.075,19.33607},[3]float32{23.36446,0.075,19.25576},[3]float32{23.2427,0.075,20.67162},[3]float32{23.63669,0.075,20.59131}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.49048,0.075,28.90644},[3]float32{24.88447,0.075,28.82613},[3]float32{24.76272,0.075,30.242},[3]float32{25.1567,0.075,30.16169}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.0769,0.075,28.99074},[3]float32{24.47089,0.075,28.91043},[3]float32{24.34913,0.075,30.3263},[3]float32{24.74312,0.075,30.24599}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.0729,0.075,28.97115},[3]float32{24.00584,0.075,28.64216},[3]float32{23.93879,0.075,28.31317},[3]float32{24.47669,0.075,28.88884},[3]float32{24.40963,0.075,28.55985},[3]float32{24.34257,0.075,28.23086},[3]float32{24.88048,0.075,28.80654},[3]float32{24.81342,0.075,28.47754},[3]float32{24.74636,0.075,28.14856}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.93479,0.075,28.29357},[3]float32{23.80067,0.075,27.63559},[3]float32{24.33858,0.075,28.21126},[3]float32{24.20446,0.075,27.55329},[3]float32{24.74236,0.075,28.12896},[3]float32{24.60824,0.075,27.47098}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.93803,0.075,26.19613},[3]float32{24.13502,0.075,26.15598},[3]float32{24.33201,0.075,26.11583},[3]float32{24.07414,0.075,26.86391},[3]float32{24.27114,0.075,26.82376},[3]float32{24.46813,0.075,26.7836},[3]float32{24.21026,0.075,27.53169},[3]float32{24.40725,0.075,27.49154},[3]float32{24.60425,0.075,27.45138}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.52444,0.075,26.28044},[3]float32{23.72144,0.075,26.24028},[3]float32{23.91843,0.075,26.20013},[3]float32{23.66056,0.075,26.94822},[3]float32{23.85755,0.075,26.90806},[3]float32{24.05455,0.075,26.86791},[3]float32{23.79668,0.075,27.61599},[3]float32{23.99367,0.075,27.57584},[3]float32{24.19066,0.075,27.53568}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.52045,0.075,26.26084},[3]float32{23.38633,0.075,25.60286},[3]float32{24.32802,0.075,26.09623},[3]float32{24.1939,0.075,25.43825}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.38233,0.075,25.58327},[3]float32{23.24821,0.075,24.92529},[3]float32{24.18991,0.075,25.41865},[3]float32{24.05579,0.075,24.76067}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.38557,0.075,23.48583},[3]float32{23.77956,0.075,23.40552},[3]float32{23.52169,0.075,24.15361},[3]float32{23.91567,0.075,24.0733},[3]float32{23.6578,0.075,24.82138},[3]float32{24.05179,0.075,24.74108}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.97199,0.075,23.57013},[3]float32{23.36597,0.075,23.48982},[3]float32{23.1081,0.075,24.23791},[3]float32{23.50209,0.075,24.1576},[3]float32{23.24422,0.075,24.90569},[3]float32{23.63821,0.075,24.82538}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.96799,0.075,23.55054},[3]float32{22.83387,0.075,22.89256},[3]float32{23.77556,0.075,23.38592},[3]float32{23.64144,0.075,22.72794}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.82988,0.075,22.87296},[3]float32{22.69576,0.075,22.21498},[3]float32{23.63745,0.075,22.70835},[3]float32{23.50333,0.075,22.05037}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.83311,0.075,20.77552},[3]float32{23.2271,0.075,20.69522},[3]float32{23.10535,0.075,22.11108},[3]float32{23.49934,0.075,22.03077}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.41953,0.075,20.85983},[3]float32{22.81352,0.075,20.77952},[3]float32{22.69176,0.075,22.19538},[3]float32{23.08575,0.075,22.11507}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.41554,0.075,20.84023},[3]float32{22.28142,0.075,20.18225},[3]float32{23.22311,0.075,20.67562},[3]float32{23.08899,0.075,20.01764}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.27742,0.075,20.16265},[3]float32{22.1433,0.075,19.50467},[3]float32{23.08499,0.075,19.99804},[3]float32{22.95087,0.075,19.34006}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.28066,0.075,18.06522},[3]float32{22.67465,0.075,17.98491},[3]float32{22.41678,0.075,18.733},[3]float32{22.81076,0.075,18.65269},[3]float32{22.55289,0.075,19.40077},[3]float32{22.94688,0.075,19.32047}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.86707,0.075,18.14952},[3]float32{22.26106,0.075,18.06921},[3]float32{22.13931,0.075,19.48508},[3]float32{22.53329,0.075,19.40477}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.0573,0.075,28.99474},[3]float32{24.19142,0.075,29.65272},[3]float32{23.24973,0.075,29.15935},[3]float32{23.38385,0.075,29.81733}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{24.05331,0.075,28.97514},[3]float32{23.85631,0.075,29.0153},[3]float32{23.65932,0.075,29.05545},[3]float32{23.91719,0.075,28.30736},[3]float32{23.7202,0.075,28.34752},[3]float32{23.5232,0.075,28.38767},[3]float32{23.78107,0.075,27.63959},[3]float32{23.58408,0.075,27.67974},[3]float32{23.38709,0.075,27.71989}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.63972,0.075,29.05944},[3]float32{23.24574,0.075,29.13975},[3]float32{23.50361,0.075,28.39167},[3]float32{23.10962,0.075,28.47198},[3]float32{23.36749,0.075,27.72389},[3]float32{22.9735,0.075,27.8042}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.64296,0.075,26.96201},[3]float32{23.77708,0.075,27.61999},[3]float32{22.83539,0.075,27.12662},[3]float32{22.96951,0.075,27.7846}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.83139,0.075,27.10702},[3]float32{22.69728,0.075,26.44904},[3]float32{23.23518,0.075,27.02472},[3]float32{23.10106,0.075,26.36674},[3]float32{23.63897,0.075,26.94241},[3]float32{23.50485,0.075,26.28443}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.83463,0.075,25.00959},[3]float32{23.22862,0.075,24.92928},[3]float32{22.97075,0.075,25.67737},[3]float32{23.36473,0.075,25.59706},[3]float32{23.10686,0.075,26.34514},[3]float32{23.50085,0.075,26.26484}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.08727,0.075,26.34914},[3]float32{22.69328,0.075,26.42945},[3]float32{22.95115,0.075,25.68136},[3]float32{22.55716,0.075,25.76167},[3]float32{22.81503,0.075,25.01358},[3]float32{22.42105,0.075,25.09389}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.0905,0.075,24.2517},[3]float32{23.22462,0.075,24.90968},[3]float32{22.28293,0.075,24.41632},[3]float32{22.41705,0.075,25.07429}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.27894,0.075,24.39672},[3]float32{22.14482,0.075,23.73874},[3]float32{23.08651,0.075,24.23211},[3]float32{22.95239,0.075,23.57413}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.28218,0.075,22.29928},[3]float32{22.67616,0.075,22.21897},[3]float32{22.55441,0.075,23.63484},[3]float32{22.94839,0.075,23.55453}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.53481,0.075,23.63883},[3]float32{22.33782,0.075,23.67899},[3]float32{22.14083,0.075,23.71914},[3]float32{22.39869,0.075,22.97105},[3]float32{22.2017,0.075,23.01121},[3]float32{22.00471,0.075,23.05136},[3]float32{22.26258,0.075,22.30328},[3]float32{22.06558,0.075,22.34343},[3]float32{21.86859,0.075,22.38358}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.53805,0.075,21.5414},[3]float32{22.67217,0.075,22.19938},[3]float32{21.73048,0.075,21.70601},[3]float32{21.8646,0.075,22.36399}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.72648,0.075,21.68641},[3]float32{21.59236,0.075,21.02843},[3]float32{22.53405,0.075,21.5218},[3]float32{22.39993,0.075,20.86382}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.72972,0.075,19.58898},[3]float32{22.12371,0.075,19.50867},[3]float32{22.00195,0.075,20.92453},[3]float32{22.39594,0.075,20.84422}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.98236,0.075,20.92853},[3]float32{21.58837,0.075,21.00883},[3]float32{21.71012,0.075,19.59297},[3]float32{21.31614,0.075,19.67328}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.31214,0.075,19.65368},[3]float32{21.17802,0.075,18.9957},[3]float32{22.11971,0.075,19.48907},[3]float32{21.98559,0.075,18.83109}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.17403,0.075,18.97611},[3]float32{21.03991,0.075,18.31813},[3]float32{21.9816,0.075,18.81149},[3]float32{21.84748,0.075,18.15351}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.17726,0.075,16.87867},[3]float32{21.57125,0.075,16.79836},[3]float32{21.4495,0.075,18.21423},[3]float32{21.84348,0.075,18.13392}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.76368,0.075,16.96297},[3]float32{20.96067,0.075,16.92282},[3]float32{21.15767,0.075,16.88267},[3]float32{20.8998,0.075,17.63075},[3]float32{21.09679,0.075,17.5906},[3]float32{21.29378,0.075,17.55044},[3]float32{21.03591,0.075,18.29853},[3]float32{21.23291,0.075,18.25838},[3]float32{21.4299,0.075,18.21822}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.65877,0.075,11.54236},[3]float32{20.05275,0.075,11.46205},[3]float32{19.79488,0.075,12.21014},[3]float32{20.18887,0.075,12.12983},[3]float32{19.931,0.075,12.87792},[3]float32{20.32499,0.075,12.79761}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.65477,0.075,11.52277},[3]float32{19.52065,0.075,10.86479},[3]float32{20.05856,0.075,11.44046},[3]float32{19.92444,0.075,10.78248},[3]float32{20.46234,0.075,11.35815},[3]float32{20.32822,0.075,10.70017}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.19011,0.075,10.0226},[3]float32{20.32423,0.075,10.68058},[3]float32{19.38254,0.075,10.18721},[3]float32{19.51666,0.075,10.84519}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.5199,0.075,8.747754},[3]float32{19.91388,0.075,8.667445},[3]float32{19.65601,0.075,9.415531},[3]float32{20.05,0.075,9.335223},[3]float32{19.79213,0.075,10.08331},[3]float32{20.18612,0.075,10.003}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.77253,0.075,10.0873},[3]float32{19.57554,0.075,10.12746},[3]float32{19.37854,0.075,10.16761},[3]float32{19.63642,0.075,9.419526},[3]float32{19.43942,0.075,9.459681},[3]float32{19.24243,0.075,9.499835},[3]float32{19.5003,0.075,8.751748},[3]float32{19.3033,0.075,8.791903},[3]float32{19.10631,0.075,8.832057}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.77577,0.075,7.989869},[3]float32{19.84283,0.075,8.318858},[3]float32{19.90989,0.075,8.647848},[3]float32{18.9682,0.075,8.15448},[3]float32{19.03526,0.075,8.48347},[3]float32{19.10232,0.075,8.81246}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.9642,0.075,8.134883},[3]float32{18.83008,0.075,7.476904},[3]float32{19.36799,0.075,8.052578},[3]float32{19.23387,0.075,7.394598},[3]float32{19.77177,0.075,7.970272},[3]float32{19.63765,0.075,7.312293}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.96744,0.075,6.037448},[3]float32{19.16443,0.075,5.997294},[3]float32{19.36143,0.075,5.957139},[3]float32{19.10356,0.075,6.705226},[3]float32{19.30055,0.075,6.665071},[3]float32{19.49754,0.075,6.624918},[3]float32{19.23967,0.075,7.373004},[3]float32{19.43667,0.075,7.33285},[3]float32{19.63366,0.075,7.292696}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55386,0.075,6.121751},[3]float32{18.94784,0.075,6.041442},[3]float32{18.68997,0.075,6.789529},[3]float32{19.08396,0.075,6.70922},[3]float32{18.82609,0.075,7.457307},[3]float32{19.22008,0.075,7.376998}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.54986,0.075,6.102154},[3]float32{18.41574,0.075,5.444175},[3]float32{18.95365,0.075,6.019848},[3]float32{18.81953,0.075,5.361869},[3]float32{19.35743,0.075,5.937542},[3]float32{19.22331,0.075,5.279563}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.83615,0.075,29.24365},[3]float32{23.23013,0.075,29.16334},[3]float32{23.10838,0.075,30.57921},[3]float32{23.50237,0.075,30.4989}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.08878,0.075,30.5832},[3]float32{22.89179,0.075,30.62336},[3]float32{22.6948,0.075,30.66351},[3]float32{22.95267,0.075,29.91542},[3]float32{22.75567,0.075,29.95558},[3]float32{22.55868,0.075,29.99573},[3]float32{22.81655,0.075,29.24765},[3]float32{22.61956,0.075,29.2878},[3]float32{22.42256,0.075,29.32796}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{23.09202,0.075,28.48577},[3]float32{23.22614,0.075,29.14375},[3]float32{22.28445,0.075,28.65038},[3]float32{22.41857,0.075,29.30836}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.28045,0.075,28.63078},[3]float32{22.14634,0.075,27.9728},[3]float32{23.08803,0.075,28.46617},[3]float32{22.95391,0.075,27.80819}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.94991,0.075,27.7886},[3]float32{22.55593,0.075,27.8689},[3]float32{22.67768,0.075,26.45304},[3]float32{22.28369,0.075,26.53335}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.87011,0.075,26.61765},[3]float32{22.0671,0.075,26.5775},[3]float32{22.26409,0.075,26.53734},[3]float32{22.00622,0.075,27.28543},[3]float32{22.20322,0.075,27.24527},[3]float32{22.40021,0.075,27.20512},[3]float32{22.14234,0.075,27.95321},[3]float32{22.33933,0.075,27.91305},[3]float32{22.53633,0.075,27.8729}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.53956,0.075,25.77546},[3]float32{22.67368,0.075,26.43344},[3]float32{21.73199,0.075,25.94007},[3]float32{21.86611,0.075,26.59805}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.728,0.075,25.92048},[3]float32{21.66094,0.075,25.59149},[3]float32{21.59388,0.075,25.2625},[3]float32{22.53557,0.075,25.75587},[3]float32{22.46851,0.075,25.42688},[3]float32{22.40145,0.075,25.09789}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.39746,0.075,25.07829},[3]float32{22.20046,0.075,25.11844},[3]float32{22.00347,0.075,25.1586},[3]float32{22.26134,0.075,24.41051},[3]float32{22.06435,0.075,24.45066},[3]float32{21.86735,0.075,24.49082},[3]float32{22.12522,0.075,23.74273},[3]float32{21.92823,0.075,23.78289},[3]float32{21.73124,0.075,23.82304}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.31765,0.075,23.90734},[3]float32{21.71164,0.075,23.82704},[3]float32{21.58988,0.075,25.2429},[3]float32{21.98387,0.075,25.16259}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.31366,0.075,23.88775},[3]float32{21.17954,0.075,23.22977},[3]float32{22.12123,0.075,23.72313},[3]float32{21.98711,0.075,23.06516}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.17554,0.075,23.21017},[3]float32{21.04142,0.075,22.55219},[3]float32{21.98311,0.075,23.04556},[3]float32{21.84899,0.075,22.38758}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.845,0.075,22.36798},[3]float32{21.45101,0.075,22.44829},[3]float32{21.57277,0.075,21.03243},[3]float32{21.17878,0.075,21.11274}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.7652,0.075,21.19704},[3]float32{21.15918,0.075,21.11673},[3]float32{21.03743,0.075,22.53259},[3]float32{21.43142,0.075,22.45229}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.7612,0.075,21.17744},[3]float32{20.62708,0.075,20.51946},[3]float32{21.16499,0.075,21.09514},[3]float32{21.03087,0.075,20.43716},[3]float32{21.56877,0.075,21.01283},[3]float32{21.43465,0.075,20.35485}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.62309,0.075,20.49986},[3]float32{20.48897,0.075,19.84189},[3]float32{21.02687,0.075,20.41756},[3]float32{20.89275,0.075,19.75958},[3]float32{21.43066,0.075,20.33525},[3]float32{21.29654,0.075,19.67727}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.62632,0.075,18.40243},[3]float32{20.82332,0.075,18.36228},[3]float32{21.02031,0.075,18.32212},[3]float32{20.76244,0.075,19.07021},[3]float32{20.95943,0.075,19.03005},[3]float32{21.15643,0.075,18.9899},[3]float32{20.89856,0.075,19.73799},[3]float32{21.09555,0.075,19.69783},[3]float32{21.29254,0.075,19.65768}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.21274,0.075,18.48673},[3]float32{20.40973,0.075,18.44658},[3]float32{20.60673,0.075,18.40642},[3]float32{20.34886,0.075,19.15451},[3]float32{20.54585,0.075,19.11436},[3]float32{20.74284,0.075,19.0742},[3]float32{20.48497,0.075,19.82229},[3]float32{20.68197,0.075,19.78214},[3]float32{20.87896,0.075,19.74198}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.20874,0.075,18.46714},[3]float32{20.07463,0.075,17.80916},[3]float32{20.61253,0.075,18.38483},[3]float32{20.47841,0.075,17.72685},[3]float32{21.01632,0.075,18.30252},[3]float32{20.8822,0.075,17.64454}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.74408,0.075,16.96697},[3]float32{20.8782,0.075,17.62495},[3]float32{20.3403,0.075,17.04927},[3]float32{20.47442,0.075,17.70725},[3]float32{19.93651,0.075,17.13158},[3]float32{20.07063,0.075,17.78956}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.74009,0.075,16.94737},[3]float32{20.3461,0.075,17.02768},[3]float32{20.60397,0.075,16.27959},[3]float32{20.20998,0.075,16.3599},[3]float32{20.46785,0.075,15.61182},[3]float32{20.07387,0.075,15.69212}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.66028,0.075,15.77643},[3]float32{19.85728,0.075,15.73627},[3]float32{20.05427,0.075,15.69612},[3]float32{19.7964,0.075,16.4442},[3]float32{19.99339,0.075,16.40405},[3]float32{20.19039,0.075,16.3639},[3]float32{19.93252,0.075,17.11198},[3]float32{20.12951,0.075,17.07183},[3]float32{20.3265,0.075,17.03168}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.65629,0.075,15.75683},[3]float32{19.58923,0.075,15.42784},[3]float32{19.52217,0.075,15.09885},[3]float32{20.06007,0.075,15.67452},[3]float32{19.99302,0.075,15.34553},[3]float32{19.92595,0.075,15.01655},[3]float32{20.46386,0.075,15.59222},[3]float32{20.3968,0.075,15.26323},[3]float32{20.32974,0.075,14.93424}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.19163,0.075,14.25666},[3]float32{20.32575,0.075,14.91464},[3]float32{19.38406,0.075,14.42127},[3]float32{19.51818,0.075,15.07925}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.52141,0.075,12.98182},[3]float32{19.9154,0.075,12.90151},[3]float32{19.65753,0.075,13.6496},[3]float32{20.05152,0.075,13.56929},[3]float32{19.79364,0.075,14.31737},[3]float32{20.18763,0.075,14.23707}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.10783,0.075,13.06612},[3]float32{19.50181,0.075,12.98581},[3]float32{19.38006,0.075,14.40168},[3]float32{19.77405,0.075,14.32137}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.10383,0.075,13.04652},[3]float32{18.96971,0.075,12.38855},[3]float32{19.50762,0.075,12.96422},[3]float32{19.3735,0.075,12.30624},[3]float32{19.9114,0.075,12.88191},[3]float32{19.77728,0.075,12.22393}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.96572,0.075,12.36895},[3]float32{18.8316,0.075,11.71097},[3]float32{19.3695,0.075,12.28664},[3]float32{19.23538,0.075,11.62866},[3]float32{19.77329,0.075,12.20434},[3]float32{19.63917,0.075,11.54636}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.96896,0.075,10.27151},[3]float32{19.36294,0.075,10.1912},[3]float32{19.10507,0.075,10.93929},[3]float32{19.49906,0.075,10.85898},[3]float32{19.24119,0.075,11.60707},[3]float32{19.63518,0.075,11.52676}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55537,0.075,10.35582},[3]float32{18.75237,0.075,10.31566},[3]float32{18.94936,0.075,10.27551},[3]float32{18.69149,0.075,11.02359},[3]float32{18.88848,0.075,10.98344},[3]float32{19.08548,0.075,10.94328},[3]float32{18.8276,0.075,11.69137},[3]float32{19.0246,0.075,11.65122},[3]float32{19.22159,0.075,11.61106}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.22483,0.075,9.513628},[3]float32{19.29189,0.075,9.842617},[3]float32{19.35895,0.075,10.17161},[3]float32{18.82104,0.075,9.595933},[3]float32{18.8881,0.075,9.924923},[3]float32{18.95516,0.075,10.25391},[3]float32{18.41726,0.075,9.678239},[3]float32{18.48432,0.075,10.00723},[3]float32{18.55138,0.075,10.33622}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.41326,0.075,9.658642},[3]float32{18.27914,0.075,9.000663},[3]float32{19.22083,0.075,9.494031},[3]float32{19.08671,0.075,8.836051}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.08272,0.075,8.816454},[3]float32{18.68873,0.075,8.896763},[3]float32{18.9466,0.075,8.148676},[3]float32{18.55262,0.075,8.228985},[3]float32{18.81049,0.075,7.480898},[3]float32{18.4165,0.075,7.561207}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00292,0.075,7.64551},[3]float32{18.19991,0.075,7.605356},[3]float32{18.3969,0.075,7.565201},[3]float32{18.13903,0.075,8.313288},[3]float32{18.33603,0.075,8.273133},[3]float32{18.53302,0.075,8.23298},[3]float32{18.27515,0.075,8.981066},[3]float32{18.47214,0.075,8.940911},[3]float32{18.66914,0.075,8.900757}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.99892,0.075,7.625913},[3]float32{17.8648,0.075,6.967933},[3]float32{18.40271,0.075,7.543607},[3]float32{18.26859,0.075,6.885628},[3]float32{18.80649,0.075,7.461301},[3]float32{18.67237,0.075,6.803322}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86081,0.075,6.948337},[3]float32{17.72669,0.075,6.290357},[3]float32{18.26459,0.075,6.866031},[3]float32{18.13047,0.075,6.208051},[3]float32{18.66838,0.075,6.783725},[3]float32{18.53426,0.075,6.125745}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86404,0.075,4.850901},[3]float32{18.25803,0.075,4.770593},[3]float32{18.13628,0.075,6.186457},[3]float32{18.53026,0.075,6.106149}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.45046,0.075,4.935204},[3]float32{17.84445,0.075,4.854896},[3]float32{17.72269,0.075,6.27076},[3]float32{18.11668,0.075,6.190452}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.44646,0.075,4.915607},[3]float32{17.31235,0.075,4.257627},[3]float32{17.85025,0.075,4.833302},[3]float32{17.71613,0.075,4.175322},[3]float32{18.25404,0.075,4.750996},[3]float32{18.11992,0.075,4.093016}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.9818,0.075,3.41544},[3]float32{18.11592,0.075,4.073419},[3]float32{17.57802,0.075,3.497746},[3]float32{17.71214,0.075,4.155725},[3]float32{17.17423,0.075,3.580051},[3]float32{17.30835,0.075,4.23803}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{22.40297,0.075,29.33195},[3]float32{22.53709,0.075,29.98993},[3]float32{21.5954,0.075,29.49656},[3]float32{21.72952,0.075,30.15454}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.73275,0.075,28.05711},[3]float32{22.12674,0.075,27.9768},[3]float32{21.86887,0.075,28.72488},[3]float32{22.26286,0.075,28.64458},[3]float32{22.00498,0.075,29.39266},[3]float32{22.39897,0.075,29.31235}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.98539,0.075,29.39666},[3]float32{21.5914,0.075,29.47696},[3]float32{21.84927,0.075,28.72888},[3]float32{21.45528,0.075,28.80919},[3]float32{21.71315,0.075,28.0611},[3]float32{21.31917,0.075,28.14141}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.98862,0.075,27.29922},[3]float32{22.12274,0.075,27.9572},[3]float32{21.18105,0.075,27.46383},[3]float32{21.31517,0.075,28.12181}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.17706,0.075,27.44423},[3]float32{21.04294,0.075,26.78626},[3]float32{21.58084,0.075,27.36193},[3]float32{21.44672,0.075,26.70395},[3]float32{21.98463,0.075,27.27962},[3]float32{21.85051,0.075,26.62164}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.1803,0.075,25.3468},[3]float32{21.57428,0.075,25.26649},[3]float32{21.45253,0.075,26.68236},[3]float32{21.84652,0.075,26.60205}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.43293,0.075,26.68635},[3]float32{21.23594,0.075,26.72651},[3]float32{21.03894,0.075,26.76666},[3]float32{21.29682,0.075,26.01857},[3]float32{21.09982,0.075,26.05873},[3]float32{20.90283,0.075,26.09888},[3]float32{21.1607,0.075,25.35079},[3]float32{20.96371,0.075,25.39095},[3]float32{20.76671,0.075,25.4311}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.43617,0.075,24.58891},[3]float32{21.57029,0.075,25.24689},[3]float32{20.6286,0.075,24.75353},[3]float32{20.76272,0.075,25.41151}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.6246,0.075,24.73393},[3]float32{20.49048,0.075,24.07595},[3]float32{21.43217,0.075,24.56932},[3]float32{21.29805,0.075,23.91134}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.62784,0.075,22.63649},[3]float32{21.02183,0.075,22.55619},[3]float32{20.76396,0.075,23.30427},[3]float32{21.15794,0.075,23.22396},[3]float32{20.90007,0.075,23.97205},[3]float32{21.29406,0.075,23.89174}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.21426,0.075,22.7208},[3]float32{20.41125,0.075,22.68064},[3]float32{20.60824,0.075,22.64049},[3]float32{20.35037,0.075,23.38857},[3]float32{20.54737,0.075,23.34842},[3]float32{20.74436,0.075,23.30827},[3]float32{20.48649,0.075,24.05635},[3]float32{20.68348,0.075,24.0162},[3]float32{20.88048,0.075,23.97605}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.21026,0.075,22.7012},[3]float32{20.07614,0.075,22.04322},[3]float32{21.01783,0.075,22.53659},[3]float32{20.88371,0.075,21.87861}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.07215,0.075,22.02362},[3]float32{19.93803,0.075,21.36564},[3]float32{20.87972,0.075,21.85901},[3]float32{20.7456,0.075,21.20103}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.07538,0.075,19.92619},[3]float32{20.27238,0.075,19.88603},[3]float32{20.46937,0.075,19.84588},[3]float32{20.2115,0.075,20.59397},[3]float32{20.40849,0.075,20.55381},[3]float32{20.60549,0.075,20.51366},[3]float32{20.34762,0.075,21.26174},[3]float32{20.54461,0.075,21.22159},[3]float32{20.7416,0.075,21.18144}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.6618,0.075,20.01049},[3]float32{19.85879,0.075,19.97034},[3]float32{20.05579,0.075,19.93018},[3]float32{19.79792,0.075,20.67827},[3]float32{19.99491,0.075,20.63811},[3]float32{20.1919,0.075,20.59796},[3]float32{19.93403,0.075,21.34605},[3]float32{20.13103,0.075,21.30589},[3]float32{20.32802,0.075,21.26574}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.6578,0.075,19.99089},[3]float32{19.52369,0.075,19.33291},[3]float32{20.46538,0.075,19.82628},[3]float32{20.33126,0.075,19.1683}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.51969,0.075,19.31332},[3]float32{19.38557,0.075,18.65534},[3]float32{19.92348,0.075,19.23101},[3]float32{19.78936,0.075,18.57303},[3]float32{20.32726,0.075,19.14871},[3]float32{20.19314,0.075,18.49073}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.52293,0.075,17.21588},[3]float32{19.91691,0.075,17.13557},[3]float32{19.79516,0.075,18.55144},[3]float32{20.18915,0.075,18.47113}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.10934,0.075,17.30019},[3]float32{19.30634,0.075,17.26003},[3]float32{19.50333,0.075,17.21988},[3]float32{19.24546,0.075,17.96796},[3]float32{19.44245,0.075,17.92781},[3]float32{19.63945,0.075,17.88766},[3]float32{19.38158,0.075,18.63574},[3]float32{19.57857,0.075,18.59559},[3]float32{19.77556,0.075,18.55543}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.10535,0.075,17.28059},[3]float32{18.97123,0.075,16.62261},[3]float32{19.91292,0.075,17.11598},[3]float32{19.7788,0.075,16.458}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.64069,0.075,15.78042},[3]float32{19.77481,0.075,16.4384},[3]float32{19.2369,0.075,15.86273},[3]float32{19.37102,0.075,16.52071},[3]float32{18.83311,0.075,15.94503},[3]float32{18.96724,0.075,16.60301}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.63669,0.075,15.76082},[3]float32{19.2427,0.075,15.84113},[3]float32{19.36446,0.075,14.42527},[3]float32{18.97047,0.075,14.50558}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55689,0.075,14.58988},[3]float32{18.75388,0.075,14.54973},[3]float32{18.95087,0.075,14.50957},[3]float32{18.693,0.075,15.25766},[3]float32{18.89,0.075,15.2175},[3]float32{19.08699,0.075,15.17735},[3]float32{18.82912,0.075,15.92544},[3]float32{19.02611,0.075,15.88528},[3]float32{19.22311,0.075,15.84513}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55289,0.075,14.57028},[3]float32{18.41877,0.075,13.9123},[3]float32{18.95668,0.075,14.48798},[3]float32{18.82256,0.075,13.83},[3]float32{19.36046,0.075,14.40567},[3]float32{19.22635,0.075,13.74769}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.08823,0.075,13.07012},[3]float32{19.22235,0.075,13.7281},[3]float32{18.68444,0.075,13.15242},[3]float32{18.81856,0.075,13.8104},[3]float32{18.28066,0.075,13.23473},[3]float32{18.41478,0.075,13.89271}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.08424,0.075,13.05052},[3]float32{18.69025,0.075,13.13083},[3]float32{18.812,0.075,11.71496},[3]float32{18.41801,0.075,11.79527}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00443,0.075,11.87957},[3]float32{18.20143,0.075,11.83942},[3]float32{18.39842,0.075,11.79927},[3]float32{18.14055,0.075,12.54735},[3]float32{18.33754,0.075,12.5072},[3]float32{18.53453,0.075,12.46704},[3]float32{18.27666,0.075,13.21513},[3]float32{18.47366,0.075,13.17498},[3]float32{18.67065,0.075,13.13482}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00044,0.075,11.85998},[3]float32{17.86632,0.075,11.202},[3]float32{18.80801,0.075,11.69537},[3]float32{18.67389,0.075,11.03739}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86232,0.075,11.1824},[3]float32{17.79526,0.075,10.85341},[3]float32{17.7282,0.075,10.52442},[3]float32{18.66989,0.075,11.01779},[3]float32{18.60283,0.075,10.6888},[3]float32{18.53577,0.075,10.35981}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86556,0.075,9.084966},[3]float32{18.25955,0.075,9.004658},[3]float32{18.13779,0.075,10.42052},[3]float32{18.53178,0.075,10.34021}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.1182,0.075,10.42452},[3]float32{17.9212,0.075,10.46467},[3]float32{17.72421,0.075,10.50482},[3]float32{17.98208,0.075,9.756739},[3]float32{17.78509,0.075,9.796892},[3]float32{17.58809,0.075,9.837047},[3]float32{17.84596,0.075,9.088961},[3]float32{17.64897,0.075,9.129114},[3]float32{17.45197,0.075,9.169269}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.12143,0.075,8.327081},[3]float32{18.25555,0.075,8.985061},[3]float32{17.31386,0.075,8.491693},[3]float32{17.44798,0.075,9.149672}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.30987,0.075,8.472095},[3]float32{17.24281,0.075,8.143106},[3]float32{17.17575,0.075,7.814116},[3]float32{17.71365,0.075,8.38979},[3]float32{17.64659,0.075,8.0608},[3]float32{17.57953,0.075,7.73181},[3]float32{18.11744,0.075,8.307484},[3]float32{18.05038,0.075,7.978494},[3]float32{17.98332,0.075,7.649504}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.3131,0.075,6.37466},[3]float32{17.5101,0.075,6.334506},[3]float32{17.70709,0.075,6.294352},[3]float32{17.44922,0.075,7.042438},[3]float32{17.64621,0.075,7.002284},[3]float32{17.84321,0.075,6.96213},[3]float32{17.58534,0.075,7.710216},[3]float32{17.78233,0.075,7.670062},[3]float32{17.97932,0.075,7.629908}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.89952,0.075,6.458963},[3]float32{17.29351,0.075,6.378654},[3]float32{17.17175,0.075,7.794519},[3]float32{17.56574,0.075,7.714211}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.89552,0.075,6.439366},[3]float32{16.76141,0.075,5.781386},[3]float32{17.29931,0.075,6.35706},[3]float32{17.16519,0.075,5.699081},[3]float32{17.7031,0.075,6.274755},[3]float32{17.56898,0.075,5.616775}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.75741,0.075,5.761789},[3]float32{16.62329,0.075,5.10381},[3]float32{17.1612,0.075,5.679484},[3]float32{17.02708,0.075,5.021504},[3]float32{17.56498,0.075,5.597178},[3]float32{17.43086,0.075,4.939198}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.42687,0.075,4.919601},[3]float32{17.03288,0.075,4.99991},[3]float32{17.29075,0.075,4.251824},[3]float32{16.89676,0.075,4.332132},[3]float32{17.15463,0.075,3.584046},[3]float32{16.76065,0.075,3.664354}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.34706,0.075,3.748657},[3]float32{16.74105,0.075,3.668349},[3]float32{16.6193,0.075,5.084213},[3]float32{17.01328,0.075,5.003905}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.34307,0.075,3.72906},[3]float32{16.20895,0.075,3.071081},[3]float32{16.74685,0.075,3.646755},[3]float32{16.61274,0.075,2.988775},[3]float32{17.15064,0.075,3.564449},[3]float32{17.01652,0.075,2.906469}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.76423,0.075,29.64557},[3]float32{20.63011,0.075,28.98759},[3]float32{21.5718,0.075,29.48096},[3]float32{21.43769,0.075,28.82298}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{21.29957,0.075,28.1454},[3]float32{21.43369,0.075,28.80338},[3]float32{20.492,0.075,28.31001},[3]float32{20.62612,0.075,28.96799}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.62935,0.075,26.87056},[3]float32{21.02334,0.075,26.79025},[3]float32{20.76547,0.075,27.53834},[3]float32{21.15946,0.075,27.45803},[3]float32{20.90159,0.075,28.20612},[3]float32{21.29558,0.075,28.12581}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.21577,0.075,26.95486},[3]float32{20.41277,0.075,26.91471},[3]float32{20.60976,0.075,26.87455},[3]float32{20.35189,0.075,27.62264},[3]float32{20.54888,0.075,27.58249},[3]float32{20.74587,0.075,27.54233},[3]float32{20.488,0.075,28.29042},[3]float32{20.685,0.075,28.25026},[3]float32{20.88199,0.075,28.21011}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.21178,0.075,26.93526},[3]float32{20.07766,0.075,26.27728},[3]float32{21.01935,0.075,26.77065},[3]float32{20.88523,0.075,26.11267}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.07366,0.075,26.25769},[3]float32{19.93954,0.075,25.59971},[3]float32{20.88123,0.075,26.09308},[3]float32{20.74711,0.075,25.4351}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.0769,0.075,24.16025},[3]float32{20.47089,0.075,24.07994},[3]float32{20.21302,0.075,24.82803},[3]float32{20.607,0.075,24.74772},[3]float32{20.34913,0.075,25.49581},[3]float32{20.74312,0.075,25.4155}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.32954,0.075,25.4998},[3]float32{20.13254,0.075,25.53996},[3]float32{19.93555,0.075,25.58011},[3]float32{20.19342,0.075,24.83203},[3]float32{19.99643,0.075,24.87218},[3]float32{19.79943,0.075,24.91233},[3]float32{20.0573,0.075,24.16425},[3]float32{19.86031,0.075,24.2044},[3]float32{19.66331,0.075,24.24456}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.33277,0.075,23.40237},[3]float32{20.46689,0.075,24.06035},[3]float32{19.5252,0.075,23.56698},[3]float32{19.65932,0.075,24.22496}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.52121,0.075,23.54738},[3]float32{19.38709,0.075,22.8894},[3]float32{20.32878,0.075,23.38277},[3]float32{20.19466,0.075,22.72479}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.52444,0.075,21.44995},[3]float32{19.72144,0.075,21.40979},[3]float32{19.91843,0.075,21.36964},[3]float32{19.66056,0.075,22.11773},[3]float32{19.85755,0.075,22.07757},[3]float32{20.05455,0.075,22.03742},[3]float32{19.79668,0.075,22.7855},[3]float32{19.99367,0.075,22.74535},[3]float32{20.19066,0.075,22.70519}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.77708,0.075,22.7895},[3]float32{19.38309,0.075,22.86981},[3]float32{19.50485,0.075,21.45394},[3]float32{19.11086,0.075,21.53425}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.78032,0.075,20.69206},[3]float32{19.91444,0.075,21.35004},[3]float32{18.97275,0.075,20.85667},[3]float32{19.10686,0.075,21.51465}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.96875,0.075,20.83708},[3]float32{18.83463,0.075,20.1791},[3]float32{19.77632,0.075,20.67247},[3]float32{19.6422,0.075,20.01449}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.97199,0.075,18.73964},[3]float32{19.16898,0.075,18.69949},[3]float32{19.36597,0.075,18.65933},[3]float32{19.1081,0.075,19.40742},[3]float32{19.3051,0.075,19.36727},[3]float32{19.50209,0.075,19.32711},[3]float32{19.24422,0.075,20.0752},[3]float32{19.44121,0.075,20.03504},[3]float32{19.63821,0.075,19.99489}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.5584,0.075,18.82394},[3]float32{18.7554,0.075,18.78379},[3]float32{18.95239,0.075,18.74364},[3]float32{18.69452,0.075,19.49172},[3]float32{18.89151,0.075,19.45157},[3]float32{19.08851,0.075,19.41142},[3]float32{18.83064,0.075,20.1595},[3]float32{19.02763,0.075,20.11935},[3]float32{19.22462,0.075,20.07919}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55441,0.075,18.80435},[3]float32{18.42029,0.075,18.14637},[3]float32{19.36198,0.075,18.63974},[3]float32{19.22786,0.075,17.98176}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.41629,0.075,18.12677},[3]float32{18.28218,0.075,17.46879},[3]float32{19.22387,0.075,17.96216},[3]float32{19.08975,0.075,17.30418}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.08575,0.075,17.28458},[3]float32{18.69176,0.075,17.36489},[3]float32{18.81352,0.075,15.94903},[3]float32{18.41953,0.075,16.02934}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00595,0.075,16.11364},[3]float32{18.39993,0.075,16.03333},[3]float32{18.27818,0.075,17.44919},[3]float32{18.67217,0.075,17.36889}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00195,0.075,16.09404},[3]float32{17.86783,0.075,15.43606},[3]float32{18.80952,0.075,15.92943},[3]float32{18.6754,0.075,15.27145}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86384,0.075,15.41647},[3]float32{17.72972,0.075,14.75849},[3]float32{18.67141,0.075,15.25185},[3]float32{18.53729,0.075,14.59387}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.5333,0.075,14.57428},[3]float32{18.13931,0.075,14.65459},[3]float32{18.39718,0.075,13.9065},[3]float32{18.00319,0.075,13.98681},[3]float32{18.26106,0.075,13.23872},[3]float32{17.86707,0.075,13.31903}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.45349,0.075,13.40333},[3]float32{17.84748,0.075,13.32302},[3]float32{17.72573,0.075,14.73889},[3]float32{18.11971,0.075,14.65858}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.4495,0.075,13.38374},[3]float32{17.31538,0.075,12.72576},[3]float32{17.85328,0.075,13.30143},[3]float32{17.71916,0.075,12.64345},[3]float32{18.25707,0.075,13.21912},[3]float32{18.12295,0.075,12.56115}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.98483,0.075,11.88357},[3]float32{18.11895,0.075,12.54155},[3]float32{17.17726,0.075,12.04818},[3]float32{17.31138,0.075,12.70616}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.98084,0.075,11.86397},[3]float32{17.58685,0.075,11.94428},[3]float32{17.70861,0.075,10.52842},[3]float32{17.31462,0.075,10.60872}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.90104,0.075,10.69303},[3]float32{17.09803,0.075,10.65287},[3]float32{17.29502,0.075,10.61272},[3]float32{17.03715,0.075,11.36081},[3]float32{17.23415,0.075,11.32065},[3]float32{17.43114,0.075,11.2805},[3]float32{17.17327,0.075,12.02858},[3]float32{17.37026,0.075,11.98843},[3]float32{17.56726,0.075,11.94827}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.89704,0.075,10.67343},[3]float32{16.76292,0.075,10.01545},[3]float32{17.30083,0.075,10.59112},[3]float32{17.16671,0.075,9.933146},[3]float32{17.70461,0.075,10.50882},[3]float32{17.57049,0.075,9.85084}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.43238,0.075,9.173264},[3]float32{17.5665,0.075,9.831243},[3]float32{16.62481,0.075,9.337874},[3]float32{16.75893,0.075,9.995854}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.76216,0.075,7.898419},[3]float32{17.15615,0.075,7.81811},[3]float32{16.89828,0.075,8.566196},[3]float32{17.29227,0.075,8.485888},[3]float32{17.0344,0.075,9.233974},[3]float32{17.42838,0.075,9.153666}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.34858,0.075,7.982722},[3]float32{16.74257,0.075,7.902413},[3]float32{16.62081,0.075,9.318277},[3]float32{17.0148,0.075,9.237969}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.01804,0.075,7.140534},[3]float32{17.15216,0.075,7.798513},[3]float32{16.21047,0.075,7.305145},[3]float32{16.34459,0.075,7.963125}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.20647,0.075,7.285548},[3]float32{16.07235,0.075,6.627569},[3]float32{17.01404,0.075,7.120937},[3]float32{16.87992,0.075,6.462957}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.20971,0.075,5.188113},[3]float32{16.4067,0.075,5.147959},[3]float32{16.60369,0.075,5.107805},[3]float32{16.34583,0.075,5.855891},[3]float32{16.54282,0.075,5.815737},[3]float32{16.73981,0.075,5.775583},[3]float32{16.48194,0.075,6.523669},[3]float32{16.67893,0.075,6.483515},[3]float32{16.87593,0.075,6.44336}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.79612,0.075,5.272416},[3]float32{15.99312,0.075,5.232262},[3]float32{16.19011,0.075,5.192108},[3]float32{15.93224,0.075,5.940194},[3]float32{16.12923,0.075,5.90004},[3]float32{16.32623,0.075,5.859886},[3]float32{16.06836,0.075,6.607972},[3]float32{16.26535,0.075,6.567818},[3]float32{16.46234,0.075,6.527664}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.79213,0.075,5.252819},[3]float32{15.65801,0.075,4.59484},[3]float32{16.5997,0.075,5.088208},[3]float32{16.46558,0.075,4.430228}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.32747,0.075,3.752652},[3]float32{16.46159,0.075,4.410631},[3]float32{15.5199,0.075,3.917263},[3]float32{15.65402,0.075,4.575243}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.65725,0.075,2.477808},[3]float32{16.05124,0.075,2.397499},[3]float32{15.92949,0.075,3.813363},[3]float32{16.32347,0.075,3.733055}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.24367,0.075,2.56211},[3]float32{15.63765,0.075,2.481802},[3]float32{15.5159,0.075,3.897666},[3]float32{15.90989,0.075,3.817358}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.07841,0.075,28.39432},[3]float32{20.27541,0.075,28.35416},[3]float32{20.4724,0.075,28.31401},[3]float32{20.21453,0.075,29.0621},[3]float32{20.41153,0.075,29.02194},[3]float32{20.60852,0.075,28.98179},[3]float32{20.35065,0.075,29.72987},[3]float32{20.54764,0.075,29.68972},[3]float32{20.74464,0.075,29.64956}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{20.19218,0.075,26.93926},[3]float32{19.79819,0.075,27.01957},[3]float32{19.91995,0.075,25.6037},[3]float32{19.52596,0.075,25.68401}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.10838,0.075,25.74872},[3]float32{18.97426,0.075,25.09074},[3]float32{19.91595,0.075,25.58411},[3]float32{19.78183,0.075,24.92613}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.64372,0.075,24.24855},[3]float32{19.77784,0.075,24.90653},[3]float32{18.83615,0.075,24.41316},[3]float32{18.97027,0.075,25.07114}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.63972,0.075,24.22895},[3]float32{19.24574,0.075,24.30926},[3]float32{19.36749,0.075,22.8934},[3]float32{18.9735,0.075,22.97371}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55992,0.075,23.05801},[3]float32{18.75691,0.075,23.01785},[3]float32{18.95391,0.075,22.9777},[3]float32{18.69604,0.075,23.72579},[3]float32{18.89303,0.075,23.68563},[3]float32{19.09002,0.075,23.64548},[3]float32{18.83215,0.075,24.39357},[3]float32{19.02915,0.075,24.35341},[3]float32{19.22614,0.075,24.31326}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.55593,0.075,23.03841},[3]float32{18.42181,0.075,22.38043},[3]float32{19.3635,0.075,22.8738},[3]float32{19.22938,0.075,22.21582}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{19.09126,0.075,21.53824},[3]float32{19.22538,0.075,22.19622},[3]float32{18.28369,0.075,21.70286},[3]float32{18.41781,0.075,22.36084}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.42105,0.075,20.2634},[3]float32{18.81503,0.075,20.18309},[3]float32{18.69328,0.075,21.59896},[3]float32{19.08727,0.075,21.51865}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00746,0.075,20.3477},[3]float32{18.40145,0.075,20.2674},[3]float32{18.14358,0.075,21.01548},[3]float32{18.53757,0.075,20.93517},[3]float32{18.2797,0.075,21.68326},[3]float32{18.67368,0.075,21.60295}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.00347,0.075,20.32811},[3]float32{17.86935,0.075,19.67013},[3]float32{18.81104,0.075,20.1635},[3]float32{18.67692,0.075,19.50552}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86535,0.075,19.65053},[3]float32{17.73124,0.075,18.99255},[3]float32{18.67293,0.075,19.48592},[3]float32{18.53881,0.075,18.82794}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86859,0.075,17.55309},[3]float32{18.06558,0.075,17.51294},[3]float32{18.26258,0.075,17.47279},[3]float32{18.00471,0.075,18.22087},[3]float32{18.2017,0.075,18.18072},[3]float32{18.39869,0.075,18.14056},[3]float32{18.14083,0.075,18.88865},[3]float32{18.33782,0.075,18.8485},[3]float32{18.53481,0.075,18.80834}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.12123,0.075,18.89264},[3]float32{17.72724,0.075,18.97295},[3]float32{17.849,0.075,17.55709},[3]float32{17.45501,0.075,17.6374}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.12446,0.075,16.79521},[3]float32{18.25858,0.075,17.45319},[3]float32{17.31689,0.075,16.95982},[3]float32{17.45101,0.075,17.6178}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.3129,0.075,16.94022},[3]float32{17.17878,0.075,16.28225},[3]float32{18.12047,0.075,16.77561},[3]float32{17.98635,0.075,16.11763}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.98236,0.075,16.09804},[3]float32{17.58837,0.075,16.17834},[3]float32{17.84624,0.075,15.43026},[3]float32{17.45225,0.075,15.51057},[3]float32{17.71012,0.075,14.76248},[3]float32{17.31614,0.075,14.84279}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.56877,0.075,16.18234},[3]float32{17.37178,0.075,16.22249},[3]float32{17.17479,0.075,16.26265},[3]float32{17.43266,0.075,15.51456},[3]float32{17.23566,0.075,15.55472},[3]float32{17.03867,0.075,15.59487},[3]float32{17.29654,0.075,14.84678},[3]float32{17.09954,0.075,14.88694},[3]float32{16.90255,0.075,14.92709}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.57201,0.075,14.0849},[3]float32{17.70613,0.075,14.74288},[3]float32{16.76444,0.075,14.24952},[3]float32{16.89856,0.075,14.9075}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.76044,0.075,14.22992},[3]float32{16.62632,0.075,13.57194},[3]float32{17.16423,0.075,14.14761},[3]float32{17.03011,0.075,13.48963},[3]float32{17.56801,0.075,14.06531},[3]float32{17.4339,0.075,13.40733}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.76368,0.075,12.13248},[3]float32{17.15767,0.075,12.05217},[3]float32{17.03591,0.075,13.46804},[3]float32{17.4299,0.075,13.38773}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.3501,0.075,12.21679},[3]float32{16.54709,0.075,12.17663},[3]float32{16.74408,0.075,12.13648},[3]float32{16.48621,0.075,12.88456},[3]float32{16.68321,0.075,12.84441},[3]float32{16.8802,0.075,12.80426},[3]float32{16.62233,0.075,13.55234},[3]float32{16.81932,0.075,13.51219},[3]float32{17.01632,0.075,13.47203}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.3461,0.075,12.19719},[3]float32{16.21198,0.075,11.53921},[3]float32{16.74989,0.075,12.11488},[3]float32{16.61577,0.075,11.4569},[3]float32{17.15367,0.075,12.03258},[3]float32{17.01955,0.075,11.3746}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.20799,0.075,11.51961},[3]float32{16.07387,0.075,10.86163},[3]float32{16.61177,0.075,11.43731},[3]float32{16.47765,0.075,10.77933},[3]float32{17.01556,0.075,11.355},[3]float32{16.88144,0.075,10.69702}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.87744,0.075,10.67743},[3]float32{16.48346,0.075,10.75773},[3]float32{16.74133,0.075,10.00965},[3]float32{16.34734,0.075,10.08996},[3]float32{16.60521,0.075,9.341869},[3]float32{16.21122,0.075,9.422177}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.79764,0.075,9.506481},[3]float32{16.19163,0.075,9.426172},[3]float32{15.93376,0.075,10.17426},[3]float32{16.32774,0.075,10.09395},[3]float32{16.06987,0.075,10.84204},[3]float32{16.46386,0.075,10.76173}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.4671,0.075,8.664293},[3]float32{16.60122,0.075,9.322272},[3]float32{16.06331,0.075,8.746598},[3]float32{16.19743,0.075,9.404578},[3]float32{15.65953,0.075,8.828904},[3]float32{15.79364,0.075,9.486884}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.32898,0.075,7.986716},[3]float32{16.4631,0.075,8.644696},[3]float32{15.52141,0.075,8.151328},[3]float32{15.65553,0.075,8.809307}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.65877,0.075,6.711872},[3]float32{16.05276,0.075,6.631564},[3]float32{15.79488,0.075,7.37965},[3]float32{16.18887,0.075,7.299342},[3]float32{15.931,0.075,8.047428},[3]float32{16.32499,0.075,7.967119}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.24518,0.075,6.796175},[3]float32{15.44218,0.075,6.756021},[3]float32{15.63917,0.075,6.715867},[3]float32{15.3813,0.075,7.463953},[3]float32{15.57829,0.075,7.423799},[3]float32{15.77529,0.075,7.383645},[3]float32{15.51742,0.075,8.131731},[3]float32{15.71441,0.075,8.091577},[3]float32{15.9114,0.075,8.051422}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.91464,0.075,5.953987},[3]float32{16.04876,0.075,6.611967},[3]float32{15.10707,0.075,6.118598},[3]float32{15.24119,0.075,6.776578}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.10308,0.075,6.099001},[3]float32{15.03602,0.075,5.770012},[3]float32{14.96896,0.075,5.441022},[3]float32{15.91065,0.075,5.93439},[3]float32{15.84359,0.075,5.605401},[3]float32{15.77653,0.075,5.276411}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.77253,0.075,5.256814},[3]float32{15.37854,0.075,5.337122},[3]float32{15.63642,0.075,4.589036},[3]float32{15.24243,0.075,4.669344},[3]float32{15.5003,0.075,3.921258},[3]float32{15.10631,0.075,4.001566}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.69273,0.075,4.085869},[3]float32{14.88972,0.075,4.045715},[3]float32{15.08671,0.075,4.005561},[3]float32{14.82884,0.075,4.753647},[3]float32{15.02584,0.075,4.713493},[3]float32{15.22283,0.075,4.673339},[3]float32{14.96496,0.075,5.421425},[3]float32{15.16195,0.075,5.381271},[3]float32{15.35895,0.075,5.341117}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.36218,0.075,3.243681},[3]float32{15.4963,0.075,3.901661},[3]float32{14.9584,0.075,3.325987},[3]float32{15.09252,0.075,3.983967},[3]float32{14.55461,0.075,3.408293},[3]float32{14.68873,0.075,4.066272}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55062,0.075,3.388696},[3]float32{14.4165,0.075,2.730716},[3]float32{15.35819,0.075,3.224084},[3]float32{15.22407,0.075,2.566105}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.86687,0.075,23.88459},[3]float32{17.73275,0.075,23.22662},[3]float32{18.27066,0.075,23.80229},[3]float32{18.13654,0.075,23.14431},[3]float32{18.67444,0.075,23.71998},[3]float32{18.54032,0.075,23.062}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.87011,0.075,21.78716},[3]float32{18.0671,0.075,21.74701},[3]float32{18.2641,0.075,21.70685},[3]float32{18.00622,0.075,22.45494},[3]float32{18.20322,0.075,22.41478},[3]float32{18.40021,0.075,22.37463},[3]float32{18.14234,0.075,23.12271},[3]float32{18.33933,0.075,23.08256},[3]float32{18.53633,0.075,23.04241}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{18.12274,0.075,23.12671},[3]float32{17.92575,0.075,23.16686},[3]float32{17.72876,0.075,23.20702},[3]float32{17.98663,0.075,22.45893},[3]float32{17.78963,0.075,22.49909},[3]float32{17.59264,0.075,22.53924},[3]float32{17.85051,0.075,21.79115},[3]float32{17.65352,0.075,21.83131},[3]float32{17.45652,0.075,21.87146}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.45253,0.075,21.85187},[3]float32{17.31841,0.075,21.19389},[3]float32{17.85631,0.075,21.76956},[3]float32{17.72219,0.075,21.11158},[3]float32{18.2601,0.075,21.68725},[3]float32{18.12598,0.075,21.02927}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.98787,0.075,20.3517},[3]float32{18.12199,0.075,21.00968},[3]float32{17.1803,0.075,20.51631},[3]float32{17.31441,0.075,21.17429}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.98387,0.075,20.3321},[3]float32{17.78688,0.075,20.37226},[3]float32{17.58989,0.075,20.41241},[3]float32{17.84776,0.075,19.66432},[3]float32{17.65076,0.075,19.70448},[3]float32{17.45377,0.075,19.74463},[3]float32{17.71164,0.075,18.99655},[3]float32{17.51464,0.075,19.0367},[3]float32{17.31765,0.075,19.07685}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.90407,0.075,19.16116},[3]float32{17.10106,0.075,19.121},[3]float32{17.29805,0.075,19.08085},[3]float32{17.04018,0.075,19.82894},[3]float32{17.23718,0.075,19.78878},[3]float32{17.43417,0.075,19.74863},[3]float32{17.1763,0.075,20.49671},[3]float32{17.37329,0.075,20.45656},[3]float32{17.57029,0.075,20.4164}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.57352,0.075,18.31897},[3]float32{17.70764,0.075,18.97695},[3]float32{17.16974,0.075,18.40127},[3]float32{17.30386,0.075,19.05925},[3]float32{16.76595,0.075,18.48358},[3]float32{16.90007,0.075,19.14156}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.43541,0.075,17.64139},[3]float32{17.56953,0.075,18.29937},[3]float32{17.03163,0.075,17.7237},[3]float32{17.16574,0.075,18.38168},[3]float32{16.62784,0.075,17.806},[3]float32{16.76196,0.075,18.46398}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.7652,0.075,16.36655},[3]float32{16.96219,0.075,16.32639},[3]float32{17.15918,0.075,16.28624},[3]float32{16.90131,0.075,17.03433},[3]float32{17.09831,0.075,16.99417},[3]float32{17.2953,0.075,16.95402},[3]float32{17.03743,0.075,17.7021},[3]float32{17.23442,0.075,17.66195},[3]float32{17.43142,0.075,17.6218}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.35161,0.075,16.45085},[3]float32{16.7456,0.075,16.37054},[3]float32{16.48773,0.075,17.11863},[3]float32{16.88172,0.075,17.03832},[3]float32{16.62385,0.075,17.78641},[3]float32{17.01783,0.075,17.7061}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{17.02107,0.075,15.60866},[3]float32{17.15519,0.075,16.26664},[3]float32{16.2135,0.075,15.77327},[3]float32{16.34762,0.075,16.43125}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.2095,0.075,15.75368},[3]float32{16.07538,0.075,15.0957},[3]float32{16.61329,0.075,15.67137},[3]float32{16.47917,0.075,15.01339},[3]float32{17.01707,0.075,15.58907},[3]float32{16.88296,0.075,14.93109}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.87896,0.075,14.91149},[3]float32{16.48497,0.075,14.9918},[3]float32{16.60673,0.075,13.57593},[3]float32{16.21274,0.075,13.65624}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.46538,0.075,14.99579},[3]float32{16.07139,0.075,15.0761},[3]float32{16.19314,0.075,13.66024},[3]float32{15.79916,0.075,13.74055}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.46861,0.075,12.89836},[3]float32{16.60273,0.075,13.55634},[3]float32{15.66104,0.075,13.06297},[3]float32{15.79516,0.075,13.72095}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.65705,0.075,13.04337},[3]float32{15.52293,0.075,12.38539},[3]float32{16.06083,0.075,12.96107},[3]float32{15.92671,0.075,12.30309},[3]float32{16.46462,0.075,12.87876},[3]float32{16.3305,0.075,12.22078}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.3265,0.075,12.20118},[3]float32{15.93252,0.075,12.28149},[3]float32{16.05427,0.075,10.86563},[3]float32{15.66028,0.075,10.94594}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.91292,0.075,12.28549},[3]float32{15.51893,0.075,12.3658},[3]float32{15.64069,0.075,10.94993},[3]float32{15.2467,0.075,11.03024}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.24271,0.075,11.01064},[3]float32{15.10859,0.075,10.35266},[3]float32{16.05028,0.075,10.84603},[3]float32{15.91616,0.075,10.18805}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.10459,0.075,10.33307},[3]float32{14.97047,0.075,9.675087},[3]float32{15.91216,0.075,10.16846},[3]float32{15.77804,0.075,9.510475}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.77405,0.075,9.490878},[3]float32{15.38006,0.075,9.571187},[3]float32{15.50181,0.075,8.155322},[3]float32{15.10783,0.075,8.235631}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.36046,0.075,9.575181},[3]float32{15.16347,0.075,9.615335},[3]float32{14.96648,0.075,9.65549},[3]float32{15.22435,0.075,8.907403},[3]float32{15.02735,0.075,8.947557},[3]float32{14.83036,0.075,8.987712},[3]float32{15.08823,0.075,8.239626},[3]float32{14.89124,0.075,8.279779},[3]float32{14.69424,0.075,8.319934}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.69025,0.075,8.300337},[3]float32{14.55613,0.075,7.642357},[3]float32{15.49782,0.075,8.135725},[3]float32{15.3637,0.075,7.477746}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55214,0.075,7.62276},[3]float32{14.41802,0.075,6.964781},[3]float32{15.35971,0.075,7.458149},[3]float32{15.22559,0.075,6.800169}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55537,0.075,5.525325},[3]float32{14.94936,0.075,5.445017},[3]float32{14.82761,0.075,6.860881},[3]float32{15.22159,0.075,6.780572}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.14179,0.075,5.609628},[3]float32{14.53578,0.075,5.52932},[3]float32{14.41402,0.075,6.945184},[3]float32{14.80801,0.075,6.864876}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.13779,0.075,5.590031},[3]float32{14.00367,0.075,4.932052},[3]float32{14.94536,0.075,5.42542},[3]float32{14.81124,0.075,4.76744}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.99968,0.075,4.912455},[3]float32{13.86556,0.075,4.254475},[3]float32{14.80725,0.075,4.747843},[3]float32{14.67313,0.075,4.089864}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.00292,0.075,2.815019},[3]float32{14.3969,0.075,2.734711},[3]float32{14.13903,0.075,3.482797},[3]float32{14.53302,0.075,3.402489},[3]float32{14.27515,0.075,4.150575},[3]float32{14.66914,0.075,4.070267}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.58933,0.075,2.899323},[3]float32{13.98332,0.075,2.819014},[3]float32{13.86157,0.075,4.234878},[3]float32{14.25555,0.075,4.15457}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.90159,0.075,23.37562},[3]float32{16.76747,0.075,22.71765},[3]float32{17.70916,0.075,23.21101},[3]float32{17.57504,0.075,22.55303}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.76348,0.075,22.69805},[3]float32{16.69641,0.075,22.36906},[3]float32{16.62936,0.075,22.04007},[3]float32{17.16726,0.075,22.61574},[3]float32{17.1002,0.075,22.28675},[3]float32{17.03314,0.075,21.95776},[3]float32{17.57105,0.075,22.53344},[3]float32{17.50399,0.075,22.20445},[3]float32{17.43693,0.075,21.87546}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.76671,0.075,20.60061},[3]float32{16.96371,0.075,20.56046},[3]float32{17.1607,0.075,20.5203},[3]float32{16.90283,0.075,21.26839},[3]float32{17.09982,0.075,21.22824},[3]float32{17.29682,0.075,21.18808},[3]float32{17.03895,0.075,21.93617},[3]float32{17.23594,0.075,21.89602},[3]float32{17.43293,0.075,21.85586}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.35313,0.075,20.68492},[3]float32{16.74711,0.075,20.60461},[3]float32{16.48924,0.075,21.35269},[3]float32{16.88323,0.075,21.27238},[3]float32{16.62536,0.075,22.02047},[3]float32{17.01935,0.075,21.94016}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.34913,0.075,20.66532},[3]float32{16.21501,0.075,20.00734},[3]float32{17.1567,0.075,20.50071},[3]float32{17.02258,0.075,19.84273}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.21102,0.075,19.98774},[3]float32{16.0769,0.075,19.32976},[3]float32{17.01859,0.075,19.82313},[3]float32{16.88447,0.075,19.16515}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.21426,0.075,17.89031},[3]float32{16.60824,0.075,17.81},[3]float32{16.48649,0.075,19.22586},[3]float32{16.88048,0.075,19.14555}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.80067,0.075,17.97461},[3]float32{16.19466,0.075,17.8943},[3]float32{16.0729,0.075,19.31017},[3]float32{16.46689,0.075,19.22986}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.79668,0.075,17.95501},[3]float32{15.66256,0.075,17.29703},[3]float32{16.60425,0.075,17.7904},[3]float32{16.47013,0.075,17.13242}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.33201,0.075,16.45485},[3]float32{16.46614,0.075,17.11283},[3]float32{15.52444,0.075,16.61946},[3]float32{15.65856,0.075,17.27744}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.32802,0.075,16.43525},[3]float32{16.13103,0.075,16.4754},[3]float32{15.93403,0.075,16.51556},[3]float32{16.1919,0.075,15.76747},[3]float32{15.99491,0.075,15.80762},[3]float32{15.79792,0.075,15.84778},[3]float32{16.05579,0.075,15.09969},[3]float32{15.85879,0.075,15.13985},[3]float32{15.6618,0.075,15.18}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.91444,0.075,16.51955},[3]float32{15.52045,0.075,16.59986},[3]float32{15.6422,0.075,15.184},[3]float32{15.24822,0.075,15.2643}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.91767,0.075,14.42212},[3]float32{16.05179,0.075,15.0801},[3]float32{15.1101,0.075,14.58673},[3]float32{15.24422,0.075,15.24471}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.77956,0.075,13.74454},[3]float32{15.91368,0.075,14.40252},[3]float32{14.97199,0.075,13.90915},[3]float32{15.10611,0.075,14.56713}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.77556,0.075,13.72494},[3]float32{15.38158,0.075,13.80525},[3]float32{15.63945,0.075,13.05717},[3]float32{15.24546,0.075,13.13747},[3]float32{15.50333,0.075,12.38939},[3]float32{15.10934,0.075,12.4697}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.69576,0.075,12.554},[3]float32{15.08975,0.075,12.47369},[3]float32{14.96799,0.075,13.88955},[3]float32{15.36198,0.075,13.80925}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.36522,0.075,11.71181},[3]float32{15.43228,0.075,12.0408},[3]float32{15.49934,0.075,12.36979},[3]float32{14.55765,0.075,11.87642},[3]float32{14.62471,0.075,12.20541},[3]float32{14.69177,0.075,12.5344}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55365,0.075,11.85682},[3]float32{14.41953,0.075,11.19885},[3]float32{14.95744,0.075,11.77452},[3]float32{14.82332,0.075,11.11654},[3]float32{15.36122,0.075,11.69221},[3]float32{15.2271,0.075,11.03423}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.22311,0.075,11.01464},[3]float32{14.82912,0.075,11.09495},[3]float32{14.95088,0.075,9.679081},[3]float32{14.55689,0.075,9.75939}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.1433,0.075,9.843693},[3]float32{14.53729,0.075,9.763384},[3]float32{14.41554,0.075,11.17925},[3]float32{14.80952,0.075,11.09894}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.13931,0.075,9.824096},[3]float32{14.07225,0.075,9.495106},[3]float32{14.00519,0.075,9.166117},[3]float32{14.94688,0.075,9.659484},[3]float32{14.87982,0.075,9.330495},[3]float32{14.81276,0.075,9.001505}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.67465,0.075,8.323929},[3]float32{14.74171,0.075,8.652918},[3]float32{14.80877,0.075,8.981908},[3]float32{14.27086,0.075,8.406234},[3]float32{14.33792,0.075,8.735224},[3]float32{14.40498,0.075,9.064214},[3]float32{13.86708,0.075,8.48854},[3]float32{13.93414,0.075,8.81753},[3]float32{14.00119,0.075,9.14652}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.67065,0.075,8.304332},[3]float32{14.27667,0.075,8.38464},[3]float32{14.39842,0.075,6.968776},[3]float32{14.00443,0.075,7.049084}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.59085,0.075,7.133387},[3]float32{13.98483,0.075,7.053079},[3]float32{13.72696,0.075,7.801165},[3]float32{14.12095,0.075,7.720857},[3]float32{13.86308,0.075,8.468943},[3]float32{14.25707,0.075,8.388635}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.2603,0.075,6.291199},[3]float32{14.39442,0.075,6.949179},[3]float32{13.85652,0.075,6.373505},[3]float32{13.99064,0.075,7.031484},[3]float32{13.45273,0.075,6.455811},[3]float32{13.58685,0.075,7.11379}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.44874,0.075,6.436213},[3]float32{13.31462,0.075,5.778234},[3]float32{13.85252,0.075,6.353908},[3]float32{13.71841,0.075,5.695929},[3]float32{14.25631,0.075,6.271602},[3]float32{14.12219,0.075,5.613623}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.1182,0.075,5.594026},[3]float32{13.72421,0.075,5.674334},[3]float32{13.98208,0.075,4.926248},[3]float32{13.58809,0.075,5.006556},[3]float32{13.84596,0.075,4.25847},[3]float32{13.45198,0.075,4.338778}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.03839,0.075,4.423081},[3]float32{13.43238,0.075,4.342773},[3]float32{13.17451,0.075,5.090859},[3]float32{13.5685,0.075,5.010551},[3]float32{13.31063,0.075,5.758637},[3]float32{13.70461,0.075,5.678329}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.0344,0.075,4.403484},[3]float32{12.90028,0.075,3.745505},[3]float32{13.84197,0.075,4.238873},[3]float32{13.70785,0.075,3.580894}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.56973,0.075,2.903317},[3]float32{13.70385,0.075,3.561296},[3]float32{12.76216,0.075,3.067929},[3]float32{12.89628,0.075,3.725908}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{16.47165,0.075,21.36649},[3]float32{16.60576,0.075,22.02447},[3]float32{15.66407,0.075,21.5311},[3]float32{15.79819,0.075,22.18908}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.66008,0.075,21.5115},[3]float32{15.52596,0.075,20.85352},[3]float32{16.46765,0.075,21.34689},[3]float32{16.33353,0.075,20.68891}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.66332,0.075,19.41407},[3]float32{15.86031,0.075,19.37391},[3]float32{16.0573,0.075,19.33376},[3]float32{15.79943,0.075,20.08184},[3]float32{15.99643,0.075,20.04169},[3]float32{16.19342,0.075,20.00154},[3]float32{15.93555,0.075,20.74962},[3]float32{16.13254,0.075,20.70947},[3]float32{16.32954,0.075,20.66931}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.24973,0.075,19.49837},[3]float32{15.64372,0.075,19.41806},[3]float32{15.38585,0.075,20.16615},[3]float32{15.77984,0.075,20.08584},[3]float32{15.52197,0.075,20.83393},[3]float32{15.91595,0.075,20.75362}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.91919,0.075,18.65618},[3]float32{16.05331,0.075,19.31416},[3]float32{15.11162,0.075,18.82079},[3]float32{15.24574,0.075,19.47877}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.10762,0.075,18.8012},[3]float32{14.9735,0.075,18.14322},[3]float32{15.91519,0.075,18.63658},[3]float32{15.78107,0.075,17.97861}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.11086,0.075,16.70376},[3]float32{15.50485,0.075,16.62345},[3]float32{15.38309,0.075,18.03932},[3]float32{15.77708,0.075,17.95901}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.69728,0.075,16.78806},[3]float32{15.09126,0.075,16.70775},[3]float32{14.96951,0.075,18.12362},[3]float32{15.3635,0.075,18.04331}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.36673,0.075,15.94588},[3]float32{15.43379,0.075,16.27486},[3]float32{15.50085,0.075,16.60386},[3]float32{14.96295,0.075,16.02818},[3]float32{15.03001,0.075,16.35717},[3]float32{15.09707,0.075,16.68616},[3]float32{14.55916,0.075,16.11049},[3]float32{14.62622,0.075,16.43948},[3]float32{14.69328,0.075,16.76847}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55517,0.075,16.09089},[3]float32{14.42105,0.075,15.43291},[3]float32{15.36274,0.075,15.92628},[3]float32{15.22862,0.075,15.2683}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.5584,0.075,13.99345},[3]float32{14.95239,0.075,13.91315},[3]float32{14.83064,0.075,15.32901},[3]float32{15.22462,0.075,15.2487}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.14482,0.075,14.07776},[3]float32{14.53881,0.075,13.99745},[3]float32{14.41705,0.075,15.41331},[3]float32{14.81104,0.075,15.333}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.14083,0.075,14.05816},[3]float32{14.07377,0.075,13.72917},[3]float32{14.00671,0.075,13.40018},[3]float32{14.54461,0.075,13.97585},[3]float32{14.47755,0.075,13.64686},[3]float32{14.41049,0.075,13.31787},[3]float32{14.9484,0.075,13.89355},[3]float32{14.88134,0.075,13.56456},[3]float32{14.81428,0.075,13.23557}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.67616,0.075,12.55799},[3]float32{14.81028,0.075,13.21597},[3]float32{13.86859,0.075,12.7226},[3]float32{14.00271,0.075,13.38058}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.00595,0.075,11.28315},[3]float32{14.20294,0.075,11.24299},[3]float32{14.39993,0.075,11.20284},[3]float32{14.14207,0.075,11.95093},[3]float32{14.33906,0.075,11.91077},[3]float32{14.53605,0.075,11.87062},[3]float32{14.27818,0.075,12.6187},[3]float32{14.47517,0.075,12.57855},[3]float32{14.67217,0.075,12.5384}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.59236,0.075,11.36745},[3]float32{13.98635,0.075,11.28714},[3]float32{13.8646,0.075,12.70301},[3]float32{14.25858,0.075,12.6227}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.58837,0.075,11.34785},[3]float32{13.45425,0.075,10.68988},[3]float32{13.99216,0.075,11.26555},[3]float32{13.85804,0.075,10.60757},[3]float32{14.39594,0.075,11.18324},[3]float32{14.26182,0.075,10.52526}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.45026,0.075,10.67028},[3]float32{13.3832,0.075,10.34129},[3]float32{13.31614,0.075,10.0123},[3]float32{14.25783,0.075,10.50567},[3]float32{14.19077,0.075,10.17668},[3]float32{14.12371,0.075,9.847688}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.11971,0.075,9.828091},[3]float32{13.72573,0.075,9.908399},[3]float32{13.9836,0.075,9.160313},[3]float32{13.58961,0.075,9.240621},[3]float32{13.84748,0.075,8.492535},[3]float32{13.45349,0.075,8.572843}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.03991,0.075,8.657146},[3]float32{13.2369,0.075,8.616992},[3]float32{13.4339,0.075,8.576838},[3]float32{13.17602,0.075,9.324924},[3]float32{13.37302,0.075,9.28477},[3]float32{13.57001,0.075,9.244616},[3]float32{13.31214,0.075,9.992702},[3]float32{13.50914,0.075,9.952547},[3]float32{13.70613,0.075,9.912394}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.70936,0.075,7.814958},[3]float32{13.84348,0.075,8.472938},[3]float32{12.90179,0.075,7.979569},[3]float32{13.03591,0.075,8.637548}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.57125,0.075,7.137382},[3]float32{13.70537,0.075,7.795361},[3]float32{12.76368,0.075,7.301993},[3]float32{12.8978,0.075,7.959972}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.90104,0.075,5.862537},[3]float32{13.29502,0.075,5.782229},[3]float32{13.17327,0.075,7.198093},[3]float32{13.56726,0.075,7.117785}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.48745,0.075,5.94684},[3]float32{12.88144,0.075,5.866532},[3]float32{12.75969,0.075,7.282396},[3]float32{13.15367,0.075,7.202087}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.48346,0.075,5.927243},[3]float32{12.34934,0.075,5.269264},[3]float32{13.29103,0.075,5.762632},[3]float32{13.15691,0.075,5.104652}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.34534,0.075,5.249667},[3]float32{12.21122,0.075,4.591687},[3]float32{13.15291,0.075,5.085055},[3]float32{13.0188,0.075,4.427076}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.34858,0.075,3.152231},[3]float32{12.74257,0.075,3.071923},[3]float32{12.62081,0.075,4.487787},[3]float32{13.0148,0.075,4.407479}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.935,0.075,3.236535},[3]float32{12.32898,0.075,3.156226},[3]float32{12.07111,0.075,3.904312},[3]float32{12.4651,0.075,3.824004},[3]float32{12.20723,0.075,4.57209},[3]float32{12.60122,0.075,4.491782}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.931,0.075,3.216938},[3]float32{11.79688,0.075,2.558958},[3]float32{12.73857,0.075,3.052326},[3]float32{12.60445,0.075,2.394347}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{15.36825,0.075,20.17994},[3]float32{15.50237,0.075,20.83792},[3]float32{14.56068,0.075,20.34455},[3]float32{14.6948,0.075,21.00253}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55668,0.075,20.32495},[3]float32{14.48962,0.075,19.99596},[3]float32{14.42256,0.075,19.66698},[3]float32{15.36425,0.075,20.16034},[3]float32{15.29719,0.075,19.83135},[3]float32{15.23013,0.075,19.50236}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.55992,0.075,18.22752},[3]float32{14.95391,0.075,18.14721},[3]float32{14.83215,0.075,19.56307},[3]float32{15.22614,0.075,19.48277}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.14634,0.075,18.31182},[3]float32{14.54032,0.075,18.23151},[3]float32{14.28245,0.075,18.9796},[3]float32{14.67644,0.075,18.89929},[3]float32{14.41857,0.075,19.64738},[3]float32{14.81256,0.075,19.56707}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.14234,0.075,18.29222},[3]float32{14.00822,0.075,17.63424},[3]float32{14.94991,0.075,18.12761},[3]float32{14.81579,0.075,17.46964}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.00423,0.075,17.61465},[3]float32{13.93717,0.075,17.28566},[3]float32{13.87011,0.075,16.95667},[3]float32{14.8118,0.075,17.45004},[3]float32{14.74474,0.075,17.12105},[3]float32{14.67768,0.075,16.79206}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.67368,0.075,16.77246},[3]float32{14.2797,0.075,16.85277},[3]float32{14.53757,0.075,16.10468},[3]float32{14.14358,0.075,16.18499},[3]float32{14.40145,0.075,15.4369},[3]float32{14.00746,0.075,15.51721}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{14.2601,0.075,16.85676},[3]float32{13.86611,0.075,16.93707},[3]float32{14.12398,0.075,16.18899},[3]float32{13.73,0.075,16.26929},[3]float32{13.98787,0.075,15.52121},[3]float32{13.59388,0.075,15.60152}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.58989,0.075,15.58192},[3]float32{13.45577,0.075,14.92394},[3]float32{14.39746,0.075,15.41731},[3]float32{14.26334,0.075,14.75933}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.3501,0.075,7.386296},[3]float32{12.54709,0.075,7.346142},[3]float32{12.74408,0.075,7.305988},[3]float32{12.48621,0.075,8.054074},[3]float32{12.68321,0.075,8.01392},[3]float32{12.8802,0.075,7.973765},[3]float32{12.62233,0.075,8.721852},[3]float32{12.81932,0.075,8.681698},[3]float32{13.01632,0.075,8.641543}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.93651,0.075,7.470599},[3]float32{12.3305,0.075,7.390291},[3]float32{12.20875,0.075,8.806155},[3]float32{12.60273,0.075,8.725846}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.60597,0.075,6.628411},[3]float32{12.74009,0.075,7.286391},[3]float32{12.20218,0.075,6.710717},[3]float32{12.3363,0.075,7.368696},[3]float32{11.7984,0.075,6.793023},[3]float32{11.93252,0.075,7.451002}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{12.46786,0.075,5.950835},[3]float32{12.60197,0.075,6.608814},[3]float32{11.66028,0.075,6.115446},[3]float32{11.7944,0.075,6.773426}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.79764,0.075,4.675991},[3]float32{11.99463,0.075,4.635836},[3]float32{12.19163,0.075,4.595682},[3]float32{11.93376,0.075,5.343768},[3]float32{12.13075,0.075,5.303614},[3]float32{12.32774,0.075,5.26346},[3]float32{12.06987,0.075,6.011546},[3]float32{12.26687,0.075,5.971392},[3]float32{12.46386,0.075,5.931238}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.38406,0.075,4.760293},[3]float32{11.58105,0.075,4.720139},[3]float32{11.77804,0.075,4.679985},[3]float32{11.52017,0.075,5.428071},[3]float32{11.71717,0.075,5.387917},[3]float32{11.91416,0.075,5.347763},[3]float32{11.65629,0.075,6.095849},[3]float32{11.85328,0.075,6.055695},[3]float32{12.05028,0.075,6.015541}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.38006,0.075,4.740696},[3]float32{11.24594,0.075,4.082717},[3]float32{12.18763,0.075,4.576085},[3]float32{12.05351,0.075,3.918105}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.9154,0.075,3.240529},[3]float32{12.04952,0.075,3.898509},[3]float32{11.10783,0.075,3.40514},[3]float32{11.24195,0.075,4.06312}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.24518,0.075,1.965685},[3]float32{11.63917,0.075,1.885376},[3]float32{11.51742,0.075,3.30124},[3]float32{11.9114,0.075,3.220932}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.8316,0.075,2.049988},[3]float32{11.02859,0.075,2.009833},[3]float32{11.22559,0.075,1.969679},[3]float32{10.96772,0.075,2.717766},[3]float32{11.16471,0.075,2.677611},[3]float32{11.3617,0.075,2.637457},[3]float32{11.10383,0.075,3.385544},[3]float32{11.30083,0.075,3.345389},[3]float32{11.49782,0.075,3.305235}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{13.45652,0.075,17.04097},[3]float32{13.85051,0.075,16.96066},[3]float32{13.59264,0.075,17.70875},[3]float32{13.98663,0.075,17.62844},[3]float32{13.72876,0.075,18.37653},[3]float32{14.12274,0.075,18.29622}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{11.2467,0.075,6.199749},[3]float32{11.44369,0.075,6.159595},[3]float32{11.64069,0.075,6.119441},[3]float32{11.38282,0.075,6.867527},[3]float32{11.57981,0.075,6.827373},[3]float32{11.7768,0.075,6.787219},[3]float32{11.51893,0.075,7.535305},[3]float32{11.71593,0.075,7.495151},[3]float32{11.91292,0.075,7.454997}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.83312,0.075,6.284052},[3]float32{11.03011,0.075,6.243898},[3]float32{11.2271,0.075,6.203744},[3]float32{10.96923,0.075,6.95183},[3]float32{11.16623,0.075,6.911676},[3]float32{11.36322,0.075,6.871522},[3]float32{11.10535,0.075,7.619608},[3]float32{11.30234,0.075,7.579454},[3]float32{11.49934,0.075,7.539299}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.82912,0.075,6.264455},[3]float32{10.695,0.075,5.606476},[3]float32{11.63669,0.075,6.099844},[3]float32{11.50257,0.075,5.441864}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.69101,0.075,5.586879},[3]float32{10.55689,0.075,4.928899},[3]float32{11.49858,0.075,5.422267},[3]float32{11.36446,0.075,4.764288}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.69424,0.075,3.489444},[3]float32{11.08823,0.075,3.409135},[3]float32{10.96648,0.075,4.824999},[3]float32{11.36047,0.075,4.744691}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.28066,0.075,3.573746},[3]float32{10.47765,0.075,3.533592},[3]float32{10.67465,0.075,3.493438},[3]float32{10.41678,0.075,4.241524},[3]float32{10.61377,0.075,4.20137},[3]float32{10.81076,0.075,4.161216},[3]float32{10.55289,0.075,4.909302},[3]float32{10.74989,0.075,4.869148},[3]float32{10.94688,0.075,4.828994}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.27667,0.075,3.554149},[3]float32{10.14255,0.075,2.89617},[3]float32{11.08424,0.075,3.389538},[3]float32{10.95012,0.075,2.731559}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.13855,0.075,2.876573},[3]float32{10.00443,0.075,2.218594},[3]float32{10.94612,0.075,2.711962},[3]float32{10.812,0.075,2.053982}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.14007,0.075,7.110638},[3]float32{10.00595,0.075,6.452658},[3]float32{10.94764,0.075,6.946026},[3]float32{10.81352,0.075,6.288047}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.1433,0.075,5.013202},[3]float32{10.53729,0.075,4.932894},[3]float32{10.27942,0.075,5.68098},[3]float32{10.67341,0.075,5.600672},[3]float32{10.41554,0.075,6.348758},[3]float32{10.80952,0.075,6.26845}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.72972,0.075,5.097506},[3]float32{10.12371,0.075,5.017197},[3]float32{9.865837,0.075,5.765283},[3]float32{10.25982,0.075,5.684975},[3]float32{10.00195,0.075,6.433061},[3]float32{10.39594,0.075,6.352753}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{10.39918,0.075,4.255318},[3]float32{10.5333,0.075,4.913297},[3]float32{9.591606,0.075,4.419929},[3]float32{9.725726,0.075,5.077909}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.587612,0.075,4.400332},[3]float32{9.453492,0.075,3.742352},[3]float32{10.39518,0.075,4.235721},[3]float32{10.26106,0.075,3.577741}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.590848,0.075,2.302897},[3]float32{9.984836,0.075,2.222588},[3]float32{9.863082,0.075,3.638453},[3]float32{10.25707,0.075,3.558144}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.177264,0.075,2.3872},[3]float32{9.571251,0.075,2.306891},[3]float32{9.449498,0.075,3.722755},[3]float32{9.843485,0.075,3.642447}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.17327,0.075,2.367603},[3]float32{9.03915,0.075,1.709623},[3]float32{9.577055,0.075,2.285297},[3]float32{9.442936,0.075,1.627318},[3]float32{9.980841,0.075,2.202991},[3]float32{9.846722,0.075,1.545012}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.174786,0.075,6.601667},[3]float32{9.040667,0.075,5.943688},[3]float32{9.982357,0.075,6.437056},[3]float32{9.848237,0.075,5.779077}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.036672,0.075,5.924091},[3]float32{8.902553,0.075,5.266111},[3]float32{9.844243,0.075,5.75948},[3]float32{9.710123,0.075,5.1015}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.039908,0.075,3.826656},[3]float32{9.236902,0.075,3.786501},[3]float32{9.433895,0.075,3.746347},[3]float32{9.176025,0.075,4.494433},[3]float32{9.373018,0.075,4.454279},[3]float32{9.570012,0.075,4.414125},[3]float32{9.312142,0.075,5.162211},[3]float32{9.509135,0.075,5.122057},[3]float32{9.706129,0.075,5.081903}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{9.292545,0.075,5.166206},[3]float32{8.898558,0.075,5.246514},[3]float32{9.156428,0.075,4.498428},[3]float32{8.762442,0.075,4.578736},[3]float32{9.020311,0.075,3.83065},[3]float32{8.626325,0.075,3.910959}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.62233,0.075,3.891361},[3]float32{8.488211,0.075,3.233382},[3]float32{9.429901,0.075,3.72675},[3]float32{9.295781,0.075,3.068771}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.484216,0.075,3.213785},[3]float32{8.350097,0.075,2.555806},[3]float32{9.291787,0.075,3.049174},[3]float32{9.157667,0.075,2.391194}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.487453,0.075,1.11635},[3]float32{8.684446,0.075,1.076196},[3]float32{8.881439,0.075,1.036041},[3]float32{8.623569,0.075,1.784128},[3]float32{8.820562,0.075,1.743973},[3]float32{9.017556,0.075,1.703819},[3]float32{8.759686,0.075,2.451906},[3]float32{8.956679,0.075,2.411752},[3]float32{9.153673,0.075,2.371597}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.073869,0.075,1.200653},[3]float32{8.270862,0.075,1.160499},[3]float32{8.467855,0.075,1.120344},[3]float32{8.209986,0.075,1.868431},[3]float32{8.406979,0.075,1.828277},[3]float32{8.603972,0.075,1.788122},[3]float32{8.346102,0.075,2.536209},[3]float32{8.543096,0.075,2.496054},[3]float32{8.740088,0.075,2.4559}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.743325,0.075,0.3584649},[3]float32{8.810385,0.075,0.6874546},[3]float32{8.877445,0.075,1.016444},[3]float32{7.935755,0.075,0.5230764},[3]float32{8.002814,0.075,0.8520661},[3]float32{8.069874,0.075,1.181056}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.488969,0.075,5.350414},[3]float32{8.882956,0.075,5.270106},[3]float32{8.761202,0.075,6.68597},[3]float32{9.155189,0.075,6.605662}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.741605,0.075,6.689965},[3]float32{8.544612,0.075,6.730119},[3]float32{8.347618,0.075,6.770273},[3]float32{8.605488,0.075,6.022187},[3]float32{8.408495,0.075,6.062341},[3]float32{8.211501,0.075,6.102495},[3]float32{8.469372,0.075,5.354409},[3]float32{8.272378,0.075,5.394563},[3]float32{8.075385,0.075,5.434718}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.07139,0.075,5.415121},[3]float32{7.937271,0.075,4.757141},[3]float32{8.878961,0.075,5.250509},[3]float32{8.744842,0.075,4.59253}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.933276,0.075,4.737544},[3]float32{7.799157,0.075,4.079565},[3]float32{8.337062,0.075,4.655238},[3]float32{8.202942,0.075,3.997259},[3]float32{8.740847,0.075,4.572933},[3]float32{8.606728,0.075,3.914953}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.936512,0.075,2.640109},[3]float32{8.3305,0.075,2.5598},[3]float32{8.208746,0.075,3.975665},[3]float32{8.602733,0.075,3.895356}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{8.189149,0.075,3.979659},[3]float32{7.992156,0.075,4.019814},[3]float32{7.795162,0.075,4.059968},[3]float32{8.053032,0.075,3.311881},[3]float32{7.856039,0.075,3.352035},[3]float32{7.659045,0.075,3.39219},[3]float32{7.916915,0.075,2.644103},[3]float32{7.719922,0.075,2.684258},[3]float32{7.522929,0.075,2.724412}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.518934,0.075,2.704815},[3]float32{7.384815,0.075,2.046835},[3]float32{8.326505,0.075,2.540203},[3]float32{8.192386,0.075,1.882224}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.38082,0.075,2.027238},[3]float32{7.246701,0.075,1.369259},[3]float32{8.188391,0.075,1.862627},[3]float32{8.054272,0.075,1.204647}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.384057,0.075,-0.07019704},[3]float32{7.58105,0.075,-0.1103513},[3]float32{7.778044,0.075,-0.1505055},[3]float32{7.520174,0.075,0.5975809},[3]float32{7.717167,0.075,0.5574267},[3]float32{7.91416,0.075,0.5172724},[3]float32{7.65629,0.075,1.265359},[3]float32{7.853283,0.075,1.225205},[3]float32{8.050277,0.075,1.18505}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.970473,0.075,0.01410597},[3]float32{7.36446,0.075,-0.06620247},[3]float32{7.242706,0.075,1.349662},[3]float32{7.636693,0.075,1.269353}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.382336,0.075,6.261303},[3]float32{7.315277,0.075,5.932313},[3]float32{7.248217,0.075,5.603323},[3]float32{7.786121,0.075,6.178997},[3]float32{7.719062,0.075,5.850008},[3]float32{7.652002,0.075,5.521018},[3]float32{8.189907,0.075,6.096692},[3]float32{8.122848,0.075,5.767702},[3]float32{8.055788,0.075,5.438712}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.385573,0.075,4.163867},[3]float32{7.77956,0.075,4.083559},[3]float32{7.657806,0.075,5.499424},[3]float32{8.051793,0.075,5.419115}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.971989,0.075,4.24817},[3]float32{7.365976,0.075,4.167862},[3]float32{7.244222,0.075,5.583726},[3]float32{7.638209,0.075,5.503418}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.967994,0.075,4.228573},[3]float32{6.833875,0.075,3.570594},[3]float32{7.775565,0.075,4.063962},[3]float32{7.641446,0.075,3.405983}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.82988,0.075,3.550997},[3]float32{6.695761,0.075,2.893018},[3]float32{7.637451,0.075,3.386386},[3]float32{7.503332,0.075,2.728406}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.499337,0.075,2.708809},[3]float32{7.302343,0.075,2.748963},[3]float32{7.10535,0.075,2.789118},[3]float32{7.36322,0.075,2.041031},[3]float32{7.166227,0.075,2.081186},[3]float32{6.969234,0.075,2.12134},[3]float32{7.227104,0.075,1.373253},[3]float32{7.03011,0.075,1.413408},[3]float32{6.833117,0.075,1.453562}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.419533,0.075,1.537865},[3]float32{6.813519,0.075,1.457556},[3]float32{6.691766,0.075,2.873421},[3]float32{7.085753,0.075,2.793112}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{7.08899,0.075,0.695677},[3]float32{7.223109,0.075,1.353656},[3]float32{6.281419,0.075,0.8602884},[3]float32{6.415538,0.075,1.518268}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.277424,0.075,0.8406914},[3]float32{6.143305,0.075,0.182712},[3]float32{7.084995,0.075,0.6760799},[3]float32{6.950876,0.075,0.01810054}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.417054,0.075,5.752332},[3]float32{6.282935,0.075,5.094353},[3]float32{7.224625,0.075,5.587721},[3]float32{7.090506,0.075,4.929741}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.27894,0.075,5.074756},[3]float32{6.144821,0.075,4.416777},[3]float32{6.682726,0.075,4.99245},[3]float32{6.548606,0.075,4.334471},[3]float32{7.086511,0.075,4.910144},[3]float32{6.952392,0.075,4.252165}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.282177,0.075,2.977321},[3]float32{6.676164,0.075,2.897012},[3]float32{6.55441,0.075,4.312877},[3]float32{6.948397,0.075,4.232568}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.868593,0.075,3.061624},[3]float32{6.26258,0.075,2.981315},[3]float32{6.140826,0.075,4.39718},[3]float32{6.534813,0.075,4.316871}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.53805,0.075,2.219436},[3]float32{6.672169,0.075,2.877415},[3]float32{5.730479,0.075,2.384047},[3]float32{5.864598,0.075,3.042027}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.726484,0.075,2.36445},[3]float32{5.592365,0.075,1.706471},[3]float32{6.534055,0.075,2.199839},[3]float32{6.399936,0.075,1.541859}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{6.395941,0.075,1.522262},[3]float32{6.001954,0.075,1.602571},[3]float32{6.123708,0.075,0.1867066},[3]float32{5.729721,0.075,0.267015}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.316137,0.075,0.351318},[3]float32{5.710124,0.075,0.2710096},[3]float32{5.58837,0.075,1.686874},[3]float32{5.982357,0.075,1.606565}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.731237,0.075,4.50108},[3]float32{6.125224,0.075,4.420771},[3]float32{6.00347,0.075,5.836636},[3]float32{6.397457,0.075,5.756327}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.983873,0.075,5.84063},[3]float32{5.589886,0.075,5.920938},[3]float32{5.71164,0.075,4.505074},[3]float32{5.317653,0.075,4.585382}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.313658,0.075,4.565785},[3]float32{5.179539,0.075,3.907806},[3]float32{6.121229,0.075,4.401174},[3]float32{5.98711,0.075,3.743195}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.175544,0.075,3.888209},[3]float32{5.041425,0.075,3.23023},[3]float32{5.983115,0.075,3.723598},[3]float32{5.848996,0.075,3.065618}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.178781,0.075,1.790774},[3]float32{5.375774,0.075,1.75062},[3]float32{5.572768,0.075,1.710465},[3]float32{5.314898,0.075,2.458552},[3]float32{5.511891,0.075,2.418398},[3]float32{5.708885,0.075,2.378243},[3]float32{5.451015,0.075,3.12633},[3]float32{5.648008,0.075,3.086175},[3]float32{5.845001,0.075,3.046021}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.765197,0.075,1.875077},[3]float32{5.159184,0.075,1.794768},[3]float32{5.03743,0.075,3.210633},[3]float32{5.431417,0.075,3.130324}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{5.434654,0.075,1.032889},[3]float32{5.568773,0.075,1.690868},[3]float32{4.627083,0.075,1.1975},[3]float32{4.761202,0.075,1.85548}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.623088,0.075,1.177903},[3]float32{4.488969,0.075,0.519924},[3]float32{5.430659,0.075,1.013292},[3]float32{5.29654,0.075,0.3553126}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.762719,0.075,6.089544},[3]float32{4.628599,0.075,5.431565},[3]float32{5.570289,0.075,5.924933},[3]float32{5.43617,0.075,5.266953}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.624605,0.075,5.411968},[3]float32{4.557545,0.075,5.082978},[3]float32{4.490485,0.075,4.753989},[3]float32{5.432175,0.075,5.247356},[3]float32{5.365116,0.075,4.918367},[3]float32{5.298056,0.075,4.589377}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.627841,0.075,3.314533},[3]float32{5.021828,0.075,3.234224},[3]float32{4.900074,0.075,4.650089},[3]float32{5.294061,0.075,4.56978}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.214257,0.075,3.398836},[3]float32{4.608244,0.075,3.318527},[3]float32{4.350374,0.075,4.066614},[3]float32{4.744361,0.075,3.986305},[3]float32{4.486491,0.075,4.734392},[3]float32{4.880477,0.075,4.654083}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.210262,0.075,3.379239},[3]float32{4.076143,0.075,2.721259},[3]float32{5.017833,0.075,3.214627},[3]float32{4.883714,0.075,2.556648}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.7456,0.075,1.879071},[3]float32{4.879719,0.075,2.537051},[3]float32{4.341815,0.075,1.961377},[3]float32{4.475934,0.075,2.619357},[3]float32{3.938029,0.075,2.043683},[3]float32{4.072148,0.075,2.701662}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.741605,0.075,1.859474},[3]float32{4.347619,0.075,1.939783},[3]float32{4.469372,0.075,0.5239186},[3]float32{4.075385,0.075,0.604227}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.328022,0.075,1.943777},[3]float32{3.934035,0.075,2.024086},[3]float32{4.055788,0.075,0.6082216},[3]float32{3.661801,0.075,0.68853}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.331258,0.075,-0.1536579},[3]float32{4.465377,0.075,0.5043216},[3]float32{3.523687,0.075,0.0109536},[3]float32{3.657807,0.075,0.668933}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.076901,0.075,4.838292},[3]float32{4.470888,0.075,4.757983},[3]float32{4.349134,0.075,6.173848},[3]float32{4.743122,0.075,6.093539}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.663317,0.075,4.922595},[3]float32{4.057304,0.075,4.842286},[3]float32{3.935551,0.075,6.258151},[3]float32{4.329537,0.075,6.177842}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.659323,0.075,4.902997},[3]float32{3.525203,0.075,4.245018},[3]float32{4.063108,0.075,4.820692},[3]float32{3.928989,0.075,4.162713},[3]float32{4.466894,0.075,4.738386},[3]float32{4.332774,0.075,4.080407}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{4.19466,0.075,3.40283},[3]float32{4.32878,0.075,4.06081},[3]float32{3.387089,0.075,3.567442},[3]float32{3.521209,0.075,4.225421}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.524445,0.075,2.127986},[3]float32{3.918432,0.075,2.047678},[3]float32{3.796679,0.075,3.463542},[3]float32{4.190666,0.075,3.383233}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.777081,0.075,3.467536},[3]float32{3.383095,0.075,3.547845},[3]float32{3.504848,0.075,2.13198},[3]float32{3.110861,0.075,2.212289}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.106867,0.075,2.192692},[3]float32{2.972747,0.075,1.534712},[3]float32{3.914438,0.075,2.02808},[3]float32{3.780318,0.075,1.370101}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.968753,0.075,1.515115},[3]float32{2.834633,0.075,0.8571361},[3]float32{3.372538,0.075,1.43281},[3]float32{3.238419,0.075,0.7748303},[3]float32{3.776324,0.075,1.350504},[3]float32{3.642204,0.075,0.6925246}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.63821,0.075,0.6729276},[3]float32{3.441216,0.075,0.7130818},[3]float32{3.244223,0.075,0.753236},[3]float32{3.502093,0.075,0.005149654},[3]float32{3.305099,0.075,0.04530387},[3]float32{3.108106,0.075,0.08545809},[3]float32{3.365976,0.075,-0.6626283},[3]float32{3.168983,0.075,-0.622474},[3]float32{2.971989,0.075,-0.5823198}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.558405,0.075,-0.4980168},[3]float32{2.952392,0.075,-0.5783253},[3]float32{2.830639,0.075,0.837539},[3]float32{3.224626,0.075,0.7572306}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.970269,0.075,5.74918},[3]float32{2.903209,0.075,5.42019},[3]float32{2.836149,0.075,5.091201},[3]float32{3.374054,0.075,5.666874},[3]float32{3.306994,0.075,5.337884},[3]float32{3.239935,0.075,5.008895},[3]float32{3.77784,0.075,5.584569},[3]float32{3.71078,0.075,5.255579},[3]float32{3.64372,0.075,4.926589}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.973505,0.075,3.651745},[3]float32{3.367492,0.075,3.571436},[3]float32{3.245739,0.075,4.9873},[3]float32{3.639726,0.075,4.906992}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.559921,0.075,3.736048},[3]float32{2.953908,0.075,3.655739},[3]float32{2.832155,0.075,5.071604},[3]float32{3.226142,0.075,4.991295}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.229378,0.075,2.89386},[3]float32{3.363497,0.075,3.551839},[3]float32{2.421807,0.075,3.058471},[3]float32{2.555927,0.075,3.716451}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.417813,0.075,3.038874},[3]float32{2.283693,0.075,2.380895},[3]float32{3.225384,0.075,2.874263},[3]float32{3.091264,0.075,2.216284}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{3.08727,0.075,2.196687},[3]float32{2.693283,0.075,2.276995},[3]float32{2.815036,0.075,0.8611306},[3]float32{2.421049,0.075,0.941439}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.673686,0.075,2.280989},[3]float32{2.279699,0.075,2.361298},[3]float32{2.401452,0.075,0.9454336},[3]float32{2.007465,0.075,1.025742}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{2.003471,0.075,1.006145},[3]float32{1.869351,0.075,0.3481656},[3]float32{2.811042,0.075,0.8415336},[3]float32{2.676922,0.075,0.1835542}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{1.866873,0.075,4.562633},[3]float32{1.732753,0.075,3.904654},[3]float32{2.270658,0.075,4.480328},[3]float32{2.136539,0.075,3.822348},[3]float32{2.674444,0.075,4.398022},[3]float32{2.540324,0.075,3.740042}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{1.870109,0.075,2.465198},[3]float32{2.067103,0.075,2.425044},[3]float32{2.264096,0.075,2.38489},[3]float32{2.006226,0.075,3.132976},[3]float32{2.203219,0.075,3.092822},[3]float32{2.400213,0.075,3.052667},[3]float32{2.142343,0.075,3.800754},[3]float32{2.339336,0.075,3.7606},[3]float32{2.53633,0.075,3.720445}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{1.456525,0.075,2.549501},[3]float32{1.850512,0.075,2.469193},[3]float32{1.728759,0.075,3.885057},[3]float32{2.122746,0.075,3.804748}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{1.452531,0.075,2.529904},[3]float32{1.385471,0.075,2.200914},[3]float32{1.318411,0.075,1.871925},[3]float32{1.856316,0.075,2.447598},[3]float32{1.789257,0.075,2.118608},[3]float32{1.722197,0.075,1.789619},[3]float32{2.260102,0.075,2.365293},[3]float32{2.193042,0.075,2.036303},[3]float32{2.125982,0.075,1.707313}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1, 5, 3, 2, -1, 5, 2, 4, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{1.314417,0.075,1.852327},[3]float32{1.180297,0.075,1.194348},[3]float32{1.718202,0.075,1.770022},[3]float32{1.584083,0.075,1.112042},[3]float32{2.121988,0.075,1.687716},[3]float32{1.987868,0.075,1.029737}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{1.983874,0.075,1.01014},[3]float32{1.78688,0.075,1.050294},[3]float32{1.589887,0.075,1.090448},[3]float32{1.847757,0.075,0.3423617},[3]float32{1.650764,0.075,0.3825159},[3]float32{1.45377,0.075,0.4226701},[3]float32{1.71164,0.075,-0.3254162},[3]float32{1.514647,0.075,-0.285262},[3]float32{1.317653,0.075,-0.2451078}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{0.9040694,0.075,-0.1608048},[3]float32{1.101063,0.075,-0.200959},[3]float32{1.298056,0.075,-0.2411132},[3]float32{1.040186,0.075,0.5069731},[3]float32{1.23718,0.075,0.4668189},[3]float32{1.434173,0.075,0.4266647},[3]float32{1.176303,0.075,1.174751},[3]float32{1.373296,0.075,1.134597},[3]float32{1.57029,0.075,1.094443}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        CoordIndex: []int32{4, 1, 0, -1, 4, 0, 3, -1, 5, 2, 1, -1, 5, 1, 4, -1, 7, 4, 3, -1, 7, 3, 6, -1, 8, 5, 4, -1, 8, 4, 7, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{0.7667135,0.075,1.278651},[3]float32{0.9637069,0.075,1.238497},[3]float32{1.1607,0.075,1.198343},[3]float32{0.9028302,0.075,1.946429},[3]float32{1.099824,0.075,1.906275},[3]float32{1.296817,0.075,1.866121},[3]float32{1.038947,0.075,2.614207},[3]float32{1.23594,0.075,2.574053},[3]float32{1.432934,0.075,2.533899}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{0.349135,0.075,1.343357},[3]float32{0.2150155,0.075,0.6853777},[3]float32{1.156706,0.075,1.178746},[3]float32{1.022586,0.075,0.5207662}},
                        },
                    },
                },
                &x3d.Shape{
                    Appearance: &x3d.Appearance{
                        Material: &x3d.Material{
                            AmbientIntensity: floatPtr(0.0),
                            DiffuseColor: &x3d.SFColor{0.5, 0.5, 0.5},
                            Shininess: floatPtr(0.0),
                        },
                    },
                    Geometry: &x3d.IndexedFaceSet{
                        Solid: boolPtr(false),
                        TexCoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        CoordIndex: []int32{3, 1, 0, -1, 3, 0, 2, -1},
                        Coord: &x3d.Coordinate{
                            Point: &x3d.MFVec3f{[3]float32{0.211021,0.075,0.6657807},[3]float32{0.07690154,0.075,0.007801231},[3]float32{1.018592,0.075,0.5011692},[3]float32{0.8844724,0.075,-0.1568102}},
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
	filename := "../data/PathMeshTopSurface.new.go.x3d"
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