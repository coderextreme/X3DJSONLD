{
  "string": "Scene",
  "children": [
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
      "string": " viewpoint DEF Tour",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Tour",
      "description": "Tour Views"
    },
    "/*Viewpoint position='0 0 4' description='sphere in road'/*/",
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "backUrl": [
        "../resources/images/bBK.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"
      ],
      "bottomUrl": [
        "../resources/images/bBT.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"
      ],
      "frontUrl": [
        "../resources/images/bFR.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"
      ],
      "leftUrl": [
        "../resources/images/bLF.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"
      ],
      "rightUrl": [
        "../resources/images/bRT.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"
      ],
      "topUrl": [
        "../resources/images/bTP.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"
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
                        "../resources/images/bBK.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/bBT.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/bFR.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/bLF.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/bRT.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"
                      ]
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "../resources/images/bTP.png",
                        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"
                      ]
                    }
                  ],
                  "DEF": "texture"
                },
                {
                  "string": "appearance composedshader",
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
                        "../shaders/x3dom.vs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"
                      ],
                      "type": "VERTEX"
                    },
                    {
                      "string": "appearance shaderpart DEF common",
                      "nodeType": "shaderpart",
                      "children": [],
                      "DEF": "common",
                      "url": [
                        "../shaders/common.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"
                      ],
                      "type": "FRAGMENT"
                    }
                  ],
                  "language": "GLSL"
                },
                {
                  "string": "appearance composedshader",
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
                        "../shaders/x_ite.fs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"
                      ],
                      "type": "FRAGMENT"
                    }
                  ],
                  "language": "GLSL"
                }
              ]
            }
          ]
        }
      ]
    }
  ]
}