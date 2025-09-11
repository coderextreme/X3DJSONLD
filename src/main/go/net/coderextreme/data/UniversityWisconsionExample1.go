
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
                    Content: stringPtr("BvhUniversityWisconsionExample1.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("BVH file conversion: *enter description here, short-sentence summaries preferred*"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("*enter name of original author here*"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("*enter date of initial version here*"),
            },
            &x3d.Meta{
                Name: stringPtr("translated"),
                Content: stringPtr("2 September 2023"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:39:28 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("BvhUniversityWIsconsionExample1.bvh"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://TODO/UniversityWIsconsionExample1.bvh"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.WorldInfo{
                    Title: stringPtr("BvhUniversityWisconsionExample1.x3d"),
                },
                &x3d.NavigationInfo{
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation"),
                        },
                    Children: []x3d.X3DNode{
                        Metadata: &x3d.MetadataSet{
                            Name: stringPtr("BvhToHAnimNameConversionTable"),
                            &x3d.MetadataString{
                                Name: stringPtr("ROOT_Hips"),
                                Reference: stringPtr("ROOT"),
                                Value: x3d.MFString{"humanoid_root", "sacrum"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("Chest"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"vl5", "l5"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("Neck"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"Neck", "vl5_to_Neck"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("Head"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"skullbase", "skull"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("HeadSite"),
                                Reference: stringPtr("Site"),
                                Value: x3d.MFString{"skullbase_tip"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftCollar"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftCollar", "vl5_to_LeftCollar"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftUpArm"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftUpArm", "LeftCollar_to_LeftUpArm"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftLowArm"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftLowArm", "LeftUpArm_to_LeftLowArm"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftHand"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftHand", "LeftLowArm_to_LeftHand"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftHandSite"),
                                Reference: stringPtr("Site"),
                                Value: x3d.MFString{"LeftHand_tip"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightCollar"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightCollar", "vl5_to_RightCollar"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightUpArm"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightUpArm", "RightCollar_to_RightUpArm"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightLowArm"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightLowArm", "RightUpArm_to_RightLowArm"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightHand"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightHand", "RightLowArm_to_RightHand"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightHandSite"),
                                Reference: stringPtr("Site"),
                                Value: x3d.MFString{"RightHand_tip"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftUpLeg"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftUpLeg", "humanoid_root_to_LeftUpLeg"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftLowLeg"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftLowLeg", "LeftUpLeg_to_LeftLowLeg"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftFoot"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"LeftFoot", "LeftLowLeg_to_LeftFoot"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("LeftFootSite"),
                                Reference: stringPtr("Site"),
                                Value: x3d.MFString{"LeftFoot_tip"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightUpLeg"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightUpLeg", "humanoid_root_to_RightUpLeg"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightLowLeg"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightLowLeg", "RightUpLeg_to_RightLowLeg"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightFoot"),
                                Reference: stringPtr("JOINT"),
                                Value: x3d.MFString{"RightFoot", "RightLowLeg_to_RightFoot"},
                            },
                            &x3d.MetadataString{
                                Name: stringPtr("RightFootSite"),
                                Reference: stringPtr("Site"),
                                Value: x3d.MFString{"RightFoot_tip"},
                            },
                        },
                    },
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("InitialPositionScaled"),
                        },
                        Translation: &x3d.SFVec3f{0.0, 1.244, 0.0},
                    Children: []x3d.X3DNode{
                        &x3d.Viewpoint{
                            Description: stringPtr("BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m"),
                            Position: &x3d.SFVec3f{0.0, 0.0, 8.0},
                        },
                        &x3d.Viewpoint{
                            Description: stringPtr("BvhUniversityWisconsionExample1 initial motion position"),
                            Position: &x3d.SFVec3f{0.803, 3.501, 16.836},
                        },
                        &x3d.Viewpoint{
                            Description: stringPtr("BvhUniversityWisconsionExample1 final motion position"),
                            Position: &x3d.SFVec3f{0.781, 3.51, 16.647},
                        },
                    },
                },
                &x3d.HAnimHumanoid{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("BvhUniversityWisconsionExample1_ROOT_Hips"),
                    },
                    Name: stringPtr("ROOT_Hips"),
                    Metadata: &x3d.MetadataSet{
                        Name: stringPtr("HAnimHumanoid.info"),
                        Reference: stringPtr("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                        &x3d.MetadataString{
                            Name: stringPtr("authorEmail"),
                            Value: x3d.MFString{"*TODO*"},
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("authorName"),
                            Value: x3d.MFString{"*TODO*"},
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("copyright"),
                            Value: x3d.MFString{"Copyright (c) 2023"},
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("humanoidVersion"),
                            Value: x3d.MFString{"*TODO*"},
                        },
                        &x3d.MetadataString{
                            Name: stringPtr("usageDescription"),
                            Value: x3d.MFString{"*TODO*"},
                        },
                    },
                    Skeleton: []x3d.X3DNode{
                        &x3d.HAnimJoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("BvhUniversityWisconsionExample1_humanoid_root"),
                            },
                            Name: stringPtr("humanoid_root"),
                            Translation: &x3d.SFVec3f{0.802015, 3.501403, 8.827538},
                            Rotation: &x3d.SFRotation{-0.0121638855382872, -0.991204975223845, -0.13177532766079, 2.88049961692417},
                            Scale: &x3d.SFVec3f{0.1, 0.1, 0.1},
                            Children: []x3d.X3DNode{
                                &x3d.HAnimSegment{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BvhUniversityWisconsionExample1_sacrum"),
                                    },
                                    Name: stringPtr("sacrum"),
                                    &x3d.Switch{
                                        WhichChoice: int32Ptr(0),
                                        &x3d.Group{
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    Description: stringPtr("HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum"),
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HAnimRootShape"),
                                                    },
                                                    Appearance: &x3d.Appearance{
                                                        Material: &x3d.Material{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("HAnimRootMaterial"),
                                                            },
                                                            DiffuseColor: &x3d.SFColor{0.8, 0.0, 0.0},
                                                            Transparency: floatPtr(0.3),
                                                        },
                                                    },
                                                    Geometry: &x3d.Sphere{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("HAnimJointSphere"),
                                                        },
                                                        Radius: floatPtr(0.254),
                                                    },
                                                },
                                            },
                                        },
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HAnimJointShape"),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HAnimJointMaterial"),
                                                    },
                                                    DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.8},
                                                    Transparency: floatPtr(0.3),
                                                },
                                            },
                                            Geometry: &x3d.Sphere{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("HAnimJointSphere"),
                                                },
                                            },
                                        },
                                        &x3d.Shape{
                                            Geometry: &x3d.LineSet{
                                                VertexCount: []int32{2},
                                                Color: &x3d.ColorRGBA{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HAnimSegmentLineColorRGBA"),
                                                    },
                                                    Color: &x3d.MFColorRGBA{[4]float32{1.0,1.0,0.0,1.0},[4]float32{1.0,1.0,0.0,0.1}},
                                                },
                                                Coord: &x3d.Coordinate{
                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                                                },
                                            },
                                        },
                                        &x3d.Shape{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("HAnimSiteShape"),
                                            },
                                            Appearance: &x3d.Appearance{
                                                Material: &x3d.Material{
                                                    DiffuseColor: &x3d.SFColor{1.0, 0.5, 0.0},
                                                    Transparency: floatPtr(0.3),
                                                },
                                            },
                                            Geometry: &x3d.IndexedFaceSet{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("DiamondIFS"),
                                                },
                                                Solid: boolPtr(false),
                                                CreaseAngle: floatPtr(0.5),
                                                CoordIndex: []int32{0, 1, 2, -1, 0, 2, 3, -1, 0, 3, 4, -1, 0, 4, 1, -1, 5, 2, 1, -1, 5, 3, 2, -1, 5, 4, 3, -1, 5, 1, 4, -1},
                                                Coord: &x3d.Coordinate{
                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.254,0.0},[3]float32{-0.254,0.0,0.0},[3]float32{0.0,0.0,0.254},[3]float32{0.254,0.0,0.0},[3]float32{0.0,0.0,-0.254},[3]float32{0.0,-0.254,0.0}},
                                                },
                                            },
                                        },
                                        &x3d.Shape{
                                            Geometry: &x3d.LineSet{
                                                VertexCount: []int32{2},
                                                Color: &x3d.ColorRGBA{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("HAnimSiteLineColorRGBA"),
                                                    },
                                                    Color: &x3d.MFColorRGBA{[4]float32{1.0,0.5,0.0,1.0},[4]float32{1.0,0.5,0.0,0.1}},
                                                },
                                                Coord: &x3d.Coordinate{
                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Shape{
                                        Geometry: &x3d.LineSet{
                                            VertexCount: []int32{2},
                                            Color: &x3d.ColorRGBA{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                },
                                            },
                                            Coord: &x3d.Coordinate{
                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,5.21,0.0}},
                                            },
                                        },
                                    },
                                    &x3d.Shape{
                                        Geometry: &x3d.LineSet{
                                            VertexCount: []int32{2},
                                            Color: &x3d.ColorRGBA{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                },
                                            },
                                            Coord: &x3d.Coordinate{
                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{3.91,0.0,0.0}},
                                            },
                                        },
                                    },
                                    &x3d.Shape{
                                        Geometry: &x3d.LineSet{
                                            VertexCount: []int32{2},
                                            Color: &x3d.ColorRGBA{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                },
                                            },
                                            Coord: &x3d.Coordinate{
                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{-3.91,0.0,0.0}},
                                            },
                                        },
                                    },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.HAnimJoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("BvhUniversityWisconsionExample1_vl5"),
                                    },
                                    Name: stringPtr("vl5"),
                                    Rotation: &x3d.SFRotation{0.910507263162413, -0.405594212761398, 0.0804354294011948, 0.807985141383282},
                                    Center: &x3d.SFVec3f{0.0, 5.21, 0.0},
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimSegment{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("BvhUniversityWisconsionExample1_l5"),
                                            },
                                            Name: stringPtr("l5"),
                                            &x3d.Transform{
                                                    Translation: &x3d.SFVec3f{0.0, 5.21, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.TouchSensor{
                                                        Description: stringPtr("HAnimJoint Chest vl5, HAnimSegment l5"),
                                                    },
                                                    &x3d.Shape{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            USE: stringPtr("HAnimJointShape"),
                                                        },
                                                    },
                                                    &x3d.Shape{
                                                        Geometry: &x3d.LineSet{
                                                            VertexCount: []int32{2},
                                                            Color: &x3d.ColorRGBA{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                },
                                                            },
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,18.65,0.0}},
                                                            },
                                                        },
                                                    },
                                                    &x3d.Shape{
                                                        Geometry: &x3d.LineSet{
                                                            VertexCount: []int32{2},
                                                            Color: &x3d.ColorRGBA{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                },
                                                            },
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{1.12,16.23,1.87}},
                                                            },
                                                        },
                                                    },
                                                    &x3d.Shape{
                                                        Geometry: &x3d.LineSet{
                                                            VertexCount: []int32{2},
                                                            Color: &x3d.ColorRGBA{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                },
                                                            },
                                                            Coord: &x3d.Coordinate{
                                                                Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{-1.12,16.23,1.87}},
                                                            },
                                                        },
                                                    },
                                                },
                                            },
                                    },
                                    Children: []x3d.X3DNode{
                                        &x3d.HAnimJoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("BvhUniversityWisconsionExample1_Neck"),
                                            },
                                            Name: stringPtr("Neck"),
                                            Rotation: &x3d.SFRotation{0.983407521138582, 0.0676225935538375, 0.168335475194986, 0.775929618481987},
                                            Center: &x3d.SFVec3f{0.0, 23.86, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimSegment{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("BvhUniversityWisconsionExample1_vl5_to_Neck"),
                                                    },
                                                    Name: stringPtr("vl5_to_Neck"),
                                                    &x3d.Transform{
                                                            Translation: &x3d.SFVec3f{0.0, 23.86, 0.0},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.TouchSensor{
                                                                Description: stringPtr("HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck"),
                                                            },
                                                            &x3d.Shape{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    USE: stringPtr("HAnimJointShape"),
                                                                },
                                                            },
                                                            &x3d.Shape{
                                                                Geometry: &x3d.LineSet{
                                                                    VertexCount: []int32{2},
                                                                    Color: &x3d.ColorRGBA{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                        },
                                                                    },
                                                                    Coord: &x3d.Coordinate{
                                                                        Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,5.45,0.0}},
                                                                    },
                                                                },
                                                            },
                                                        },
                                                    },
                                            },
                                            Children: []x3d.X3DNode{
                                                &x3d.HAnimJoint{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("BvhUniversityWisconsionExample1_skullbase"),
                                                    },
                                                    Name: stringPtr("skullbase"),
                                                    Rotation: &x3d.SFRotation{-0.977888980171913, 0.162210480634407, -0.131988266261404, 0.735915343217434},
                                                    Center: &x3d.SFVec3f{0.0, 29.31, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.HAnimSegment{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                DEF: stringPtr("BvhUniversityWisconsionExample1_skull"),
                                                            },
                                                            Name: stringPtr("skull"),
                                                            &x3d.Transform{
                                                                    Translation: &x3d.SFVec3f{0.0, 29.31, 0.0},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSite{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_skull_tip"),
                                                                        },
                                                                        Name: stringPtr("skull_tip"),
                                                                        Translation: &x3d.SFVec3f{0.0, 3.87, 0.0},
                                                                        &x3d.TouchSensor{
                                                                            Description: stringPtr("HAnimSite skull_tip"),
                                                                        },
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimSiteShape"),
                                                                            },
                                                                        },
                                                                        &x3d.Shape{
                                                                            Geometry: &x3d.LineSet{
                                                                                VertexCount: []int32{2},
                                                                                Color: &x3d.ColorRGBA{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimSiteLineColorRGBA"),
                                                                                    },
                                                                                },
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,-3.87,0.0},[3]float32{0.0,0.0,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                    &x3d.TouchSensor{
                                                                        Description: stringPtr("HAnimJoint Head skullbase, HAnimSegment skull"),
                                                                    },
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("HAnimJointShape"),
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                    },
                                            },
                                    },
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BvhUniversityWisconsionExample1_LeftCollar"),
                                        },
                                        Name: stringPtr("LeftCollar"),
                                        Rotation: &x3d.SFRotation{-0.0615426133135645, 0.686583531582492, 0.724441551062791, 0.25194967134165},
                                        Center: &x3d.SFVec3f{1.12, 21.44, 1.87},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"),
                                                },
                                                Name: stringPtr("vl5_to_LeftCollar"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{1.12, 21.44, 1.87},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.TouchSensor{
                                                            Description: stringPtr("HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar"),
                                                        },
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimJointShape"),
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Geometry: &x3d.LineSet{
                                                                VertexCount: []int32{2},
                                                                Color: &x3d.ColorRGBA{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                    },
                                                                },
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{5.54,0.0,0.0}},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_LeftUpArm"),
                                                },
                                                Name: stringPtr("LeftUpArm"),
                                                Rotation: &x3d.SFRotation{-0.149377489336045, -0.21341686693693, 0.965473773122027, 1.74846216561223},
                                                Center: &x3d.SFVec3f{6.66, 21.44, 1.87},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"),
                                                        },
                                                        Name: stringPtr("LeftCollar_to_LeftUpArm"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{6.66, 21.44, 1.87},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.TouchSensor{
                                                                    Description: stringPtr("HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm"),
                                                                },
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
                                                                },
                                                                &x3d.Shape{
                                                                    Geometry: &x3d.LineSet{
                                                                        VertexCount: []int32{2},
                                                                        Color: &x3d.ColorRGBA{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                            },
                                                                        },
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-11.96,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm"),
                                                        },
                                                        Name: stringPtr("LeftLowArm"),
                                                        Rotation: &x3d.SFRotation{-0.994137467250751, -0.0463952230935584, -0.097663603672814, 1.60894102120038},
                                                        Center: &x3d.SFVec3f{6.66, 9.48, 1.87},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"),
                                                                },
                                                                Name: stringPtr("LeftUpArm_to_LeftLowArm"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{6.66, 9.48, 1.87},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.TouchSensor{
                                                                            Description: stringPtr("HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm"),
                                                                        },
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimJointShape"),
                                                                            },
                                                                        },
                                                                        &x3d.Shape{
                                                                            Geometry: &x3d.LineSet{
                                                                                VertexCount: []int32{2},
                                                                                Color: &x3d.ColorRGBA{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                                    },
                                                                                },
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-9.93,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_LeftHand"),
                                                                },
                                                                Name: stringPtr("LeftHand"),
                                                                Rotation: &x3d.SFRotation{0.065212349445372, 0.000433943326807492, 0.997871314937287, 0.0121194102707702},
                                                                Center: &x3d.SFVec3f{6.66, -0.45, 1.87},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"),
                                                                        },
                                                                        Name: stringPtr("LeftLowArm_to_LeftHand"),
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{6.66, -0.45, 1.87},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSite{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"),
                                                                                    },
                                                                                    Name: stringPtr("LeftLowArm_to_LeftHand_tip"),
                                                                                    Translation: &x3d.SFVec3f{0.0, -7.0, 0.0},
                                                                                    &x3d.TouchSensor{
                                                                                        Description: stringPtr("HAnimSite LeftLowArm_to_LeftHand_tip"),
                                                                                    },
                                                                                    &x3d.Shape{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            USE: stringPtr("HAnimSiteShape"),
                                                                                        },
                                                                                    },
                                                                                    &x3d.Shape{
                                                                                        Geometry: &x3d.LineSet{
                                                                                            VertexCount: []int32{2},
                                                                                            Color: &x3d.ColorRGBA{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    USE: stringPtr("HAnimSiteLineColorRGBA"),
                                                                                                },
                                                                                            },
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{0.0,7.0,0.0},[3]float32{0.0,0.0,0.0}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                                &x3d.TouchSensor{
                                                                                    Description: stringPtr("HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand"),
                                                                                },
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimJointShape"),
                                                                                    },
                                                                                },
                                                                            },
                                                                        },
                                                                },
                                                        },
                                                },
                                        },
                                    },
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BvhUniversityWisconsionExample1_RightCollar"),
                                        },
                                        Name: stringPtr("RightCollar"),
                                        Rotation: &x3d.SFRotation{-0.0738191673893235, -0.621226448190599, -0.780146416126123, 0.307776665262532},
                                        Center: &x3d.SFVec3f{-1.12, 21.44, 1.87},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_vl5_to_RightCollar"),
                                                },
                                                Name: stringPtr("vl5_to_RightCollar"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-1.12, 21.44, 1.87},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.TouchSensor{
                                                            Description: stringPtr("HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar"),
                                                        },
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimJointShape"),
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Geometry: &x3d.LineSet{
                                                                VertexCount: []int32{2},
                                                                Color: &x3d.ColorRGBA{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                    },
                                                                },
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{-6.07,0.0,0.0}},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_RightUpArm"),
                                                },
                                                Name: stringPtr("RightUpArm"),
                                                Rotation: &x3d.SFRotation{-0.683936711705761, -0.604262230308461, -0.408775893863318, 2.04691465079379},
                                                Center: &x3d.SFVec3f{-7.19, 21.44, 1.87},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"),
                                                        },
                                                        Name: stringPtr("RightCollar_to_RightUpArm"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-7.19, 21.44, 1.87},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.TouchSensor{
                                                                    Description: stringPtr("HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm"),
                                                                },
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
                                                                },
                                                                &x3d.Shape{
                                                                    Geometry: &x3d.LineSet{
                                                                        VertexCount: []int32{2},
                                                                        Color: &x3d.ColorRGBA{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                            },
                                                                        },
                                                                        Coord: &x3d.Coordinate{
                                                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-11.82,0.0}},
                                                                        },
                                                                    },
                                                                },
                                                            },
                                                        },
                                                },
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimJoint{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_RightLowArm"),
                                                        },
                                                        Name: stringPtr("RightLowArm"),
                                                        Rotation: &x3d.SFRotation{-0.938014080417283, 0.273187677852797, 0.213302783873807, 1.40357728766554},
                                                        Center: &x3d.SFVec3f{-7.19, 9.62, 1.87},
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimSegment{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"),
                                                                },
                                                                Name: stringPtr("RightUpArm_to_RightLowArm"),
                                                                &x3d.Transform{
                                                                        Translation: &x3d.SFVec3f{-7.19, 9.62, 1.87},
                                                                    Children: []x3d.X3DNode{
                                                                        &x3d.TouchSensor{
                                                                            Description: stringPtr("HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm"),
                                                                        },
                                                                        &x3d.Shape{
                                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                                USE: stringPtr("HAnimJointShape"),
                                                                            },
                                                                        },
                                                                        &x3d.Shape{
                                                                            Geometry: &x3d.LineSet{
                                                                                VertexCount: []int32{2},
                                                                                Color: &x3d.ColorRGBA{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                                    },
                                                                                },
                                                                                Coord: &x3d.Coordinate{
                                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-10.65,0.0}},
                                                                                },
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                        },
                                                        Children: []x3d.X3DNode{
                                                            &x3d.HAnimJoint{
                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_RightHand"),
                                                                },
                                                                Name: stringPtr("RightHand"),
                                                                Rotation: &x3d.SFRotation{0.407586687985887, 0.00622940320419182, -0.913145271198675, 0.0300252765217404},
                                                                Center: &x3d.SFVec3f{-7.19, -1.03, 1.87},
                                                                Children: []x3d.X3DNode{
                                                                    &x3d.HAnimSegment{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"),
                                                                        },
                                                                        Name: stringPtr("RightLowArm_to_RightHand"),
                                                                        &x3d.Transform{
                                                                                Translation: &x3d.SFVec3f{-7.19, -1.03, 1.87},
                                                                            Children: []x3d.X3DNode{
                                                                                &x3d.HAnimSite{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        DEF: stringPtr("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"),
                                                                                    },
                                                                                    Name: stringPtr("RightLowArm_to_RightHand_tip"),
                                                                                    Translation: &x3d.SFVec3f{0.0, -7.0, 0.0},
                                                                                    &x3d.TouchSensor{
                                                                                        Description: stringPtr("HAnimSite RightLowArm_to_RightHand_tip"),
                                                                                    },
                                                                                    &x3d.Shape{
                                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                                            USE: stringPtr("HAnimSiteShape"),
                                                                                        },
                                                                                    },
                                                                                    &x3d.Shape{
                                                                                        Geometry: &x3d.LineSet{
                                                                                            VertexCount: []int32{2},
                                                                                            Color: &x3d.ColorRGBA{
                                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                                    USE: stringPtr("HAnimSiteLineColorRGBA"),
                                                                                                },
                                                                                            },
                                                                                            Coord: &x3d.Coordinate{
                                                                                                Point: &x3d.MFVec3f{[3]float32{0.0,7.0,0.0},[3]float32{0.0,0.0,0.0}},
                                                                                            },
                                                                                        },
                                                                                    },
                                                                                },
                                                                                &x3d.TouchSensor{
                                                                                    Description: stringPtr("HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand"),
                                                                                },
                                                                                &x3d.Shape{
                                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                                        USE: stringPtr("HAnimJointShape"),
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
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("BvhUniversityWisconsionExample1_LeftUpLeg"),
                                },
                                Name: stringPtr("LeftUpLeg"),
                                Rotation: &x3d.SFRotation{0.857082968362413, -0.103346889758415, 0.504706058731554, 0.469212828757933},
                                Center: &x3d.SFVec3f{3.91, 0.0, 0.0},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"),
                                        },
                                        Name: stringPtr("humanoid_root_to_LeftUpLeg"),
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{3.91, 0.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    Description: stringPtr("HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg"),
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("HAnimJointShape"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Geometry: &x3d.LineSet{
                                                        VertexCount: []int32{2},
                                                        Color: &x3d.ColorRGBA{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                            },
                                                        },
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-18.34,0.0}},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg"),
                                        },
                                        Name: stringPtr("LeftLowLeg"),
                                        Rotation: &x3d.SFRotation{0.922082164739725, 0.233268991730257, 0.308788048612723, 0.933945968686721},
                                        Center: &x3d.SFVec3f{3.91, -18.34, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"),
                                                },
                                                Name: stringPtr("LeftUpLeg_to_LeftLowLeg"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{3.91, -18.34, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.TouchSensor{
                                                            Description: stringPtr("HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg"),
                                                        },
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimJointShape"),
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Geometry: &x3d.LineSet{
                                                                VertexCount: []int32{2},
                                                                Color: &x3d.ColorRGBA{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                    },
                                                                },
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-17.37,0.0}},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_LeftFoot"),
                                                },
                                                Name: stringPtr("LeftFoot"),
                                                Rotation: &x3d.SFRotation{-0.999999999998907, 0.0, 0.0, 0.0177285045623973},
                                                Center: &x3d.SFVec3f{3.91, -35.71, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"),
                                                        },
                                                        Name: stringPtr("LeftLowLeg_to_LeftFoot"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{3.91, -35.71, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"),
                                                                    },
                                                                    Name: stringPtr("LeftLowLeg_to_LeftFoot_tip"),
                                                                    Translation: &x3d.SFVec3f{0.0, -3.46, 0.0},
                                                                    &x3d.TouchSensor{
                                                                        Description: stringPtr("HAnimSite LeftLowLeg_to_LeftFoot_tip"),
                                                                    },
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("HAnimSiteShape"),
                                                                        },
                                                                    },
                                                                    &x3d.Shape{
                                                                        Geometry: &x3d.LineSet{
                                                                            VertexCount: []int32{2},
                                                                            Color: &x3d.ColorRGBA{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("HAnimSiteLineColorRGBA"),
                                                                                },
                                                                            },
                                                                            Coord: &x3d.Coordinate{
                                                                                Point: &x3d.MFVec3f{[3]float32{0.0,3.46,0.0},[3]float32{0.0,0.0,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.TouchSensor{
                                                                    Description: stringPtr("HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot"),
                                                                },
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
                                                                },
                                                            },
                                                        },
                                                },
                                        },
                                },
                            },
                            &x3d.HAnimJoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("BvhUniversityWisconsionExample1_RightUpLeg"),
                                },
                                Name: stringPtr("RightUpLeg"),
                                Rotation: &x3d.SFRotation{-0.553383779944626, -0.0794239684763508, -0.829131006129707, 0.342491299585044},
                                Center: &x3d.SFVec3f{-3.91, 0.0, 0.0},
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimSegment{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"),
                                        },
                                        Name: stringPtr("humanoid_root_to_RightUpLeg"),
                                        &x3d.Transform{
                                                Translation: &x3d.SFVec3f{-3.91, 0.0, 0.0},
                                            Children: []x3d.X3DNode{
                                                &x3d.TouchSensor{
                                                    Description: stringPtr("HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg"),
                                                },
                                                &x3d.Shape{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        USE: stringPtr("HAnimJointShape"),
                                                    },
                                                },
                                                &x3d.Shape{
                                                    Geometry: &x3d.LineSet{
                                                        VertexCount: []int32{2},
                                                        Color: &x3d.ColorRGBA{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                            },
                                                        },
                                                        Coord: &x3d.Coordinate{
                                                            Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-17.63,0.0}},
                                                        },
                                                    },
                                                },
                                            },
                                        },
                                },
                                Children: []x3d.X3DNode{
                                    &x3d.HAnimJoint{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg"),
                                        },
                                        Name: stringPtr("RightLowLeg"),
                                        Rotation: &x3d.SFRotation{0.969931565830738, -0.23189511653326, 0.0738743022515824, 0.975243240839133},
                                        Center: &x3d.SFVec3f{-3.91, -17.63, 0.0},
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimSegment{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"),
                                                },
                                                Name: stringPtr("RightUpLeg_to_RightLowLeg"),
                                                &x3d.Transform{
                                                        Translation: &x3d.SFVec3f{-3.91, -17.63, 0.0},
                                                    Children: []x3d.X3DNode{
                                                        &x3d.TouchSensor{
                                                            Description: stringPtr("HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg"),
                                                        },
                                                        &x3d.Shape{
                                                            CoreX3DNode: x3d.CoreX3DNode{
                                                                USE: stringPtr("HAnimJointShape"),
                                                            },
                                                        },
                                                        &x3d.Shape{
                                                            Geometry: &x3d.LineSet{
                                                                VertexCount: []int32{2},
                                                                Color: &x3d.ColorRGBA{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimSegmentLineColorRGBA"),
                                                                    },
                                                                },
                                                                Coord: &x3d.Coordinate{
                                                                    Point: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,-17.14,0.0}},
                                                                },
                                                            },
                                                        },
                                                    },
                                                },
                                        },
                                        Children: []x3d.X3DNode{
                                            &x3d.HAnimJoint{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    DEF: stringPtr("BvhUniversityWisconsionExample1_RightFoot"),
                                                },
                                                Name: stringPtr("RightFoot"),
                                                Rotation: &x3d.SFRotation{-1.0, 0.0, 0.0, 0.419549149322508},
                                                Center: &x3d.SFVec3f{-3.91, -34.77, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.HAnimSegment{
                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                            DEF: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"),
                                                        },
                                                        Name: stringPtr("RightLowLeg_to_RightFoot"),
                                                        &x3d.Transform{
                                                                Translation: &x3d.SFVec3f{-3.91, -34.77, 0.0},
                                                            Children: []x3d.X3DNode{
                                                                &x3d.HAnimSite{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"),
                                                                    },
                                                                    Name: stringPtr("RightLowLeg_to_RightFoot_tip"),
                                                                    Translation: &x3d.SFVec3f{0.0, -3.75, 0.0},
                                                                    &x3d.TouchSensor{
                                                                        Description: stringPtr("HAnimSite RightLowLeg_to_RightFoot_tip"),
                                                                    },
                                                                    &x3d.Shape{
                                                                        CoreX3DNode: x3d.CoreX3DNode{
                                                                            USE: stringPtr("HAnimSiteShape"),
                                                                        },
                                                                    },
                                                                    &x3d.Shape{
                                                                        Geometry: &x3d.LineSet{
                                                                            VertexCount: []int32{2},
                                                                            Color: &x3d.ColorRGBA{
                                                                                CoreX3DNode: x3d.CoreX3DNode{
                                                                                    USE: stringPtr("HAnimSiteLineColorRGBA"),
                                                                                },
                                                                            },
                                                                            Coord: &x3d.Coordinate{
                                                                                Point: &x3d.MFVec3f{[3]float32{0.0,3.75,0.0},[3]float32{0.0,0.0,0.0}},
                                                                            },
                                                                        },
                                                                    },
                                                                },
                                                                &x3d.TouchSensor{
                                                                    Description: stringPtr("HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot"),
                                                                },
                                                                &x3d.Shape{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("HAnimJointShape"),
                                                                    },
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
                                USE: stringPtr("BvhUniversityWisconsionExample1_humanoid_root"),
                            },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_vl5"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_Neck"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_skullbase"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftCollar"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftUpArm"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftHand"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightCollar"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightUpArm"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightLowArm"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightHand"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftUpLeg"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftFoot"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightUpLeg"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg"),
                        },
                    },
                    &x3d.HAnimJoint{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightFoot"),
                        },
                    },
                    Segments: []x3d.X3DNode{
                        &x3d.HAnimSegment{
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("BvhUniversityWisconsionExample1_sacrum"),
                            },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_l5"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_vl5_to_Neck"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_skull"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_vl5_to_RightCollar"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"),
                        },
                    },
                    &x3d.HAnimSegment{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_view"),
                        },
                        Name: stringPtr("humanoid_root_view"),
                        &x3d.Viewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_viewpoint"),
                            },
                            Description: stringPtr("BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center"),
                            Position: &x3d.SFVec3f{0.0, 0.0, 80.0},
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_skull_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"),
                        },
                    },
                    &x3d.HAnimSite{
                        CoreX3DNode: x3d.CoreX3DNode{
                            USE: stringPtr("BvhUniversityWisconsionExample1_humanoid_root_view"),
                        },
                    },
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("BvhUniversityWisconsionExample1_MotionGroup"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("RealTimer"),
                            },
                            CycleInterval: doublePtr(0.067),
                            Loop: boolPtr(true),
                        },
                        &x3d.TimeSensor{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("StepTimer"),
                            },
                            Enabled: boolPtr(false),
                            CycleInterval: doublePtr(2.0),
                            Loop: boolPtr(true),
                        },
                        &x3d.ScalarInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("FrameStepper"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0, 1.0},
                            KeyValue: x3d.MFFloat{0.0, 0.0, 1.0},
                        },
                        &x3d.PositionInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator0_humanoid_root"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: &x3d.MFVec3f{[3]float32{0.803,3.501,8.836},[3]float32{0.781,3.51,8.647}},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator1_humanoid_root"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.0118, -0.9911, -0.1325, 2.8785, -0.0199, -0.993, -0.1163, 2.9232},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator2_vl5"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.9093, -0.4082, 0.0806, 0.8073, 0.9336, -0.3501, 0.0768, 0.824},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator3_Neck"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.9834, 0.0677, 0.1685, 0.7761, 0.9841, 0.066, 0.1649, 0.7723},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator4_skullbase"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.9778, 0.1629, -0.1317, 0.736, -0.9794, 0.1474, -0.1381, 0.7342},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator5_LeftCollar"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.0626, 0.7102, 0.7012, 0.2502, -0.0355, 0.2109, 0.9769, 0.3411},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator6_LeftUpArm"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.1561, -0.2157, 0.9639, 1.7536, 0.0022, -0.1597, 0.9872, 1.6521},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator7_LeftLowArm"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.9933, -0.0526, -0.103, 1.6066, -0.9965, 0.0822, 0.0138, 1.6744},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator8_LeftHand"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.0434, 0.0003, 0.9991, 0.0121, 0.4673, 0.0029, 0.8841, 0.0138},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator9_RightCollar"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.0734, -0.5964, -0.7993, 0.3057, -0.07, -0.9291, -0.3633, 0.4091},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator10_RightUpArm"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.6801, -0.6074, -0.4106, 2.0536, -0.765, -0.5303, -0.3654, 1.9107},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator11_RightLowArm"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.9378, 0.2739, 0.2135, 1.4058, -0.9433, 0.2577, 0.2091, 1.3563},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator12_RightHand"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.4025, 0.0061, -0.9154, 0.0299, 0.5037, 0.0087, -0.8638, 0.0329},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator13_LeftUpLeg"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.8595, -0.1039, 0.5004, 0.4748, 0.7784, -0.0864, 0.6217, 0.3536},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator14_LeftLowLeg"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.9184, 0.2378, 0.3162, 0.9291, 0.9762, 0.1432, 0.1627, 1.0525},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator15_LeftFoot"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.0199, 1.0, 0.0, 0.0, 0.0286},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator16_RightUpLeg"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-0.5548, -0.0795, -0.8282, 0.3423, -0.5234, -0.0778, -0.8485, 0.3468},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator17_RightLowLeg"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{0.9694, -0.234, 0.0739, 0.9755, 0.9797, -0.1864, 0.0732, 0.9707},
                        },
                        &x3d.OrientationInterpolator{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("Interpolator18_RightFoot"),
                            },
                            Key: x3d.MFFloat{0.0, 1.0},
                            KeyValue: x3d.MFRotation{-1.0, 0.0, 0.0, 0.418, -1.0, 0.0, 0.0, 0.4526},
                        },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("StepTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("FrameStepper"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator0_humanoid_root"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator0_humanoid_root"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator0_humanoid_root"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_humanoid_root"),
                    ToField: stringPtr("set_translation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator1_humanoid_root"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator1_humanoid_root"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator1_humanoid_root"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_humanoid_root"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator2_vl5"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator2_vl5"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator2_vl5"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_vl5"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator3_Neck"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator3_Neck"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator3_Neck"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_Neck"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator4_skullbase"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator4_skullbase"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator4_skullbase"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_skullbase"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator5_LeftCollar"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator5_LeftCollar"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator5_LeftCollar"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftCollar"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator6_LeftUpArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator6_LeftUpArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator6_LeftUpArm"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftUpArm"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator7_LeftLowArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator7_LeftLowArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator7_LeftLowArm"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftLowArm"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator8_LeftHand"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator8_LeftHand"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator8_LeftHand"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftHand"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator9_RightCollar"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator9_RightCollar"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator9_RightCollar"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightCollar"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator10_RightUpArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator10_RightUpArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator10_RightUpArm"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightUpArm"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator11_RightLowArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator11_RightLowArm"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator11_RightLowArm"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightLowArm"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator12_RightHand"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator12_RightHand"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator12_RightHand"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightHand"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator13_LeftUpLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator13_LeftUpLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator13_LeftUpLeg"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftUpLeg"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator14_LeftLowLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator14_LeftLowLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator14_LeftLowLeg"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftLowLeg"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator15_LeftFoot"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator15_LeftFoot"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator15_LeftFoot"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_LeftFoot"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator16_RightUpLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator16_RightUpLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator16_RightUpLeg"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightUpLeg"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator17_RightLowLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator17_RightLowLeg"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator17_RightLowLeg"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightLowLeg"),
                    ToField: stringPtr("set_rotation"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("RealTimer"),
                    FromField: stringPtr("fraction_changed"),
                    ToNode: stringPtr("Interpolator18_RightFoot"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("FrameStepper"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("Interpolator18_RightFoot"),
                    ToField: stringPtr("set_fraction"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("Interpolator18_RightFoot"),
                    FromField: stringPtr("value_changed"),
                    ToNode: stringPtr("BvhUniversityWisconsionExample1_RightFoot"),
                    ToField: stringPtr("set_rotation"),
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
	filename := "../data/UniversityWisconsionExample1.new.go.x3d"
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