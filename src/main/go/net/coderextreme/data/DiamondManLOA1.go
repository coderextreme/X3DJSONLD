
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
                    Content: stringPtr("DiamondManLOA1.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy."),
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
                Name: stringPtr("Image"),
                Content: stringPtr("images/BonesAllSkeletonFrontViewLOA1.png"),
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
                Name: stringPtr("motto"),
                Content: stringPtr("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("Still needs comments on CAESAR feature points inserted"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"),
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
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("HANIM 1.1 Default Joint Centers, LOA1"),
                    Info: x3d.MFString{"HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"},
                },
                &x3d.NavigationInfo{
                    Speed: floatPtr(1.5),
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Diamond Man, LOA 1"),
                    Position: &x3d.SFVec3f{0.0, 1.0, 3.0},
                    CenterOfRotation: &x3d.SFVec3f{0.0, 1.0, 0.0},
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("hanim_humanoid"),
                    },
                    Name: stringPtr("humanoid"),
                    Loa: int32Ptr(1),
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
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("points"),
                                                                },
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.01,0.0},[3]float32{-0.01,0.0,0.0},[3]float32{0.0,0.0,0.01},[3]float32{0.01,0.0,0.0},[3]float32{0.0,0.0,-0.01},[3]float32{0.0,-0.01,0.0}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_l_hip"),
                                            },
                                            Name: stringPtr("l_hip"),
                                            Center: &x3d.SFVec3f{0.0961, 0.9124, -0.0001},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_thigh"),
                                                    },
                                                    Name: stringPtr("l_thigh"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.0961, 0.9124, -0.0001},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("DiamondShape"),
                                                                },
                                                            },
                                                        },
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_knee_crease_pt"),
                                                        },
                                                        Name: stringPtr("l_knee_crease_pt"),
                                                        Translation: &x3d.SFVec3f{0.0993, 0.4881, -0.0309},
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_femoral_lateral_epicondyle_pt"),
                                                        },
                                                        Name: stringPtr("l_femoral_lateral_epicondyle_pt"),
                                                        Translation: &x3d.SFVec3f{0.1598, 0.4967, 0.0297},
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_femoral_medial_epicondyle_pt"),
                                                        },
                                                        Name: stringPtr("l_femoral_medial_epicondyle_pt"),
                                                        Translation: &x3d.SFVec3f{0.0398, 0.4946, 0.0303},
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_knee"),
                                                    },
                                                    Name: stringPtr("l_knee"),
                                                    Center: &x3d.SFVec3f{0.104, 0.4867, 0.0308},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_calf"),
                                                            },
                                                            Name: stringPtr("l_calf"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.104, 0.4867, 0.0308},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("DiamondShape"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                    },
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimJoint{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_talocrural"),
                                                            },
                                                            Name: stringPtr("l_talocrural"),
                                                            Center: &x3d.SFVec3f{0.1101, 0.0656, -0.0736},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSegment{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_talus"),
                                                                    },
                                                                    Name: stringPtr("l_talus"),
                                                                    &x3d.Transform{
                                                                            Translation: &x3d.SFVec3f{0.1101, 0.0656, -0.0736},
                                                                        Children: []x3d.X3DNode{
                                                                            &x3d.Shape{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("DiamondShape"),
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_lateral_malleolus_pt"),
                                                                        },
                                                                        Name: stringPtr("l_lateral_malleolus_pt"),
                                                                        Translation: &x3d.SFVec3f{0.1308, 0.0597, -0.1032},
                                                                    },
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_medial_malleolus_pt"),
                                                                        },
                                                                        Name: stringPtr("l_medial_malleolus_pt"),
                                                                        Translation: &x3d.SFVec3f{0.089, 0.0716, -0.0881},
                                                                    },
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_sphyrion_pt"),
                                                                        },
                                                                        Name: stringPtr("l_sphyrion_pt"),
                                                                        Translation: &x3d.SFVec3f{0.089, 0.0575, -0.0943},
                                                                    },
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_l_calcaneus_posterior_pt"),
                                                                        },
                                                                        Name: stringPtr("l_calcaneus_posterior_pt"),
                                                                        Translation: &x3d.SFVec3f{0.0974, 0.0259, -0.1171},
                                                                    },
                                                            },
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimJoint{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_metatarsophalangeal_2"),
                                                                    },
                                                                    Name: stringPtr("l_metatarsophalangeal_2"),
                                                                    Center: &x3d.SFVec3f{0.1086, 0.0001, 0.0368},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.HAnimSegment{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_l_tarsal_proximal_phalanx_2"),
                                                                            },
                                                                            Name: stringPtr("l_tarsal_proximal_phalanx_2"),
                                                                            &x3d.HAnimSite{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_middistal_tip"),
                                                                                },
                                                                                Name: stringPtr("l_middistal_tip"),
                                                                                Translation: &x3d.SFVec3f{0.1354, 0.0016, 0.1476},
                                                                            },
                                                                            &x3d.HAnimSite{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_metatarsal_phalanx_5_pt"),
                                                                                },
                                                                                Name: stringPtr("l_metatarsal_phalanx_5_pt"),
                                                                                Translation: &x3d.SFVec3f{0.1825, 0.007, 0.0928},
                                                                            },
                                                                            &x3d.HAnimSite{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_metatarsal_phalanx_1_pt"),
                                                                                },
                                                                                Name: stringPtr("l_metatarsal_phalanx_1_pt"),
                                                                                Translation: &x3d.SFVec3f{0.0816, 0.0232, 0.0106},
                                                                            },
                                                                            &x3d.HAnimSite{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    DEF: stringPtr("hanim_l_tarsal_distal_phalanx_2_pt"),
                                                                                },
                                                                                Name: stringPtr("l_tarsal_distal_phalanx_2_pt"),
                                                                                Translation: &x3d.SFVec3f{0.1195, 0.0079, 0.1433},
                                                                            },
                                                                    },
                                                            },
                                                    },
                                            },
                                    },
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_r_hip"),
                                        },
                                        Name: stringPtr("r_hip"),
                                        Center: &x3d.SFVec3f{-0.095, 0.9171, 0.0029},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_thigh"),
                                                },
                                                Name: stringPtr("r_thigh"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-0.095, 0.9171, 0.0029},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("DiamondShape"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_knee_crease_pt"),
                                                    },
                                                    Name: stringPtr("r_knee_crease_pt"),
                                                    Translation: &x3d.SFVec3f{-0.0825, 0.4932, -0.0326},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_femoral_lateral_epicondyle_pt"),
                                                    },
                                                    Name: stringPtr("r_femoral_lateral_epicondyle_pt"),
                                                    Translation: &x3d.SFVec3f{-0.1421, 0.4992, 0.031},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_femoral_medial_epicondyle_pt"),
                                                    },
                                                    Name: stringPtr("r_femoral_medial_epicondyle_pt"),
                                                    Translation: &x3d.SFVec3f{-0.0221, 0.5014, 0.0289},
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_knee"),
                                                },
                                                Name: stringPtr("r_knee"),
                                                Center: &x3d.SFVec3f{-0.0867, 0.4913, 0.0318},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_calf"),
                                                        },
                                                        Name: stringPtr("r_calf"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-0.0867, 0.4913, 0.0318},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("DiamondShape"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_talocrural"),
                                                        },
                                                        Name: stringPtr("r_talocrural"),
                                                        Center: &x3d.SFVec3f{-0.0801, 0.0712, -0.0766},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_talus"),
                                                                },
                                                                Name: stringPtr("r_talus"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-0.0801, 0.0712, -0.0766},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("DiamondShape"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_lateral_malleolus_pt"),
                                                                    },
                                                                    Name: stringPtr("r_lateral_malleolus_pt"),
                                                                    Translation: &x3d.SFVec3f{-0.1006, 0.0658, -0.1075},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_medial_malleolus_pt"),
                                                                    },
                                                                    Name: stringPtr("r_medial_malleolus_pt"),
                                                                    Translation: &x3d.SFVec3f{-0.0591, 0.076, -0.0928},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_sphyrion_pt"),
                                                                    },
                                                                    Name: stringPtr("r_sphyrion_pt"),
                                                                    Translation: &x3d.SFVec3f{-0.0603, 0.061, -0.1002},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_r_calcaneus_posterior_pt"),
                                                                    },
                                                                    Name: stringPtr("r_calcaneus_posterior_pt"),
                                                                    Translation: &x3d.SFVec3f{-0.0692, 0.0297, -0.1221},
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metatarsophalangeal_2"),
                                                                },
                                                                Name: stringPtr("r_metatarsophalangeal_2"),
                                                                Center: &x3d.SFVec3f{-0.0801, 0.0, 0.0368},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("hanim_r_tarsal_proximal_phalanx_2"),
                                                                        },
                                                                        Name: stringPtr("r_tarsal_proximal_phalanx_2"),
                                                                        &x3d.HAnimSite{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_middistal_tip"),
                                                                            },
                                                                            Name: stringPtr("r_middistal_tip"),
                                                                            Translation: &x3d.SFVec3f{-0.1043, -0.0227, 0.145},
                                                                        },
                                                                        &x3d.HAnimSite{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_metatarsal_phalanx_5_pt"),
                                                                            },
                                                                            Name: stringPtr("r_metatarsal_phalanx_5_pt"),
                                                                            Translation: &x3d.SFVec3f{-0.1523, 0.0166, 0.0895},
                                                                        },
                                                                        &x3d.HAnimSite{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_metatarsal_phalanx_1_pt"),
                                                                            },
                                                                            Name: stringPtr("r_metatarsal_phalanx_1_pt"),
                                                                            Translation: &x3d.SFVec3f{-0.0521, 0.026, 0.0127},
                                                                        },
                                                                        &x3d.HAnimSite{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                DEF: stringPtr("hanim_r_tarsal_distal_phalanx_2_pt"),
                                                                            },
                                                                            Name: stringPtr("r_tarsal_distal_phalanx_2_pt"),
                                                                            Translation: &x3d.SFVec3f{-0.0883, 0.0134, 0.1383},
                                                                        },
                                                                },
                                                        },
                                                },
                                        },
                                    },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("hanim_vl1"),
                                },
                                Name: stringPtr("vl1"),
                                Center: &x3d.SFVec3f{-0.00405, 1.07, -0.0275},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l1"),
                                        },
                                        Name: stringPtr("l1"),
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_l_shoulder"),
                                        },
                                        Name: stringPtr("l_shoulder"),
                                        Center: &x3d.SFVec3f{0.2029, 1.4376, -0.0387},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_upperarm"),
                                                },
                                                Name: stringPtr("l_upperarm"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.2029, 1.4376, -0.0387},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("DiamondShape"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.Transform{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("l_upperarm_adjust"),
                                                        },
                                                        Translation: &x3d.SFVec3f{0.2029, 1.4376, -0.0387},
                                                        Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 0.119},
                                                        Center: &x3d.SFVec3f{0.182, 1.22, -0.047},
                                                    Children: []x3d.X3DNode{
                                                    },
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_humeral_lateral_epicondyle_pt"),
                                                    },
                                                    Name: stringPtr("l_humeral_lateral_epicondyle_pt"),
                                                    Translation: &x3d.SFVec3f{0.228, 1.1482, -0.11},
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_l_elbow"),
                                                },
                                                Name: stringPtr("l_elbow"),
                                                Center: &x3d.SFVec3f{0.2014, 1.1357, -0.0682},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_forearm"),
                                                        },
                                                        Name: stringPtr("l_forearm"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{0.2014, 1.1357, -0.0682},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("DiamondShape"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                        &x3d.Transform{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("l_forearm_adjust"),
                                                                },
                                                                Translation: &x3d.SFVec3f{0.2014, 1.1357, -0.0682},
                                                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.1},
                                                                Center: &x3d.SFVec3f{0.198, 0.961, -0.0405},
                                                            Children: []x3d.X3DNode{
                                                            },
                                                        },
                                                        &x3d.HAnimSite{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_radial_styloid_pt"),
                                                            },
                                                            Name: stringPtr("l_radial_styloid_pt"),
                                                            Translation: &x3d.SFVec3f{0.1901, 0.8645, -0.0415},
                                                        },
                                                        &x3d.HAnimSite{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_olecranon_pt"),
                                                            },
                                                            Name: stringPtr("l_olecranon_pt"),
                                                            Translation: &x3d.SFVec3f{-0.1962, 1.1375, -0.1123},
                                                        },
                                                        &x3d.HAnimSite{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_humeral_medial_epicondyle_pt"),
                                                            },
                                                            Name: stringPtr("l_humeral_medial_epicondyle_pt"),
                                                            Translation: &x3d.SFVec3f{0.1735, 1.1272, -0.1113},
                                                        },
                                                        &x3d.HAnimSite{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_l_radiale_pt"),
                                                            },
                                                            Name: stringPtr("l_radiale_pt"),
                                                            Translation: &x3d.SFVec3f{0.2182, 1.1212, -0.1167},
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_l_radiocarpal"),
                                                        },
                                                        Name: stringPtr("l_radiocarpal"),
                                                        Center: &x3d.SFVec3f{0.1984, 0.8663, -0.0583},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_l_carpal"),
                                                                },
                                                                Name: stringPtr("l_carpal"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{0.1984, 0.8663, -0.0583},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("DiamondShape"),
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.Transform{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("l_hand_adjust"),
                                                                        },
                                                                        Translation: &x3d.SFVec3f{0.1984, 0.8663, -0.0583},
                                                                        Rotation: &x3d.SFRotation{-0.06361, -0.9967, 0.04988, 1.333},
                                                                        Center: &x3d.SFVec3f{0.213, 0.811, -0.0338},
                                                                    Children: []x3d.X3DNode{
                                                                    },
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_hand_tip"),
                                                                    },
                                                                    Name: stringPtr("l_hand_tip"),
                                                                    Translation: &x3d.SFVec3f{0.208, 0.6731, -0.0491},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_metacarpal_phalanx_2_pt"),
                                                                    },
                                                                    Name: stringPtr("l_metacarpal_phalanx_2_pt"),
                                                                    Translation: &x3d.SFVec3f{0.2009, 0.8139, -0.0237},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_dactylion_pt"),
                                                                    },
                                                                    Name: stringPtr("l_dactylion_pt"),
                                                                    Translation: &x3d.SFVec3f{0.2056, 0.6743, -0.0482},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_ulnar_styloid_pt"),
                                                                    },
                                                                    Name: stringPtr("l_ulnar_styloid_pt"),
                                                                    Translation: &x3d.SFVec3f{-0.2142, 0.8529, -0.0648},
                                                                },
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("hanim_l_metacarpal_phalanx_5_pt"),
                                                                    },
                                                                    Name: stringPtr("l_metacarpal_phalanx_5_pt"),
                                                                    Translation: &x3d.SFVec3f{0.1929, 0.786, -0.1122},
                                                                },
                                                        },
                                                },
                                        },
                                },
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_r_shoulder"),
                                    },
                                    Name: stringPtr("r_shoulder"),
                                    Center: &x3d.SFVec3f{-0.1907, 1.4407, -0.0325},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_r_upperarm"),
                                            },
                                            Name: stringPtr("r_upperarm"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{-0.1907, 1.4407, -0.0325},
                                                Children: []x3d.X3DNode{
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("DiamondShape"),
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.Transform{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("r_upperarm_adjust"),
                                                    },
                                                    Translation: &x3d.SFVec3f{-0.1907, 1.4407, -0.0325},
                                                    Rotation: &x3d.SFRotation{1.0, 0.0, 0.0, 0.0836},
                                                    Center: &x3d.SFVec3f{-0.182, 1.22, -0.047},
                                                Children: []x3d.X3DNode{
                                                },
                                            },
                                            &x3d.HAnimSite{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_r_humeral_lateral_epicondyle_pt"),
                                                },
                                                Name: stringPtr("r_humeral_lateral_epicondyle_pt"),
                                                Translation: &x3d.SFVec3f{-0.2224, 1.1517, -0.1033},
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_r_elbow"),
                                            },
                                            Name: stringPtr("r_elbow"),
                                            Center: &x3d.SFVec3f{-0.1949, 1.1388, -0.062},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_forearm"),
                                                    },
                                                    Name: stringPtr("r_forearm"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{-0.1949, 1.1388, -0.062},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("DiamondShape"),
                                                                },
                                                            },
                                                        },
                                                    },
                                                    &x3d.Transform{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("r_forearm_adjust"),
                                                            },
                                                            Translation: &x3d.SFVec3f{-0.1949, 1.1388, -0.062},
                                                            Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.1254},
                                                            Center: &x3d.SFVec3f{-0.198, 0.961, -0.0397},
                                                        Children: []x3d.X3DNode{
                                                        },
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_radial_styloid_pt"),
                                                        },
                                                        Name: stringPtr("r_radial_styloid_pt"),
                                                        Translation: &x3d.SFVec3f{-0.1884, 0.8676, -0.036},
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_olecranon_pt"),
                                                        },
                                                        Name: stringPtr("r_olecranon_pt"),
                                                        Translation: &x3d.SFVec3f{-0.1907, 1.1405, -0.1065},
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_humeral_medial_epicondyle_pt"),
                                                        },
                                                        Name: stringPtr("r_humeral_medial_epicondyle_pt"),
                                                        Translation: &x3d.SFVec3f{-0.168, 1.1298, -0.1062},
                                                    },
                                                    &x3d.HAnimSite{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("hanim_r_radiale_pt"),
                                                        },
                                                        Name: stringPtr("r_radiale_pt"),
                                                        Translation: &x3d.SFVec3f{-0.213, 1.1305, -0.1091},
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_radiocarpal"),
                                                    },
                                                    Name: stringPtr("r_radiocarpal"),
                                                    Center: &x3d.SFVec3f{-0.1959, 0.8694, -0.0521},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("hanim_r_carpal"),
                                                            },
                                                            Name: stringPtr("r_carpal"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{-0.1959, 0.8694, -0.0521},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("DiamondShape"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                            &x3d.Transform{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("r_hand_adjust"),
                                                                    },
                                                                    Rotation: &x3d.SFRotation{-0.09024, 0.994, -0.0624, 1.216},
                                                                    Center: &x3d.SFVec3f{-0.217, 0.811, -0.0338},
                                                                Children: []x3d.X3DNode{
                                                                },
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_hand_tip"),
                                                                },
                                                                Name: stringPtr("r_hand_tip"),
                                                                Translation: &x3d.SFVec3f{-0.1969, 0.6758, -0.0427},
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metacarpal_phalanx_2_pt"),
                                                                },
                                                                Name: stringPtr("r_metacarpal_phalanx_2_pt"),
                                                                Translation: &x3d.SFVec3f{-0.1977, 0.8169, -0.0177},
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_dactylion_pt"),
                                                                },
                                                                Name: stringPtr("r_dactylion_pt"),
                                                                Translation: &x3d.SFVec3f{-0.1941, 0.6772, -0.0423},
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_ulnar_styloid_pt"),
                                                                },
                                                                Name: stringPtr("r_ulnar_styloid_pt"),
                                                                Translation: &x3d.SFVec3f{-0.2117, 0.8562, -0.0584},
                                                            },
                                                            &x3d.HAnimSite{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("hanim_r_metacarpal_phalanx_5_pt"),
                                                                },
                                                                Name: stringPtr("r_metacarpal_phalanx_5_pt"),
                                                                Translation: &x3d.SFVec3f{-0.1929, 0.789, -0.1064},
                                                            },
                                                    },
                                            },
                                    },
                                },
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("hanim_vc4"),
                                    },
                                    Name: stringPtr("vc4"),
                                    Center: &x3d.SFVec3f{0.0, 1.43, -0.0458},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("hanim_c4"),
                                            },
                                            Name: stringPtr("c4"),
                                    },
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("hanim_vl5"),
                                },
                                Name: stringPtr("vl5"),
                                Center: &x3d.SFVec3f{0.0028, 1.0568, -0.0776},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("hanim_skullbase"),
                                        },
                                        Name: stringPtr("skullbase"),
                                        Center: &x3d.SFVec3f{0.0044, 1.6209, 0.0236},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("hanim_skull"),
                                                },
                                                Name: stringPtr("skull"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{0.0044, 1.6209, 0.0236},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("DiamondShape"),
                                                            },
                                                        },
                                                    },
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_skull_vertex_tip"),
                                                    },
                                                    Name: stringPtr("skull_vertex_tip"),
                                                    Translation: &x3d.SFVec3f{0.005, 1.7504, 0.0055},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_sellion_pt"),
                                                    },
                                                    Name: stringPtr("sellion_pt"),
                                                    Translation: &x3d.SFVec3f{0.0058, 1.6316, 0.0852},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_infraorbitale_pt"),
                                                    },
                                                    Name: stringPtr("r_infraorbitale_pt"),
                                                    Translation: &x3d.SFVec3f{-0.0237, 1.6171, 0.0752},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_infraorbitale_pt"),
                                                    },
                                                    Name: stringPtr("l_infraorbitale_pt"),
                                                    Translation: &x3d.SFVec3f{0.0341, 1.6171, 0.0752},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_supramenton_pt"),
                                                    },
                                                    Name: stringPtr("supramenton_pt"),
                                                    Translation: &x3d.SFVec3f{0.0061, 1.541, 0.0805},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_tragion_pt"),
                                                    },
                                                    Name: stringPtr("r_tragion_pt"),
                                                    Translation: &x3d.SFVec3f{-0.0646, 1.6347, 0.0302},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_r_gonion_pt"),
                                                    },
                                                    Name: stringPtr("r_gonion_pt"),
                                                    Translation: &x3d.SFVec3f{-0.052, 1.5529, 0.0347},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_tragion_pt"),
                                                    },
                                                    Name: stringPtr("l_tragion_pt"),
                                                    Translation: &x3d.SFVec3f{0.0739, 1.6348, 0.0282},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_l_gonion_pt"),
                                                    },
                                                    Name: stringPtr("l_gonion_pt"),
                                                    Translation: &x3d.SFVec3f{0.0631, 1.553, 0.033},
                                                },
                                                &x3d.HAnimSite{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("hanim_nuchale_pt"),
                                                    },
                                                    Name: stringPtr("nuchale_pt"),
                                                    Translation: &x3d.SFVec3f{0.0039, 1.5972, -0.0796},
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
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl1"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vc4"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_skullbase"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_vl5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_elbow"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_hip"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_knee"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsophalangeal_2"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_radiocarpal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_radiocarpal"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_shoulder"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_talocrural"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talocrural"),
                        },
                    },
                    Segments: []x3d.X3DNode{
                        &x3d.HAnimSegment{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("hanim_pelvis"),
                            },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l1"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_c4"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_skull"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_calf"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_calf"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_carpal"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_carpal"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_forearm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_forearm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_talus"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_talus"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_proximal_phalanx_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_proximal_phalanx_2"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_thigh"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_thigh"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_upperarm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_upperarm"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_skull_vertex_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_sellion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_supramenton_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_nuchale_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_calcaneus_posterior_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_calcaneus_posterior_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_dactylion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_dactylion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_femoral_lateral_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_femoral_lateral_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_femoral_medial_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_femoral_medial_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_gonion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_gonion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_hand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_hand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_humeral_lateral_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_humeral_lateral_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_humeral_medial_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_humeral_medial_epicondyle_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_infraorbitale_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_infraorbitale_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_knee_crease_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_knee_crease_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_lateral_malleolus_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_lateral_malleolus_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_medial_malleolus_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_medial_malleolus_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpal_phalanx_2_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpal_phalanx_2_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metacarpal_phalanx_5_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metacarpal_phalanx_5_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsal_phalanx_1_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_phalanx_1_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_metatarsal_phalanx_5_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_metatarsal_phalanx_5_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_middistal_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_middistal_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_olecranon_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_olecranon_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_radial_styloid_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_radial_styloid_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_radiale_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_radiale_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_sphyrion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_sphyrion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tarsal_distal_phalanx_2_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tarsal_distal_phalanx_2_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_tragion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_tragion_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_l_ulnar_styloid_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("hanim_r_ulnar_styloid_pt"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("hanim_DiamondManLOA1_view"),
                        },
                        Name: stringPtr("DiamondManLOA1_view"),
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
	filename := "../data/DiamondManLOA1.new.go.x3d"
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