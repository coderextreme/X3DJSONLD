
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
        Version: stringPtr("4.1"),
        Head: &x3d.Head{
            Metas: []*x3d.Meta{
                &x3d.Meta{
                    Name: stringPtr("creator"),
                    Content: stringPtr("Holger Seelig"),
            },
            &x3d.Meta{
                Name: stringPtr("created"),
                Content: stringPtr("Tue, 10 Feb 2026 12:09:57 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("modified"),
                Content: stringPtr("Tue, 10 Feb 2026 12:34:21 GMT"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("Sunrize X3D Editor V2.0.2, https://create3000.github.io/sunrize/"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.WorldInfo{
                },
                &x3d.Background{
                },
                &x3d.Fog{
                },
                &x3d.LocalFog{
                },
                &x3d.TextureBackground{
                },
                &x3d.ProximitySensor{
                },
                &x3d.TransformSensor{
                },
                &x3d.VisibilitySensor{
                },
                &x3d.ColorChaser{
                },
                &x3d.ColorDamper{
                },
                &x3d.CoordinateChaser{
                },
                &x3d.CoordinateDamper{
                },
                &x3d.OrientationChaser{
                },
                &x3d.OrientationDamper{
                },
                &x3d.PositionChaser{
                },
                &x3d.PositionChaser2D{
                },
                &x3d.PositionDamper{
                },
                &x3d.PositionDamper2D{
                },
                &x3d.ScalarChaser{
                },
                &x3d.ScalarDamper{
                },
                &x3d.TexCoordChaser2D{
                },
                &x3d.TexCoordDamper2D{
                },
                &x3d.Group{
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.StaticGroup{
                },
                &x3d.Switch{
                    WhichChoice: int32Ptr(-1),
                },
                &x3d.Transform{
                    Children: []x3d.X3DNode{
                    },
                },
                &x3d.ColorInterpolator{
                },
                &x3d.CoordinateInterpolator{
                },
                &x3d.CoordinateInterpolator2D{
                },
                &x3d.EaseInEaseOut{
                },
                &x3d.NormalInterpolator{
                },
                &x3d.OrientationInterpolator{
                },
                &x3d.PositionInterpolator{
                },
                &x3d.PositionInterpolator2D{
                },
                &x3d.ScalarInterpolator{
                },
                &x3d.SplinePositionInterpolator{
                },
                &x3d.SplinePositionInterpolator2D{
                },
                &x3d.SplineScalarInterpolator{
                },
                &x3d.SquadOrientationInterpolator{
                },
                &x3d.LayerSet{
                },
                &x3d.DirectionalLight{
                },
                &x3d.EnvironmentLight{
                    Origin: &x3d.SFVec3f{0.0, 0.0, 0.0},
                    Rotation: &x3d.SFRotation{0.0, 0.0, 1.0, 0.0},
                },
                &x3d.PointLight{
                },
                &x3d.SpotLight{
                    BeamWidth: floatPtr(0.589049),
                },
                &x3d.Billboard{
                },
                &x3d.Collision{
                },
                &x3d.LOD{
                },
                &x3d.NavigationInfo{
                },
                &x3d.OrthoViewpoint{
                },
                &x3d.Viewpoint{
                },
                &x3d.ViewpointGroup{
                },
                &x3d.Anchor{
                },
                &x3d.Inline{
                },
                &x3d.LoadSensor{
                },
                &x3d.CylinderSensor{
                },
                &x3d.PlaneSensor{
                },
                &x3d.SphereSensor{
                },
                &x3d.TouchSensor{
                },
                &x3d.ClipPlane{
                },
                &x3d.Shape{
                },
                &x3d.Analyser{
                },
                &x3d.AudioDestination{
                },
                &x3d.BiquadFilter{
                    Type: stringPtr("LOWPASS"),
                },
                &x3d.BufferAudioSource{
                },
                &x3d.ChannelMerger{
                },
                &x3d.ChannelSelector{
                },
                &x3d.ChannelSplitter{
                },
                &x3d.Convolver{
                },
                &x3d.Delay{
                },
                &x3d.DynamicsCompressor{
                },
                &x3d.Gain{
                },
                &x3d.ListenerPointSource{
                },
                &x3d.MicrophoneSource{
                },
                &x3d.OscillatorSource{
                },
                &x3d.Sound{
                },
                &x3d.SpatialSound{
                },
                &x3d.StreamAudioDestination{
                },
                &x3d.StreamAudioSource{
                },
                &x3d.WaveShaper{
                },
                &x3d.TimeSensor{
                },
                &x3d.CADAssembly{
                },
                &x3d.CADFace{
                },
                &x3d.CADLayer{
                },
                &x3d.CADPart{
                },
                &x3d.DISEntityManager{
                },
                &x3d.DISEntityTypeMapping{
                },
                &x3d.EspduTransform{
                },
                &x3d.ReceiverPdu{
                },
                &x3d.SignalPdu{
                },
                &x3d.TransmitterPdu{
                },
                &x3d.BooleanFilter{
                },
                &x3d.BooleanSequencer{
                },
                &x3d.BooleanToggle{
                },
                &x3d.BooleanTrigger{
                },
                &x3d.IntegerSequencer{
                },
                &x3d.IntegerTrigger{
                },
                &x3d.TimeTrigger{
                },
                &x3d.KeySensor{
                    Enabled: boolPtr(false),
                },
                &x3d.StringSensor{
                },
                &x3d.TextureProjector{
                    AmbientIntensity: floatPtr(0.0),
                    Color: &x3d.SFColor{1.0, 1.0, 1.0},
                    FieldOfView: floatPtr(0.7854),
                    Intensity: floatPtr(0.7854),
                    UpVector: &x3d.SFVec3f{0.0, 1.0, 0.0},
                },
                &x3d.TextureProjectorParallel{
                    AmbientIntensity: floatPtr(0.0),
                    Color: &x3d.SFColor{1.0, 1.0, 1.0},
                    Intensity: floatPtr(0.7854),
                    UpVector: &x3d.SFVec3f{0.0, 1.0, 0.0},
                },
                &x3d.HAnimHumanoid{
                    Version: stringPtr("2.0"),
                },
                Children: []x3d.X3DNode{
                    &x3d.HAnimJoint{
                        Ulimit: x3d.MFFloat{0.0, 0.0, 0.0},
                        Llimit: x3d.MFFloat{0.0, 0.0, 0.0},
                },
                &x3d.HAnimPose{
                    Loa: int32Ptr(-1),
                    TransitionDuration: doublePtr(0.0),
                },
                Children: []x3d.X3DNode{
                    &x3d.HAnimSegment{
                },
                &x3d.HAnimSite{
                },
                &x3d.ParticleSystem{
                },
                &x3d.Script{
                },
                &x3d.FontLibrary{
                },
                &x3d.CollidableOffset{
                },
                &x3d.CollidableShape{
                },
                &x3d.CollisionSensor{
                },
                &x3d.CollisionSpace{
                },
                &x3d.RigidBodyCollection{
                },
                &x3d.IsoSurfaceVolumeData{
                },
                &x3d.SegmentedVolumeData{
                },
                &x3d.VolumeData{
                },
                &x3d.GeoLOD{
                },
                &x3d.GeoLocation{
                },
                &x3d.GeoMetadata{
                },
                &x3d.GeoPositionInterpolator{
                },
                &x3d.GeoProximitySensor{
                },
                &x3d.GeoTouchSensor{
                },
                &x3d.GeoTransform{
                },
                &x3d.GeoViewpoint{
                },
                &x3d.ContourPolyline2D{
                },
                &x3d.NurbsCurve2D{
                },
                &x3d.NurbsOrientationInterpolator{
                },
                &x3d.NurbsPositionInterpolator{
                },
                &x3d.NurbsSet{
                },
                &x3d.NurbsSurfaceInterpolator{
                },
                &x3d.LayoutGroup{
                },
                &x3d.ScreenGroup{
                },
                &x3d.LinePickSensor{
                },
                &x3d.PickableGroup{
                },
                &x3d.PointPickSensor{
                },
                &x3d.PrimitivePickSensor{
                },
                &x3d.VolumePickSensor{
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
	filename := "../data/Nodes.new.go.x3d"
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