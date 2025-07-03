{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
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
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "position": {
        "x": 0,
        "y": 0,
        "z": 20
      },
      "description": "Look at the bubbles flying"
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
              "string": " transform DEF transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF myShape",
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
                        "/*<ComposedShader DEF='gl' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/gl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader DEF='freewrl' language=\"GLSL\"> <field name='fw_textureCoodGenType' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>*/",
                        "/*<ComposedShader DEF='instant' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType=\"inputOutput\" value='0'/> <field name='chromaticDispertion' type='SFVec3f' accessType=\"inputOutput\" value='0.98 1.0 1.033'/> <field name='bias' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='scale' type='SFFloat' accessType=\"inputOutput\" value='0.5'/> <field name='power' type='SFFloat' accessType=\"inputOutput\" value='2.0'/> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type='VERTEX'></ShaderPart> <ShaderPart url='\"../shaders/pc_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>*/",
                        {
                          "string": "appearance composedshader DEF x3dom",
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
                                "../shaders/x3dom.vs",
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"
                              ],
                              "type": "VERTEX"
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "url": [
                                "../shaders/pc_bubbles.fs",
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"
                              ],
                              "type": "FRAGMENT"
                            }
                          ],
                          "DEF": "x3dom",
                          "language": "GLSL"
                        },
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
                                "../shaders/x_ite.vs",
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"
                              ],
                              "type": "VERTEX"
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "url": [
                                "../shaders/x_itebubbles.fs",
                                "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"
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
                  ],
                  "DEF": "myShape"
                }
              ],
              "DEF": "transform"
            },
            {
              "string": " script DEF Bounce",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\necmascript:\r\n\t\t\tfunction initialize() {\r\n\t\t\t    translation = new SFVec3f(0, 0, 0);\r\n\t\t\t    velocity = new SFVec3f(\r\n\t\t\t    \tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5);\r\n\t\t\t}\r\n\t\t\tfunction set_fraction() {\r\n\t\t\t    translation = new SFVec3f(\r\n\t\t\t    \ttranslation.x + velocity.x,\r\n\t\t\t\ttranslation.y + velocity.y,\r\n\t\t\t\ttranslation.z + velocity.z);\r\n\t\t\t    if (Math.abs(translation.x) > 10) {\r\n\t\t\t\tinitialize();\r\n\t\t\t    } else if (Math.abs(translation.y) > 10) {\r\n\t\t\t\tinitialize();\r\n\t\t\t    } else if (Math.abs(translation.z) > 10) {\r\n\t\t\t\tinitialize();\r\n\t\t\t    } else {\r\n\t\t\t\tvelocity.x += Math.random() * 0.2 - 0.1;\r\n\t\t\t\tvelocity.y += Math.random() * 0.2 - 0.1;\r\n\t\t\t\tvelocity.z += Math.random() * 0.2 - 0.1;\r\n\t\t\t    }\r\n\t\t\t}\r\n\r\n</Script>"
              ],
              "DEF": "Bounce"
            },
            {
              "string": " timesensor DEF TourTime",
              "nodeType": "timesensor",
              "children": [],
              "DEF": "TourTime",
              "cycleInterval": 0.15,
              "loop": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "TourTime",
              "fromField": "cycleTime",
              "toNode": "Bounce",
              "toField": "set_fraction"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "Bounce",
              "fromField": "translation_changed",
              "toNode": "transform",
              "toField": "set_translation"
            }
          ]
        }
      ],
      "name": "Bubble"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble"
    }
  ]
}