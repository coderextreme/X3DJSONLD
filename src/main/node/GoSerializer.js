"use strict";

const DOUBLE_SUFFIX = '';
const FLOAT_SUFFIX = '';

export default function GoSerializer () {
}


GoSerializer.prototype = {
	serializeToString : function(json, parent, clazz, mapToMethod, fieldTypes) {
		let str = "";
		str += `
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
func boolPtr(b bool) *bool       { return &b }
func int32Ptr(i int32) *int32    { return &i }

func downloadSchemaIfNotExists(url, filepath string) error {
	// ... (function is correct, no changes) ...
	if _, err := os.Stat(filepath); err == nil {
		fmt.Printf("Schema file '%s' already exists. Skipping download.\\n", filepath)
		return nil
	}
	fmt.Printf("Downloading X3D schema from %s to %s...\\n", url, filepath)
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
				errorLog += fmt.Sprintf("Error %d: %s\\n", i+1, e.Error())
			}
			return fmt.Errorf("schema validation failed with %d errors:\\n%s", len(schemaErrors.Errors()), errorLog)
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
`
		str += "    ".repeat(1)+'sceneRoot := &x3d.'+parent.nodeName+'{\n';
		str += this.subSerializeToString(parent, mapToMethod, fieldTypes, 2).replace(/:  *\&x3d\./g, ": &x3d.");
		str += `    }

	fmt.Println("\\n--- Validating the generated scene (internal logic) ---")
	err := sceneRoot.Scene.Validate()
	if err != nil {
		log.Fatalf("Scene validation failed: %v", err)
	}
	fmt.Println("✅ Internal scene validation successful!")
	fmt.Println("\\n--- Serializing scene to XML ---")
	output, err := xml.MarshalIndent(sceneRoot, "", "  ")
	if err != nil {
		log.Fatalf("XML Marshaling failed: %v", err)
	}
	/*
	fmt.Println("\\n--- Validating XML against X3D 4.0 Schema (using libxml2) ---")
	err = validateXMLWithSchema(output, schemaFilename)
	if err != nil {
		fmt.Printf("--- Invalid Generated XML ---\\n%s\\n---------------------------\\n", string(output))
		log.Fatalf("Schema validation failed for generated XML: %v", err)
	}
	fmt.Println("✅ XML is valid against the X3D 4.0 schema!")
	*/
	filename := "scene.x3d"
	err = os.WriteFile(filename, output, 0644)
	if err != nil {
		log.Fatalf("Failed to write to file %s: %v", filename, err)
	}
	fmt.Printf("\\n✅ Scene successfully written to %s\\n", filename)
	fmt.Printf("   You can view the generated XML below:\\n\\n%s\\n", string(output))
}`;
		return str;
	},

	printSubArray : function (attrType, type, values, j, lead, trail) {
                if (type === "int") {
                        for (var v in values) {
				if (values[v] > 0x7fffffff) {
				    values[v] = values[v] - 4294967296
				}

				/*
                                if (values[v] > 4200000000) {
                                        values[v] = "0x"+parseInt(values[v]).toString(16).toUpperCase();
                                }
				*/
                        }
                }
		/*
                if (type === "boolean") {
                        for (let v in values) {
				if (values[v] === 'true') {
					values[v] = "True";
				} else if (values[v] === 'false') {
					values[v] = "False";
				}
			}
		}
		*/
		if (attrType === "SFVec3f") {
			values[0] = values[0];
			values[1] = values[1];
			values[2] = values[2];
		}
		if (values[0] === "" || values[v] === null) {
			values.shift();
		}
		if (values.length >= 0 && (values[values.length-1] === "" || values[values.length-1] === null)) {
			values.pop();
		}

		return '{'+lead+values.join(j)+trail+'}';
	},

	printParentChild : function (parent, child, cn, mapToMethod) {
		let prepre = ".";
		let addpre = "set";
		if (cn > 0 && child.nodeName !== 'IS') {
			addpre = "add";
		}
		if (child.nodeName === 'field') {
			addpre = "add";
		}

		let method = child.nodeName;
		if (typeof mapToMethod[parent.nodeName] === 'object') {
			if (typeof mapToMethod[parent.nodeName][child.nodeName] === 'string') {
				addpre = "";
				method = mapToMethod[parent.nodeName][child.nodeName];
			} else {
				method = method.charAt(0).toUpperCase() + method.slice(1);
			}
		} else if (typeof mapToMethod[parent.nodeName] === 'string') {
			addpre = "";
			method = mapToMethod[parent.nodeName];
		} else {
			method = method.charAt(0).toUpperCase() + method.slice(1);
		}
		if (method === "setProxy") {
			method = "addChild";
			addpre = "";
		}
		for (let a in child.attributes) {
			let attrs = child.attributes;
			try {
				parseInt(a);
				let attrsa = attrs[a];
				let attr = attrsa.nodeName;
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					if (attr === "containerField") {
						if (method === "setShaders") {
							method = "addShaders"
							addpre = "";
						} else {
							if (attrs[a].nodeValue === "joints" 
								|| attrs[a].nodeValue === "sites" 
								|| attrs[a].nodeValue === "skin" 
								|| attrs[a].nodeValue === "viewpoints" 
								|| attrs[a].nodeValue === "skeleton" 
								|| attrs[a].nodeValue === "segments" 
							) {
								method = "add"+attrs[a].nodeValue.charAt(0).toUpperCase() + attrs[a].nodeValue.slice(1);
							} else if (method === "addValue") {
							} else {
								method = "set"+attrs[a].nodeValue.charAt(0).toUpperCase() + attrs[a].nodeValue.slice(1);
							}
							addpre = "";
						}
					}
				}
			} catch (e) {
				console.error(e);
			}
		}
		if (child.nodeName === "IS") {
			method = "IS";
			addpre = "add";
		}
		if (addpre+method === "setJoints") {
			method = "Joints"
			addpre = "add";
		}
		if (addpre+method === "setSegments") {
			method = "Segments"
			addpre = "add";
		}
		if (parent.nodeName === 'Scene' && addpre+method === "setMetadata") {
			method = "Metadata"
			addpre = "add";
		}
		if (child.nodeName === 'LayerSet' && addpre+method === "addChild") {
			method = "LayerSet"
			addpre = "add";
		}
		return prepre+addpre+method;
	},
	stringValue : function(attrsa, attr, attrType, parent) {
		let strval;
		let nodeValue = attrsa.nodeValue;
		if (nodeValue === 'NULL') {
			strval = "";
		} else if (attrType === "SFString") {
			if (attr === "accessType") {
				strval = '"'+nodeValue+'"';
			} else {
				strval = '"'+nodeValue.
					replace(/\\n/g, '\\\\n').
					replace(/\\?"/g, "\\\"")
					+'"';
			}
		} else if (attrType === "SFInt32") {
			strval = nodeValue;
		} else if (attrType === "SFFloat") {
			if (nodeValue.indexOf('.') < 0) {
				nodeValue = nodeValue+".0";
			}
			strval = nodeValue+FLOAT_SUFFIX;
			if (strval.indexOf('.') < 0) {
				strval = strval+".0";
			}
		} else if (attrType === "SFDouble") {
			if (nodeValue.indexOf('.') < 0) {
				nodeValue = nodeValue+".0";
			}
			strval = nodeValue+DOUBLE_SUFFIX;
			if (strval.indexOf('.') < 0) {
				strval = strval+".0";
			}
		} else if (attrType === "SFBool") {
			/*
			if (nodeValue === 'true') {
				strval = "True";
			} else if (nodeValue === 'false') {
				strval = "False";
			} else {
			*/
				strval = nodeValue;
			/*
			}
			*/
		} else if (attrType === "SFTime") {
			if (nodeValue.indexOf('.') < 0) {
				nodeValue = nodeValue+".0";
			}
			strval = nodeValue+DOUBLE_SUFFIX;
		} else if (attrType === "MFTime") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), DOUBLE_SUFFIX+', ', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFString") {
			nodeValue = nodeValue.replace(/^ *(.*) *$/, "$1");
			strval = this.printSubArray(attrType, "into",
				nodeValue.substr(1, nodeValue.length-2).split(/"[ ,\t\r\n]+"/).
				map(function(x) {
					let y = x.
					       replace(/(\\\\+)/g, '$1$1').
					       replace(/\\\\"/g, '\\\"').
					       replace(/""/g, '\\"\\"').
					       replace(/&quot;&quot;/g, '\\"\\"').
					       // replace(/&/g, "&amp;").
					       replace(/\\n/g, '\\n');
					if (y !== x) {
						// console.error("Go Replacing "+x+" with "+y);
					}
					return y;
				}), '", "', '"', '"');
		} else if (
			attrType === "MFInt32"||
			attrType === "MFImage"||
			attrType === "SFImage") {
			strval = this.printSubArray(attrType, "int", nodeValue.split(/[ ,\t\r\n]+/), ', ', '', '');
		} else if (
			attrType === "SFColor"||
			attrType === "MFColor"||
			attrType === "SFColorRGBA"||
			attrType === "MFColorRGBA"||
			attrType === "SFVec2f"||
			attrType === "SFVec3f"||
			attrType === "SFVec4f"||
			attrType === "MFVec2f"||
			attrType === "MFVec3f"||
			attrType === "MFVec4f"||
			attrType === "SFMatrix3f"||
			attrType === "SFMatrix4f"||
			attrType === "MFMatrix3f"||
			attrType === "MFMatrix4f"||
			attrType === "SFRotation"||
			attrType === "MFRotation"||
			attrType === "MFFloat") {
			strval = this.printSubArray(attrType, "float", nodeValue.split(/[ ,\t\r\n]+/), FLOAT_SUFFIX+', ', '', FLOAT_SUFFIX);
		} else if (
			attrType === "SFVec2d"||
			attrType === "SFVec3d"||
			attrType === "SFVec4d"||
			attrType === "MFVec2d"||
			attrType === "MFVec3d"||
			attrType === "MFVec4d"||
			attrType === "SFMatrix3d"||
			attrType === "SFMatrix4d"||
			attrType === "MFMatrix3d"||
			attrType === "MFMatrix4d"||
			attrType === "MFDouble") {
			strval = this.printSubArray(attrType, "double", nodeValue.split(/[ ,\t\r\n]+/), DOUBLE_SUFFIX+', ', '', DOUBLE_SUFFIX);
		} else if (attrType === "MFBool") {
			strval = this.printSubArray(attrType, "boolean", nodeValue.split(/[ ,\t\r\n]+/), ', ', '', '');
		} else {
			strval = '"'+nodeValue.replace(/\n/g, '\\\\n').replace(/\\?"/g, "\\\"")+'"';
		}
		return strval;
	},
	processParentChild : function(statementIS, parent, child, cn, mapToMethod, fieldTypes, n, options) {
		let ch = "";
		let begin = "{\n";
		let end = "},\n";
		let parentName = parent.nodeName;
		let childName = child.nodeName;
		let indent = 0;
		if (parent.childNodes.hasOwnProperty(cn) && child.nodeType == 1) {
			let method = this.printParentChild(parent, child, cn, mapToMethod);
			if (method.startsWith(".set")) {
				let setMethod = method.substr(4);
				ch += "    ".repeat(n+indent)+setMethod.charAt(0).toUpperCase() + setMethod.slice(1)+":";
				
			}
			// console.error(method);
			if (!statementIS) {
				if (childName === "meta" && options.firstMeta) {
					options.foundMeta = true;
					if (options.firstMeta) {
						options.firstMeta = false;
						ch += "    ".repeat(n+indent)+"Metas: []*x3d.Meta"+begin;
					}
				}
				if (childName === "field" && options.firstField) {
					options.foundField = true;
					if (options.firstField) {
						options.firstField = false;
						ch += "    ".repeat(n+indent)+"Field: []x3d.X3DNode"+begin;
					}
				}
				if (childName === "fieldValue" && options.firstFieldValue) {
					options.foundFieldValue = true;
					if (options.firstFieldValue) {
						options.firstFieldValue = false;
						ch += "    ".repeat(n+indent)+"FieldValue: []x3d.X3DNode"+begin;
					}
				}
				if (childName === "connect") {
					options.foundConnect = true;
					if (options.firstConnect) {
						options.firstConnect = false;
						ch += "    ".repeat(n+indent)+"Connect: []x3d.X3DNode"+begin;
					}
				}
				if (parentName === "field" || parentName === "fieldValue") {
					ch += "    ".repeat(n+indent)+method.slice(4)+": []x3d.X3DNode"+begin;
					indent++;
				}
				if (
				       (childName === "meta"  && !options.firstMeta) // ||
				    // (childName === "connect"  && !options.firstConnect) ||
				    // (childName === "fieldValue"  && !options.firstFieldValue) ||
				    // (childName === "field" && !options.firstField) ||
				) {
					ch += "    ".repeat(n+indent)+begin;
					indent++;
				} else {
					ch += "    ".repeat(n+indent)+"&x3d."+childName.charAt(0).toUpperCase() + childName.slice(1)+begin;
					indent++;
				}
				if (childName === "Scene") {
					ch += "    ".repeat(n+indent)+"Children: []x3d.X3DChildNode"+begin;
					indent++;
				} else if (childName === "Transform") { // TODO Add more here
					ch += "    ".repeat(n+indent)+"Children: []x3d.X3DNode"+begin;
					indent++;
				} else if (childName === "ProtoBody") { // TODO Add more here
					ch += "    ".repeat(n+indent)+"Children: []x3d.X3DNode"+begin;
					indent++;
				} else if (childName === "component") {
					ch += "    ".repeat(n+indent)+"Components: []*x3d.Component"+begin;
					indent++;
				}
				ch += this.subSerializeToString(child, mapToMethod, fieldTypes, n+indent);
				while (indent > 0) {
					indent--;
					ch += "    ".repeat(n+indent)+end;
				}
			} else {
				if (childName === "IS") {
					ch += "    ".repeat(n)+"IS: &x3d."+childName.charAt(0).toUpperCase() + childName.slice(1)+begin;
					ch += this.subSerializeToString(child, mapToMethod, fieldTypes, n+1);
					ch += "    ".repeat(n)+end;
				}
			}
			options.childrenNodes.push(ch);
		} else if (parent.childNodes.hasOwnProperty(cn) && child.nodeType == 8
			|| parent.childNodes.hasOwnProperty(cn) && child.nodeType == 4) {
			// both comments and code are handled the same way
			if (options.first) {
				options.first = false;
			} else if (parent.nodeName !== "X3D") {
				ch += ",\n"; // no comma after head
			}
			if (ch) {
				let lastchar = ch.charAt(ch.length - 1);
				if (lastchar === ',') {
					ch += '\n';
				}
			}
			ch += child.nodeValue.split(/\r?\n/).map(function(x) {
				return x.
					replace(/\\/g, '\\\\').
					replace(/^/g, '#');
				}).join('\n')+'\n';
			options.first = true;
			options.childrenNodes.push(ch);
		} else if (parent.childNodes.hasOwnProperty(cn) && child.nodeType == 3 && child.nodeValue.trim() === '') {
		} else if (typeof child.nodeType === 'undefined') {
		} else {
			console.error("Unhandled", child.nodeType, child.nodeName, child.nodeValue);
		}
		if (!statementIS) {
			ch += "    ".repeat(n+indent)+end;
		}
	},
	processAttributes : function(parent, fieldTypes, n) {
		let str = "";
		let attrType = "";
		for (let a in parent.attributes) {
			let attrs = parent.attributes;
			try {
				parseInt(a);
				let attrsa = attrs[a];
				if (attrs.hasOwnProperty(a) && attrsa.nodeType == 2) {
					let attr = attrsa.nodeName;
					if (attr === 'containerField' && (
						attrs[a].nodeValue === "joints" ||
						attrs[a].nodeValue === "skeleton" ||
						attrs[a].nodeValue === "segments" ||
						attrs[a].nodeValue === "viewpoints" ||
						attrs[a].nodeValue === "skin" ||
						attrs[a].nodeValue === "skinCoord" ||
						attrs[a].nodeValue === "sites")) {
						attr = "containerField";
					} else if (attr === "xmlns:xsd") {
						continue;
					} else if (attr === "xsd:noNamespaceSchemaLocation" ) {
						continue;
					} else if (attr === 'containerField') {
						continue;
					} else if (attr === "id") {
						continue;
					} else if (parent.nodeName === "Sphere" && attr === "subdivision") {
						continue;
					} else if (parent.nodeName === "X3D" && attr === "showStat") {
						continue;
					} else if (parent.nodeName === "X3D" && attr === "showLog") {
						continue;
					} else if (parent.nodeName === "X3D" && attr === "width") {
						continue;
					} else if (parent.nodeName === "X3D" && attr === "height") {
						continue;
					} else if (parent.nodeName === "X3D" && attr === "backend") {
						continue;
					} else if (parent.nodeName === "Background" && attr === "groundTransparency") {
						continue;
					} else if (parent.nodeName === "Background" && attr === "skyTransparency") {
						continue;
					}
					attrType = "SFString";
					if (typeof fieldTypes[parent.nodeName] !== 'undefined') {
						attrType = fieldTypes[parent.nodeName][attr];
					}
					let strval = this.stringValue(attrsa, attr, attrType, parent);
					let method = attr;
					if (attr === "class") {
						method = "CssClass";
					}
					if (attrType === 'SFString') {
						str += "    ".repeat(n)+method.charAt(0).toUpperCase() + method.slice(1)+": stringPtr("+strval+"),\n";
					} else if (attrType === 'MFString') {
						
						str += "    ".repeat(n)+method.charAt(0).toUpperCase() + method.slice(1)+": []string"+strval+",\n";
					} else {
						str += "    ".repeat(n)+method.charAt(0).toUpperCase() + method.slice(1)+": &x3d."+attrType+strval+",\n";
					}
					if (attr === 'containerField' && (attrs[a].nodeValue === "joints" || attrs[a].nodeValue === "segments" || attrs[a].nodeValue === "viewpoints" || attrs[a].nodeValue === "skinCoord" || attrs[a].nodeValue === "skin" || attrs[a].nodeValue === "sites")) {
						// str += ")"; // for cast
					}
				}
			} catch (e) {
				console.error(e);
			}
			attrType = "";
		}
		return str;
	}, 
	subSerializeToString : function(parent, mapToMethod, fieldTypes, n) {
		let str = "";
		let options = {
			childrenNodes : [],
			first : true,

			firstMeta : true,
			foundMeta  : false,
			firstField : true,
			foundField  : false,
			firstFieldValue : true,
			foundFieldVAlue : false,
			firstConnect : true,
			foundConnect : false,

			attributesProcessed : false
		};
		if (!options.attributesProcessed) {
			str += this.processAttributes(parent, fieldTypes, n);
			options.attributesProcessed = true;
		}
		for (let cn in parent.childNodes) {
			let child = parent.childNodes[cn];
			if (child.nodeName === "IS") {
				this.processParentChild(true, parent, child, cn, mapToMethod, fieldTypes, n, options);
			}
		}
		for (let cn in parent.childNodes) {
			let child = parent.childNodes[cn];
			if (child.nodeName !== "IS") {
				this.processParentChild(false, parent, child, cn, mapToMethod, fieldTypes, n, options);
			}
		}
		let newcn = options.childrenNodes.join("");
		if (newcn !== "") {
			str += newcn;
			if (!str.endsWith("\n")) {
				str += "\n";
			}
		}
		if (options.foundMeta) {
			str += "    ".repeat(n)+"},\n";
		}
		if (options.foundField) {
			str += "    ".repeat(n)+"},\n";
		}
		if (options.foundFieldValue) {
			str += "    ".repeat(n)+"},\n";
		}
		if (options.foundConnect) {
			str += "    ".repeat(n)+"},\n";
		}
		return str;
	}
};
