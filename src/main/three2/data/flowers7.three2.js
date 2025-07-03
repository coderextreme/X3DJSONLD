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
      "string": " background DEF background",
      "nodeType": "background",
      "children": [],
      "DEF": "background",
      "backUrl": [
        "../resources/images/all_probes/beach_cross/beach_back.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"
      ],
      "bottomUrl": [
        "../resources/images/all_probes/beach_cross/beach_bottom.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"
      ],
      "frontUrl": [
        "../resources/images/all_probes/beach_cross/beach_front.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"
      ],
      "leftUrl": [
        "../resources/images/all_probes/beach_cross/beach_left.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"
      ],
      "rightUrl": [
        "../resources/images/all_probes/beach_cross/beach_right.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"
      ],
      "topUrl": [
        "../resources/images/all_probes/beach_cross/beach_top.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "position": {
        "x": 0,
        "y": 0,
        "z": 40
      },
      "description": "Transparent rose"
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
                      "string": "appearance imagetexture DEF backShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "backShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_back.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF bottomShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "bottomShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_bottom.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF frontShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "frontShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_front.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF leftShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "leftShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_left.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF rightShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "rightShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_right.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF topShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "topShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_top.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"
                      ]
                    }
                  ],
                  "DEF": "texture"
                },
                {
                  "string": "appearance composedshader DEF x3dom",
                  "nodeType": "composedshader",
                  "children": [
                    "/*TODO VERIFY <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>*/",
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
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"
                      ],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "url": [
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"
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
      ]
    },
    {
      "string": " script DEF UrlSelector",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "<script>\r\n\r\necmascript:\r\n        function set_fraction( f, tm ) {\r\n            var side = Math.floor(f*frontUrls.length);\r\n            if (side > frontUrls.length-1) {\r\n                side = 0;\r\n            }\r\n            if (side != old) {\r\n                    old = side;\r\n                    front[0] = frontUrls[side];\r\n                    back[0] = backUrls[side];\r\n                    left[0] = leftUrls[side];\r\n                    right[0] = rightUrls[side];\r\n                    top[0] = topUrls[side];\r\n                    bottom[0] = bottomUrls[side];\r\n            }\r\n        }\r\n\r\n</Script>"
      ],
      "DEF": "UrlSelector",
      "directOutput": true
    },
    "/*<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>*/",
    {
      "string": " script DEF Animate",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "<script>\r\n\r\necmascript:\r\n\r\nfunction set_fraction() {\r\n\tvar choice = Math.floor(Math.random() * 4);\r\n\tswitch (choice) {\r\n\tcase 0:\r\n\t\ta = a + Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 1:\r\n\t\tb = b + Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 2:\r\n\t\tc = c + Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 3:\r\n\t\td = d + Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\t}\r\n\ttdelta = tdelta + 0.5;\r\n\tpdelta = pdelta + 0.5;\r\n\tif (a < 1) {\r\n\t\ta = 10;\r\n\t}\r\n\tif (b < 1) {\r\n\t\tb = 10;\r\n\t}\r\n\tif (c < 1) {\r\n\t\tc = 4;\r\n\t}\r\n\tif (c > 20) {\r\n\t\tc = 4;\r\n\t}\r\n\tif (d < 1) {\r\n\t\td = 4;\r\n\t}\r\n\tif (d > 20) {\r\n\t\td = 4;\r\n\t}\r\n}\r\n\r\n</Script>"
      ],
      "DEF": "Animate",
      "directOutput": true
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
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Animate",
      "fromField": "a",
      "toNode": "x3dom",
      "toField": "a"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Animate",
      "fromField": "b",
      "toNode": "x3dom",
      "toField": "b"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Animate",
      "fromField": "c",
      "toNode": "x3dom",
      "toField": "c"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Animate",
      "fromField": "d",
      "toNode": "x3dom",
      "toField": "d"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Animate",
      "fromField": "pdelta",
      "toNode": "x3dom",
      "toField": "pdelta"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Animate",
      "fromField": "tdelta",
      "toNode": "x3dom",
      "toField": "tdelta"
    }
  ]
}