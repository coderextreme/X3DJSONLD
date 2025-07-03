{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "ScubaTank.x3d"
    },
    {
      "string": " transform DEF ScubaTank",
      "nodeType": "transform",
      "children": [
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
                      "string": "appearance material DEF tank",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "tank",
                      "ambientIntensity": 0.3,
                      "diffuseColor": {
                        "r": 0.3,
                        "g": 0.3,
                        "b": 0.5
                      },
                      "shininess": 0.1,
                      "specularColor": {
                        "r": 0.7,
                        "g": 0.7,
                        "b": 0.8
                      }
                    }
                  ]
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "height": 0.7,
                  "radius": 0.1
                }
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
                      "string": "appearance material USE tank",
                      "nodeType": "material",
                      "children": [],
                      "USE": "tank"
                    }
                  ]
                },
                {
                  "string": "geometry sphere",
                  "nodeType": "sphere",
                  "children": [],
                  "radius": 0.098
                }
              ]
            }
          ],
          "translation": {
            "x": 0,
            "y": 0.35,
            "z": 0
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF tankBottom",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material DEF black",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "black",
                      "ambientIntensity": 0.3,
                      "diffuseColor": {
                        "r": 0,
                        "g": 0,
                        "b": 0
                      }
                    }
                  ]
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "height": 0.06,
                  "radius": 0.115
                }
              ],
              "DEF": "tankBottom"
            }
          ],
          "translation": {
            "x": 0,
            "y": -0.35,
            "z": 0
          }
        },
        {
          "string": " group DEF tankNozzle",
          "nodeType": "group",
          "children": [
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape DEF pressure",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF pressureColor",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "pressureColor",
                              "ambientIntensity": 0.4,
                              "diffuseColor": {
                                "r": 0.91,
                                "g": 0.91,
                                "b": 0.91
                              },
                              "shininess": 0.16,
                              "specularColor": {
                                "r": 0.91,
                                "g": 0.9,
                                "b": 0.91
                              }
                            }
                          ]
                        },
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "height": 0.1,
                          "radius": 0.015
                        }
                      ],
                      "DEF": "pressure"
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0.45,
                    "z": 0
                  }
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape DEF pressureTop",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE black",
                              "nodeType": "material",
                              "children": [],
                              "USE": "black"
                            }
                          ]
                        },
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "height": 0.02,
                          "radius": 0.025
                        }
                      ],
                      "DEF": "pressureTop"
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0.5,
                    "z": 0
                  }
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " shape DEF connectorToRegulator",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "appearance",
                              "nodeType": "appearance",
                              "children": [
                                {
                                  "string": "appearance material USE pressureColor",
                                  "nodeType": "material",
                                  "children": [],
                                  "USE": "pressureColor"
                                }
                              ]
                            },
                            {
                              "string": "geometry cylinder",
                              "nodeType": "cylinder",
                              "children": [],
                              "height": 0.03,
                              "radius": 0.01
                            }
                          ],
                          "DEF": "connectorToRegulator"
                        }
                      ]
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " shape DEF connectorToRegulatorTop",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "appearance",
                              "nodeType": "appearance",
                              "children": [
                                {
                                  "string": "appearance material USE black",
                                  "nodeType": "material",
                                  "children": [],
                                  "USE": "black"
                                }
                              ]
                            },
                            {
                              "string": "geometry cylinder",
                              "nodeType": "cylinder",
                              "children": [],
                              "height": 0.02,
                              "radius": 0.02
                            }
                          ],
                          "DEF": "connectorToRegulatorTop"
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0.02,
                        "z": 0
                      }
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  },
                  "translation": {
                    "x": -0.028,
                    "y": 0.462,
                    "z": 0
                  }
                }
              ]
            }
          ],
          "DEF": "tankNozzle"
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF tankHoldBelt",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material USE black",
                      "nodeType": "material",
                      "children": [],
                      "USE": "black"
                    }
                  ]
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "height": 0.1,
                  "radius": 0.115
                }
              ],
              "DEF": "tankHoldBelt"
            }
          ],
          "translation": {
            "x": 0,
            "y": 0.2,
            "z": 0
          }
        }
      ],
      "DEF": "ScubaTank"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 0.6,
          "g": 0.6,
          "b": 0.6
        }
      ]
    }
  ]
}