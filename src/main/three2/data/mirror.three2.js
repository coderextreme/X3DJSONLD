{
  "string": "Scene",
  "children": [
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "position": {
        "x": 0,
        "y": 5,
        "z": 100
      },
      "description": "Switch background and images texture"
    },
    {
      "string": " texturebackground",
      "nodeType": "texturebackground",
      "children": [
        {
          "string": "leftTexture imagetexture DEF leftBackgroundTexture",
          "nodeType": "imagetexture",
          "children": [],
          "DEF": "leftBackgroundTexture",
          "url": [
            "../resources/images/all_probes/beach_cross/beach_left.png",
            "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"
          ]
        },
        {
          "string": "rightTexture imagetexture DEF rightBackgroundTexture",
          "nodeType": "imagetexture",
          "children": [],
          "DEF": "rightBackgroundTexture",
          "url": [
            "../resources/images/all_probes/beach_cross/beach_right.png",
            "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"
          ]
        },
        {
          "string": "frontTexture imagetexture DEF frontBackgroundTexture",
          "nodeType": "imagetexture",
          "children": [],
          "DEF": "frontBackgroundTexture",
          "url": [
            "../resources/images/all_probes/beach_cross/beach_front.png",
            "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"
          ]
        },
        {
          "string": "backTexture imagetexture DEF backBackgroundTexture",
          "nodeType": "imagetexture",
          "children": [],
          "DEF": "backBackgroundTexture",
          "url": [
            "../resources/images/all_probes/beach_cross/beach_back.png",
            "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"
          ]
        },
        {
          "string": "topTexture imagetexture DEF topBackgroundTexture",
          "nodeType": "imagetexture",
          "children": [],
          "DEF": "topBackgroundTexture",
          "url": [
            "../resources/images/all_probes/beach_cross/beach_top.png",
            "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"
          ]
        },
        {
          "string": "bottomTexture imagetexture DEF bottomBackgroundTexture",
          "nodeType": "imagetexture",
          "children": [],
          "DEF": "bottomBackgroundTexture",
          "url": [
            "../resources/images/all_probes/beach_cross/beach_bottom.png",
            "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"
          ]
        }
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
                      "string": "appearance imagetexture DEF backShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "backShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_back.png",
                        "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF bottomShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "bottomShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_bottom.png",
                        "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF frontShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "frontShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_front.png",
                        "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF leftShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "leftShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_left.png",
                        "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF rightShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "rightShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_right.png",
                        "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture DEF topShader",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "topShader",
                      "url": [
                        "../resources/images/all_probes/beach_cross/beach_top.png",
                        "https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"
                      ]
                    }
                  ]
                },
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
                        "../shaders/mix.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"
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
                    "/*http://hypertextbook.com/facts/2005/JustinChe.shtml*/",
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
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"
                      ],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart",
                      "nodeType": "shaderpart",
                      "children": [],
                      "url": [
                        "../shaders/x_itemix.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"
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
              "children": [],
              "radius": 30
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
            "<script>\r\n\r\necmascript:\r\n        function set_fraction( f, tm ) {\r\n\t    var side = Math.floor(f*frontUrls.length);\r\n\t    if (side > frontUrls.length-1) {\r\n\t    \tside = 0;\r\n\t    }\r\n\t    if (side != old) {\r\n\t    \t    Browser.print(f+\" \"+side);\r\n\t    \t    old = side;\r\n\t\t    front_changed[0] = frontUrls[side];\r\n\t\t    back_changed[0] = backUrls[side];\r\n\t\t    left_changed[0] = leftUrls[side];\r\n\t\t    right_changed[0] = rightUrls[side];\r\n\t\t    top_changed[0] = topUrls[side];\r\n\t\t    bottom_changed[0] = bottomUrls[side];\r\n            }\r\n        }\r\n\r\n</Script>"
          ],
          "DEF": "UrlSelector",
          "directOutput": true
        },
        {
          "string": " timesensor DEF Clock",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "Clock",
          "cycleInterval": 45,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "Clock",
          "fromField": "fraction_changed",
          "toNode": "UrlSelector",
          "toField": "set_fraction"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "front_changed",
          "toNode": "frontBackgroundTexture",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "back_changed",
          "toNode": "backBackgroundTexture",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "left_changed",
          "toNode": "leftBackgroundTexture",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "right_changed",
          "toNode": "rightBackgroundTexture",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "top_changed",
          "toNode": "topBackgroundTexture",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "bottom_changed",
          "toNode": "bottomBackgroundTexture",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "front_changed",
          "toNode": "frontShader",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "back_changed",
          "toNode": "backShader",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "left_changed",
          "toNode": "leftShader",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "right_changed",
          "toNode": "rightShader",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "top_changed",
          "toNode": "topShader",
          "toField": "url"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "UrlSelector",
          "fromField": "bottom_changed",
          "toNode": "bottomShader",
          "toField": "url"
        }
      ]
    }
  ]
}