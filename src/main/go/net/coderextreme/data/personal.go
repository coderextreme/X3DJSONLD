
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
                    Name: stringPtr("title"),
                    Content: stringPtr("personal.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("identifier"),
                Content: stringPtr("https://someAddress/somePath/personal.x3d"),
            },
            &x3d.Meta{
                Name: stringPtr("description"),
                Content: stringPtr("John's Portfolio"),
            },
            &x3d.Meta{
                Name: stringPtr("generator"),
                Content: stringPtr("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit"),
            },
            },
        },
        &x3d.Group{
            Children: []x3d.X3DNode{
                &x3d.Viewpoint{
                    Description: stringPtr("Tour Views"),
                    Position: &x3d.SFVec3f{0.0, 0.0, 12.0},
                },
                &x3d.Switch{
                    CoreX3DNode: x3d.CoreX3DNode{
                        DEF: stringPtr("SceneSwitcher"),
                    },
                    WhichChoice: int32Ptr(0),
//<Inline url='"../data/myextrusion.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"'/>
//<Inline url='"../data/ballx_ite.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d"'/>
//<Inline url='"../data/flower.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d"'/>
//<Inline url='"../data/flower3.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"'/>
//<Inline url='"../data/flowers.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"'/>
//<Inline url='"../data/flowers2.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"'/>
//<Inline url='"../data/flowers4.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"'/>
//<Inline url='"../data/flowers7.x3d" "https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"'/>
                    &x3d.Inline{
                        Url: x3d.MFString{"../data/force-tidy.x3d", "https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"},
                    },
                },
//<Script DEF="Choice0">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]>
//</Script>
//<Transform translation="0 4 0">
//<TouchSensor description="Ball Prism" DEF="BallPrism_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Ball Prism"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="BallPrism_Sensor" fromField="touchTime" toNode="Choice0" toField="touchTime"/>
//<ROUTE fromNode="Choice0" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice1">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]>
//</Script>
//<Transform translation="0 3 0">
//<TouchSensor description="Floating Extrusion" DEF="FloatingExtrusion_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Floating Extrusion"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="FloatingExtrusion_Sensor" fromField="touchTime" toNode="Choice1" toField="touchTime"/>
//<ROUTE fromNode="Choice1" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice2">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]>
//</Script>
//<Transform translation="0 2 0">
//<TouchSensor description="Flower" DEF="Flower_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Flower"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Flower_Sensor" fromField="touchTime" toNode="Choice2" toField="touchTime"/>
//<ROUTE fromNode="Choice2" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice3">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]>
//</Script>
//<Transform translation="0 1 0">
//<TouchSensor description="Flower 3" DEF="Flower3_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Flower 3"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Flower3_Sensor" fromField="touchTime" toNode="Choice3" toField="touchTime"/>
//<ROUTE fromNode="Choice3" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice4">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]>
//</Script>
//<Transform>
//<TouchSensor description="Flowers" DEF="Flowers_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Flowers"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Flowers_Sensor" fromField="touchTime" toNode="Choice4" toField="touchTime"/>
//<ROUTE fromNode="Choice4" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice5">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]>
//</Script>
//<Transform translation="0 -1 0">
//<TouchSensor description="Flowers 2" DEF="Flowers2_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Flowers 2"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Flowers2_Sensor" fromField="touchTime" toNode="Choice5" toField="touchTime"/>
//<ROUTE fromNode="Choice5" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice6">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]>
//</Script>
//<Transform translation="0 -2 0">
//<TouchSensor description="Flowers 4" DEF="Flowers4_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Flowers 4"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Flowers4_Sensor" fromField="touchTime" toNode="Choice6" toField="touchTime"/>
//<ROUTE fromNode="Choice6" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice7">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]>
//</Script>
//<Transform translation="0 -3 0">
//<TouchSensor description="Flowers 7 Inner Brow Raiser" DEF="Flowers7_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Flowers 7"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Flowers7_Sensor" fromField="touchTime" toNode="Choice7" toField="touchTime"/>
//<ROUTE fromNode="Choice7" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
//<Script DEF="Choice8">
//<field name="touchTime" type="SFTime" accessType="inputOnly"/>
//<field name="choice" type="SFInt32" accessType="outputOnly"/>
//<![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]>
//</Script>
//<Transform translation="0 -4 0">
//<TouchSensor description="Force" DEF="Force_Sensor"/>
//<Shape>
//<Appearance>
//<Material diffuseColor="1 1 1"/>
//</Appearance>
//<Text string='"Force"'>
//<FontStyle size="2.4" spacing="1.2" justify='"MIDDLE" "MIDDLE"'/>
//</Text>
//</Shape>
//<Shape>
//<Appearance>
//<Material diffuseColor="0 0 1"/>
//</Appearance>
//<IndexedFaceSet coordIndex='0 1 2 3 -1'>
//<Coordinate point="2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1"/>
//</IndexedFaceSet>
//</Shape>
//</Transform>
//<ROUTE fromNode="Force_Sensor" fromField="touchTime" toNode="Choice8" toField="touchTime"/>
//<ROUTE fromNode="Choice8" fromField="choice" toNode="SceneSwitcher" toField="whichChoice"/>
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
	filename := "../data/personal.new.go.x3d"
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