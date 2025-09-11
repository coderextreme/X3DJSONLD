
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
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("HAnim"),
                    Level: int32Ptr(3),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("DesignPatternsApparelMedicalSkinLayers.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Design patterns for skin and apparel using HAnim2 standard in X3D4"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Joe D. Williams"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Dick Puk"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("23 December 2022"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:37:53 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("DesignPatternsApparelVariations.txt"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html#HAnimHumanoid"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Under development. This template example does not produce renderable HAnim models."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("HAnimHumanoid skin design patterns for apparel, medical"),
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.0,0.6,0.6}},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("MultipleHumanoids"),
                        },
                    Children: []x3d.X3DNode{
                        Metadata: &x3d.MetadataString{
                            Name: stringPtr("HAnimArchitecture"),
                            Reference: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"),
                            Value: x3d.MFString{"E.4 Multiple humanoids per file"},
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("a_SimpleSkeleton"),
                            },
                            Name: stringPtr("SimpleSkeleton"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                            &x3d.Shape{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("JointVisualization"),
                                                },
                                            },
                                            &x3d.Shape{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("SegmentVisualization"),
                                                },
                                            },
                                            &x3d.HAnimSite{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("a_feature01_tip"),
                                                },
                                                Name: stringPtr("feature01_tip"),
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("SiteVisualization"),
                                                    },
                                                },
                                            },
                                    },
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("b_SimpleSkeletonMesh"),
                            },
                            Name: stringPtr("SimpleSkeletonMesh"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                            &x3d.Shape{
                                                Geometry: &x3d.IndexedFaceSet{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("SegmentBoneMesh"),
                                                    },
                                                },
                                            },
                                    },
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("c_SkinIndexedGeometry"),
                            },
                            Name: stringPtr("SkinIndexedGeometry"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.IndexedFaceSet{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("SkinMeshIFS"),
                                },
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("d_SkinShapeIndexedGeometry"),
                            },
                            Name: stringPtr("SkinShapeIndexedGeometry"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.Shape{
                                Geometry: &x3d.IndexedFaceSet{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("SkinMeshIFS"),
                                    },
                                },
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("e_SkinSwitchShapeIndexedGeometry"),
                            },
                            Name: stringPtr("SkinSwitchShapeIndexedGeometry"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.Shape{
                                Geometry: &x3d.IndexedFaceSet{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("IndexedSkinMeshIFS"),
                                    },
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("SkinMeshCoordinate"),
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("f_SynthesizedSkinShapeIndexedTwoPartGeometry"),
                            },
                            Name: stringPtr("SynthesizedSkinShapeIndexedTwoPartGeometry"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.Shape{
                                Geometry: &x3d.IndexedFaceSet{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("TwoPartIndexedSkinMesh"),
                                    },
                                    Coord: &x3d.Coordinate{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("TwoPartSkinMesh"),
                                        },
                                    },
                                },
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("g_ApparelSkinIndexedGeometryMultipleShapes"),
                            },
                            Name: stringPtr("ApparelSkinIndexedGeometryMultipleShapes"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.Shape{
                            },
                        },
                        &x3d.HAnimHumanoid{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("h_AnatomySkinIndexedGeometryMultipleShapes"),
                            },
                            Name: stringPtr("AnatomySkinIndexedGeometryMultipleShapes"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.Shape{
                            },
                        },
                    },
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ViewHelpText"),
                    },
                    Description: stringPtr("Select text to see website"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 12.0},
                },
                &x3d.Anchor{
                    Description: stringPtr("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"),
                    Url: x3d.MFString{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"},
                    Parameter: x3d.MFString{"target=blank"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.9, 0.9, 0.9},
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"DesignPatternsApparelMedicalSkinLayers.x3d", "", "explores potential apparel approaches"},
                                FontStyle: &x3d.FontStyle{
                                    Family: x3d.MFString{"SANS"},
                                    Style: stringPtr("BOLD"),
                                    Size: floatPtr(0.6),
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                },
                            },
                        },
                    },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    Transparency: floatPtr(1.0),
                                },
                            },
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{11.0, 2.0, 0.001},
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
	filename := "../data/DesignPatternsApparelMedicalSkinLayers.new.go.x3d"
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