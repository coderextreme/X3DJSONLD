test_json = 
{ "X3D": {
    "encoding":"UTF-8",
    "@profile":"Immersive",
    "@version":"4.0",
    "@xsd:noNamespaceSchemaLocation":"https://www.web3d.org/specifications/x3d-4.0.xsd",
    "JSON schema":"https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json",
    "head": {
        "meta": [
          {
            "@name":"title",
            "@content":"bubs.x3d"
          },
          {
            "@name":"creator",
            "@content":"John Carlson"
          },
          {
            "@name":"description",
            "@content":"Tour around a prismatic sphere"
          },
          {
            "@name":"generator",
            "@content":"X3D-Edit, https://savage.nps.edu/X3D-Edit"
          },
          {
            "@name":"identifier",
            "@content":"https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"
          },
          {
            "@name":"translated",
            "@content":"19 May 2017"
          },
          {
            "@name":"generator",
            "@content":"X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"
          },
          {
            "@name":"reference",
            "@content":"X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"
          }
        ]
    },
    "Scene": {
        "-children":[
          { "NavigationInfo":
            {
              "@type":["EXAMINE"]
            }
          },
          { "Viewpoint":
            {
              "@position":[0,0,4],
              "@orientation":[1,0,0,0],
              "@description":"Bubbles in action"
            }
          },
          { "Background":
            {
              "@backUrl":["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"],
              "@bottomUrl":["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"],
              "@frontUrl":["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"],
              "@leftUrl":["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"],
              "@rightUrl":["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"],
              "@topUrl":["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]
            }
          },
          { "ProtoDeclare":
            {
              "@name":"Bubble",
              "ProtoBody": {
                  "-children":[
                    { "Transform":
                      {
                        "@DEF":"transform",
                        "-children":[
                          { "Shape":
                            {
                              "-geometry":
                                { "Sphere":
                                  {
                                    "@radius":0.25
                                  }
                                },
                              "-appearance":
                                { "Appearance":
                                  {
                                    "-material":
                                      { "Material":
                                        {
                                          "@diffuseColor":[1,0,0],
                                          "@transparency":0.2
                                        }
                                      }
                                  }
                                }
                            }
                          },
                          { "Script":
                            {
                              "@DEF":"bounce",
                              "field": [
                                {
                                  "@name":"scale",
                                  "@accessType":"inputOutput",
                                  "@type":"SFVec3f",
                                  "@value":[1,1,1]
                                },
                                {
                                  "@name":"translation",
                                  "@accessType":"inputOutput",
                                  "@type":"SFVec3f",
                                  "@value":[0,0,0]
                                },
                                {
                                  "@name":"velocity",
                                  "@accessType":"inputOutput",
                                  "@type":"SFVec3f",
                                  "@value":[0,0,0]
                                },
                                {
                                  "@name":"scalvel",
                                  "@accessType":"inputOutput",
                                  "@type":"SFVec3f",
                                  "@value":[0,0,0]
                                },
                                {
                                  "@name":"set_fraction",
                                  "@accessType":"inputOnly",
                                  "@type":"SFFloat"
                                }
                              ],
                              "#sourceCode":[
"ecmascript:",
"function initialize() {",
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);",
"",
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);",
"}",
"",
"function set_translation(value) {",
"   translation = value;",
"}",
"",
"function set_scale(value) {",
"   scale = value;",
"}",
"",
"function translation_changed() {",
"\treturn translation;",
"}",
"",
"function set_fraction(value) {",
"    translation = new SFVec3f(\ttranslation[0] + velocity[0], translation[1] + velocity[1], translation[2] + velocity[2]);",
"    scale = new SFVec3f(scale[0] + scalvel[0], scale[1] + scalvel[1], scale[2] + scalvel[2]);",
"    for (var j = 0; j < 3; j++) {",
"\t    // if you get to far away or too big, explode",
"\t    if ( Math.abs(translation[j]) > 256) {",
"\t\ttranslation[j] = 0;",
"\t\tinitialize();",
"\t    }",
"\t    if (Math.abs(scale[j]) > 20) {",
"\t\tscale[j] = scale[j]/2;",
"\t\ttranslation[j] = 0;",
"\t\tinitialize();",
"\t    }",
"    }",
"}"
]
                            }
                          },
                          { "TimeSensor":
                            {
                              "@DEF":"bubbleClock",
                              "@cycleInterval":10,
                              "@loop":true
                            }
                          },
                          { "ROUTE":
                            {
                              "@fromNode":"bounce",
                              "@fromField":"translation_changed",
                              "@toNode":"transform",
                              "@toField":"set_translation"
                            }
                          },
                          { "ROUTE":
                            {
                              "@fromNode":"bounce",
                              "@fromField":"scale_changed",
                              "@toNode":"transform",
                              "@toField":"set_scale"
                            }
                          },
                          { "ROUTE":
                            {
                              "@fromNode":"bubbleClock",
                              "@fromField":"fraction_changed",
                              "@toNode":"bounce",
                              "@toField":"set_fraction"
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
              "@name":"Bubble",
              "@DEF":"bubbleA"
            }
          },
          { "ProtoInstance":
            {
              "@name":"Bubble",
              "@DEF":"bubbleB"
            }
          },
          { "ProtoInstance":
            {
              "@name":"Bubble",
              "@DEF":"bubbleC"
            }
          },
          { "ProtoInstance":
            {
              "@name":"Bubble",
              "@DEF":"bubbleD"
            }
          }
        ]
    }
  }
}
