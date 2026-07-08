
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
        Profile: stringPtr("Full"),
        Version: stringPtr("4.0"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("comment"),
                    Content: stringPtr("World of Titania"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("Fri, 04 Sep 2015 10:19:01 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("creator"),
                Content: stringPtr("Holger Seelig"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Titania V3.0.4, https://titania.create3000.de"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 25 Jul 2017 09:42:17 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("title"),
                Content: stringPtr("Connectors"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.ProtoDeclare{
                    Name: stringPtr("RoundedRectangle2D"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("cornerRadius"),
                                AccessType: stringPtr("initializeOnly"),
                                Type: stringPtr("SFFloat"),
                                Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("size"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFVec2f"),
                            Value: stringPtr("2 2"),
                        },
                        &x3d.Field{
                            Name: stringPtr("solid"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFBool"),
                            Value: stringPtr("true"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.IndexedFaceSet{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Geometry"),
                                },
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("solid"),
                                            ProtoField: stringPtr("solid"),
                                    },
                                    },
                                },
                                Coord: &x3d.Coordinate{
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("RoundedRectangle2D"),
                                },
                                DirectOutput: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("cornerRadius"),
                                            ProtoField: stringPtr("cornerRadius"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("size"),
                                        ProtoField: stringPtr("size"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("cornerDimension"),
                                        AccessType: stringPtr("initializeOnly"),
                                        Type: stringPtr("SFFloat"),
                                        Value: stringPtr("10"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("cornerRadius"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFFloat"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("size"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFVec2f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("geometry"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.IndexedFaceSet{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("Geometry"),
                                            },
                                        },
                                    },
                                },
//ecmascript:
//
//function initialize ()
//{
//	var point         = new SFVec3f (cornerRadius, 0, 0);
//	var startRotation = new SFRotation ();
//	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
//	var corner        = new MFVec3f ();
//	var coordIndex    = new MFInt32 ();
//	var points        = new MFVec3f ();
//
//	for (var i = 0; i < cornerDimension * 4; ++ i)
//		coordIndex [coordIndex .length] = i;
//
//	geometry .coordIndex = coordIndex;
//
//	for (var i = 0; i < cornerDimension; ++i)
//		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);
//
//	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);
//
//	for (var i = 0; i < cornerDimension; ++ i)
//		points [points .length] = corner [i] .add (translation);
//
//	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);
//	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);
//
//	for (var i = 0; i < cornerDimension; ++ i)
//		points [points .length] = rotation .multVec (corner [i]) .add (translation);
//
//	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);
//	var rotation    = new SFRotation (0, 0, 1, Math .PI);
//
//	for (var i = 0; i < cornerDimension; ++ i)
//		points [points .length] = rotation .multVec (corner [i]) .add (translation);
//
//	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);
//	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);
//
//	for (var i = 0; i < cornerDimension; ++ i)
//		points [points .length] = rotation .multVec (corner [i]) .add (translation);
//
//	geometry .coord .point = points;
//}
                                },
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Widget"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("fillColor"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFColor"),
                                Value: stringPtr("0.1 0.1 0.1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("lineColor"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFColor"),
                            Value: stringPtr("0.4 0.4 0.4"),
                        },
                        &x3d.Field{
                            Name: stringPtr("linewidthScaleFactor"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("1"),
                        },
                        &x3d.Field{
                            Name: stringPtr("geometry"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFNode"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Transform{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Shape"),
                                    },
                                Children: []x3d.X3DNode{
                                    &x3d.Shape{
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("geometry"),
                                                    ProtoField: stringPtr("geometry"),
                                            },
                                            },
                                        },
                                        Appearance: &x3d.Appearance{
                                            Material: &x3d.Material{
                                                IS: &x3d.IS{
                                                    Connect: []x3d.X3DNode{
                                                        &x3d.Connect{
                                                            NodeField: stringPtr("diffuseColor"),
                                                            ProtoField: stringPtr("fillColor"),
                                                    },
                                                    },
                                                },
                                            },
                                        },
                                    },
                                    &x3d.Shape{
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("geometry"),
                                                    ProtoField: stringPtr("geometry"),
                                            },
                                            },
                                        },
                                        Appearance: &x3d.Appearance{
                                            FillProperties: &x3d.FillProperties{
                                                Filled: boolPtr(false),
                                                Hatched: boolPtr(false),
                                            },
                                            LineProperties: &x3d.LineProperties{
                                                IS: &x3d.IS{
                                                    Connect: []x3d.X3DNode{
                                                        &x3d.Connect{
                                                            NodeField: stringPtr("linewidthScaleFactor"),
                                                            ProtoField: stringPtr("linewidthScaleFactor"),
                                                    },
                                                    },
                                                },
                                            },
                                            Material: &x3d.Material{
                                                DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                                IS: &x3d.IS{
                                                    Connect: []x3d.X3DNode{
                                                        &x3d.Connect{
                                                            NodeField: stringPtr("emissiveColor"),
                                                            ProtoField: stringPtr("lineColor"),
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
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Node"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("translation"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFVec3f"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Group{
                                Children: []x3d.X3DNode{
                                    &x3d.PlaneSensor{
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("PlaneSensor"),
                                        },
                                    },
                                    &x3d.Transform{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("Node"),
                                            },
                                            IS: &x3d.IS{
                                                Connect: []x3d.X3DNode{
                                                    &x3d.Connect{
                                                        NodeField: stringPtr("translation"),
                                                        ProtoField: stringPtr("translation"),
                                                },
                                                },
                                            },
                                        Children: []x3d.X3DNode{
                                            &x3d.ProtoInstance{
                                                Name: stringPtr("Widget"),
                                                FieldValue: []x3d.X3DNode{
                                                    &x3d.FieldValue{
                                                        Name: stringPtr("geometry"),
                                                        Children: []x3d.X3DNode{
                                                            &x3d.ProtoInstance{
                                                                Name: stringPtr("RoundedRectangle2D"),
                                                                FieldValue: []x3d.X3DNode{
                                                                    &x3d.FieldValue{
                                                                        Name: stringPtr("cornerRadius"),
                                                                        Value: stringPtr("0.12"),
                                                                },
                                                                &x3d.FieldValue{
                                                                    Name: stringPtr("size"),
                                                                    Value: stringPtr("2 1"),
                                                                },
                                                                },
                                                            },
                                                        },
                                                },
                                                },
                                            },
                                            &x3d.Transform{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Input"),
                                                    },
                                                    Translation: &x3d.SFVec3f{-1.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.ProtoInstance{
                                                        Name: stringPtr("Widget"),
                                                        FieldValue: []x3d.X3DNode{
                                                            &x3d.FieldValue{
                                                                Name: stringPtr("lineColor"),
                                                                Value: stringPtr("0.72 0.14 0.23"),
                                                        },
                                                        &x3d.FieldValue{
                                                            Name: stringPtr("geometry"),
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Disk2D{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        DEF: stringPtr("Connector"),
                                                                    },
                                                                    OuterRadius: floatPtr(0.2),
                                                                },
                                                            },
                                                        },
                                                        },
                                                    },
                                                },
                                            },
                                            &x3d.Transform{
                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                        DEF: stringPtr("Output"),
                                                    },
                                                    Translation: &x3d.SFVec3f{1.0, 0.0, 0.0},
                                                Children: []x3d.X3DNode{
                                                    &x3d.ProtoInstance{
                                                        Name: stringPtr("Widget"),
                                                        FieldValue: []x3d.X3DNode{
                                                            &x3d.FieldValue{
                                                                Name: stringPtr("lineColor"),
                                                                Value: stringPtr("0.44 0.5 0.72"),
                                                        },
                                                        &x3d.FieldValue{
                                                            Name: stringPtr("geometry"),
                                                            Children: []x3d.X3DNode{
                                                                &x3d.Disk2D{
                                                                    CoreX3DNode: x3d.CoreX3DNode{
                                                                        USE: stringPtr("Connector"),
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
                                },
                            },
                            &x3d.Script{
                                DirectOutput: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("translation"),
                                            ProtoField: stringPtr("translation"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("translation"),
                                        AccessType: stringPtr("inputOutput"),
                                        Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("sensor"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.PlaneSensor{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("PlaneSensor"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("transform"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.Transform{
                                                CoreX3DNode: x3d.CoreX3DNode{
                                                    USE: stringPtr("Node"),
                                                },
                                            Children: []x3d.X3DNode{
                                            },
                                        },
                                    },
                                },
//ecmascript:
//function initialize ()
//{
//	sensor .offset = translation;
//}
                                },
                            },
                            &x3d.X3DRoute{
                                FromNode: stringPtr("PlaneSensor"),
                                FromField: stringPtr("translation_changed"),
                                ToNode: stringPtr("Node"),
                                ToField: stringPtr("set_translation"),
                            },
                        },
                    },
                },
                &x3d.ProtoDeclare{
                    Name: stringPtr("Route"),
                    ProtoInterface: &x3d.ProtoInterface{
                        Field: []x3d.X3DNode{
                            &x3d.Field{
                                Name: stringPtr("lineColor"),
                                AccessType: stringPtr("inputOutput"),
                                Type: stringPtr("SFColor"),
                                Value: stringPtr("0.43 0.43 0.98"),
                        },
                        &x3d.Field{
                            Name: stringPtr("linewidthScaleFactor"),
                            AccessType: stringPtr("inputOutput"),
                            Type: stringPtr("SFFloat"),
                            Value: stringPtr("2"),
                        },
                        &x3d.Field{
                            Name: stringPtr("output"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFNode"),
                        },
                        &x3d.Field{
                            Name: stringPtr("input"),
                            AccessType: stringPtr("initializeOnly"),
                            Type: stringPtr("SFNode"),
                        },
                        },
                    },
                    ProtoBody: &x3d.ProtoBody{
                        Children: []x3d.X3DNode{
                            &x3d.Shape{
                                Appearance: &x3d.Appearance{
                                    LineProperties: &x3d.LineProperties{
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("linewidthScaleFactor"),
                                                    ProtoField: stringPtr("linewidthScaleFactor"),
                                            },
                                            },
                                        },
                                    },
                                    Material: &x3d.Material{
                                        DiffuseColor: &x3d.SFColor{0.0, 0.0, 0.0},
                                        IS: &x3d.IS{
                                            Connect: []x3d.X3DNode{
                                                &x3d.Connect{
                                                    NodeField: stringPtr("emissiveColor"),
                                                    ProtoField: stringPtr("lineColor"),
                                            },
                                            },
                                        },
                                    },
                                },
                                Geometry: &x3d.LineSet{
                                    CoreX3DNode: x3d.CoreX3DNode{
                                        DEF: stringPtr("Geometry_1"),
                                    },
                                    VertexCount: []int32{2},
                                    Coord: &x3d.Coordinate{
                                        Point: &x3d.MFVec3f{[3]float32{-1.0,0.0,0.0},[3]float32{1.0,0.0,0.0}},
                                    },
                                },
                            },
                            &x3d.Script{
                                CoreX3DNode: x3d.CoreX3DNode{
                                    DEF: stringPtr("Route"),
                                },
                                DirectOutput: boolPtr(true),
                                IS: &x3d.IS{
                                    Connect: []x3d.X3DNode{
                                        &x3d.Connect{
                                            NodeField: stringPtr("output"),
                                            ProtoField: stringPtr("output"),
                                    },
                                    &x3d.Connect{
                                        NodeField: stringPtr("input"),
                                        ProtoField: stringPtr("input"),
                                    },
                                    },
                                },
                                Field: []x3d.X3DNode{
                                    &x3d.Field{
                                        Name: stringPtr("set_translation"),
                                        AccessType: stringPtr("inputOnly"),
                                        Type: stringPtr("SFVec3f"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("routeDimension"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFInt32"),
                                    Value: stringPtr("21"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("output"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("input"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                },
                                &x3d.Field{
                                    Name: stringPtr("geometry"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.LineSet{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("Geometry_1"),
                                            },
                                        },
                                    },
                                },
                                &x3d.Field{
                                    Name: stringPtr("self"),
                                    AccessType: stringPtr("initializeOnly"),
                                    Type: stringPtr("SFNode"),
                                    Children: []x3d.X3DNode{
                                        &x3d.Script{
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("Route"),
                                            },
                                        },
                                    },
                                },
//ecmascript:
//function initialize ()
//{
//	Browser .addRoute (output, 'translation_changed', self, 'set_translation');
//	Browser .addRoute (input,  'translation_changed', self, 'set_translation');
//
//	set_translation ();
//}
//
//function set_translation ()
//{
//	geometry .vertexCount [0] = routeDimension;
//
//	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));
//	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));
//
//	var w = inPoint .x - outPoint .x;
//	var h = outPoint .y - inPoint .y;
//
//	for (var i = 0; i < routeDimension; ++ i)
//	{
//		var t = i / (routeDimension - 1);
//		var y = h / 2 * (Math .cos (t * Math .PI) - 1);
//
//		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
//	}
//}
                                },
                            },
                        },
                    },
                },
                &x3d.NavigationInfo{
                    Type: x3d.MFString{"FLY", "ANY"},
                },
                &x3d.Background{
                    SkyColor: &x3d.MFColor{[3]float32{0.2,0.2,0.2}},
                },
                &x3d.OrthoViewpoint{
                    Description: stringPtr("OthoViewpoint"),
                    Position: &x3d.SFVec3f{-3.13496, -4.19776, 10.0},
                    CenterOfRotation: &x3d.SFVec3f{-3.13496, -4.19776, 0.0},
                    FieldOfView: x3d.MFFloat{0.0, 0.0, 10.0, 10.0},
                },
                &x3d.Viewpoint{
                    Description: stringPtr("Viewpoint"),
                },
                &x3d.Transform{
                        CoreX3DNode: x3d.CoreX3DNode{
                            DEF: stringPtr("Connectors"),
                        },
                    Children: []x3d.X3DNode{
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                DEF: stringPtr("N1"),
                                            },
                                            FieldValue: []x3d.X3DNode{
                                                &x3d.FieldValue{
                                                    Name: stringPtr("translation"),
                                                    Value: stringPtr("-3.98323 2.88948 0"),
                                            },
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N2"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("-0.0890862 2.96049 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N1"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N3"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("-0.104169 1.16371 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N1"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N4"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("-0.0998688 -0.40172 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N1"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N5"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("-0.0998687 -2.14742 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N2"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N6"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("3.55694 2.4116 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N3"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("N6"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N4"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N7"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("3.75106 -0.0794556 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N5"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("N7"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N6"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            DEF: stringPtr("N8"),
                                        },
                                        FieldValue: []x3d.X3DNode{
                                            &x3d.FieldValue{
                                                Name: stringPtr("translation"),
                                                Value: stringPtr("7.68077 1.21228 0"),
                                        },
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Route"),
                            FieldValue: []x3d.X3DNode{
                                &x3d.FieldValue{
                                    Name: stringPtr("output"),
                                    Children: []x3d.X3DNode{
                                        &x3d.ProtoInstance{
                                            Name: stringPtr("Node"),
                                            CoreX3DNode: x3d.CoreX3DNode{
                                                USE: stringPtr("N7"),
                                            },
                                        },
                                    },
                            },
                            &x3d.FieldValue{
                                Name: stringPtr("input"),
                                Children: []x3d.X3DNode{
                                    &x3d.ProtoInstance{
                                        Name: stringPtr("Node"),
                                        CoreX3DNode: x3d.CoreX3DNode{
                                            USE: stringPtr("N8"),
                                        },
                                    },
                                },
                            },
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N1"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N2"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N3"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N4"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N5"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N6"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N7"),
                            },
                        },
                        &x3d.ProtoInstance{
                            Name: stringPtr("Node"),
                            CoreX3DNode: x3d.CoreX3DNode{
                                USE: stringPtr("N8"),
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
	filename := "../data/Connectors.new.go.x3d"
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