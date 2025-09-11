
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
                Content: stringPtr("Tue, 09 Sep 2025 19:37:52 GMT"),
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
                Name: stringPtr("reference"),
                Content: stringPtr("CameraExamples.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("Camera nodes for Viewpoint navigation control"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("Camera"),
                    Appinfo: stringPtr("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("description"),
                                Appinfo: stringPtr("Text description to be displayed for this Camera"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("position"),
                            Value: stringPtr("0 0 10"),
                            Appinfo: stringPtr("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("orientation"),
                            Appinfo: stringPtr("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("fieldOfView"),
                            Value: stringPtr("0.7854"),
                            Appinfo: stringPtr("pi/4"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("set_fraction"),
                            Appinfo: stringPtr("input fraction drives interpolators"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("set_bind"),
                            Appinfo: stringPtr("input event binds or unbinds this Camera"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("bindTime"),
                            Appinfo: stringPtr("output event indicates when this Camera is bound"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isBound"),
                            Appinfo: stringPtr("output event indicates whether this Camera is bound or unbound"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("nearClipPlane"),
                            Value: stringPtr("0.25"),
                            Appinfo: stringPtr("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("farClipPlane"),
                            Appinfo: stringPtr("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("shots"),
                            Appinfo: stringPtr("Array of CameraShot nodes which in turn contain CameraMovement nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("headlight"),
                            Value: stringPtr("true"),
                            Appinfo: stringPtr("Whether camera headlight is on or off"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("headlightColor"),
                            Value: stringPtr("1 1 1"),
                            Appinfo: stringPtr("Camera headlight color"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("headlightIntensity"),
                            Value: stringPtr("1"),
                            Appinfo: stringPtr("Camera headlight intensity"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Name: stringPtr("filterColor"),
                            Value: stringPtr("1 1 1"),
                            Appinfo: stringPtr("Camera filter color that modifies virtual lens capture"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("filterTransparency"),
                            Value: stringPtr("1"),
                            Appinfo: stringPtr("Camera filter transparency that modifies virtual lens capture"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("upVector"),
                            Value: stringPtr("0 1 0"),
                            Appinfo: stringPtr("upVector changes modify camera orientation (and possibly vice versa)"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("fStop"),
                            Value: stringPtr("5.6"),
                            Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("focusDistance"),
                            Value: stringPtr("10"),
                            Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isActive"),
                            Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("totalDuration"),
                            Appinfo: stringPtr("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFNode"),
                            Name: stringPtr("offlineRender"),
                            Appinfo: stringPtr("OfflineRender node"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("traceEnabled"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
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
                                            NodeField: stringPtr("set_bind"),
                                            ProtoField: stringPtr("set_bind"),
                                    },
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
                                        NodeField: stringPtr("isBound"),
                                        ProtoField: stringPtr("isBound"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("bindTime"),
                                        ProtoField: stringPtr("bindTime"),
                                    },
                                    },
                                },
                            },
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
                                    },
                                },
                            },
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
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFString"),
                                        Name: stringPtr("description"),
                                        Appinfo: stringPtr("Text description to be displayed for this Camera"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("position"),
                                    Appinfo: stringPtr("Camera position in local transformation frame"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFRotation"),
                                    Name: stringPtr("orientation"),
                                    Appinfo: stringPtr("Camera rotation in local transformation frame"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("set_fraction"),
                                    Appinfo: stringPtr("input fraction drives interpolators"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("set_bind"),
                                    Appinfo: stringPtr("input event binds or unbinds this Camera"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("fieldOfView"),
                                    Appinfo: stringPtr("pi/4"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("nearClipPlane"),
                                    Appinfo: stringPtr("Vector distance to near clipping plane"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("farClipPlane"),
                                    Appinfo: stringPtr("Vector distance to far clipping plane"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFNode"),
                                    Name: stringPtr("shots"),
                                    Appinfo: stringPtr("Array of CameraShot nodes which in turn contain CameraMovement nodes"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFColor"),
                                    Name: stringPtr("filterColor"),
                                    Appinfo: stringPtr("Camera filter color that modifies virtual lens capture"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("filterTransparency"),
                                    Appinfo: stringPtr("Camera filter transparency that modifies virtual lens capture"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("upVector"),
                                    Appinfo: stringPtr("upVector changes modify camera orientation (and possibly vice versa)"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("fStop"),
                                    Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("focusDistance"),
                                    Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("isActive"),
                                    Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFTime"),
                                    Name: stringPtr("totalDuration"),
                                    Appinfo: stringPtr("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("offlineRender"),
                                    Appinfo: stringPtr("OfflineRender node"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("ViewpointNode"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Children: []x3d.X3DNode{
                                        &x3d.Viewpoint{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraViewpoint"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("NavInfoNode"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Children: []x3d.X3DNode{
                                        &x3d.NavigationInfo{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraNavInfo"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("CameraPI"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Children: []x3d.X3DNode{
                                        &x3d.PositionInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraPositionInterpolator"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Name: stringPtr("CameraOI"),
                                    Appinfo: stringPtr("node reference to permit getting setting fields from within Script"),
                                    Children: []x3d.X3DNode{
                                        &x3d.OrientationInterpolator{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("CameraOrientationInterpolator"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFFloat"),
                                    Name: stringPtr("key"),
                                    Appinfo: stringPtr("key array for interpolators"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("keyValuePosition"),
                                    Appinfo: stringPtr("keyValue array for PositionInterpolator"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFRotation"),
                                    Name: stringPtr("keyValueOrientation"),
                                    Appinfo: stringPtr("keyValue array for OrientationInterpolator"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("animated"),
                                    Appinfo: stringPtr("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("initialized"),
                                    Appinfo: stringPtr("perform checkShots() function once immediately after initialization"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("shotCount"),
                                    Appinfo: stringPtr("how many CameraShot nodes are contained in shots array"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Name: stringPtr("movesCount"),
                                    Appinfo: stringPtr("how many CameraMove nodes are contained in moves array"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("frameCount"),
                                    Appinfo: stringPtr("how many frames were created in current loop"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFTime"),
                                    Name: stringPtr("startTime"),
                                    Value: stringPtr("0"),
                                    Appinfo: stringPtr("holding variable"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFTime"),
                                    Name: stringPtr("priorTraceTime"),
                                    Value: stringPtr("0"),
                                    Appinfo: stringPtr("holding variable"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("traceEnabled"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
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
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraPositionInterpolator"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("CameraViewpoint"),
                                ToField: stringPtr("set_position"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraOrientationInterpolator"),
                                FromField: stringPtr("value_changed"),
                                ToNode: stringPtr("CameraViewpoint"),
                                ToField: stringPtr("set_orientation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraScript"),
                                FromField: stringPtr("position_changed"),
                                ToNode: stringPtr("CameraViewpoint"),
                                ToField: stringPtr("set_position"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraScript"),
                                FromField: stringPtr("orientation_changed"),
                                ToNode: stringPtr("CameraViewpoint"),
                                ToField: stringPtr("set_orientation"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraScript"),
                                FromField: stringPtr("isActive"),
                                ToNode: stringPtr("CameraViewpoint"),
                                ToField: stringPtr("set_bind"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraScript"),
                                FromField: stringPtr("isActive"),
                                ToNode: stringPtr("CameraNavInfo"),
                                ToField: stringPtr("set_bind"),
                            },
                            &x3d.ROUTE{
                                FromNode: stringPtr("CameraScript"),
                                FromField: stringPtr("isActive"),
                                ToNode: stringPtr("CameraDirectionalLight"),
                                ToField: stringPtr("set_on"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("CameraShot"),
                    Appinfo: stringPtr("CameraShot collects a specific set of CameraMovement animations that make up an individual shot."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("description"),
                                Appinfo: stringPtr("Text description to be displayed for this CameraShot"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Value: stringPtr("true"),
                            Appinfo: stringPtr("Whether this CameraShot can be activated"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("moves"),
                            Appinfo: stringPtr("Set of CameraMovement nodes"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("initialPosition"),
                            Value: stringPtr("0 0 10"),
                            Appinfo: stringPtr("Setup to reinitialize camera position for this shot"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("initialOrientation"),
                            Appinfo: stringPtr("Setup to reinitialize camera rotation for this shot"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("initialAimPoint"),
                            Appinfo: stringPtr("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("initialFieldOfView"),
                            Value: stringPtr("0.7854"),
                            Appinfo: stringPtr("pi/4"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("initialFStop"),
                            Value: stringPtr("5.6"),
                            Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("initialFocusDistance"),
                            Value: stringPtr("10"),
                            Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("shotDuration"),
                            Appinfo: stringPtr("Subtotal duration of contained CameraMovement move durations"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isActive"),
                            Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("traceEnabled"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
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
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFString"),
                                        Name: stringPtr("description"),
                                        Appinfo: stringPtr("Text description to be displayed for this CameraShot"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("enabled"),
                                    Appinfo: stringPtr("Whether this CameraShot can be activated"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFNode"),
                                    Name: stringPtr("moves"),
                                    Appinfo: stringPtr("Set of CameraMovement nodes"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("initialPosition"),
                                    Appinfo: stringPtr("Setup to reinitialize camera position for this shot"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFRotation"),
                                    Name: stringPtr("initialOrientation"),
                                    Appinfo: stringPtr("Setup to reinitialize camera rotation for this shot"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("initialAimPoint"),
                                    Appinfo: stringPtr("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("initialFieldOfView"),
                                    Appinfo: stringPtr("pi/4"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("initialFStop"),
                                    Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("initialFocusDistance"),
                                    Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFTime"),
                                    Name: stringPtr("shotDuration"),
                                    Appinfo: stringPtr("Subtotal duration of contained CameraMovement move durations"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("isActive"),
                                    Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("traceEnabled"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFFloat"),
                                    Name: stringPtr("key"),
                                    Appinfo: stringPtr("key array for interpolators"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFVec3f"),
                                    Name: stringPtr("keyValuePosition"),
                                    Appinfo: stringPtr("keyValue array for PositionInterpolator"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("MFRotation"),
                                    Name: stringPtr("keyValueOrientation"),
                                    Appinfo: stringPtr("keyValue array for OrientationInterpolator"),
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
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("CameraMovement"),
                    Appinfo: stringPtr("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("description"),
                                Appinfo: stringPtr("Text description to be displayed for this CameraMovement"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Value: stringPtr("true"),
                            Appinfo: stringPtr("Whether this CameraMovement can be activated"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("duration"),
                            Appinfo: stringPtr("Duration in seconds for this move"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("goalPosition"),
                            Value: stringPtr("0 0 10"),
                            Appinfo: stringPtr("Goal camera position for this move"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFRotation"),
                            Name: stringPtr("goalOrientation"),
                            Appinfo: stringPtr("Goal camera rotation for this move"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("tracking"),
                            Appinfo: stringPtr("Whether or not camera direction is tracking towards the aimPoint"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec3f"),
                            Name: stringPtr("goalAimPoint"),
                            Appinfo: stringPtr("Goal aimPoint for this move, ignored if tracking=false"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("goalFieldOfView"),
                            Value: stringPtr("0.7854"),
                            Appinfo: stringPtr("Goal fieldOfView for this move"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("goalFStop"),
                            Value: stringPtr("5.6"),
                            Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("goalFocusDistance"),
                            Value: stringPtr("10"),
                            Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("isActive"),
                            Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("traceEnabled"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
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
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFString"),
                                        Name: stringPtr("description"),
                                        Appinfo: stringPtr("Text description to be displayed for this CameraMovement"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("enabled"),
                                    Appinfo: stringPtr("Whether this CameraMovement can be activated"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("duration"),
                                    Appinfo: stringPtr("Duration in seconds for this move"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("goalPosition"),
                                    Appinfo: stringPtr("Goal camera position for this move"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFRotation"),
                                    Name: stringPtr("goalOrientation"),
                                    Appinfo: stringPtr("Goal camera rotation for this move"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("tracking"),
                                    Appinfo: stringPtr("Whether or not camera direction is tracking towards the aimPoint"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec3f"),
                                    Name: stringPtr("goalAimPoint"),
                                    Appinfo: stringPtr("Goal aimPoint for this move, ignored if tracking=false"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("goalFieldOfView"),
                                    Appinfo: stringPtr("Goal fieldOfView for this move"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("goalFStop"),
                                    Appinfo: stringPtr("Focal length divided effective aperture diameter indicating width of focal plane"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("goalFocusDistance"),
                                    Appinfo: stringPtr("Distance to focal plane of sharpest focus"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("isActive"),
                                    Appinfo: stringPtr("Mark start/stop with true/false output respectively useful to trigger external animations"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("traceEnabled"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
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
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("OfflineRender"),
                    Appinfo: stringPtr("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFString"),
                                Name: stringPtr("description"),
                                Appinfo: stringPtr("Text description to be displayed for this OfflineRender"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Value: stringPtr("true"),
                            Appinfo: stringPtr("Whether this OfflineRender can be activated"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("frameRate"),
                            Value: stringPtr("30"),
                            Appinfo: stringPtr("Frames per second recorded for this rendering"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFVec2f"),
                            Name: stringPtr("frameSize"),
                            Value: stringPtr("640 480"),
                            Appinfo: stringPtr("Size of frame in number of pixels width and height"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("pixelAspectRatio"),
                            Value: stringPtr("1.33"),
                            Appinfo: stringPtr("Relative dimensions of pixel height/width typically 1.33 or 1"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("inputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("set_startTime"),
                            Appinfo: stringPtr("Begin render operation"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFFloat"),
                            Name: stringPtr("progress"),
                            Appinfo: stringPtr("Progress performing render operation (0..1)"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("outputOnly"),
                            Type: stringPtr("SFTime"),
                            Name: stringPtr("renderCompleteTime"),
                            Appinfo: stringPtr("Render operation complete"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("MFString"),
                            Name: stringPtr("movieFormat"),
                            Value: stringPtr("\"mpeg\""),
                            Appinfo: stringPtr("Format of rendered output movie (mpeg mp4 etc.), use first supported format"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("MFString"),
                            Name: stringPtr("imageFormat"),
                            Value: stringPtr("\"png\""),
                            Appinfo: stringPtr("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"),
                        },
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("traceEnabled"),
                            Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
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
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFString"),
                                        Name: stringPtr("description"),
                                        Appinfo: stringPtr("Text description to be displayed for this OfflineRender"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("enabled"),
                                    Appinfo: stringPtr("Whether this OfflineRender can be activated"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("frameRate"),
                                    Appinfo: stringPtr("Frames per second recorded for this rendering"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFVec2f"),
                                    Name: stringPtr("frameSize"),
                                    Appinfo: stringPtr("Size of frame in number of pixels width and height"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOutput"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("pixelAspectRatio"),
                                    Appinfo: stringPtr("Relative dimensions of pixel height/width typically 1.33 or 1"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("inputOnly"),
                                    Type: stringPtr("SFTime"),
                                    Name: stringPtr("set_startTime"),
                                    Appinfo: stringPtr("Begin render operation"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFFloat"),
                                    Name: stringPtr("progress"),
                                    Appinfo: stringPtr("Progress performing render operation (0..1)"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("outputOnly"),
                                    Type: stringPtr("SFTime"),
                                    Name: stringPtr("renderCompleteTime"),
                                    Appinfo: stringPtr("Render operation complete"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("MFString"),
                                    Name: stringPtr("movieFormat"),
                                    Appinfo: stringPtr("Format of rendered output movie (mpeg mp4 etc.)"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("MFString"),
                                    Name: stringPtr("imageFormat"),
                                    Appinfo: stringPtr("Format of rendered output images (png jpeg gif tiff etc.)"),
                                },
                                &x3d.Field{
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFBool"),
                                    Name: stringPtr("traceEnabled"),
                                    Appinfo: stringPtr("enable console output to trace script computations and prototype progress"),
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
                        },
                    },
                },
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
                                    Appearance: &x3d.Appearance{
                                        Material: &x3d.Material{
                                            DiffuseColor: &x3d.SFColor{1.0, 1.0, 0.2},
                                        },
                                    },
                                    Geometry: &x3d.Text{
                                        String: x3d.MFString{"CameraPrototypes.x3d", "defines multiple prototype nodes", "", "Click on this text to see", "CameraExamples.x3d scene"},
                                        FontStyle: &x3d.FontStyle{
                                            Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
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
	fmt.Println("\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\n%s\n---------------------------\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")
	*/
	filename := "../data/CameraPrototypes.new.go.x3d"
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