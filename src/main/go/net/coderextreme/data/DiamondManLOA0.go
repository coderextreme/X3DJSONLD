
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
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("DiamondManLOA0.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Matthew T. Beitler"),
            },
            &x3d.Meta{
                Name: stringPtr("translator"),
                Content: stringPtr("Joel S. Pawloski"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("12 November 2001"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:37:53 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("motto"),
                Content: stringPtr("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://ece.uwaterloo.ca/~HAnim"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://www.cis.upenn.edu/~beitler"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("humanoid_landmark_locations.gif"),
            },
            &x3d.Meta{
                Name: stringPtr("Image"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("HANIM 2.0 Default Joint Centers, LOA0"),
                    Info: x3d.MFString{"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"},
                },
                &x3d.NavigationInfo{
                    Speed: floatPtr(1.5),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Diamond Man, LOA 0"),
                    Position: &x3d.SFVec3f{0.0, 1.0, 3.0},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_humanoid"),
                    },
                    Name: stringPtr("humanoid"),
                    Loa: int32Ptr(0),
                    Metadata: &x3d.MetadataSet{
                        Name: stringPtr("HAnimHumanoid.info"),
                        Reference: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                        &x3d.MetadataString{
                            Name: stringPtr("authorEmail"),
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("authorName"),
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("copyright"),
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("creationDate"),
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("humanoidVersion"),
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("usageRestrictions"),
                        },
                    },
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("hanim_humanoid_root"),
                            },
                            Name: stringPtr("humanoid_root"),
                            Center: &x3d.SFVec3f{0.0, 0.824, 0.0277},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_sacroiliac"),
                                    },
                                    Name: stringPtr("sacroiliac"),
                                    Center: &x3d.SFVec3f{0.0, 0.9149, 0.0016},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_pelvis"),
                                            },
                                            Name: stringPtr("pelvis"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{0.0, 0.9149, 0.0016},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("DiamondShape"),
                                                        },
                                                        Appearance: &x3d.Appearance{
                                                            Material: &x3d.Material{
                                                                DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.0},
                                                            },
                                                        },
                                                        Geometry: &x3d.IndexedFaceSet{
                                                            CreaseAngle: floatPtr(0.5),
                                                            CoordIndex: []int32{0, 1, 2, -1, 0, 2, 3, -1, 0, 3, 4, -1, 0, 4, 1, -1, 5, 2, 1, -1, 5, 3, 2, -1, 5, 4, 3, -1, 5, 1, 4, -1},
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.01,0.0},[3]float32{-0.01,0.0,0.0},[3]float32{0.0,0.0,0.01},[3]float32{0.01,0.0,0.0},[3]float32{0.0,0.0,-0.01},[3]float32{0.0,-0.01,0.0}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                    },
                            },
                    },
                    Joints: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_humanoid_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_sacroiliac"),
                        },
                    },
                    Segments: []x3d.X3DNode{
                        &x3d.HAnimSegment{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_pelvis"),
                            },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("hanim_site_view"),
                        },
                        Name: stringPtr("site_view"),
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("InclinedView"),
                            },
                            Description: stringPtr("Inclined View"),
                            Position: &x3d.SFVec3f{1.62, 1.05, 2.06},
                            Orientation: &x3d.SFRotation{-0.113, 0.993, 0.0347, 0.671},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("FrontView"),
                            },
                            Description: stringPtr("Front View"),
                            Position: &x3d.SFVec3f{0.0, 0.854, 2.57665},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("SideView"),
                            },
                            Description: stringPtr("Side View"),
                            Position: &x3d.SFVec3f{2.5929, 0.854, 0.0},
                            Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, 1.57079},
                        },
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("TopView"),
                            },
                            Description: stringPtr("Top View"),
                            Position: &x3d.SFVec3f{0.0, 3.4495, 0.0},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57079},
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
	filename := "../data/DiamondManLOA0.new.go.x3d"
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