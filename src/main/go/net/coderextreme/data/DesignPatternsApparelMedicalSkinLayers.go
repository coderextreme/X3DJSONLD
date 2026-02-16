
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
            Components: []*x3d.Component{
                &x3d.Component{
                    Name: stringPtr("HAnim"),
                    Level: int32Ptr(2),
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
                Content: stringPtr("2 July 2023"),
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
                Content: stringPtr("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Under development. This template example does not produce renderable HAnim models."),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"),
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
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("SimpleSkeleton"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("a_SimpleSkeleton"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
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
                                                Name: stringPtr("feature01_tip"),
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("a_feature01_tip"),
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("SiteVisualization"),
                                                    },
                                                },
                                            },
                                    },
                            },
                        },
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("SimpleSkeletonMesh"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("b_SimpleSkeletonMesh"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
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
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("SkinIndexedGeometry"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("c_SkinIndexedGeometry"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
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
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("SkinShapeIndexedGeometry"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("d_SkinShapeIndexedGeometry"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
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
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("SkinSwitchShapeIndexedGeometry"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("e_SkinSwitchShapeIndexedGeometry"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
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
//similarly for LOD
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("SynthesizedSkinShapeIndexedTwoPartGeometry"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("f_SynthesizedSkinShapeIndexedTwoPartGeometry"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
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
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("ApparelSkinIndexedGeometryMultipleShapes"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("g_ApparelSkinIndexedGeometryMultipleShapes"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
                            &x3d.Shape{
                            },
//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
                        },
//==============================
                        &x3d.HAnimHumanoid{
                            Name: stringPtr("AnatomySkinIndexedGeometryMultipleShapes"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("h_AnatomySkinIndexedGeometryMultipleShapes"),
                            },
                            Version: stringPtr("2.0"),
                            Skeleton: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    Name: stringPtr("humanoid_root"),
                                    Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            Name: stringPtr("sacrum"),
                                    },
                            },
//allow multiple Shape nodes with containerField='skin', one for each layer of skin
                            &x3d.Shape{
                            },
                        },
//==============================
                    },
                },
                &x3d.Viewpoint{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ViewHelpText"),
                    },
                    Description: stringPtr("Select text to see website"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 12.0},
                },
//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
                &x3d.Anchor{
                    Description: stringPtr("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"),
                    Parameter: x3d.MFString{"target=blank"},
                    Url: x3d.MFString{"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"},
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
//TODO adjust Text string and Box size, then set Material transparency='1'
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"DesignPatternsApparelMedicalSkinLayers.x3d", "", "explores potential apparel approaches"},
                                FontStyle: &x3d.FontStyle{
                                    Family: x3d.MFString{"SANS"},
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                    Size: floatPtr(0.6),
                                    Style: stringPtr("BOLD"),
                                },
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    DiffuseColor: &x3d.SFColor{0.9, 0.9, 0.9},
                                },
                            },
                        },
                    },
                    Children: []x3d.X3DNode{
                        &x3d.Shape{
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
                            Geometry: &x3d.Box{
                                Size: &x3d.SFVec3f{11.0, 2.0, 0.001},
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
	filename := "../data/DesignPatternsApparelMedicalSkinLayers.new.go.x3d"
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