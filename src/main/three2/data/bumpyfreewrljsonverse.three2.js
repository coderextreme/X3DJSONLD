{
  "string": "Scene",
  "children": [
    "/*basic nodes, which might be present in any scene*/",
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        "EXAMINE"
      ]
    },
    {
      "string": " directionallight",
      "nodeType": "directionallight",
      "children": [],
      "ambientIntensity": 0.2,
      "direction": {
        "x": 0,
        "y": -1,
        "z": 0
      }
    },
    {
      "string": " directionallight",
      "nodeType": "directionallight",
      "children": [],
      "ambientIntensity": 0.2,
      "direction": {
        "x": -1,
        "y": -0.1,
        "z": -1
      }
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "My Overview",
      "fieldOfView": 1.570796,
      "position": {
        "x": 0,
        "y": 1.75,
        "z": 60
      }
    },
    "/*LayerSet with two layers, navigation happens in layer 1*/",
    {
      "string": " layerset",
      "nodeType": "layerset",
      "children": [
        "/*the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"*/",
        "/*the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)*/",
        {
          "string": "layers layer",
          "nodeType": "layer",
          "children": [
            "/*this group contains the red/green/blue 3D crosshair*/",
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                "/*Arrow X*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder DEF Shaft",
                          "nodeType": "cylinder",
                          "children": [],
                          "DEF": "Shaft",
                          "radius": 0.35,
                          "height": 50
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF RED",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "RED",
                              "diffuseColor": {
                                "r": 1,
                                "g": 0,
                                "b": 0
                              },
                              "emissiveColor": {
                                "r": 1,
                                "g": 0,
                                "b": 0
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 25,
                    "y": 0,
                    "z": 0
                  },
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": -1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cone DEF Tip",
                          "nodeType": "cone",
                          "children": [],
                          "DEF": "Tip",
                          "bottomRadius": 0.8,
                          "height": 3
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE RED",
                              "nodeType": "material",
                              "children": [],
                              "USE": "RED"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 50,
                    "y": 0,
                    "z": 0
                  },
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": -1,
                    "w": 1.57
                  }
                },
                "/*Arrow Y*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder USE Shaft",
                          "nodeType": "cylinder",
                          "children": [],
                          "USE": "Shaft"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF GREEN",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "GREEN",
                              "diffuseColor": {
                                "r": 0,
                                "g": 1,
                                "b": 0
                              },
                              "emissiveColor": {
                                "r": 0,
                                "g": 1,
                                "b": 0
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 25,
                    "z": 0
                  }
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cone USE Tip",
                          "nodeType": "cone",
                          "children": [],
                          "USE": "Tip"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE GREEN",
                              "nodeType": "material",
                              "children": [],
                              "USE": "GREEN"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 50,
                    "z": 0
                  }
                },
                "/*Arrow Z*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder USE Shaft",
                          "nodeType": "cylinder",
                          "children": [],
                          "USE": "Shaft"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF BLUE",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "BLUE",
                              "diffuseColor": {
                                "r": 0,
                                "g": 0,
                                "b": 1
                              },
                              "emissiveColor": {
                                "r": 0,
                                "g": 0,
                                "b": 1
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 25
                  },
                  "rotation": {
                    "x": 1,
                    "y": 0,
                    "z": 0,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cone USE Tip",
                          "nodeType": "cone",
                          "children": [],
                          "USE": "Tip"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE BLUE",
                              "nodeType": "material",
                              "children": [],
                              "USE": "BLUE"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 50
                  },
                  "rotation": {
                    "x": 1,
                    "y": 0,
                    "z": 0,
                    "w": 1.57
                  }
                }
              ]
            },
            "/*the model that is being reviewed by the users of this scene*/",
            {
              "string": " transform DEF FlowerTransform",
              "nodeType": "transform",
              "children": [
                "/*<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />*/",
                "/*Images courtesy of Paul Debevec's Light Probe Image Gallery*/",
                {
                  "string": " background",
                  "nodeType": "background",
                  "children": [],
                  "backUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_back.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"
                  ],
                  "bottomUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
                  ],
                  "frontUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_front.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"
                  ],
                  "leftUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_left.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"
                  ],
                  "rightUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_right.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"
                  ],
                  "topUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_top.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"
                  ]
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        "/*<Sphere radius='40'></Sphere>*/",
                        {
                          "string": "geometry indexedfaceset DEF Orbit",
                          "nodeType": "indexedfaceset",
                          "children": [
                            {
                              "string": "coord coordinate DEF OrbitCoordinates",
                              "nodeType": "coordinate",
                              "children": [],
                              "DEF": "OrbitCoordinates"
                            }
                          ],
                          "convex": false,
                          "DEF": "Orbit"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material",
                              "nodeType": "material",
                              "children": [],
                              "diffuseColor": {
                                "r": 0.7,
                                "g": 0.7,
                                "b": 0.7
                              },
                              "specularColor": {
                                "r": 0.5,
                                "g": 0.5,
                                "b": 0.5
                              }
                            },
                            {
                              "string": "appearance composedcubemaptexture DEF texture",
                              "nodeType": "composedcubemaptexture",
                              "children": [
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_back.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_front.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_left.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_right.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_top.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"
                                  ]
                                }
                              ],
                              "DEF": "texture"
                            },
                            {
                              "string": "appearance composedshader DEF freewrlShader",
                              "nodeType": "composedshader",
                              "children": [
                                {
                                  "string": "appearance field",
                                  "nodeType": "field",
                                  "children": []
                                },
                                {
                                  "string": "appearance shaderpart",
                                  "nodeType": "shaderpart",
                                  "children": [],
                                  "url": [
                                    "../shaders/freewrl_flowers_chromatic.vs",
                                    "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"
                                  ],
                                  "type": "VERTEX"
                                },
                                {
                                  "string": "appearance shaderpart",
                                  "nodeType": "shaderpart",
                                  "children": [],
                                  "url": [
                                    "../shaders/freewrl.fs",
                                    "https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"
                                  ],
                                  "type": "FRAGMENT"
                                },
                                "/*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/"
                              ],
                              "DEF": "freewrlShader",
                              "language": "GLSL"
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ],
              "DEF": "FlowerTransform"
            },
            {
              "string": " script DEF OrbitScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\necmascript:\r\nfunction initialize() {\r\n     var resolution = 100;\r\n     var theta = 0.0;\r\n     var phi = 0.0;\r\n     var delta = (2 * 3.141592653) / (resolution-1);\r\n     var crds = new MFVec3f();\r\n     var vecCount = 0;\r\n     for ( i = 0; i < resolution; i++) {\r\n     \tfor ( j = 0; j < resolution; j++) {\r\n\t\tvar rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\r\n\t\tcrds[vecCount] = new SFVec3f(\r\n\t\t\trho * Math.cos(phi) * Math.cos(theta),\r\n\t\t\trho * Math.cos(phi) * Math.sin(theta),\r\n\t\t\trho * Math.sin(phi)\r\n\t\t);\r\n\t\tvecCount++;\r\n\t\ttheta += delta;\r\n\t}\r\n\tphi += delta;\r\n     }\r\n     coordinates = crds;\r\n     // coordinates = new MFVec3f(...crds);\r\n\r\n\r\n     var cis = new MFInt32();\r\n     var intCount = 0;\r\n     for ( i = 0; i < resolution-1; i++) {\r\n     \tfor ( j = 0; j < resolution-1; j++) {\r\n\t     cis[intCount++] = i*resolution+j;\r\n\t     cis[intCount++] = i*resolution+j+1;\r\n\t     cis[intCount++] = (i+1)*resolution+j+1;\r\n\t     cis[intCount++] = (i+1)*resolution+j;\r\n\t     cis[intCount++] = -1;\r\n\t}\r\n    }\r\n    coordIndexes = cis;\r\n    // coordIndexes = new MFInt32(...cis);\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "OrbitScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "coordIndexes",
              "fromNode": "OrbitScript",
              "toField": "set_coordIndex",
              "toNode": "Orbit"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "coordinates",
              "fromNode": "OrbitScript",
              "toField": "set_point",
              "toNode": "OrbitCoordinates"
            },
            "/*DIS multiuser facilities*/",
            {
              "string": " disentitymanager DEF EntityManager",
              "nodeType": "disentitymanager",
              "children": [
                {
                  "string": " disentitytypemapping",
                  "nodeType": "disentitytypemapping",
                  "children": [],
                  "readInterval": 3,
                  "category": 77,
                  "specific": 1,
                  "url": [
                    "../data/Gramps8Final.x3d",
                    "https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"
                  ]
                },
                {
                  "string": " disentitytypemapping",
                  "nodeType": "disentitytypemapping",
                  "children": [],
                  "readInterval": 3,
                  "category": 77,
                  "specific": 2,
                  "url": [
                    "../data/Leif8Final.x3d",
                    "https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"
                  ]
                },
                {
                  "string": " disentitytypemapping",
                  "nodeType": "disentitytypemapping",
                  "children": [],
                  "readInterval": 3,
                  "category": 77,
                  "specific": 3,
                  "url": [
                    "../data/Lily8Final.x3d",
                    "https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"
                  ]
                },
                {
                  "string": " disentitytypemapping",
                  "nodeType": "disentitytypemapping",
                  "children": [],
                  "readInterval": 3,
                  "category": 77,
                  "specific": 4,
                  "url": [
                    "../data/Tufani8Final.x3d",
                    "https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"
                  ]
                }
              ],
              "DEF": "EntityManager",
              "networkMode": "networkReader"
            },
            {
              "string": " collision",
              "nodeType": "collision",
              "children": [
                {
                  "string": " group DEF AvatarHolder",
                  "nodeType": "group",
                  "children": [],
                  "DEF": "AvatarHolder"
                }
              ],
              "enabled": false
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "addedEntities",
              "fromNode": "EntityManager",
              "toField": "addChildren",
              "toNode": "AvatarHolder"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "removedEntities",
              "fromNode": "EntityManager",
              "toField": "removeChildren",
              "toNode": "AvatarHolder"
            }
          ],
          "pickable": true,
          "objectType": [
            "ALL"
          ]
        },
        {
          "string": "layers layoutlayer",
          "nodeType": "layoutlayer",
          "children": [
            "/*positioning the LayoutLayer*/",
            "/*clipping the LayoutLayer*/",
            "/*the content (children) of the LayoutLayer*/",
            "/*first, the slider for scaling the model*/",
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [],
                          "diffuseColor": {
                            "r": 0,
                            "g": 0,
                            "b": 0
                          },
                          "transparency": 0.7
                        }
                      ]
                    },
                    {
                      "string": "geometry box",
                      "nodeType": "box",
                      "children": [],
                      "size": {
                        "x": 100,
                        "y": 100,
                        "z": 0.02
                      }
                    }
                  ]
                }
              ],
              "translation": {
                "x": 0,
                "y": 0,
                "z": -3
              }
            },
            {
              "string": " transform DEF equationTransform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta) DEF equation",
                          "nodeType": "text",
                          "children": [
                            {
                              "string": "fontStyle fontstyle",
                              "nodeType": "fontstyle",
                              "children": [],
                              "size": 0.09
                            }
                          ],
                          "DEF": "equation"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material",
                              "nodeType": "material",
                              "children": [],
                              "diffuseColor": {
                                "r": 1,
                                "g": 1,
                                "b": 0
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": -20
                  }
                }
              ],
              "DEF": "equationTransform"
            },
            {
              "string": " protodeclare",
              "nodeType": "protodeclare",
              "children": [
                {
                  "string": " protointerface",
                  "nodeType": "protointerface",
                  "children": [
                    {
                      "string": " field",
                      "nodeType": "field",
                      "children": []
                    }
                  ]
                },
                {
                  "string": " protobody",
                  "nodeType": "protobody",
                  "children": [
                    {
                      "string": " group",
                      "nodeType": "group",
                      "children": [
                        {
                          "string": " transform DEF protoSlider",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " is",
                              "nodeType": "is",
                              "children": [
                                {
                                  "string": " connect",
                                  "nodeType": "connect",
                                  "children": []
                                }
                              ]
                            },
                            {
                              "string": " transform DEF protoTransform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " is",
                                  "nodeType": "is",
                                  "children": [
                                    {
                                      "string": " connect",
                                      "nodeType": "connect",
                                      "children": []
                                    }
                                  ]
                                },
                                {
                                  "string": " planesensor DEF protoSensor",
                                  "nodeType": "planesensor",
                                  "children": [],
                                  "DEF": "protoSensor",
                                  "maxPosition": {
                                    "x": 1,
                                    "y": 0
                                  }
                                },
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " touchsensor DEF protoTS",
                                      "nodeType": "touchsensor",
                                      "children": [],
                                      "DEF": "protoTS"
                                    }
                                  ],
                                  "translation": {
                                    "x": 0,
                                    "y": 0,
                                    "z": 0
                                  }
                                },
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape",
                                      "nodeType": "shape",
                                      "children": [
                                        {
                                          "string": "a= DEF protoText",
                                          "nodeType": "text",
                                          "children": [
                                            {
                                              "string": "geometry is",
                                              "nodeType": "is",
                                              "children": [
                                                {
                                                  "string": "geometry connect",
                                                  "nodeType": "connect",
                                                  "children": []
                                                }
                                              ]
                                            },
                                            {
                                              "string": "fontStyle fontstyle",
                                              "nodeType": "fontstyle",
                                              "children": [],
                                              "size": 0.23
                                            }
                                          ],
                                          "DEF": "protoText"
                                        },
                                        {
                                          "string": "appearance",
                                          "nodeType": "appearance",
                                          "children": [
                                            {
                                              "string": "appearance material",
                                              "nodeType": "material",
                                              "children": []
                                            }
                                          ]
                                        }
                                      ]
                                    }
                                  ]
                                }
                              ],
                              "DEF": "protoTransform",
                              "translation": {
                                "x": 0,
                                "y": 0,
                                "z": 0.1
                              }
                            }
                          ],
                          "DEF": "protoSlider",
                          "translation": {
                            "x": 0,
                            "y": 0.7,
                            "z": 0
                          }
                        },
                        {
                          "string": " script DEF protoValueTransformerScript",
                          "nodeType": "script",
                          "children": [
                            {
                              "string": " field",
                              "nodeType": "field",
                              "children": []
                            },
                            {
                              "string": " is",
                              "nodeType": "is",
                              "children": [
                                {
                                  "string": " connect",
                                  "nodeType": "connect",
                                  "children": []
                                }
                              ]
                            },
                            "<script>\r\necmascript:\r\nconst newTranslation = function(Value) {\r\n\t'use strict';\r\n\tprotoValue_changed = Value.x * protoScale;\r\n\tprotoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\r\n\r\n        var orientation = Value.x;\r\n\r\n        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\r\n        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\r\n        var txt = Browser.currentScene.getNamedNode(\"protoText\");\r\n        if (shader) {\r\n            shader.getField(protoParameterName).setValue(orientation * protoScale);\r\n        }\r\n        if (txt) {\r\n            var stringField = txt.getField(\"string\");\r\n            var label = protoParameterName;\r\n            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\r\n        }\r\n        if (ps) {\r\n            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\r\n        }\r\n        if (t) {\r\n            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\r\n        }\r\n}\r\n\r\n\r\n\t\t\t\t</Script>"
                          ],
                          "DEF": "protoValueTransformerScript",
                          "directOutput": true,
                          "mustEvaluate": true
                        },
                        {
                          "string": " route",
                          "nodeType": "route",
                          "children": [],
                          "fromField": "translation_changed",
                          "fromNode": "protoSensor",
                          "toField": "set_translation",
                          "toNode": "protoTransform"
                        },
                        {
                          "string": " route",
                          "nodeType": "route",
                          "children": [],
                          "fromField": "translation_changed",
                          "fromNode": "protoSensor",
                          "toField": "newTranslation",
                          "toNode": "protoValueTransformerScript"
                        },
                        {
                          "string": " route",
                          "nodeType": "route",
                          "children": [],
                          "fromField": "protoText_changed",
                          "fromNode": "protoValueTransformerScript",
                          "toField": "string",
                          "toNode": "protoText"
                        }
                      ]
                    }
                  ]
                }
              ],
              "name": "SliderProto"
            },
            {
              "string": " protoinstance DEF aPI",
              "nodeType": "protoinstance",
              "children": [
                {
                  "string": " fieldvalue",
                  "nodeType": "fieldvalue",
                  "children": [
                    {
                      "string": " composedshader USE freewrlShader",
                      "nodeType": "composedshader",
                      "children": [],
                      "USE": "freewrlShader"
                    }
                  ]
                }
              ],
              "name": "SliderProto",
              "DEF": "aPI"
            },
            {
              "string": " protoinstance DEF bPI",
              "nodeType": "protoinstance",
              "children": [
                {
                  "string": " fieldvalue",
                  "nodeType": "fieldvalue",
                  "children": [
                    {
                      "string": " composedshader USE freewrlShader",
                      "nodeType": "composedshader",
                      "children": [],
                      "USE": "freewrlShader"
                    }
                  ]
                }
              ],
              "name": "SliderProto",
              "DEF": "bPI"
            },
            {
              "string": " protoinstance DEF cPI",
              "nodeType": "protoinstance",
              "children": [
                {
                  "string": " fieldvalue",
                  "nodeType": "fieldvalue",
                  "children": [
                    {
                      "string": " composedshader USE freewrlShader",
                      "nodeType": "composedshader",
                      "children": [],
                      "USE": "freewrlShader"
                    }
                  ]
                }
              ],
              "name": "SliderProto",
              "DEF": "cPI"
            },
            {
              "string": " protoinstance DEF dPI",
              "nodeType": "protoinstance",
              "children": [
                {
                  "string": " fieldvalue",
                  "nodeType": "fieldvalue",
                  "children": [
                    {
                      "string": " composedshader USE freewrlShader",
                      "nodeType": "composedshader",
                      "children": [],
                      "USE": "freewrlShader"
                    }
                  ]
                }
              ],
              "name": "SliderProto",
              "DEF": "dPI"
            },
            {
              "string": " protoinstance DEF tdeltaPI",
              "nodeType": "protoinstance",
              "children": [
                {
                  "string": " fieldvalue",
                  "nodeType": "fieldvalue",
                  "children": [
                    {
                      "string": " composedshader USE freewrlShader",
                      "nodeType": "composedshader",
                      "children": [],
                      "USE": "freewrlShader"
                    }
                  ]
                }
              ],
              "name": "SliderProto",
              "DEF": "tdeltaPI"
            },
            {
              "string": " protoinstance DEF pdeltaPI",
              "nodeType": "protoinstance",
              "children": [
                {
                  "string": " fieldvalue",
                  "nodeType": "fieldvalue",
                  "children": [
                    {
                      "string": " composedshader USE freewrlShader",
                      "nodeType": "composedshader",
                      "children": [],
                      "USE": "freewrlShader"
                    }
                  ]
                }
              ],
              "name": "SliderProto",
              "DEF": "pdeltaPI"
            },
            {
              "string": "layout",
              "nodeType": "layout",
              "children": [],
              "align": [
                "LEFT",
                "BOTTOM"
              ],
              "offset": [
                -0.2,
                0.19
              ],
              "offsetUnits": [
                "WORLD",
                "WORLD"
              ],
              "scaleMode": [
                "NONE",
                "NONE"
              ],
              "size": [
                0.4,
                0.6
              ],
              "sizeUnits": [
                "WORLD",
                "WORLD"
              ]
            },
            {
              "string": "viewport",
              "nodeType": "viewport",
              "children": [],
              "clipBoundary": [
                0,
                1,
                0,
                1
              ]
            }
          ],
          "pickable": true,
          "objectType": [
            "ALL"
          ]
        }
      ],
      "activeLayer": 1,
      "order": [
        1,
        2
      ]
    }
  ]
}