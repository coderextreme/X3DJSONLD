load('nashorn/jvm-npm.js');
load('nashorn/repeatPolyfill.js');
var xmldom = require('nashorn/node_modules/xmldom');
var DOMParser = xmldom.DOMParser;
var XMLSerializer = new xmldom.XMLSerializer();
var DOMImplementation = new xmldom.DOMImplementation();
var json = { "X3D": {
    "encoding":"UTF-8",
    "@profile":"Immersive",
    "@version":"3.3",
    "@xsd:noNamespaceSchemaLocation":"http://www.web3d.org/specifications/x3d-3.3.xsd",
    "JSON schema":"http://www.web3d.org/specifications/x3d-3.3-JSONSchema.json",
    "head": {
        "meta": [
          {
            "@name":"title",
            "@content":"abox.x3d"
          },
          {
            "@name":"creator",
            "@content":"John Carlson"
          },
          {
            "@name":"generator",
            "@content":"manual"
          },
          {
            "@name":"identifier",
            "@content":"https://coderextreme.net/X3DJSONLD/abox.x3d"
          },
          {
            "@name":"description",
            "@content":"a box"
          },
          {
            "@name":"translated",
            "@content":"10 December 2017"
          },
          {
            "@name":"generator",
            "@content":"X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"
          },
          {
            "@name":"reference",
            "@content":"X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"
          }
        ]
    },
    "Scene": {
        "-children":[
          { "ProtoDeclare":
            {
              "@name":"anyShape",
              "ProtoInterface": {
                  "field": [
                    {
                      "@name":"myShape",
                      "@accessType":"inputOutput",
                      "@type":"MFNode",
                      "-children":[
                        { "Shape":
                          {
                            "-geometry":
                              { "Sphere":
                                {
                                }
                              }
                          }
                        }
                      ]
                    }
                  ]
              },
              "ProtoBody": {
                  "-children":[
                    { "Transform":
                      {
                        "IS": {
                            "connect": [
                              {
                                "@nodeField":"children",
                                "@protoField":"myShape"
                              }
                            ]
                        }
                      }
                    }
                  ]
              }
            }
          },
          { "ProtoDeclare":
            {
              "@name":"one",
              "ProtoInterface": {
                  "field": [
                    {
                      "@name":"myShape",
                      "@accessType":"inputOutput",
                      "@type":"MFNode",
                      "-children":[
                        { "Shape":
                          {
                            "-geometry":
                              { "Cylinder":
                                {
                                }
                              }
                          }
                        }
                      ]
                    }
                  ]
              },
              "ProtoBody": {
                  "-children":[
                    { "Transform":
                      {
                        "-children":[
                          { "ProtoInstance":
                            {
                              "@name":"anyShape",
                              "IS": {
                                  "connect": [
                                    {
                                      "@nodeField":"myShape",
                                      "@protoField":"myShape"
                                    }
                                  ]
                              }
                            }
                          }
                        ]
                      }
                    }
                  ]
              }
            }
          },
          { "ProtoInstance":
            {
              "@name":"one",
              "fieldValue": [
                {
                  "@name":"myShape",
                  "-children":[
                    { "Shape":
                      {
                        "-geometry":
                          { "Box":
                            {
                              "@size":[140,140,140]
                            }
                          }
                      }
                    }
                  ]
                }
              ]
            }
          }
        ]
    }
  }
}
;
var version = json['X3D']['@version'];
var docType = DOMImplementation.createDocumentType('X3D', 'ISO//Web3D//DTD X3D '+version+'//EN', 'http://www.web3d.org/specifications/x3d-'+version+'.dtd', null);
var document = DOMImplementation.createDocument(null, 'X3D', docType);
var mapToMethod = require('nashorn/node/mapToMethod.js');
 var mapToMethod2 = require('nashorn/node/mapToMethod2.js');
 var fieldTypes = require('nashorn/node/fieldTypes.js');
 load('nashorn/node/X3DJSONLD.js');
 load('nashorn/node/JavaScriptSerializer.js');
 var child = CreateElement('X3D');
 ConvertToX3DOM(json, '', child, 'flipper.json');
 print('Returning with', child);
 var output = new JavaScriptSerializer().serializeToString(json, child, 'growl.js', mapToMethod, fieldTypes);
 var FileWriter = Java.type('java.io.FileWriter');
 var fw = new FileWriter('growl.js');
 fw.write(output);
 fw.close();
