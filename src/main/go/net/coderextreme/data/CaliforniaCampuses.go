
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
                    Name: stringPtr("Geospatial"),
                    Level: int32Ptr(1),
            },
        },
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("title"),
                    Content: stringPtr("CaliforniaCampuses.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("Viewpoints and tour of California campuses"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("4 March 2010"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 09 Sep 2025 19:37:52 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("CaliforniaCampuses.kml"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("https://www.web3d.org/x3d-earth"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://x3d-earth.nps.edu"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://hamming.uc.nps.edu"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://mmog.ern.nps.edu/California/California.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("subject"),
                Content: stringPtr("X3D Earth"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("under development"),
            },
            &x3d.Meta{
                Name: stringPtr("warning"),
                Content: stringPtr("mmog.ern.nps.edu restricted to internal access within NPS firewall only"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("KmlToX3dViewpoints.xslt"),
            },
            },
        },
        Scene: &x3d.Scene{
            Children: []x3d.X3DChildNode{
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("CrossHair"),
                    Appinfo: stringPtr("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"),
                    Url: x3d.MFString{"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair", "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair", "../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair", "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Appinfo: stringPtr("whether CrossHair prototype is enabled or not"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("set_enabled"),
                        Appinfo: stringPtr("control whether enabled/disabled"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFColor"),
                        Name: stringPtr("markerColor"),
                        Appinfo: stringPtr("color of CrossHair marker"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("scale"),
                        Appinfo: stringPtr("size of CrossHair in meters"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("positionOffsetFromCamera"),
                        Appinfo: stringPtr("distance in front of HUD viewpoint"),
                    },
                    },
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("HeadsUpDisplay"),
                    Appinfo: stringPtr("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"),
                    Url: x3d.MFString{"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay", "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay", "../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay", "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("children"),
                            Appinfo: stringPtr("X3D content positioned at HUD offset"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("screenOffset"),
                        Appinfo: stringPtr("offset position for HUD relative to current view location, default 0 0 -5"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("position_changed"),
                        Appinfo: stringPtr("HUD position update (in world coordinates) relative to original location"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("orientation_changed"),
                        Appinfo: stringPtr("HUD orientation update relative to original location"),
                    },
                    },
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ViewpointSequencer"),
                    Appinfo: stringPtr("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"),
                    Url: x3d.MFString{"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer", "https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer", "../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer", "https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("MFNode"),
                            Name: stringPtr("viewpoints"),
                            Appinfo: stringPtr("Viewpoint USE nodes that are sequentially bound"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFTime"),
                        Name: stringPtr("interval"),
                        Appinfo: stringPtr("number of seconds between viewpoint shifts"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("enabled"),
                        Appinfo: stringPtr("whether ViewpointSequencer is enabled or not"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("set_enabled"),
                        Appinfo: stringPtr("whether ViewpointSequencer is enabled or not"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("previous"),
                        Appinfo: stringPtr("bind previous Viewpoint in list"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("next"),
                        Appinfo: stringPtr("bind next Viewpoint in list"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("MFString"),
                        Name: stringPtr("toggleMessage"),
                        Appinfo: stringPtr("Select message to toggle ViewpointSequencer"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFFloat"),
                        Name: stringPtr("toggleMessageFontSize"),
                        Appinfo: stringPtr("Color for toggleMessage text"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFColor"),
                        Name: stringPtr("toggleMessageColor"),
                        Appinfo: stringPtr("Color for toggleMessage text"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOutput"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("traceEnabled"),
                        Appinfo: stringPtr("enable console output"),
                    },
                    },
                },
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ViewPositionOrientation"),
                    Appinfo: stringPtr("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"),
                    Url: x3d.MFString{"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation", "https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation", "../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation", "https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFBool"),
                            Name: stringPtr("enabled"),
                            Appinfo: stringPtr("Whether or not ViewPositionOrientation sends output to console"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("initializeOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("traceEnabled"),
                        Appinfo: stringPtr("Output internal trace messages for debugging this node, intended for developer use only"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("inputOnly"),
                        Type: stringPtr("SFBool"),
                        Name: stringPtr("set_traceEnabled"),
                        Appinfo: stringPtr("Ability to turn output tracing on/off at runtime"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFVec3f"),
                        Name: stringPtr("position_changed"),
                        Appinfo: stringPtr("Output local position"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("SFRotation"),
                        Name: stringPtr("orientation_changed"),
                        Appinfo: stringPtr("Output local orientation"),
                    },
                    &x3d.Field{
                        AccessType: stringPtr("outputOnly"),
                        Type: stringPtr("MFString"),
                        Name: stringPtr("outputViewpointString"),
                        Appinfo: stringPtr("MFString value of new Viewpoint"),
                    },
                    },
                },
                &x3d.WorldInfo{
                    Title: stringPtr("CaliforniaCampuses.x3d"),
                },
                &x3d.Switch{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SwitchGlobes"),
                    },
                    WhichChoice: int32Ptr(0),
                    &x3d.Inline{
                        Url: x3d.MFString{"http://x3d-earth.nps.edu/osmdemo.x3d"},
                    },
                },
                &x3d.NavigationInfo{
                    TransitionType: x3d.MFString{"ANIMATE"},
                },
                &x3d.Group{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("PlacemarkGroup"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View01"),
                            },
                            Description: stringPtr("Naval Postgraduate School"),
                            Position: &x3d.SFVec3d{36.595599, -121.877148, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View02"),
                            },
                            Description: stringPtr("University of California Davis"),
                            Position: &x3d.SFVec3d{38.5365061515798, -121.748962861683, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View03"),
                            },
                            Description: stringPtr("University of California Berkeley"),
                            Position: &x3d.SFVec3d{37.8696343451233, -122.259387312736, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View04"),
                            },
                            Description: stringPtr("University of California San Francisco"),
                            Position: &x3d.SFVec3d{37.7634064718839, -122.458247537772, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View05"),
                            },
                            Description: stringPtr("University of California Santa Cruz"),
                            Position: &x3d.SFVec3d{36.9962844304604, -122.05343254738, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View06"),
                            },
                            Description: stringPtr("University of California Merced"),
                            Position: &x3d.SFVec3d{37.365508575977, -120.425259705914, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View07"),
                            },
                            Description: stringPtr("University of California Santa Barbara"),
                            Position: &x3d.SFVec3d{34.4112445096152, -119.847994005391, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View08"),
                            },
                            Description: stringPtr("University of California Los Angeles"),
                            Position: &x3d.SFVec3d{34.0722447439226, -118.440847222564, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View09"),
                            },
                            Description: stringPtr("University of California Irvine"),
                            Position: &x3d.SFVec3d{33.6462328367592, -117.842706413908, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View10"),
                            },
                            Description: stringPtr("University of California Riverside"),
                            Position: &x3d.SFVec3d{33.9735056706672, -117.328164956984, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View11"),
                            },
                            Description: stringPtr("University of California San Diego"),
                            Position: &x3d.SFVec3d{32.8761213660751, -117.236729824026, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View12"),
                            },
                            Description: stringPtr("Humboldt State University"),
                            Position: &x3d.SFVec3d{40.8763023562345, -124.078578921727, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View13"),
                            },
                            Description: stringPtr("California State University, Chico"),
                            Position: &x3d.SFVec3d{39.7303152772439, -121.845372274522, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View14"),
                            },
                            Description: stringPtr("California State University Sacramento"),
                            Position: &x3d.SFVec3d{38.5626517618963, -121.424463652056, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View15"),
                            },
                            Description: stringPtr("Sonoma State University"),
                            Position: &x3d.SFVec3d{38.3392292979361, -122.674433353003, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View16"),
                            },
                            Description: stringPtr("California Maritime Academy"),
                            Position: &x3d.SFVec3d{38.0690706505948, -122.230914713522, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View17"),
                            },
                            Description: stringPtr("San Francisco State University"),
                            Position: &x3d.SFVec3d{37.722876, -122.478151219067, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View18"),
                            },
                            Description: stringPtr("California State University, East Bay"),
                            Position: &x3d.SFVec3d{37.6570791413991, -122.056919065976, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View19"),
                            },
                            Description: stringPtr("California State University Stanislaus"),
                            Position: &x3d.SFVec3d{37.525524780057, -120.856350856061, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View20"),
                            },
                            Description: stringPtr("San Jose State University"),
                            Position: &x3d.SFVec3d{37.335809405271, -121.881534375578, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View21"),
                            },
                            Description: stringPtr("California State University, Monterey Bay"),
                            Position: &x3d.SFVec3d{36.6538071781493, -121.798446527671, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View22"),
                            },
                            Description: stringPtr("Fresno State University"),
                            Position: &x3d.SFVec3d{36.812166, -119.745155200585, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View23"),
                            },
                            Description: stringPtr("California State University, Bakersfield"),
                            Position: &x3d.SFVec3d{35.350804, -119.104322612803, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View24"),
                            },
                            Description: stringPtr("California Polytechnic State University"),
                            Position: &x3d.SFVec3d{35.3011569259917, -120.659576179635, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View25"),
                            },
                            Description: stringPtr("California State University, Channel Islands"),
                            Position: &x3d.SFVec3d{34.1624126428852, -119.042526484129, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View26"),
                            },
                            Description: stringPtr("California State University, Northridge"),
                            Position: &x3d.SFVec3d{34.2395926526385, -118.52842724009, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View27"),
                            },
                            Description: stringPtr("California State University, Los Angeles"),
                            Position: &x3d.SFVec3d{34.0664599662626, -118.168205090256, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View28"),
                            },
                            Description: stringPtr("California State Polytechnic University, Pomona"),
                            Position: &x3d.SFVec3d{34.0572715000031, -117.821532023481, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View29"),
                            },
                            Description: stringPtr("California State University, San Bernardino"),
                            Position: &x3d.SFVec3d{34.181801164321, -117.324367666472, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View30"),
                            },
                            Description: stringPtr("California State University, Fullerton"),
                            Position: &x3d.SFVec3d{33.882522, -117.886836786902, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View31"),
                            },
                            Description: stringPtr("California State University Dominguez Hills"),
                            Position: &x3d.SFVec3d{33.864633968571, -118.255359627206, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View32"),
                            },
                            Description: stringPtr("California State University, Long Beach"),
                            Position: &x3d.SFVec3d{33.7819669647082, -118.112678253688, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View33"),
                            },
                            Description: stringPtr("California State University, San Marcos"),
                            Position: &x3d.SFVec3d{33.1283761926517, -117.1600194071, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View34"),
                            },
                            Description: stringPtr("San Diego State University"),
                            Position: &x3d.SFVec3d{32.7759312658639, -117.072287624255, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View35"),
                            },
                            Description: stringPtr("CENIC"),
                            Position: &x3d.SFVec3d{33.879947, -118.027903, 250000},
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                        },
                    },
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("CrossHairInstance"),
                    },
                    Name: stringPtr("CrossHair"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("enabled"),
                            Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("markerColor"),
                        Value: stringPtr("0.1 0.8 0.1"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("scale"),
                        Value: stringPtr("0.5 0.5 0.5"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("positionOffsetFromCamera"),
                        Value: stringPtr("0 0 -5"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ViewpointTour"),
                    },
                    Name: stringPtr("ViewpointSequencer"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("viewpoints"),
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View01"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View02"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View03"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View04"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View05"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View06"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View07"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View08"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View09"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View10"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View11"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View12"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View13"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View14"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View15"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View16"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View17"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View18"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View19"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View20"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View21"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View22"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View23"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View24"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View25"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View26"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View27"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View28"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View29"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View30"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View31"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View32"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View33"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View34"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.GeoViewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        USE: stringPtr("View35"),
                                    },
                                },
                            },
                            Children: []x3d.X3DNode{
                                &x3d.Viewpoint{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("View4"),
                                    },
                                    Description: stringPtr("View four (-X axis)"),
                                    Position: &x3d.SFVec3f{-10.0, 0.0, 0.0},
                                    Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                                },
                            },
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("interval"),
                        Value: stringPtr("30"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("enabled"),
                        Value: stringPtr("true"),
                    },
                    &x3d.FieldValue{
                        Name: stringPtr("toggleMessage"),
                        Value: stringPtr("\"ViewpointSequencer tour\""),
                    },
                    },
                },
                &x3d.GeoLocation{
                    GeoCoords: &x3d.SFVec3d{36.595599, -121.877148, 624990},
                    &x3d.Billboard{
                        AxisOfRotation: &x3d.SFVec3f{0.0, 0.0, 0.0},
                        &x3d.Shape{
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    AmbientIntensity: floatPtr(0.25),
                                    DiffuseColor: &x3d.SFColor{0.795918, 0.505869, 0.093315},
                                    SpecularColor: &x3d.SFColor{0.923469, 0.428866, 0.006369},
                                    Shininess: floatPtr(0.39),
                                },
                            },
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"ViewpointSequencer tour"},
                                FontStyle: &x3d.FontStyle{
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                },
                            },
                        },
                    },
                    &x3d.TouchSensor{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TourTouch"),
                        },
                        Description: stringPtr("Touch text to turn tour on/off"),
                    },
                    &x3d.BooleanToggle{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("TourToggle"),
                        },
                    },
                },
                &x3d.ProtoInstance{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ExampleViewPositionOrientation"),
                    },
                    Name: stringPtr("ViewPositionOrientation"),
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("enabled"),
                            Value: stringPtr("false"),
                    },
                    },
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TourTouch"),
                    FromField: stringPtr("isActive"),
                    ToNode: stringPtr("TourToggle"),
                    ToField: stringPtr("set_boolean"),
                },
                &x3d.ROUTE{
                    FromNode: stringPtr("TourToggle"),
                    FromField: stringPtr("toggle_changed"),
                    ToNode: stringPtr("ViewpointTour"),
                    ToField: stringPtr("set_enabled"),
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
	filename := "../data/CaliforniaCampuses.new.go.x3d"
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