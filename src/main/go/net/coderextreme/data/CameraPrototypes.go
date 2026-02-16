
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
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("CameraPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman and Jeff Weekley"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("16 March 2009"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("25 October 2016"),
            },
            &x3d.Meta{
                Name: stringPtr("TODO"),
                Content: stringPtr("Schematron rules, backed up by initialize() checks"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("BeyondViewpointCameraNodesWeb3D2009.pdf"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("Camera nodes for Viewpoint navigation control"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("CameraExamples.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("../license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
//=============== Camera ==============
                &x3d.ProtoDeclare{
                    Name: stringPtr("Camera"),
                    Appinfo: stringPtr("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."),
                    ProtoInterface: &x3d.ProtoInterface{
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("description"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("Text description to be displayed for this Camera"),
                                Type: stringPtr("SFString"),
                        },
                        &x3d.Field{
                            Name: stringPtr("position"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 0 10"),
                        },
                        &x3d.Field{
                            Name: stringPtr("orientation"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"),
                            Type: stringPtr("SFRotation"),
                            Value: stringPtr("0 0 1 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("fieldOfView"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("pi/4"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0.7854"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_fraction"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("input fraction drives interpolators"),
                            Type: stringPtr("SFFloat"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_bind"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("input event binds or unbinds this Camera"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("bindTime"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("output event indicates when this Camera is bound"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isBound"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("output event indicates whether this Camera is bound or unbound"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("nearClipPlane"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0.25"),
                        },
                        &x3d.Field{
                            Name: stringPtr("farClipPlane"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("shots"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Array of CameraShot nodes which in turn contain CameraMovement nodes"),
                            Type: stringPtr("MFNode"),
//initialization nodes (if any) go here
                        },
                        &x3d.Field{
                            Name: stringPtr("headlight"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Whether camera headlight is on or off"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("headlightColor"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Camera headlight color"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("1 1 1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("headlightIntensity"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Camera headlight intensity"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("filterColor"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Camera filter color that modifies virtual lens capture"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("1 1 1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("filterTransparency"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Camera filter transparency that modifies virtual lens capture"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("upVector"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("upVector changes modify camera orientation (and possibly vice versa)"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 1 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("fStop"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("5.6"),
                        },
                        &x3d.Field{
                            Name: stringPtr("focusDistance"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("10"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isActive"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("totalDuration"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("offlineRender"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("OfflineRender node"),
                            Type: stringPtr("SFNode"),
//initialization node (if any) goes here
                        },
                        &x3d.Field{
                            Name: stringPtr("traceEnabled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Viewpoint{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraViewpoint"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("description"),
                                            ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("position"),
                                        ProtoField: stringPtr("position"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("orientation"),
                                        ProtoField: stringPtr("orientation"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("fieldOfView"),
                                        ProtoField: stringPtr("fieldOfView"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_bind"),
                                        ProtoField: stringPtr("set_bind"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("bindTime"),
                                        ProtoField: stringPtr("bindTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isBound"),
                                        ProtoField: stringPtr("isBound"),
                                    },
                                    },
                                },
                            },
//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
                            &x3d.NavigationInfo{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraNavInfo"),
                                },
                                Type: x3d.MFString{"EXAMINE", "FLY", "ANY"},
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("set_bind"),
                                            ProtoField: stringPtr("set_bind"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("headlight"),
                                        ProtoField: stringPtr("headlight"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("visibilityLimit"),
                                        ProtoField: stringPtr("farClipPlane"),
                                    },
//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
                                    },
                                },
                            },
//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
                            &x3d.DirectionalLight{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraDirectionalLight"),
                                },
                                Global: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("on"),
                                            ProtoField: stringPtr("headlight"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("color"),
                                        ProtoField: stringPtr("headlightColor"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("intensity"),
                                        ProtoField: stringPtr("headlightIntensity"),
                                    },
                                    },
                                },
//TODO confirm other default field values match NavigationInfo spec
                            },
                            &x3d.PositionInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraPositionInterpolator"),
                                },
                                Key: x3d.MFFloat{0.0, 1.0},
                                KeyValue: &x3d.MFVec3f{[3]float32{0.0,0.0,0.0},[3]float32{0.0,0.0,0.0}},
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("set_fraction"),
                                            ProtoField: stringPtr("set_fraction"),
                                    },
                                    },
                                },
                            },
                            &x3d.OrientationInterpolator{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraOrientationInterpolator"),
                                },
                                Key: x3d.MFFloat{0.0, 1.0},
                                KeyValue: x3d.MFRotation{0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0},
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("set_fraction"),
                                            ProtoField: stringPtr("set_fraction"),
                                    },
                                    },
                                },
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("value_changed"),
                                FromNode: stringPtr("CameraPositionInterpolator"),
                                ToField: stringPtr("position"),
                                ToNode: stringPtr("CameraViewpoint"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("value_changed"),
                                FromNode: stringPtr("CameraOrientationInterpolator"),
                                ToField: stringPtr("orientation"),
                                ToNode: stringPtr("CameraViewpoint"),
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraScript"),
                                },
                                DirectOutput: boolPtr(true),
                                MustEvaluate: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("description"),
                                            ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("position"),
                                        ProtoField: stringPtr("position"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("orientation"),
                                        ProtoField: stringPtr("orientation"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_fraction"),
                                        ProtoField: stringPtr("set_fraction"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_bind"),
                                        ProtoField: stringPtr("set_bind"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("fieldOfView"),
                                        ProtoField: stringPtr("fieldOfView"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("nearClipPlane"),
                                        ProtoField: stringPtr("nearClipPlane"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("farClipPlane"),
                                        ProtoField: stringPtr("farClipPlane"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("shots"),
                                        ProtoField: stringPtr("shots"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("filterColor"),
                                        ProtoField: stringPtr("filterColor"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("filterTransparency"),
                                        ProtoField: stringPtr("filterTransparency"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("upVector"),
                                        ProtoField: stringPtr("upVector"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("fStop"),
                                        ProtoField: stringPtr("fStop"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("focusDistance"),
                                        ProtoField: stringPtr("focusDistance"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isActive"),
                                        ProtoField: stringPtr("isActive"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("totalDuration"),
                                        ProtoField: stringPtr("totalDuration"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("offlineRender"),
                                        ProtoField: stringPtr("offlineRender"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("traceEnabled"),
                                        ProtoField: stringPtr("traceEnabled"),
                                    },
                                    },
                                },
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("description"),
                                        AccessType: stringPtr("inputOutput"),
                                        Appinfo: stringPtr("Text description to be displayed for this Camera"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("position"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Camera position in local transformation frame"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("orientation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Camera rotation in local transformation frame"),
                                    Type: stringPtr("SFRotation"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_fraction"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("input fraction drives interpolators"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_bind"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("input event binds or unbinds this Camera"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("fieldOfView"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("pi/4"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("nearClipPlane"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Vector distance to near clipping plane"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("farClipPlane"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Vector distance to far clipping plane"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("shots"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Array of CameraShot nodes which in turn contain CameraMovement nodes"),
                                    Type: stringPtr("MFNode"),
//initialization nodes (if any) go here
                                },
                                &x3d.Field{
                                    Name: stringPtr("filterColor"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Camera filter color that modifies virtual lens capture"),
                                    Type: stringPtr("SFColor"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("filterTransparency"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Camera filter transparency that modifies virtual lens capture"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("upVector"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("upVector changes modify camera orientation (and possibly vice versa)"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("fStop"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("focusDistance"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("isActive"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("totalDuration"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"),
                                    Type: stringPtr("SFTime"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("offlineRender"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("OfflineRender node"),
                                    Type: stringPtr("SFNode"),
//initialization node (if any) goes here
                                },
                                &x3d.Field{
                                    Name: stringPtr("ViewpointNode"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.Viewpoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraViewpoint"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("NavInfoNode"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.NavigationInfo{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraNavInfo"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("CameraPI"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.PositionInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraPositionInterpolator"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("CameraOI"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.OrientationInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraOrientationInterpolator"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("key"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("key array for interpolators"),
                                    Type: stringPtr("MFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("keyValuePosition"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("keyValue array for PositionInterpolator"),
                                    Type: stringPtr("MFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("keyValueOrientation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("keyValue array for OrientationInterpolator"),
                                    Type: stringPtr("MFRotation"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("animated"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"),
                                    Type: stringPtr("SFBool"),
                                    Value: stringPtr("false"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialized"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("perform checkShots() function once immediately after initialization"),
                                    Type: stringPtr("SFBool"),
                                    Value: stringPtr("false"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("shotCount"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("how many CameraShot nodes are contained in shots array"),
                                    Type: stringPtr("SFInt32"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("movesCount"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("how many CameraMove nodes are contained in moves array"),
                                    Type: stringPtr("SFInt32"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("frameCount"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("how many frames were created in current loop"),
                                    Type: stringPtr("SFFloat"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("startTime"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("holding variable"),
                                    Type: stringPtr("SFTime"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("priorTraceTime"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("holding variable"),
                                    Type: stringPtr("SFTime"),
                                    Value: stringPtr("0"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("traceEnabled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                                    Type: stringPtr("SFBool"),
                                },
//ecmascript:
//function initialize () // CameraScript
//{
////  tracePrint ('initialize start...');
//
//    NavInfoNode.avatarSize[0]   = nearClipPlane;
//
//    // remaining setups deferred to invocation of checkShots() method
//    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization
//    alwaysPrint ('initialize complete');
//}
//
//function checkShots (eventValue)
//{
//    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');
//
//    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes
//    totalDuration= 0;
//    shotCount  = shots.length;
//    movesCount = 0;
//    for (i = 0; i < shotCount; i++) // shots index
//    {
//       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);
//       movesCount   += shots[i].moves.length;
//       totalDuration = totalDuration + shots[i].shotDuration;
//       if (shots[i].moves.length == 0)
//       {
//          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');
//       }
//    }
//    // size checks before proceeding
//    if (shotCount == 0)
//    {
//       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');
//       return;
//    }
//    else if (movesCount == 0)
//    {
//       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');
//       return;
//    }
//    else if (totalDuration == 0)
//    {
//       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');
//       return;
//    }
//    tracePrint ('number of contained CameraShot nodes=' + shotCount);
//    tracePrint ('number of contained CameraMove nodes=' + movesCount);
//    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');
//
//    // compute interpolators
//    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation
//    for (i = 0; i < shotCount; i++) // shots index
//    {
//        if (i==0) // initial entries
//        {
//           key[0]                   = 0.0; // no previous move
//           keyValuePosition[0]      = shots[i].initialPosition;
//           keyValueOrientation[0]   = shots[i].initialOrientation;
//        }
//        else     // new shot repositions, reorients camera as clean break from preceding shot/move
//        {
//           key[k+1]                 = key[k]; // start from end from previous move
//           keyValuePosition[k+1]    = shots[i].initialPosition;
//           keyValueOrientation[k+1] = shots[i].initialOrientation;
//           k++;
//        }
//        tracePrint (shots[i].description);
//        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);
//
//        for (j = 0; j < shots[i].moves.length; j++) // moves index
//        {
//            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime
//            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime
//            //  tracePrint ('durationFloat=' + durationFloat);
//            key[k+1]               = key[k] + (durationFloat / totalDuration);
//            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;
//            if (!animated)
//            {
//                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;
//            }
//            else
//            {
//                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)
//                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions
//
//                // test if difference vector is zero, if so maintain previous rotation
//                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();
//                if (shotVector.length() >= 0)
//                {
//                    // default view direction is along -Z axis
//                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);
//                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;
//                }
//                else // note (k > 0)
//                {
//                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change
//                }
//
//                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());
//                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());
//                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());
//                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());
//                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());
//                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');
//            }
//            k++; // update index to match latest key, keyValuePosition, keyValueOrientation
//
//            // check animated parameter:  set true if any of moves are tracking moves
//            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true
//         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);
//
//            // intermediate trace
//            tracePrint ('                key=' + key);
//            tracePrint ('   keyValuePosition=' + keyValuePosition);
//            tracePrint ('keyValueOrientation=' + keyValueOrientation);
//            tracePrint ('- ' + shots[i].moves[j].description);
//        }
//    }
//    tracePrint ('                key=' + key);
//    tracePrint ('   keyValuePosition=' + keyValuePosition);
//    tracePrint ('keyValueOrientation=' + keyValueOrientation);
//    if (key.length != keyValuePosition.length)
//    {
//      alwaysPrint ('warning: internal error during array construction, ' +
//                  'key.length=' + key.length + ' must equal ' +
//                  'keyValuePosition.length=' + keyValuePosition.length);
//    }
//    if (key.length != keyValueOrientation.length)
//    {
//      alwaysPrint ('warning: internal error during array construction, ' +
//                  'key.length=' + key.length + ' must equal ' +
//                  'keyValueOrientation.length=' + keyValueOrientation.length);
//    }
//    if (key.length != (shotCount + movesCount))
//    {
//      alwaysPrint ('warning: internal error during array construction, ' +
//                  'key.length=' + key.length + ' must equal ' +
//                  '(shotCount + movesCount)=' + (shotCount + movesCount));
//    }
//    tracePrint ('           animated=' + animated);
//    // set node values
//    CameraPI.key      = key;
//    CameraOI.key      = key;
//    CameraPI.keyValue = keyValuePosition;
//    CameraOI.keyValue = keyValueOrientation;
//
//    if (!animated) // output results
//    {
//        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');
//        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');
//    }
//    tracePrint ('checkShots() complete');
//}
//
//function stripBrackets (fieldArray)
//{
//    // some browsers add brackets to array output strings, this function strips them
//    outputString = '';
//    for (i = 0; i < fieldArray.length; i++)
//    {
//       outputString += fieldArray[i].toString();
//       if (i < fieldArray.length - 1) outputString += ' ';
//    }
//    return outputString;
//}
//
//function set_fraction (eventValue, timestamp) // input event received for inputOnly field
//{
//   // traceEnabled = false;  // for testing purposes
//
//   // if Camera is being animated, immediately recompute interpolator settings
//   if (animated) checkShots (true);
//
//   // trace progress on console with reduced output frequency
//   if (frameCount == 0)
//   {
//      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);
//      startTime      = timestamp;
//      priorTraceTime = timestamp;
//      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
//
//      if (animated) // output results
//      {
//        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
//        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');
//        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');
//      }
//   }
//   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval
//   {
//      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
//      priorTraceTime = timestamp;
//
//      if (animated) // output results
//      {
//        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
//        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');
//        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');
//      }
//   }
//   if (eventValue == 0)
//   {
//      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored
//      frameCount++;
//   }
//   else if (eventValue == 1)
//   {
//      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
//      if (animated) // output results
//      {
//        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
//      }
//      alwaysPrint ('Animation loop complete.');
//      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally
//   }
//   else
//   {
//      frameCount++;
//   }
//}
//
//function set_bind (eventValue) // input event received for inputOnly field
//{
//   // need to ensure CameraShot nodes are properly initialized
//   if (initialized == false)
//   {
//      checkShots (true);
//      initialized = true;
//   }
//   if (eventValue)
//   {
//       tracePrint ('Camera has been bound');
//   }
//   else
//   {
//       tracePrint ('Camera has been unbound');
//   }
//}
//
//function set_description (eventValue) // input event received for inputOutput field
//{
//    description = eventValue;
//}
//
//function set_position (eventValue) // input event received for inputOutput field
//{
//    position = eventValue;
//}
//
//function set_orientation (eventValue) // input event received for inputOutput field
//{
//    orientation = eventValue;
//}
//
//function set_fieldOfView (eventValue) // input event received for inputOutput field
//{
//    fieldOfView = eventValue;
//}
//
//function set_nearClipPlane (eventValue) // input event received for inputOutput field
//{
//    nearClipPlane = eventValue;
//}
//
//function set_farClipPlane (eventValue) // input event received for inputOutput field
//{
//    farClipPlane = eventValue;
//}
//
//function set_shots (eventValue) // input event received for inputOutput field
//{
//    shots = eventValue;
//}
//
//function set_filterColor (eventValue) // input event received for inputOutput field
//{
//    filterColor = eventValue;
//}
//
//function set_filterTransparency (eventValue) // input event received for inputOutput field
//{
//    filterTransparency = eventValue;
//}
//
//function set_upVector (eventValue) // input event received for inputOutput field
//{
//    upVector = eventValue;
//}
//
//function set_fStop (eventValue) // input event received for inputOutput field
//{
//    fStop = eventValue;
//}
//
//function set_focusDistance (eventValue) // input event received for inputOutput field
//{
//    focusDistance = eventValue;
//}
//
//function set_offlineRender (eventValue) // input event received for inputOutput field
//{
//    offlineRender = eventValue;
//}
//
//function set_key (eventValue) // input event received for inputOutput field
//{
//    key = eventValue;
//}
//
//function set_keyValuePosition (eventValue) // input event received for inputOutput field
//{
//    keyValuePosition = eventValue;
//}
//
//function set_keyValueOrientation (eventValue) // input event received for inputOutput field
//{
//    keyValueOrientation = eventValue;
//}
//
//function set_animated (eventValue) // input event received for inputOutput field
//{
//    animated = eventValue;
//}
//
//function tracePrint (outputValue)
//{
//	if (traceEnabled) alwaysPrint (outputValue);
//}
//function alwaysPrint (outputValue)
//{
//    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies
//    var outputString = outputValue.toString(); // utility function according to spec
//    if (outputString == null) outputString = outputValue; // direct cast
//
//    if  (description.length > 0)
//         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');
//    else
//         Browser.print ('[Camera] ' + outputString + '\\n');
//}
                                },
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("position"),
                                FromNode: stringPtr("CameraScript"),
                                ToField: stringPtr("position"),
                                ToNode: stringPtr("CameraViewpoint"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("orientation"),
                                FromNode: stringPtr("CameraScript"),
                                ToField: stringPtr("orientation"),
                                ToNode: stringPtr("CameraViewpoint"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("isActive"),
                                FromNode: stringPtr("CameraScript"),
                                ToField: stringPtr("set_bind"),
                                ToNode: stringPtr("CameraViewpoint"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("isActive"),
                                FromNode: stringPtr("CameraScript"),
                                ToField: stringPtr("set_bind"),
                                ToNode: stringPtr("CameraNavInfo"),
                            },
                            &x3d.X3DRoute{
                                FromField: stringPtr("isActive"),
                                FromNode: stringPtr("CameraScript"),
                                ToField: stringPtr("on"),
                                ToNode: stringPtr("CameraDirectionalLight"),
                            },
                        },
                    },
                },
//=============== CameraShot ==============
                &x3d.ProtoDeclare{
                    Name: stringPtr("CameraShot"),
                    Appinfo: stringPtr("CameraShot collects a specific set of CameraMovement animations that make up an individual shot."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("description"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("Text description to be displayed for this CameraShot"),
                                Type: stringPtr("SFString"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Whether this CameraShot can be activated"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("moves"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Set of CameraMovement nodes"),
                            Type: stringPtr("MFNode"),
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
                        },
                        &x3d.Field{
                            Name: stringPtr("initialPosition"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Setup to reinitialize camera position for this shot"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 0 10"),
                        },
                        &x3d.Field{
                            Name: stringPtr("initialOrientation"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Setup to reinitialize camera rotation for this shot"),
                            Type: stringPtr("SFRotation"),
                            Value: stringPtr("0 0 1 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("initialAimPoint"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 0 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("initialFieldOfView"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("pi/4"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0.7854"),
                        },
                        &x3d.Field{
                            Name: stringPtr("initialFStop"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("5.6"),
                        },
                        &x3d.Field{
                            Name: stringPtr("initialFocusDistance"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("10"),
                        },
                        &x3d.Field{
                            Name: stringPtr("shotDuration"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Subtotal duration of contained CameraMovement move durations"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isActive"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("traceEnabled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraShotScript"),
                                },
                                DirectOutput: boolPtr(true),
                                MustEvaluate: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("description"),
                                            ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enabled"),
                                        ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("moves"),
                                        ProtoField: stringPtr("moves"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("initialPosition"),
                                        ProtoField: stringPtr("initialPosition"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("initialOrientation"),
                                        ProtoField: stringPtr("initialOrientation"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("initialAimPoint"),
                                        ProtoField: stringPtr("initialAimPoint"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("initialFieldOfView"),
                                        ProtoField: stringPtr("initialFieldOfView"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("initialFStop"),
                                        ProtoField: stringPtr("initialFStop"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("initialFocusDistance"),
                                        ProtoField: stringPtr("initialFocusDistance"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("shotDuration"),
                                        ProtoField: stringPtr("shotDuration"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isActive"),
                                        ProtoField: stringPtr("isActive"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("traceEnabled"),
                                        ProtoField: stringPtr("traceEnabled"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("description"),
                                        AccessType: stringPtr("inputOutput"),
                                        Appinfo: stringPtr("Text description to be displayed for this CameraShot"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("enabled"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Whether this CameraShot can be activated"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("moves"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Set of CameraMovement nodes"),
                                    Type: stringPtr("MFNode"),
//initialization nodes (if any) go here
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialPosition"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Setup to reinitialize camera position for this shot"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialOrientation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Setup to reinitialize camera rotation for this shot"),
                                    Type: stringPtr("SFRotation"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialAimPoint"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialFieldOfView"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("pi/4"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialFStop"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("initialFocusDistance"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("shotDuration"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Subtotal duration of contained CameraMovement move durations"),
                                    Type: stringPtr("SFTime"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("isActive"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("traceEnabled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("key"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("key array for interpolators"),
                                    Type: stringPtr("MFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("keyValuePosition"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("keyValue array for PositionInterpolator"),
                                    Type: stringPtr("MFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("keyValueOrientation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("keyValue array for OrientationInterpolator"),
                                    Type: stringPtr("MFRotation"),
                                },
//ecmascript:
//function initialize () // CameraShotScript
//{
////  tracePrint ('initialize start...');
//
//    // compute shotDuration by summing durations from contained CameraMovement nodes
//    shotDuration = 0;
//    for (i = 0; i < moves.length; i++)
//    {
//        shotDuration = shotDuration + moves[i].duration;
//    }
//    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');
//
////  tracePrint ('... initialize() complete');
//}
//
//function set_description (eventValue) // input event received for inputOutput field
//{
//    description = eventValue;
//}
//
//function set_enabled (eventValue) // input event received for inputOutput field
//{
//    enabled = eventValue;
//}
//
//function set_moves (eventValue) // input event received for inputOutput field
//{
//    moves = eventValue;
//}
//
//function set_initialPosition (eventValue) // input event received for inputOutput field
//{
//    initialPosition = eventValue;
//}
//
//function set_initialOrientation (eventValue) // input event received for inputOutput field
//{
//    initialOrientation = eventValue;
//}
//
//function set_initialAimPoint (eventValue) // input event received for inputOutput field
//{
//    initialAimPoint = eventValue;
//}
//
//function set_initialFieldOfView (eventValue) // input event received for inputOutput field
//{
//    initialFieldOfView = eventValue;
//}
//
//function set_initialFStop (eventValue) // input event received for inputOutput field
//{
//    initialFStop = eventValue;
//}
//
//function set_initialFocusDistance (eventValue) // input event received for inputOutput field
//{
//    initialFocusDistance = eventValue;
//}
//
//function set_key (eventValue) // input event received for inputOutput field
//{
//    key = eventValue;
//}
//
//function set_keyValuePosition (eventValue) // input event received for inputOutput field
//{
//    keyValuePosition = eventValue;
//}
//
//function set_keyValueOrientation (eventValue) // input event received for inputOutput field
//{
//    keyValueOrientation = eventValue;
//}
//
//// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive
//
//function tracePrint (outputValue)
//{
//	if (traceEnabled) alwaysPrint (outputValue);
//}
//function alwaysPrint (outputValue)
//{
//	// try to ensure outputValue is converted to string despite browser idiosyncracies
//    var outputString = outputValue.toString(); // utility function according to spec
//    if (outputString == null) outputString = outputValue; // direct cast
//
//    if  (description.length > 0)
//         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');
//    else
//         Browser.print ('[CameraShot] ' + outputString + '\\n');
//}
                                },
                            },
//Add any ROUTEs here, going from Script to other nodes within ProtoBody
                        },
                    },
                },
//=============== CameraMovement ==============
                &x3d.ProtoDeclare{
                    Name: stringPtr("CameraMovement"),
                    Appinfo: stringPtr("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("description"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("Text description to be displayed for this CameraMovement"),
                                Type: stringPtr("SFString"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Whether this CameraMovement can be activated"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("duration"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Duration in seconds for this move"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("goalPosition"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Goal camera position for this move"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 0 10"),
                        },
                        &x3d.Field{
                            Name: stringPtr("goalOrientation"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Goal camera rotation for this move"),
                            Type: stringPtr("SFRotation"),
                            Value: stringPtr("0 0 1 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("tracking"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Whether or not camera direction is tracking towards the aimPoint"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        &x3d.Field{
                            Name: stringPtr("goalAimPoint"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Goal aimPoint for this move, ignored if tracking=false"),
                            Type: stringPtr("SFVec3f"),
                            Value: stringPtr("0 0 0"),
                        },
                        &x3d.Field{
                            Name: stringPtr("goalFieldOfView"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Goal fieldOfView for this move"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("0.7854"),
                        },
                        &x3d.Field{
                            Name: stringPtr("goalFStop"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("5.6"),
                        },
                        &x3d.Field{
                            Name: stringPtr("goalFocusDistance"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("10"),
                        },
                        &x3d.Field{
                            Name: stringPtr("isActive"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                            Type: stringPtr("SFBool"),
                        },
                        &x3d.Field{
                            Name: stringPtr("traceEnabled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("CameraMovementScript"),
                                },
                                DirectOutput: boolPtr(true),
                                MustEvaluate: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("description"),
                                            ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enabled"),
                                        ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("duration"),
                                        ProtoField: stringPtr("duration"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("goalPosition"),
                                        ProtoField: stringPtr("goalPosition"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("goalOrientation"),
                                        ProtoField: stringPtr("goalOrientation"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("tracking"),
                                        ProtoField: stringPtr("tracking"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("goalAimPoint"),
                                        ProtoField: stringPtr("goalAimPoint"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("goalFieldOfView"),
                                        ProtoField: stringPtr("goalFieldOfView"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("goalFStop"),
                                        ProtoField: stringPtr("goalFStop"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("goalFocusDistance"),
                                        ProtoField: stringPtr("goalFocusDistance"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("isActive"),
                                        ProtoField: stringPtr("isActive"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("traceEnabled"),
                                        ProtoField: stringPtr("traceEnabled"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("description"),
                                        AccessType: stringPtr("inputOutput"),
                                        Appinfo: stringPtr("Text description to be displayed for this CameraMovement"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("enabled"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Whether this CameraMovement can be activated"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("duration"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Duration in seconds for this move"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("goalPosition"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Goal camera position for this move"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("goalOrientation"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Goal camera rotation for this move"),
                                    Type: stringPtr("SFRotation"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("tracking"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Whether or not camera direction is tracking towards the aimPoint"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("goalAimPoint"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Goal aimPoint for this move, ignored if tracking=false"),
                                    Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("goalFieldOfView"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Goal fieldOfView for this move"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("goalFStop"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("goalFocusDistance"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("isActive"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("traceEnabled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                                    Type: stringPtr("SFBool"),
                                },
//ecmascript:
//function initialize () // CameraMovementScript
//{
////  tracePrint ('initialize start...');
//    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +
//                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()
//                           );
//    if (duration < 0)
//    {
//       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');
//       duration = 0;
//    }
//    else if (duration == 0)
//    {
//       alwaysPrint ('warning: duration=0, nothing to do!');
//    }
//    tracePrint ('... initialize complete');
//}
//
//function set_goalAimPoint (eventValue) // input event received for inputOutput field
//{
//    goalAimPoint_changed = eventValue;
//    tracePrint ('goalAimPoint=' + goalAimPoint.toString());
//
//    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator
//}
//
//function set_description (eventValue) // input event received for inputOutput field
//{
//    description = eventValue;
//}
//
//function set_enabled (eventValue) // input event received for inputOutput field
//{
//    enabled = eventValue;
//}
//
//function set_duration (eventValue) // input event received for inputOutput field
//{
//    duration = eventValue;
//}
//
//function set_goalPosition (eventValue) // input event received for inputOutput field
//{
//    goalPosition = eventValue;
//}
//
//function set_goalOrientation (eventValue) // input event received for inputOutput field
//{
//    goalOrientation = eventValue;
//}
//
//function set_tracking (eventValue) // input event received for inputOutput field
//{
//    tracking = eventValue;
//}
//
//function set_goalFieldOfView (eventValue) // input event received for inputOutput field
//{
//    goalFieldOfView = eventValue;
//}
//
//function set_goalFStop (eventValue) // input event received for inputOutput field
//{
//    goalFStop = eventValue;
//}
//
//function set_goalFocusDistance (eventValue) // input event received for inputOutput field
//{
//    goalFocusDistance = eventValue;
//}
//
//// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive
//
//function tracePrint (outputValue)
//{
//	if (traceEnabled) alwaysPrint (outputValue);
//}
//
//function alwaysPrint (outputValue)
//{
//	// try to ensure outputValue is converted to string despite browser idiosyncracies
//    var outputString = outputValue.toString(); // utility function according to spec
//    if (outputString == null) outputString = outputValue; // direct cast
//
//    if  (description.length > 0)
//         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');
//    else
//         Browser.print ('[CameraMovement] ' + outputString + '\\n');
//}
                                },
                            },
//Add any ROUTEs here, going from Script to other nodes within ProtoBody
                        },
                    },
                },
//=============== OfflineRender ==============
                &x3d.ProtoDeclare{
                    Name: stringPtr("OfflineRender"),
                    Appinfo: stringPtr("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."),
                    ProtoInterface: &x3d.ProtoInterface{
//TODO non-photorealistic rendering (NPR) parameters
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("description"),
                                AccessType: stringPtr("inputOutput"),
                                Appinfo: stringPtr("Text description to be displayed for this OfflineRender"),
                                Type: stringPtr("SFString"),
                        },
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Whether this OfflineRender can be activated"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        &x3d.Field{
                            Name: stringPtr("frameRate"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Frames per second recorded for this rendering"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("30"),
                        },
                        &x3d.Field{
                            Name: stringPtr("frameSize"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Size of frame in number of pixels width and height"),
                            Type: stringPtr("SFVec2f"),
                            Value: stringPtr("640 480"),
                        },
                        &x3d.Field{
                            Name: stringPtr("pixelAspectRatio"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Relative dimensions of pixel height/width typically 1.33 or 1"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("1.33"),
                        },
                        &x3d.Field{
                            Name: stringPtr("set_startTime"),
                            AccessType: stringPtr("inputOnly"),
                            Appinfo: stringPtr("Begin render operation"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("progress"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Progress performing render operation (0..1)"),
                            Type: stringPtr("SFFloat"),
                        },
                        &x3d.Field{
                            Name: stringPtr("renderCompleteTime"),
                            AccessType: stringPtr("outputOnly"),
                            Appinfo: stringPtr("Render operation complete"),
                            Type: stringPtr("SFTime"),
                        },
                        &x3d.Field{
                            Name: stringPtr("movieFormat"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("Format of rendered output movie (mpeg mp4 etc.), use first supported format"),
                            Type: stringPtr("MFString"),
                            Value: stringPtr("\"mpeg\""),
                        },
                        &x3d.Field{
                            Name: stringPtr("imageFormat"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"),
                            Type: stringPtr("MFString"),
                            Value: stringPtr("\"png\""),
                        },
                        &x3d.Field{
                            Name: stringPtr("traceEnabled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("false"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("OfflineRenderScript"),
                                },
                                MustEvaluate: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("description"),
                                            ProtoField: stringPtr("description"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("enabled"),
                                        ProtoField: stringPtr("enabled"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("frameRate"),
                                        ProtoField: stringPtr("frameRate"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("frameSize"),
                                        ProtoField: stringPtr("frameSize"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("pixelAspectRatio"),
                                        ProtoField: stringPtr("pixelAspectRatio"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("set_startTime"),
                                        ProtoField: stringPtr("set_startTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("progress"),
                                        ProtoField: stringPtr("progress"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("renderCompleteTime"),
                                        ProtoField: stringPtr("renderCompleteTime"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("movieFormat"),
                                        ProtoField: stringPtr("movieFormat"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("imageFormat"),
                                        ProtoField: stringPtr("imageFormat"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("traceEnabled"),
                                        ProtoField: stringPtr("traceEnabled"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("description"),
                                        AccessType: stringPtr("inputOutput"),
                                        Appinfo: stringPtr("Text description to be displayed for this OfflineRender"),
                                        Type: stringPtr("SFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("enabled"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Whether this OfflineRender can be activated"),
                                    Type: stringPtr("SFBool"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("frameRate"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Frames per second recorded for this rendering"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("frameSize"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Size of frame in number of pixels width and height"),
                                    Type: stringPtr("SFVec2f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("pixelAspectRatio"),
                                    AccessType: stringPtr("inputOutput"),
                                    Appinfo: stringPtr("Relative dimensions of pixel height/width typically 1.33 or 1"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("set_startTime"),
                                    AccessType: stringPtr("inputOnly"),
                                    Appinfo: stringPtr("Begin render operation"),
                                    Type: stringPtr("SFTime"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("progress"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Progress performing render operation (0..1)"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("renderCompleteTime"),
                                    AccessType: stringPtr("outputOnly"),
                                    Appinfo: stringPtr("Render operation complete"),
                                    Type: stringPtr("SFTime"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("movieFormat"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("Format of rendered output movie (mpeg mp4 etc.)"),
                                    Type: stringPtr("MFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("imageFormat"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("Format of rendered output images (png jpeg gif tiff etc.)"),
                                    Type: stringPtr("MFString"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("traceEnabled"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                                    Type: stringPtr("SFBool"),
                                },
//ecmascript:
//function initialize () // OfflineRenderScript
//{
////  tracePrint ('initialize start...');
//
//    tracePrint ('... initialize complete');
//}
//
//function set_description (eventValue) // input event received for inputOutput field
//{
//    description = eventValue;
//}
//
//function set_enabled (eventValue) // input event received for inputOutput field
//{
//    enabled = eventValue;
//}
//
//function set_frameRate (eventValue) // input event received for inputOutput field
//{
//    frameRate = eventValue;
//}
//
//function set_frameSize (eventValue) // input event received for inputOutput field
//{
//    frameSize = eventValue;
//}
//
//function set_pixelAspectRatio (eventValue) // input event received for inputOutput field
//{
//    pixelAspectRatio = eventValue;
//}
//
//function set_startTime (eventValue) // input event received for inputOnly field
//{
//   // do something with input eventValue;
//}
//
//function tracePrint (outputValue)
//{
//	if (traceEnabled) alwaysPrint (outputValue);
//}
//
//function alwaysPrint (outputValue)
//{
//	// try to ensure outputValue is converted to string despite browser idiosyncracies
//    var outputString = outputValue.toString(); // utility function according to spec
//    if (outputString == null) outputString = outputValue; // direct cast
//
//    if  (description.length > 0)
//         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');
//    else
//         Browser.print ('[OfflineRender] ' + outputString + '\\n');
//}
                                },
                            },
//Add any ROUTEs here, going from Script to other nodes within ProtoBody
                        },
                    },
                },
//=============== Launch Prototype Example ==============
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.282353,0.380392,0.470588}},
                },
                &x3d.Anchor{
                    Description: stringPtr("launch CameraExample scene"),
                    Url: x3d.MFString{"CameraExamples.x3d", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d", "CameraExamples.wrl", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"},
                    Children: []x3d.X3DNode{
                        &x3d.Transform{
                            Children: []x3d.X3DNode{
                                &x3d.Shape{
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"CameraPrototypes.x3d", "defines multiple prototype nodes", "", "Click on this text to see", "CameraExamples.x3d scene"},
                                        FontStyle: &x3d.FontStyle{
                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                        },
                                    },
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.2},
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
	filename := "../data/CameraPrototypes.new.go.x3d"
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