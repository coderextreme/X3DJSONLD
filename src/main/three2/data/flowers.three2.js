{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
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
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform DEF animate_transform",
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
                        "/*<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"' containerField='parts' type='VERTEX'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>*/",
                        {
                          "string": "appearance composedshader DEF x_ite",
                          "nodeType": "composedshader",
                          "children": [
                            {
                              "string": "appearance field",
                              "nodeType": "field",
                              "children": [
                                {
                                  "string": " composedcubemaptexture USE texture",
                                  "nodeType": "composedcubemaptexture",
                                  "children": [],
                                  "USE": "texture"
                                }
                              ]
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "url": [
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs",
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"
                              ],
                              "type": "VERTEX"
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "url": [
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs",
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"
                              ],
                              "type": "FRAGMENT"
                            }
                          ],
                          "DEF": "x_ite",
                          "language": "GLSL"
                        }
                      ]
                    },
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": []
                    }
                  ]
                }
              ],
              "DEF": "animate_transform"
            },
            {
              "string": " script DEF Animate",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\necmascript:\r\n\r\n\t\t\tfunction initialize() {\r\n\t\t\t    translation = new SFVec3f(0, 0, 0);\r\n\t\t\t    velocity = new SFVec3f(\r\n\t\t\t    \tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5);\r\n\t\t\t}\r\n\t\t\tfunction set_fraction() {\r\n\t\t\t    translation = new SFVec3f(\r\n\t\t\t    \ttranslation.x + velocity.x,\r\n\t\t\t\ttranslation.y + velocity.y,\r\n\t\t\t\ttranslation.z + velocity.z);\r\n\t\t\t    for (var j = 0; j <= 2; j++) {\r\n\t\t\t\t    if (Math.abs(translation.x) > 10) {\r\n\t\t\t\t\tinitialize();\r\n\t\t\t\t    } else if (Math.abs(translation.y) > 10) {\r\n\t\t\t\t\tinitialize();\r\n\t\t\t\t    } else if (Math.abs(translation.z) > 10) {\r\n\t\t\t\t\tinitialize();\r\n\t\t\t\t    } else {\r\n\t\t\t\t\tvelocity.x += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tvelocity.y += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tvelocity.z += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t    }\r\n\t\t\t    }\r\n\t\t\t    animate_flowers();\r\n\t\t\t}\r\n\r\n\t\t\tfunction animate_flowers(fraction, eventTime) {\r\n\t\t\t\tvar choice = Math.floor(Math.random() * 4);\r\n\t\t\t\tswitch (choice) {\r\n\t\t\t\tcase 0:\r\n\t\t\t\t\ta += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 1:\r\n\t\t\t\t\tb += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 2:\r\n\t\t\t\t\tc += Math.random() * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 3:\r\n\t\t\t\t\td += Math.random() * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\t}\r\n\t\t\t\ttdelta = tdelta + 0.5;\r\n\t\t\t\tpdelta = pdelta + 0.5;\r\n\t\t\t\tif (a > 1) {\r\n\t\t\t\t\ta =  0.5;\r\n\t\t\t\t}\r\n\t\t\t\tif (b > 1) {\r\n\t\t\t\t\tb =  0.5;\r\n\t\t\t\t}\r\n\t\t\t\tif (c < 1) {\r\n\t\t\t\t\tc =  4;\r\n\t\t\t\t}\r\n\t\t\t\tif (d < 1) {\r\n\t\t\t\t\td =  4;\r\n\t\t\t\t}\r\n\t\t\t\tif (c > 10) {\r\n\t\t\t\t\tc = 4;\r\n\t\t\t\t}\r\n\t\t\t\tif (d > 10) {\r\n\t\t\t\t\td = 4;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\r\n</Script>"
              ],
              "DEF": "Animate"
            },
            {
              "string": " timesensor DEF TourTime",
              "nodeType": "timesensor",
              "children": [],
              "DEF": "TourTime",
              "cycleInterval": 5,
              "loop": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "TourTime",
              "fromField": "fraction_changed",
              "toNode": "Animate",
              "toField": "set_fraction"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "translation_changed",
              "toNode": "animate_transform",
              "toField": "set_translation"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "a",
              "toNode": "x_ite",
              "toField": "a"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "b",
              "toNode": "x_ite",
              "toField": "b"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "c",
              "toNode": "x_ite",
              "toField": "c"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "d",
              "toNode": "x_ite",
              "toField": "d"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "pdelta",
              "toNode": "x_ite",
              "toField": "pdelta"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Animate",
              "fromField": "tdelta",
              "toNode": "x_ite",
              "toField": "tdelta"
            },
            "/*<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>*/"
          ]
        }
      ],
      "name": "flower"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "flower"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "flower"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "flower"
    }
  ]
}