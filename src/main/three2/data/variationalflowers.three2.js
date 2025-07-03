{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "particleflowers.x3d"
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        "ANY",
        "EXAMINE",
        "FLY",
        "LOOKAT"
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "Tour Views",
      "position": {
        "x": 0,
        "y": 0,
        "z": 12
      }
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
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " particlesystem",
          "nodeType": "particlesystem",
          "children": [
            "/** values - array of MFFloats to pass to ComposedShader * variations in values - array of MFFloats to pass to ComposedShader that varies values * lastFrame - last frame that was rendered (0 for default) * updateRate - update rate is amount of time between frames*/",
            "/*<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'> </VariationPhysicsModel>*/",
            {
              "string": "emitter explosionemitter",
              "nodeType": "explosionemitter",
              "children": [],
              "speed": 1,
              "variation": 0.75
            },
            {
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": []
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
                "/*<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>*/",
                "/*<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>*/",
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
                        "../shaders/x_ite_variations.vs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs"
                      ],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "url": [
                        "../shaders/commonnew.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"
                      ],
                      "type": "FRAGMENT"
                    }
                  ],
                  "DEF": "x_ite",
                  "language": "GLSL"
                }
              ]
            }
          ],
          "maxParticles": 100,
          "geometryType": "GEOMETRY"
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
            "<script>\r\n\r\necmascript:\r\n\t\t\tfunction set_fraction(f, tm) {\r\n\t\t\t    if (lastframe + updaterate < tm) {\r\n\t\t\t  \tlastframe = tm;\r\n\t\t\t\tfor (let v in values) {\r\n\t\t\t\t\tvalues[v] = values[v] + (2 * Math.random() - 1) * variations[v];\r\n\t\t\t\t}\r\n\t\t\t    }\r\n\t\t\t}\r\n\r\n</Script>"
          ],
          "DEF": "Animate"
        },
        {
          "string": " timesensor DEF TourTime",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "TourTime",
          "cycleInterval": 45,
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
          "fromField": "values",
          "toNode": "x_ite",
          "toField": "x3d_ParticleValues"
        }
      ]
    }
  ]
}