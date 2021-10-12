box_json = 
{ "X3D": {
    "encoding":"UTF-8",
    "@profile":"Immersive",
    "@version":"4.0",
    "@xsd:noNamespaceSchemaLocation":"https://www.web3d.org/specifications/x3d-4.0.xsd",
    "JSON schema":"https://www.web3d.org/specifications/x3d-4.0-JSONSchema.json",
    "Scene": {
        "-children":[
          { "NavigationInfo":
            {
              "@type":["ANY","WALK","EXAMINE","FLY","LOOKAT"]
            }
          },
          { "Viewpoint":
            {
              "@description":"Cubes on Fire",
              "@position":[0,0,12]
            }
          },
          { "ProtoDeclare":
            {
              "@name":"anyShape",
              "ProtoInterface": {
                  "field": [
                    {
                      "@name":"xtranslation",
                      "@accessType":"inputOutput",
                      "@type":"SFVec3f",
                      "@value":[0,0,0]
                    },
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
                              },
                            "-appearance":
                              { "Appearance":
                                {
                                  "-material":
                                    { "Material":
                                      {
                                        "@diffuseColor":[1,1,1]
                                      }
                                    }
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
                                "@nodeField":"translation",
                                "@protoField":"xtranslation"
                              },
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
              "@name":"three",
              "ProtoInterface": {
                  "field": [
                    {
                      "@name":"ytranslation",
                      "@accessType":"inputOutput",
                      "@type":"SFVec3f",
                      "@value":[0,0,0]
                    },
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
                              },
                            "-appearance":
                              { "Appearance":
                                {
                                  "-material":
                                    { "Material":
                                      {
                                        "@diffuseColor":[1,1,1]
                                      }
                                    }
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
                                "@nodeField":"translation",
                                "@protoField":"ytranslation"
                              }
                            ]
                        },
                        "-children":[
                          { "ProtoInstance":
                            {
                              "@name":"anyShape",
                              "fieldValue": [
                                {
                                  "@name":"xtranslation",
                                  "@value":[0,0,0]
                                }
                              ],
                              "IS": {
                                  "connect": [
                                    {
                                      "@nodeField":"myShape",
                                      "@protoField":"myShape"
                                    }
                                  ]
                              }
                            }
                          },
                          { "ProtoInstance":
                            {
                              "@name":"anyShape",
                              "fieldValue": [
                                {
                                  "@name":"xtranslation",
                                  "@value":[2,0,0]
                                }
                              ],
                              "IS": {
                                  "connect": [
                                    {
                                      "@nodeField":"myShape",
                                      "@protoField":"myShape"
                                    }
                                  ]
                              }
                            }
                          },
                          { "ProtoInstance":
                            {
                              "@name":"anyShape",
                              "fieldValue": [
                                {
                                  "@name":"xtranslation",
                                  "@value":[-2,0,0]
                                }
                              ],
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
              "@name":"three",
              "fieldValue": [
                {
                  "@name":"ytranslation",
                  "@value":[0,0,0]
                },
                {
                  "@name":"myShape",
                  "-children":[
                    { "Shape":
                      {
                        "-geometry":
                          { "Box":
                            {
                              "@size":[1,1,1]
                            }
                          },
                        "-appearance":
                          { "Appearance":
                            {
                              "-material":
                                { "Material":
                                  {
                                    "@diffuseColor":[0,1,0]
                                  }
                                }
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
