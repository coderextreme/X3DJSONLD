{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "CoordinateAxes.x3d"
    },
    {
      "string": " collision DEF DoNotCollideWithVisualizationWidget",
      "nodeType": "collision",
      "children": [
        "/*Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph.*/",
        "/*This NavigationInfo allows examine mode and will be overridden by any parent scene.*/",
        "/*Each arrow goes from +1m to -1m to allow linear scaling to fit a scene*/",
        "/*Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user*/",
        {
          "string": " group",
          "nodeType": "group",
          "children": [
            "/*Vertical Y arrow and label*/",
            {
              "string": " group DEF ArrowGreen",
              "nodeType": "group",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry cylinder DEF ArrowCylinder",
                      "nodeType": "cylinder",
                      "children": [],
                      "DEF": "ArrowCylinder",
                      "radius": 0.025,
                      "top": false
                    },
                    {
                      "string": "appearance DEF Green",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [],
                          "diffuseColor": {
                            "r": 0.1,
                            "g": 0.6,
                            "b": 0.1
                          },
                          "emissiveColor": {
                            "r": 0.05,
                            "g": 0.2,
                            "b": 0.05
                          }
                        }
                      ],
                      "DEF": "Green"
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
                          "string": "geometry cone DEF ArrowCone",
                          "nodeType": "cone",
                          "children": [],
                          "DEF": "ArrowCone",
                          "bottomRadius": 0.05,
                          "height": 0.1
                        },
                        {
                          "string": "appearance USE Green",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "Green"
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 1,
                    "z": 0
                  }
                }
              ],
              "DEF": "ArrowGreen"
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
                              "justify": [
                                "MIDDLE",
                                "MIDDLE"
                              ],
                              "size": 0.2
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
            "/*Horizontal X arrow and label*/",
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " group DEF ArrowRed",
                  "nodeType": "group",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder USE ArrowCylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "USE": "ArrowCylinder"
                        },
                        {
                          "string": "appearance DEF Red",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material",
                              "nodeType": "material",
                              "children": [],
                              "diffuseColor": {
                                "r": 0.7,
                                "g": 0.1,
                                "b": 0.1
                              },
                              "emissiveColor": {
                                "r": 0.33,
                                "g": 0,
                                "b": 0
                              }
                            }
                          ],
                          "DEF": "Red"
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
                              "string": "geometry cone USE ArrowCone",
                              "nodeType": "cone",
                              "children": [],
                              "USE": "ArrowCone"
                            },
                            {
                              "string": "appearance USE Red",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "Red"
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 1,
                        "z": 0
                      }
                    }
                  ],
                  "DEF": "ArrowRed"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    "/*note label rotated back to original coordinate frame*/",
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
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57079
                  },
                  "translation": {
                    "x": 0.072,
                    "y": 1.1,
                    "z": 0
                  }
                }
              ]
            }
          ],
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": -1.57079
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            "/*Perpendicular Z arrow and label, note right-hand rule*/",
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " group DEF ArrowBlue",
                  "nodeType": "group",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder USE ArrowCylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "USE": "ArrowCylinder"
                        },
                        {
                          "string": "appearance DEF Blue",
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
                                "r": 0.1,
                                "g": 0.1,
                                "b": 0.33
                              }
                            }
                          ],
                          "DEF": "Blue"
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
                              "string": "geometry cone USE ArrowCone",
                              "nodeType": "cone",
                              "children": [],
                              "USE": "ArrowCone"
                            },
                            {
                              "string": "appearance USE Blue",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "Blue"
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 1,
                        "z": 0
                      }
                    }
                  ],
                  "DEF": "ArrowBlue"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    "/*note label rotated back to original coordinate frame*/",
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
                  "rotation": {
                    "x": 1,
                    "y": 0,
                    "z": 0,
                    "w": -1.57079
                  },
                  "translation": {
                    "x": 0,
                    "y": 1.1,
                    "z": 0.072
                  }
                }
              ]
            }
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": 1.57079
          }
        }
      ],
      "DEF": "DoNotCollideWithVisualizationWidget"
    }
  ]
}