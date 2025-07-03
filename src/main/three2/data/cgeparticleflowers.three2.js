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
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"
      ],
      "bottomUrl": [
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
      ],
      "frontUrl": [
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"
      ],
      "leftUrl": [
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"
      ],
      "rightUrl": [
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"
      ],
      "topUrl": [
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
            {
              "string": "physics boundedphysicsmodel",
              "nodeType": "boundedphysicsmodel",
              "children": [
                {
                  "string": "geometry sphere",
                  "nodeType": "sphere",
                  "children": [],
                  "radius": 100
                }
              ]
            },
            {
              "string": "emitter explosionemitter",
              "nodeType": "explosionemitter",
              "children": [],
              "speed": 2,
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
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"
                      ]
                    }
                  ],
                  "DEF": "texture"
                },
                {
                  "string": "appearance composedshader DEF shader",
                  "nodeType": "composedshader",
                  "children": [
                    {
                      "string": "appearance field",
                      "nodeType": "field",
                      "children": []
                    },
                    "/*<field name='cube' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field>*/",
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "type": "FRAGMENT"
                    }
                  ],
                  "DEF": "shader",
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
            "<script>\r\n\r\necmascript:\r\n\r\n\t\t\tfunction initialize() {\r\n\t\t\t    translation = new SFVec3f(0, 0, 0);\r\n\t\t\t    velocity = new SFVec3f(\r\n\t\t\t    \tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5);\r\n\t\t\t}\r\n\t\t\tfunction set_fraction() {\r\n\t\t\t    translation = new SFVec3f(\r\n\t\t\t    \ttranslation.x + velocity.x,\r\n\t\t\t\ttranslation.y + velocity.y,\r\n\t\t\t\ttranslation.z + velocity.z);\r\n\t\t\t    for (var j = 0; j <= 2; j++) {\r\n\t\t\t\t    if (Math.abs(translation.x) > 10) {\r\n\t\t\t\t\tinitialize();\r\n\t\t\t\t    } else if (Math.abs(translation.y) > 10) {\r\n\t\t\t\t\tinitialize();\r\n\t\t\t\t    } else if (Math.abs(translation.z) > 10) {\r\n\t\t\t\t\tinitialize();\r\n\t\t\t\t    } else {\r\n\t\t\t\t\tvelocity.x += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tvelocity.y += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tvelocity.z += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t    }\r\n\t\t\t    }\r\n\t\t\t    animate_flowers();\r\n\t\t\t}\r\n\r\n\t\t\tfunction animate_flowers(fraction, eventTime) {\r\n\t\t\t\tvar choice = Math.floor(Math.random() * 4);\r\n\t\t\t\tswitch (choice) {\r\n\t\t\t\tcase 0:\r\n\t\t\t\t\ta += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 1:\r\n\t\t\t\t\tb += Math.random() * 0.2 - 0.1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 2:\r\n\t\t\t\t\tc += Math.random() * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 3:\r\n\t\t\t\t\td += Math.random() * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\t}\r\n\t\t\t\ttdelta = tdelta + 0.05;\r\n\t\t\t\tpdelta = pdelta + 0.05;\r\n\t\t\t\tif (a > 1) {\r\n\t\t\t\t\ta =  0.5;\r\n\t\t\t\t}\r\n\t\t\t\tif (b > 1) {\r\n\t\t\t\t\tb =  0.5;\r\n\t\t\t\t}\r\n\t\t\t\tif (c < 1) {\r\n\t\t\t\t\tc =  4;\r\n\t\t\t\t}\r\n\t\t\t\tif (d < 1) {\r\n\t\t\t\t\td =  4;\r\n\t\t\t\t}\r\n\t\t\t\tif (c > 10) {\r\n\t\t\t\t\tc = 4;\r\n\t\t\t\t}\r\n\t\t\t\tif (d > 10) {\r\n\t\t\t\t\td = 4;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\r\n</Script>"
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
        }
      ]
    }
  ]
}