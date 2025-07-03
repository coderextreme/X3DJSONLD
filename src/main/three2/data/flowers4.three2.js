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
      "string": " transform DEF transform",
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
                  "string": "appearance composedcubemaptexture",
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
                  ]
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
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "url": [
                        "../shaders/x_ite.vs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"
                      ],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "url": [
                        "../shaders/x_ite.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"
                      ],
                      "type": "FRAGMENT"
                    }
                  ],
                  "DEF": "shader",
                  "language": "GLSL"
                }
              ]
            },
            "/*<Sphere>*/",
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
            }
          ]
        }
      ],
      "DEF": "transform"
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
        "<script>\r\necmascript:\r\nfunction initialize() {\r\n     var resolution = 100;\r\n     updateCoordinates(resolution);\r\n     var localci = new MFInt32();\r\n     var arrIndex = 0;\r\n     for (var i = 0; i < resolution-1; i++) {\r\n     \tfor (var j = 0; j < resolution-1; j++) {\r\n\t     localci[arrIndex++] = i*resolution+j;\r\n\t     localci[arrIndex++] = i*resolution+j+1;\r\n\t     localci[arrIndex++] = (i+1)*resolution+j+1;\r\n\t     localci[arrIndex++] = (i+1)*resolution+j;\r\n\t     localci[arrIndex++] = -1;\r\n\t}\r\n    }\r\n    coordIndexes = localci;\r\n}\r\n\r\nfunction updateCoordinates(resolution) {\r\n     var theta = 0.0;\r\n     var phi = 0.0;\r\n     var delta = (2 * 3.141592653) / (resolution-1);\r\n     var localc = new MFVec3f();\r\n     var arrIndex = 0;\r\n     for (var i = 0; i < resolution; i++) {\r\n     \tfor (var j = 0; j < resolution; j++) {\r\n\t\tvar rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\r\n\t\tlocalc[arrIndex++] = new SFVec3f(\r\n\t\t\trho * Math.cos(phi) * Math.cos(theta),\r\n\t\t\trho * Math.cos(phi) * Math.sin(theta),\r\n\t\t\trho * Math.sin(phi)\r\n\t\t);\r\n\t\ttheta += delta;\r\n\t}\r\n\tphi += delta;\r\n     }\r\n     coordinates = localc;\r\n}\r\n\r\nfunction set_fraction(fraction, eventTime) {\r\n\tvar choice = Math.floor(Math.random() * 4);\r\n\tswitch (choice) {\r\n\tcase 0:\r\n\t\te += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 1:\r\n\t\tf += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 2:\r\n\t\tg += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 3:\r\n\t\th += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\t}\r\n\tif (e < 1) {\r\n\t\te = 10;\r\n\t}\r\n\tif (f < 1) {\r\n\t\tf = 10;\r\n\t}\r\n\tif (g < 1) {\r\n\t\tg = 4;\r\n\t}\r\n\tif (h < 1) {\r\n\t\th = 4;\r\n\t}\r\n\tvar resolution = 100;\r\n\tupdateCoordinates(resolution);\r\n}\r\n</Script>"
      ],
      "DEF": "OrbitScript"
    },
    {
      "string": " timesensor DEF Clock",
      "nodeType": "timesensor",
      "children": [],
      "DEF": "Clock",
      "cycleInterval": 16,
      "loop": true
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
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "Clock",
      "toField": "set_fraction",
      "toNode": "OrbitScript"
    }
  ]
}