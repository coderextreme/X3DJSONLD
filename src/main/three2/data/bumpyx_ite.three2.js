{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "bumpyx_ite.x3d"
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
      "position": {
        "x": 0,
        "y": 0,
        "z": 40
      },
      "description": "Transparent rose"
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
              "children": [],
              "radius": 40
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
                  "string": "appearance composedshader DEF x_iteShader",
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
                        "../shaders/x_ite_flowers_chromatic.vs",
                        "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"
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
                    },
                    "/*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/"
                  ],
                  "DEF": "x_iteShader",
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