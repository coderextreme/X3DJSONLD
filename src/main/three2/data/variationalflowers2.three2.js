{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "variationalflowers.x3d"
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
        "../resources/images/all_probes/stpeters_cross/stpeters_back.png"
      ],
      "bottomUrl": [
        "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
      ],
      "frontUrl": [
        "../resources/images/all_probes/stpeters_cross/stpeters_front.png"
      ],
      "leftUrl": [
        "../resources/images/all_probes/stpeters_cross/stpeters_left.png"
      ],
      "rightUrl": [
        "../resources/images/all_probes/stpeters_cross/stpeters_right.png"
      ],
      "topUrl": [
        "../resources/images/all_probes/stpeters_cross/stpeters_top.png"
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
            "/** values - array of MFFloats to pass to ComposedShader * variations in values - array of MFFloats to pass to ComposedShader that varies values*/",
            {
              "string": "IllegalChildNodeFieldNameNotFound variationphysicsmodel",
              "nodeType": "variationphysicsmodel",
              "children": [],
              "values": [
                2,
                2,
                5,
                5,
                0,
                0
              ],
              "variations": [
                0.2,
                0.1,
                0.3,
                0.3,
                0.01,
                0.01
              ]
            },
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
                        "../resources/images/all_probes/stpeters_cross/stpeters_back.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/all_probes/stpeters_cross/stpeters_front.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/all_probes/stpeters_cross/stpeters_left.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/all_probes/stpeters_cross/stpeters_right.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/all_probes/stpeters_cross/stpeters_top.png"
                      ]
                    }
                  ],
                  "DEF": "texture"
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
                        "../shaders/x_ite_variations.vs"
                      ],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "url": [
                        "../shaders/commonnew.fs"
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
          "maxParticles": 20,
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