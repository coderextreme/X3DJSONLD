{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "headlight": false
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " group DEF ARROW",
          "nodeType": "group",
          "children": [
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance DEF ARROW_APPEARANCE",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "diffuseColor": {
                        "r": 0.3,
                        "g": 0.3,
                        "b": 1
                      },
                      "emissiveColor": {
                        "r": 0.3,
                        "g": 0.3,
                        "b": 0.33
                      }
                    }
                  ],
                  "DEF": "ARROW_APPEARANCE"
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "top": false,
                  "bottom": false,
                  "radius": 0.025
                }
              ]
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF ARROW_POINTER",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE ARROW_APPEARANCE",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "ARROW_APPEARANCE"
                    },
                    {
                      "string": "geometry cone",
                      "nodeType": "cone",
                      "children": [],
                      "height": 0.1,
                      "bottomRadius": 0.05
                    }
                  ],
                  "DEF": "ARROW_POINTER"
                }
              ],
              "translation": {
                "x": 0,
                "y": 1,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE ARROW_POINTER",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "ARROW_POINTER"
                }
              ],
              "translation": {
                "x": 0,
                "y": -1,
                "z": 0
              },
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 3.1416
              }
            }
          ],
          "DEF": "ARROW"
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " billboard",
              "nodeType": "billboard",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance DEF LABEL_APPEARANCE",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [],
                          "diffuseColor": {
                            "r": 1,
                            "g": 1,
                            "b": 0.3
                          },
                          "emissiveColor": {
                            "r": 0.33,
                            "g": 0.33,
                            "b": 0.1
                          }
                        }
                      ],
                      "DEF": "LABEL_APPEARANCE"
                    },
                    {
                      "string": [
                        "Y"
                      ],
                      "nodeType": "text",
                      "children": [
                        {
                          "string": "fontStyle fontstyle DEF LABEL_FONT",
                          "nodeType": "fontstyle",
                          "children": [],
                          "DEF": "LABEL_FONT",
                          "family": [
                            "SANS"
                          ],
                          "size": 0.2,
                          "justify": [
                            "MIDDLE"
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ],
          "translation": {
            "x": 0,
            "y": 1.08,
            "z": 0
          }
        }
      ]
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " group",
          "nodeType": "group",
          "children": [
            {
              "string": " group USE ARROW",
              "nodeType": "group",
              "children": [],
              "USE": "ARROW"
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " billboard",
                  "nodeType": "billboard",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance USE LABEL_APPEARANCE",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "LABEL_APPEARANCE"
                        },
                        {
                          "string": [
                            "X"
                          ],
                          "nodeType": "text",
                          "children": [
                            {
                              "string": "fontStyle fontstyle USE LABEL_FONT",
                              "nodeType": "fontstyle",
                              "children": [],
                              "USE": "LABEL_FONT"
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ],
              "translation": {
                "x": 0.072,
                "y": 1.1,
                "z": 0
              },
              "rotation": {
                "x": 0,
                "y": 0,
                "z": 1,
                "w": 1.5708
              }
            }
          ]
        }
      ],
      "rotation": {
        "x": 0,
        "y": 0,
        "z": 1,
        "w": -1.5708
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " group",
          "nodeType": "group",
          "children": [
            {
              "string": " group USE ARROW",
              "nodeType": "group",
              "children": [],
              "USE": "ARROW"
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " billboard",
                  "nodeType": "billboard",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance USE LABEL_APPEARANCE",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "LABEL_APPEARANCE"
                        },
                        {
                          "string": [
                            "Z"
                          ],
                          "nodeType": "text",
                          "children": [
                            {
                              "string": "fontStyle fontstyle USE LABEL_FONT",
                              "nodeType": "fontstyle",
                              "children": [],
                              "USE": "LABEL_FONT"
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ],
              "translation": {
                "x": 0,
                "y": 1.1,
                "z": 0.072
              },
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": -1.5708
              }
            }
          ]
        }
      ],
      "rotation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": 1.5708
      }
    }
  ]
}