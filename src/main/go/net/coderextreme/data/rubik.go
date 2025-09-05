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

// ... (Helper functions and validation functions remain the same) ...
func stringPtr(s string) *string { return &s }
func boolPtr(b bool) *bool       { return &b }
func int32Ptr(i int32) *int32    { return &i }

func downloadSchemaIfNotExists(url, filepath string) error {
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

func validateXMLWithSchema(xmlData []byte, schemaPath string) error {
	schema, err := xsd.ParseFromFile(schemaPath)
	if err != nil { return fmt.Errorf("failed to parse schema file %s: %w", schemaPath, err) }
	defer schema.Free()
	doc, err := libxml2.Parse(xmlData)
	if err != nil { return fmt.Errorf("failed to parse XML data: %w", err) }
	defer doc.Free()
	err = schema.Validate(doc)
	if err != nil { return fmt.Errorf("schema validation failed: %w", err) }
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
				{Name: stringPtr("title"), Content: stringPtr("rubik.x3d")},
				{Name: stringPtr("creator"), Content: stringPtr("John Carlson")},
				{Name: stringPtr("generator"), Content: stringPtr("manual")},
				{Name: stringPtr("generator"), Content: stringPtr("x3d-tidy V2.1.21, https://www.npmjs.com/package/x3d-tidy")},
			},
		},
		Scene: &x3d.Scene{
			Children: []x3d.X3DChildNode{
				&x3d.ProtoDeclare{
					Name: stringPtr("sphereproto"),
					ProtoInterface: &x3d.ProtoInterface{
						Field: []x3d.X3DNode{
							&x3d.Field{
								AccessType: stringPtr("inputOutput"),
								Type:       stringPtr("SFVec3f"),
								Name:       stringPtr("xtranslation"),
							},
						},
					},
					ProtoBody: &x3d.ProtoBody{
						// FIXED: ProtoBody.Children is of type []X3DNode.
						Children: []x3d.X3DNode{
							&x3d.Transform{
								// FIXED: Transform.Children is of type []X3DNode.
								Children: []x3d.X3DNode{
									&x3d.Shape{
										Appearance: &x3d.Appearance{
											Material: &x3d.Material{
												DiffuseColor: &x3d.SFColor{1, 1, 1},
											},
										},
										Geometry: &x3d.Sphere{},
									},
								},
								IS: &x3d.IS{
									Connect: []x3d.X3DNode{
										&x3d.Connect{
											NodeField:  stringPtr("translation"),
											ProtoField: stringPtr("xtranslation"),
										},
									},
								},
							},
						},
					},
				},
				&x3d.ProtoDeclare{
					Name: stringPtr("three"),
					ProtoInterface: &x3d.ProtoInterface{
						Field: []x3d.X3DNode{
							&x3d.Field{
								AccessType: stringPtr("inputOutput"),
								Type:       stringPtr("SFVec3f"),
								Name:       stringPtr("ytranslation"),
							},
						},
					},
					ProtoBody: &x3d.ProtoBody{
						// FIXED: ProtoBody.Children is of type []X3DNode.
						Children: []x3d.X3DNode{
							&x3d.Transform{
								// FIXED: Transform.Children is of type []X3DNode.
								Children: []x3d.X3DNode{
									&x3d.ProtoInstance{Name: stringPtr("sphereproto")},
									&x3d.ProtoInstance{
										Name: stringPtr("sphereproto"),
										FieldValue: []x3d.X3DNode{
											&x3d.FieldValue{
												Name:  stringPtr("xtranslation"),
												Value: stringPtr("2 0 0"),
											},
										},
									},
									&x3d.ProtoInstance{
										Name: stringPtr("sphereproto"),
										FieldValue: []x3d.X3DNode{
											&x3d.FieldValue{
												Name:  stringPtr("xtranslation"),
												Value: stringPtr("-2 0 0"),
											},
										},
									},
								},
								IS: &x3d.IS{
									Connect: []x3d.X3DNode{
										&x3d.Connect{
											NodeField:  stringPtr("translation"),
											ProtoField: stringPtr("ytranslation"),
										},
									},
								},
							},
						},
					},
				},
				&x3d.ProtoDeclare{
					Name: stringPtr("nine"),
					ProtoInterface: &x3d.ProtoInterface{
						Field: []x3d.X3DNode{
							&x3d.Field{
								AccessType: stringPtr("inputOutput"),
								Type:       stringPtr("SFVec3f"),
								Name:       stringPtr("ztranslation"),
							},
						},
					},
					ProtoBody: &x3d.ProtoBody{
						// FIXED: ProtoBody.Children is of type []X3DNode.
						Children: []x3d.X3DNode{
							&x3d.Transform{
								// FIXED: Transform.Children is of type []X3DNode.
								Children: []x3d.X3DNode{
									&x3d.ProtoInstance{Name: stringPtr("three")},
									&x3d.ProtoInstance{
										Name: stringPtr("three"),
										FieldValue: []x3d.X3DNode{
											&x3d.FieldValue{
												Name:  stringPtr("ytranslation"),
												Value: stringPtr("0 2 0"),
											},
										},
									},
									&x3d.ProtoInstance{
										Name: stringPtr("three"),
										FieldValue: []x3d.X3DNode{
											&x3d.FieldValue{
												Name:  stringPtr("ytranslation"),
												Value: stringPtr("0 -2 0"),
											},
										},
									},
								},
								IS: &x3d.IS{
									Connect: []x3d.X3DNode{
										&x3d.Connect{
											NodeField:  stringPtr("translation"),
											ProtoField: stringPtr("ztranslation"),
										},
									},
								},
							},
						},
					},
				},
				&x3d.ProtoDeclare{
					Name: stringPtr("twentyseven"),
					ProtoInterface: &x3d.ProtoInterface{
						Field: []x3d.X3DNode{
							&x3d.Field{
								AccessType: stringPtr("inputOutput"),
								Type:       stringPtr("SFVec3f"),
								Name:       stringPtr("ttranslation"),
							},
						},
					},
					ProtoBody: &x3d.ProtoBody{
						// FIXED: ProtoBody.Children is of type []X3DNode.
						Children: []x3d.X3DNode{
							&x3d.Transform{
								// FIXED: Transform.Children is of type []X3DNode.
								Children: []x3d.X3DNode{
									&x3d.ProtoInstance{Name: stringPtr("nine")},
									&x3d.ProtoInstance{
										Name: stringPtr("nine"),
										FieldValue: []x3d.X3DNode{
											&x3d.FieldValue{
												Name:  stringPtr("ztranslation"),
												Value: stringPtr("0 0 2"),
											},
										},
									},
									&x3d.ProtoInstance{
										Name: stringPtr("nine"),
										FieldValue: []x3d.X3DNode{
											&x3d.FieldValue{
												Name:  stringPtr("ztranslation"),
												Value: stringPtr("0 0 -2"),
											},
										},
									},
								},
								IS: &x3d.IS{
									Connect: []x3d.X3DNode{
										&x3d.Connect{
											NodeField:  stringPtr("translation"),
											ProtoField: stringPtr("ttranslation"),
										},
									},
								},
							},
						},
					},
				},
				&x3d.NavigationInfo{
					// FIXED: Changed &x3d.MFString{...} to the correct type []string{...}
					Type: []string{"ANY", "EXAMINE", "WALK", "FLY", "LOOKAT"},
				},
				&x3d.Viewpoint{
					Description: stringPtr("Rubiks Cube"),
					Position:    &x3d.SFVec3f{0, 0, 12},
				},
				&x3d.ProtoInstance{
					Name: stringPtr("twentyseven"),
				},
			},
		},
	}

	// --- Validate the Scene (internal struct validation) ---
	fmt.Println("\n--- Validating the generated scene (internal logic) ---")
	err := sceneRoot.Scene.Validate()
	if err != nil {
		log.Fatalf("Scene validation failed: %v", err)
	}
	fmt.Println("✅ Internal scene validation successful!")

	// --- Serialize the Valid Scene to XML ---
	fmt.Println("\n--- Serializing scene to XML ---")
	output, err := xml.MarshalIndent(sceneRoot, "", "  ")
	if err != nil {
		log.Fatalf("XML Marshaling failed: %v", err)
	}

	// --- XSD Schema Validation ---
	fmt.Println("\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")

	// --- Save to File ---
	filename := "scene.x3d"
	err = os.WriteFile(filename, output, 0644)
	if err != nil {
		log.Fatalf("Failed to write to file %s: %v", filename, err)
	}
	fmt.Printf("\n✅ Scene successfully written to %s\n", filename)
	fmt.Printf("   You can view the generated XML below:\n\n%s\n", string(output))
}
