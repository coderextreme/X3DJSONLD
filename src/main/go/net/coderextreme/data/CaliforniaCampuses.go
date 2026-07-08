
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
                Content: stringPtr("20 October 2019"),
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
                Name: stringPtr("subject"),
                Content: stringPtr("X3D Earth"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("reference"),
                Content: stringPtr("http://mmog.ern.nps.edu/California/California.x3d"),
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
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
            },
            &x3d.Meta{
                Name: stringPtr("license"),
                Content: stringPtr("https://savage.nps.edu/Savage/license.html"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.WorldInfo{
                    Title: stringPtr("CaliforniaCampuses.x3d"),
                },
                &x3d.Switch{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SwitchGlobes"),
                    },
                    WhichChoice: int32Ptr(0),
//Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.
                    &x3d.Inline{
                        Url: x3d.MFString{"http://x3d-earth.nps.edu/osmdemo.x3d"},
                    },
//<Inline load='false' url='"http://mmog.ern.nps.edu/California/California.x3d"'/>
//<Inline load='false' url='"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d"'/>
//<Inline load='false' url='"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d"'/>
//<Inline load='false' url='"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d"'/>
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
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{36.595599, -121.877148, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View02"),
                            },
                            Description: stringPtr("University of California Davis"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{38.53650615157984, -121.7489628616831, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View03"),
                            },
                            Description: stringPtr("University of California Berkeley"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.86963434512325, -122.2593873127355, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View04"),
                            },
                            Description: stringPtr("University of California San Francisco"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.76340647188392, -122.4582475377715, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View05"),
                            },
                            Description: stringPtr("University of California Santa Cruz"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{36.99628443046043, -122.0534325473795, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View06"),
                            },
                            Description: stringPtr("University of California Merced"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.365508575977, -120.4252597059142, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View07"),
                            },
                            Description: stringPtr("University of California Santa Barbara"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.41124450961521, -119.8479940053906, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View08"),
                            },
                            Description: stringPtr("University of California Los Angeles"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.07224474392262, -118.4408472225642, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View09"),
                            },
                            Description: stringPtr("University of California Irvine"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.64623283675919, -117.8427064139082, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View10"),
                            },
                            Description: stringPtr("University of California Riverside"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.97350567066717, -117.3281649569839, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View11"),
                            },
                            Description: stringPtr("University of California San Diego"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{32.87612136607509, -117.2367298240259, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View12"),
                            },
                            Description: stringPtr("Humboldt State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{40.87630235623448, -124.0785789217266, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View13"),
                            },
                            Description: stringPtr("California State University, Chico"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{39.73031527724385, -121.8453722745223, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View14"),
                            },
                            Description: stringPtr("California State University Sacramento"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{38.5626517618963, -121.4244636520556, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View15"),
                            },
                            Description: stringPtr("Sonoma State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{38.33922929793606, -122.6744333530031, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View16"),
                            },
                            Description: stringPtr("California Maritime Academy"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{38.06907065059484, -122.2309147135222, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View17"),
                            },
                            Description: stringPtr("San Francisco State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.722876, -122.4781512190666, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View18"),
                            },
                            Description: stringPtr("California State University, East Bay"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.65707914139907, -122.0569190659761, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View19"),
                            },
                            Description: stringPtr("California State University Stanislaus"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.52552478005697, -120.8563508560606, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View20"),
                            },
                            Description: stringPtr("San Jose State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{37.33580940527095, -121.8815343755784, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View21"),
                            },
                            Description: stringPtr("California State University, Monterey Bay"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{36.6538071781493, -121.7984465276711, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View22"),
                            },
                            Description: stringPtr("Fresno State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{36.812166, -119.7451552005852, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View23"),
                            },
                            Description: stringPtr("California State University, Bakersfield"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{35.350804, -119.1043226128032, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View24"),
                            },
                            Description: stringPtr("California Polytechnic State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{35.30115692599171, -120.6595761796351, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View25"),
                            },
                            Description: stringPtr("California State University, Channel Islands"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.1624126428852, -119.0425264841287, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View26"),
                            },
                            Description: stringPtr("California State University, Northridge"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.23959265263849, -118.5284272400904, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View27"),
                            },
                            Description: stringPtr("California State University, Los Angeles"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.06645996626264, -118.1682050902557, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View28"),
                            },
                            Description: stringPtr("California State Polytechnic University, Pomona"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.05727150000314, -117.8215320234812, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View29"),
                            },
                            Description: stringPtr("California State University, San Bernardino"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{34.18180116432101, -117.3243676664719, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View30"),
                            },
                            Description: stringPtr("California State University, Fullerton"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.882522, -117.8868367869023, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View31"),
                            },
                            Description: stringPtr("California State University Dominguez Hills"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.86463396857103, -118.2553596272055, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View32"),
                            },
                            Description: stringPtr("California State University, Long Beach"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.78196696470824, -118.112678253688, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View33"),
                            },
                            Description: stringPtr("California State University, San Marcos"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.12837619265174, -117.1600194071002, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View34"),
                            },
                            Description: stringPtr("San Diego State University"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{32.77593126586385, -117.0722876242553, 250000},
                        },
                        &x3d.GeoViewpoint{
                            CoreX3DNode: x3d.CoreX3DNode{
                                DEF: stringPtr("View35"),
                            },
                            Description: stringPtr("CENIC"),
                            Orientation: &x3d.SFRotation{1.0, 0.0, 0.0, -1.57},
                            Position: &x3d.SFVec3d{33.879947, -118.027903, 250000},
                        },
                    },
                },
//====================
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("CrossHair"),
                    Appinfo: stringPtr("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"),
                    Url: x3d.MFString{"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair", "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair", "../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair", "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("whether CrossHair prototype is enabled or not"),
                            Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("set_enabled"),
                        AccessType: stringPtr("inputOnly"),
                        Appinfo: stringPtr("control whether enabled/disabled"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("markerColor"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("color of CrossHair marker"),
                        Type: stringPtr("SFColor"),
                    },
                    &x3d.Field{
                        Name: stringPtr("scale"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("size of CrossHair in meters"),
                        Type: stringPtr("SFVec3f"),
                    },
                    &x3d.Field{
                        Name: stringPtr("positionOffsetFromCamera"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("distance in front of HUD viewpoint"),
                        Type: stringPtr("SFVec3f"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("CrossHair"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("CrossHairInstance"),
                    },
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
//====================
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("HeadsUpDisplay"),
                    Appinfo: stringPtr("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location"),
                    Url: x3d.MFString{"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay", "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay", "../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay", "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("children"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("X3D content positioned at HUD offset"),
                            Type: stringPtr("MFNode"),
                    },
                    &x3d.Field{
                        Name: stringPtr("screenOffset"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("offset position for HUD relative to current view location, default 0 0 -5"),
                        Type: stringPtr("SFVec3f"),
                    },
                    &x3d.Field{
                        Name: stringPtr("position_changed"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("HUD position update (in world coordinates) relative to original location"),
                        Type: stringPtr("SFVec3f"),
                    },
                    &x3d.Field{
                        Name: stringPtr("orientation_changed"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("HUD orientation update relative to original location"),
                        Type: stringPtr("SFRotation"),
                    },
                    },
                },
//====================
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ViewpointSequencer"),
                    Appinfo: stringPtr("Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene"),
                    Url: x3d.MFString{"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer", "https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer", "../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer", "https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("viewpoints"),
                            AccessType: stringPtr("initializeOnly"),
                            Appinfo: stringPtr("Viewpoint USE nodes that are sequentially bound"),
                            Type: stringPtr("MFNode"),
                    },
                    &x3d.Field{
                        Name: stringPtr("interval"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("number of seconds between viewpoint shifts"),
                        Type: stringPtr("SFTime"),
                    },
                    &x3d.Field{
                        Name: stringPtr("enabled"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("whether ViewpointSequencer is enabled or not"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("set_enabled"),
                        AccessType: stringPtr("inputOnly"),
                        Appinfo: stringPtr("whether ViewpointSequencer is enabled or not"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("previous"),
                        AccessType: stringPtr("inputOnly"),
                        Appinfo: stringPtr("bind previous Viewpoint in list"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("next"),
                        AccessType: stringPtr("inputOnly"),
                        Appinfo: stringPtr("bind next Viewpoint in list"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("toggleMessage"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("Select message to toggle ViewpointSequencer"),
                        Type: stringPtr("MFString"),
                    },
                    &x3d.Field{
                        Name: stringPtr("toggleMessageFontSize"),
                        AccessType: stringPtr("initializeOnly"),
                        Appinfo: stringPtr("Color for toggleMessage text"),
                        Type: stringPtr("SFFloat"),
                    },
                    &x3d.Field{
                        Name: stringPtr("toggleMessageColor"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("Color for toggleMessage text"),
                        Type: stringPtr("SFColor"),
                    },
                    &x3d.Field{
                        Name: stringPtr("traceEnabled"),
                        AccessType: stringPtr("inputOutput"),
                        Appinfo: stringPtr("enable console output"),
                        Type: stringPtr("SFBool"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("ViewpointSequencer"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ViewpointTour"),
                    },
                    FieldValue: []x3d.X3DNode{
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
                                Orientation: &x3d.SFRotation{0.0, 1.0, 0.0, -1.57},
                                Position: &x3d.SFVec3f{-10.0, 0.0, 0.0},
                            },
                        },
                    },
//initially enabled is off, scene provides selectable text to activate
                    },
                },
//====================
                &x3d.GeoLocation{
                    GeoCoords: &x3d.SFVec3d{36.595599, -121.877148, 624990},
                    &x3d.Billboard{
                        AxisOfRotation: &x3d.SFVec3f{0.0, 0.0, 0.0},
                        &x3d.Shape{
                            Geometry: &x3d.Text{
                                String: x3d.MFString{"ViewpointSequencer tour"},
                                FontStyle: &x3d.FontStyle{
                                    Justify: x3d.MFString{"MIDDLE", "MIDDLE"},
                                },
                            },
                            Appearance: &x3d.Appearance{
                                Material: &x3d.Material{
                                    AmbientIntensity: floatPtr(0.25),
                                    DiffuseColor: &x3d.SFColor{0.795918, 0.505869, 0.093315},
                                    Shininess: floatPtr(0.39),
                                    SpecularColor: &x3d.SFColor{0.923469, 0.428866, 0.006369},
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
                    &x3d.X3DRoute{
                        FromField: stringPtr("isActive"),
                        FromNode: stringPtr("TourTouch"),
                        ToField: stringPtr("set_boolean"),
                        ToNode: stringPtr("TourToggle"),
                    },
                    &x3d.X3DRoute{
                        FromField: stringPtr("toggle"),
                        FromNode: stringPtr("TourToggle"),
                        ToField: stringPtr("set_enabled"),
                        ToNode: stringPtr("ViewpointTour"),
                    },
                },
//====================
                &x3d.ExternProtoDeclare{
                    Name: stringPtr("ViewPositionOrientation"),
                    Appinfo: stringPtr("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"),
                    Url: x3d.MFString{"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation", "https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation", "../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation", "https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"},
                    Field: []x3d.X3DNode{
                        &x3d.Field{
                            Name: stringPtr("enabled"),
                            AccessType: stringPtr("inputOutput"),
                            Appinfo: stringPtr("Whether or not ViewPositionOrientation sends output to console"),
                            Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("traceEnabled"),
                        AccessType: stringPtr("initializeOnly"),
                        Appinfo: stringPtr("Output internal trace messages for debugging this node, intended for developer use only"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("set_traceEnabled"),
                        AccessType: stringPtr("inputOnly"),
                        Appinfo: stringPtr("Ability to turn output tracing on/off at runtime"),
                        Type: stringPtr("SFBool"),
                    },
                    &x3d.Field{
                        Name: stringPtr("position_changed"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("Output local position"),
                        Type: stringPtr("SFVec3f"),
                    },
                    &x3d.Field{
                        Name: stringPtr("orientation_changed"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("Output local orientation"),
                        Type: stringPtr("SFRotation"),
                    },
                    &x3d.Field{
                        Name: stringPtr("outputViewpointString"),
                        AccessType: stringPtr("outputOnly"),
                        Appinfo: stringPtr("MFString value of new Viewpoint"),
                        Type: stringPtr("MFString"),
                    },
                    },
                },
                &x3d.ProtoInstance{
                    Name: stringPtr("ViewPositionOrientation"),
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("ExampleViewPositionOrientation"),
                    },
                    FieldValue: []x3d.X3DNode{
                        &x3d.FieldValue{
                            Name: stringPtr("enabled"),
                            Value: stringPtr("false"),
                    },
                    },
                },
//====================
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
	filename := "../data/CaliforniaCampuses.new.go.x3d"
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