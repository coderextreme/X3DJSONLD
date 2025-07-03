{
  "string": "Scene",
  "children": [
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        "/*DEF for markerfor XYZ axes*/",
        {
          "string": " shape DEF AxisLinesShape",
          "nodeType": "shape",
          "children": [
            "/*RGB lines showing XYZ axes*/",
            {
              "string": "geometry indexedlineset",
              "nodeType": "indexedlineset",
              "children": [
                {
                  "string": "coord coordinate",
                  "nodeType": "coordinate",
                  "children": [],
                  "point": [
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0.1,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0.1
                    }
                  ],
                  "points": [
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0.1,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0.1
                    }
                  ]
                },
                {
                  "string": "color",
                  "nodeType": "color",
                  "children": [],
                  "color": [
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0.6,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    }
                  ]
                }
              ],
              "colorIndex": [],
              "colorPerVertex": false,
              "coordIndex": [
                [
                  0,
                  1
                ],
                [
                  0,
                  2
                ],
                [
                  0,
                  3
                ]
              ]
            }
          ],
          "DEF": "AxisLinesShape"
        }
      ]
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        "/*DEFS for markers of skeleton joints, segments, and sites*/",
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimRootShape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": [],
                      "radius": 0.02
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material DEF HAnimRootMaterial",
                          "nodeType": "material",
                          "children": [],
                          "DEF": "HAnimRootMaterial",
                          "diffuseColor": {
                            "r": 0.8,
                            "g": 0,
                            "b": 0
                          },
                          "transparency": 0.3
                        }
                      ]
                    }
                  ],
                  "DEF": "HAnimRootShape"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimJointShape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": [],
                      "radius": 0.02
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material DEF HAnimJointMaterial",
                          "nodeType": "material",
                          "children": [],
                          "DEF": "HAnimJointMaterial",
                          "diffuseColor": {
                            "r": 0,
                            "g": 0,
                            "b": 0.8
                          },
                          "transparency": 0.3
                        }
                      ]
                    }
                  ],
                  "DEF": "HAnimJointShape"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.1,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimSegmentLine",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry lineset",
                      "nodeType": "lineset",
                      "children": [
                        {
                          "string": "color colorrgba DEF HAnimSegmentLineColorRGBA",
                          "nodeType": "colorrgba",
                          "children": [],
                          "DEF": "HAnimSegmentLineColorRGBA",
                          "color": [
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 0.1
                            }
                          ]
                        },
                        {
                          "string": "coord coordinate",
                          "nodeType": "coordinate",
                          "children": [],
                          "point": [
                            {
                              "x": -0.05,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.05,
                              "y": 0,
                              "z": 0
                            }
                          ],
                          "points": [
                            {
                              "x": -0.05,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.05,
                              "y": 0,
                              "z": 0
                            }
                          ]
                        }
                      ],
                      "vertexCount": [
                        2
                      ]
                    }
                  ],
                  "DEF": "HAnimSegmentLine"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.05,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimSiteShape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry indexedfaceset DEF DiamondIFS",
                      "nodeType": "indexedfaceset",
                      "children": [
                        {
                          "string": "color colorrgba DEF HAnimSiteColorRGBA",
                          "nodeType": "colorrgba",
                          "children": [],
                          "DEF": "HAnimSiteColorRGBA",
                          "color": [
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 0.1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 0.1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 0.1
                            }
                          ]
                        },
                        {
                          "string": "coord coordinate",
                          "nodeType": "coordinate",
                          "children": [],
                          "point": [
                            {
                              "x": 0,
                              "y": 0.01,
                              "z": 0
                            },
                            {
                              "x": -0.01,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": 0.01
                            },
                            {
                              "x": 0.01,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": -0.01
                            },
                            {
                              "x": 0,
                              "y": -0.01,
                              "z": 0
                            }
                          ],
                          "points": [
                            {
                              "x": 0,
                              "y": 0.01,
                              "z": 0
                            },
                            {
                              "x": -0.01,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": 0.01
                            },
                            {
                              "x": 0.01,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": -0.01
                            },
                            {
                              "x": 0,
                              "y": -0.01,
                              "z": 0
                            }
                          ]
                        }
                      ],
                      "DEF": "DiamondIFS",
                      "creaseAngle": 0.5,
                      "solid": false,
                      "coordIndex": [
                        [
                          0,
                          1,
                          2
                        ],
                        [
                          0,
                          2,
                          3
                        ],
                        [
                          0,
                          3,
                          4
                        ],
                        [
                          0,
                          4,
                          1
                        ],
                        [
                          5,
                          2,
                          1
                        ],
                        [
                          5,
                          3,
                          2
                        ],
                        [
                          5,
                          4,
                          3
                        ],
                        [
                          5,
                          1,
                          4
                        ]
                      ]
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
                            "r": 1,
                            "g": 1,
                            "b": 0
                          },
                          "transparency": 0.3
                        }
                      ]
                    }
                  ],
                  "DEF": "HAnimSiteShape"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.1,
                "z": 0
              }
            }
          ]
        }
      ]
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "speed": 1.5
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "default"
    },
    {
      "string": " hanimhumanoid DEF hanim_HAnim",
      "nodeType": "hanimhumanoid",
      "children": [
        "/*<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)*/",
        "/*</LOD>*/",
        {
          "string": "skin shape DEF SkinShape",
          "nodeType": "shape",
          "children": [
            {
              "string": "geometry indexedfaceset",
              "nodeType": "indexedfaceset",
              "children": [
                {
                  "string": "coord coordinate DEF TheSkinCoord",
                  "nodeType": "coordinate",
                  "children": [],
                  "DEF": "TheSkinCoord",
                  "point": [
                    {
                      "x": 0,
                      "y": 1.77,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 1.665,
                      "z": 0.09
                    },
                    {
                      "x": -0.033,
                      "y": 1.62,
                      "z": 0.087
                    },
                    {
                      "x": 0.033,
                      "y": 1.62,
                      "z": 0.087
                    },
                    {
                      "x": 0,
                      "y": 1.55,
                      "z": 0.097
                    },
                    {
                      "x": -0.077,
                      "y": 1.64,
                      "z": -0.01
                    },
                    {
                      "x": -0.0527,
                      "y": 1.58,
                      "z": 0.015
                    },
                    {
                      "x": 0.077,
                      "y": 1.64,
                      "z": -0.01
                    },
                    {
                      "x": 0.0527,
                      "y": 1.58,
                      "z": 0.015
                    },
                    {
                      "x": 0,
                      "y": 1.625,
                      "z": -0.0925
                    },
                    {
                      "x": -0.03,
                      "y": 1.46,
                      "z": 0.035
                    },
                    {
                      "x": 0,
                      "y": 1.44,
                      "z": 0.03
                    },
                    {
                      "x": 0.03,
                      "y": 1.46,
                      "z": 0.035
                    },
                    {
                      "x": -0.1135,
                      "y": 1.318,
                      "z": 0.095
                    },
                    {
                      "x": 0.1135,
                      "y": 1.318,
                      "z": 0.095
                    },
                    {
                      "x": 0,
                      "y": 1.25,
                      "z": 0.113
                    },
                    {
                      "x": -0.087,
                      "y": 1.19,
                      "z": 0.09
                    },
                    {
                      "x": -0.0935,
                      "y": 1.03,
                      "z": 0.075
                    },
                    {
                      "x": 0.087,
                      "y": 1.19,
                      "z": 0.09
                    },
                    {
                      "x": 0.0935,
                      "y": 1.03,
                      "z": 0.075
                    },
                    {
                      "x": -0.1425,
                      "y": 1.065,
                      "z": 0.0033
                    },
                    {
                      "x": -0.15,
                      "y": 0.9,
                      "z": -0.01
                    },
                    {
                      "x": 0.1425,
                      "y": 1.065,
                      "z": 0.0033
                    },
                    {
                      "x": 0.15,
                      "y": 0.9,
                      "z": -0.01
                    },
                    {
                      "x": 0,
                      "y": 1.53,
                      "z": -0.084
                    },
                    {
                      "x": 0.0049,
                      "y": 1.1908,
                      "z": -0.1113
                    },
                    {
                      "x": -0.0773,
                      "y": 1.019,
                      "z": -0.12
                    },
                    {
                      "x": 0.0773,
                      "y": 1.019,
                      "z": -0.12
                    },
                    {
                      "x": 0.005,
                      "y": 1.0915,
                      "z": -0.1091
                    },
                    {
                      "x": -0.178,
                      "y": 1.4825,
                      "z": -0.0625
                    },
                    {
                      "x": -0.17,
                      "y": 1.38,
                      "z": 0.007
                    },
                    {
                      "x": -0.1884,
                      "y": 0.8676,
                      "z": -0.036
                    },
                    {
                      "x": -0.16,
                      "y": 1.38,
                      "z": -0.127
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": -0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.23,
                      "y": 1.133,
                      "z": -0.055
                    },
                    {
                      "x": -0.1977,
                      "y": 0.8169,
                      "z": -0.0177
                    },
                    {
                      "x": -0.1941,
                      "y": 0.6772,
                      "z": -0.0423
                    },
                    {
                      "x": -0.2117,
                      "y": 0.8562,
                      "z": -0.0584
                    },
                    {
                      "x": -0.1929,
                      "y": 0.789,
                      "z": -0.1064
                    },
                    {
                      "x": 0.175,
                      "y": 1.4825,
                      "z": -0.06
                    },
                    {
                      "x": 0.17,
                      "y": 1.38,
                      "z": 0.007
                    },
                    {
                      "x": 0.1901,
                      "y": 0.8645,
                      "z": -0.0415
                    },
                    {
                      "x": 0.16,
                      "y": 1.38,
                      "z": -0.125
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": 0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.23,
                      "y": 1.133,
                      "z": -0.055
                    },
                    {
                      "x": 0.2009,
                      "y": 0.8139,
                      "z": -0.0237
                    },
                    {
                      "x": 0.2056,
                      "y": 0.6743,
                      "z": -0.0482
                    },
                    {
                      "x": 0.2142,
                      "y": 0.8529,
                      "z": -0.0648
                    },
                    {
                      "x": 0.1929,
                      "y": 0.786,
                      "z": -0.1122
                    },
                    {
                      "x": -0.1,
                      "y": 0.4913,
                      "z": -0.03
                    },
                    {
                      "x": -0.17,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.05,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.165,
                      "y": 0.01,
                      "z": 0.12
                    },
                    {
                      "x": -0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": -0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": -0.09,
                      "y": 0.056,
                      "z": 0.0125
                    },
                    {
                      "x": -0.115,
                      "y": 0.02,
                      "z": 0.122
                    },
                    {
                      "x": -0.115,
                      "y": 0.04,
                      "z": -0.055
                    },
                    {
                      "x": -0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": 0.0993,
                      "y": 0.4881,
                      "z": -0.0309
                    },
                    {
                      "x": 0.17,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": 0.05,
                      "y": 0.4867,
                      "z": 0
                    },
                    {
                      "x": 0.165,
                      "y": 0.01,
                      "z": 0.12
                    },
                    {
                      "x": 0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": 0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": 0.09,
                      "y": 0.056,
                      "z": 0.0125
                    },
                    {
                      "x": 0.115,
                      "y": 0.02,
                      "z": 0.122
                    },
                    {
                      "x": 0.115,
                      "y": 0.04,
                      "z": -0.055
                    },
                    {
                      "x": 0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": 0,
                      "y": 0.875,
                      "z": 0
                    },
                    {
                      "x": -0.0646,
                      "y": 1.5149,
                      "z": -0.038
                    },
                    {
                      "x": 0.0646,
                      "y": 1.5149,
                      "z": -0.038
                    },
                    {
                      "x": 0,
                      "y": 1.07225,
                      "z": 0.09
                    },
                    {
                      "x": -0.11,
                      "y": 1.427,
                      "z": -0.1375
                    },
                    {
                      "x": -0.235,
                      "y": 1.42,
                      "z": -0.0625
                    },
                    {
                      "x": 0.11,
                      "y": 1.427,
                      "z": -0.1375
                    },
                    {
                      "x": 0.235,
                      "y": 1.42,
                      "z": -0.0625
                    },
                    {
                      "x": 0,
                      "y": 1.41,
                      "z": -0.145
                    },
                    {
                      "x": 0,
                      "y": 0.925,
                      "z": 0.08
                    },
                    {
                      "x": -0.087,
                      "y": 1.19,
                      "z": -0.09
                    },
                    {
                      "x": 0.087,
                      "y": 1.19,
                      "z": -0.09
                    },
                    {
                      "x": 0.172,
                      "y": 1.32,
                      "z": -0.03
                    },
                    {
                      "x": -0.172,
                      "y": 1.32,
                      "z": -0.03
                    },
                    {
                      "x": 0.15,
                      "y": 1.23,
                      "z": -0.015
                    },
                    {
                      "x": -0.15,
                      "y": 1.23,
                      "z": -0.015
                    },
                    {
                      "x": 0.079,
                      "y": 0.92,
                      "z": -0.14
                    },
                    {
                      "x": 0.1,
                      "y": 0.9,
                      "z": 0.077
                    },
                    {
                      "x": -0.079,
                      "y": 0.92,
                      "z": -0.14
                    },
                    {
                      "x": -0.1,
                      "y": 0.9,
                      "z": 0.075
                    },
                    {
                      "x": 0,
                      "y": 0.87,
                      "z": 0
                    },
                    {
                      "x": 0.171,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": 0.02,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0.65,
                      "z": -0.08
                    },
                    {
                      "x": 0.1,
                      "y": 0.65,
                      "z": 0.07
                    },
                    {
                      "x": -0.171,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": -0.02,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": -0.1,
                      "y": 0.65,
                      "z": -0.08
                    },
                    {
                      "x": -0.1,
                      "y": 0.65,
                      "z": 0.07
                    },
                    {
                      "x": 0.25,
                      "y": 1.27,
                      "z": -0.04
                    },
                    {
                      "x": 0.17,
                      "y": 1.27,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 1.27,
                      "z": -0.09
                    },
                    {
                      "x": 0.2,
                      "y": 1.27,
                      "z": 0.02
                    },
                    {
                      "x": 0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.013
                    },
                    {
                      "x": 0.225,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": 0.225,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": 0.185,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": 0.185,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.225,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": 0.175,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.92,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.92,
                      "z": -0.015
                    },
                    {
                      "x": 0.225,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": 0.175,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.89,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.89,
                      "z": -0.015
                    },
                    {
                      "x": 0.218,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": 0.184,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.87,
                      "z": -0.07
                    },
                    {
                      "x": 0.2,
                      "y": 0.87,
                      "z": 0
                    },
                    {
                      "x": 0.21,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": 0.1854,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": 0.212,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": 0.183,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": 0.213,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": 0.19,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": 0.211,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": 0.192,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": 0.208,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.84,
                      "z": -0.095
                    },
                    {
                      "x": 0.215,
                      "y": 0.82,
                      "z": 0
                    },
                    {
                      "x": 0.193,
                      "y": 0.815,
                      "z": 0.005
                    },
                    {
                      "x": 0.198,
                      "y": 0.8,
                      "z": 0.012
                    },
                    {
                      "x": 0.21,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": 0.19,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": 0.2,
                      "y": 0.835,
                      "z": 0.039
                    },
                    {
                      "x": 0.212,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": 0.188,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": 0.2,
                      "y": 0.807,
                      "z": 0.057
                    },
                    {
                      "x": 0.2,
                      "y": 0.793,
                      "z": 0.035
                    },
                    {
                      "x": 0.2,
                      "y": 0.774,
                      "z": 0.076
                    },
                    {
                      "x": 0.212,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": 0.188,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": 0.2,
                      "y": 0.785,
                      "z": 0.075
                    },
                    {
                      "x": 0.2,
                      "y": 0.77,
                      "z": 0.062
                    },
                    {
                      "x": 0.215,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": 0.187,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": 0.2,
                      "y": 0.793,
                      "z": -0.005
                    },
                    {
                      "x": 0.215,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": 0.187,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": 0.215,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": 0.187,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": 0.21,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.79,
                      "z": -0.095
                    },
                    {
                      "x": 0.19,
                      "y": 0.77,
                      "z": -0.0275
                    },
                    {
                      "x": 0.19,
                      "y": 0.77,
                      "z": -0.0525
                    },
                    {
                      "x": 0.19,
                      "y": 0.78,
                      "z": -0.0775
                    },
                    {
                      "x": 0.212,
                      "y": 0.745,
                      "z": -0.015
                    },
                    {
                      "x": 0.188,
                      "y": 0.745,
                      "z": -0.02
                    },
                    {
                      "x": 0.2,
                      "y": 0.745,
                      "z": -0.0255
                    },
                    {
                      "x": 0.2,
                      "y": 0.745,
                      "z": -0.0045
                    },
                    {
                      "x": 0.211,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": 0.189,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.0252
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.0048
                    },
                    {
                      "x": 0.21,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": 0.19,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.025
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.005
                    },
                    {
                      "x": 0.2,
                      "y": 0.685,
                      "z": -0.015
                    },
                    {
                      "x": 0.215,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": 0.185,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.055
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.025
                    },
                    {
                      "x": 0.21,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": 0.19,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.7142,
                      "z": -0.053
                    },
                    {
                      "x": 0.2,
                      "y": 0.7142,
                      "z": -0.027
                    },
                    {
                      "x": 0.21,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": 0.19,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.68,
                      "z": -0.05
                    },
                    {
                      "x": 0.2,
                      "y": 0.68,
                      "z": -0.03
                    },
                    {
                      "x": 0.2,
                      "y": 0.67,
                      "z": -0.04
                    },
                    {
                      "x": 0.212,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": 0.188,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.0756
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.0542
                    },
                    {
                      "x": 0.21,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": 0.19,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.7177,
                      "z": -0.0751
                    },
                    {
                      "x": 0.2,
                      "y": 0.7177,
                      "z": -0.0549
                    },
                    {
                      "x": 0.21,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": 0.19,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.075
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.055
                    },
                    {
                      "x": 0.2,
                      "y": 0.685,
                      "z": -0.065
                    },
                    {
                      "x": 0.211,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": 0.189,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.755,
                      "z": -0.0952
                    },
                    {
                      "x": 0.2,
                      "y": 0.755,
                      "z": -0.0748
                    },
                    {
                      "x": 0.21,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.735,
                      "z": -0.0951
                    },
                    {
                      "x": 0.2,
                      "y": 0.735,
                      "z": -0.0749
                    },
                    {
                      "x": 0.21,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.095
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.075
                    },
                    {
                      "x": 0.2,
                      "y": 0.71,
                      "z": -0.085
                    },
                    {
                      "x": -0.23,
                      "y": 1.23,
                      "z": -0.04
                    },
                    {
                      "x": -0.16,
                      "y": 1.23,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 1.235,
                      "z": -0.105
                    },
                    {
                      "x": -0.2,
                      "y": 1.235,
                      "z": 0.02
                    },
                    {
                      "x": -0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": 0.013
                    },
                    {
                      "x": -0.225,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": -0.225,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": -0.185,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": -0.185,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.225,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": -0.175,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.92,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.92,
                      "z": -0.015
                    },
                    {
                      "x": -0.225,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": -0.175,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.89,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.89,
                      "z": -0.015
                    },
                    {
                      "x": -0.218,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": -0.184,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.87,
                      "z": -0.07
                    },
                    {
                      "x": -0.2,
                      "y": 0.87,
                      "z": 0
                    },
                    {
                      "x": -0.21,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": -0.1854,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": -0.212,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": -0.183,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": -0.213,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": -0.19,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": -0.211,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": -0.192,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": -0.208,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.84,
                      "z": -0.095
                    },
                    {
                      "x": -0.215,
                      "y": 0.82,
                      "z": 0
                    },
                    {
                      "x": -0.193,
                      "y": 0.815,
                      "z": 0.005
                    },
                    {
                      "x": -0.198,
                      "y": 0.8,
                      "z": 0.012
                    },
                    {
                      "x": -0.21,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": -0.19,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": -0.2,
                      "y": 0.835,
                      "z": 0.039
                    },
                    {
                      "x": -0.212,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": -0.188,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": -0.2,
                      "y": 0.807,
                      "z": 0.057
                    },
                    {
                      "x": -0.2,
                      "y": 0.793,
                      "z": 0.035
                    },
                    {
                      "x": -0.2,
                      "y": 0.774,
                      "z": 0.076
                    },
                    {
                      "x": -0.212,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": -0.188,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": -0.2,
                      "y": 0.785,
                      "z": 0.075
                    },
                    {
                      "x": -0.2,
                      "y": 0.77,
                      "z": 0.062
                    },
                    {
                      "x": -0.215,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": -0.187,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": -0.2,
                      "y": 0.793,
                      "z": -0.005
                    },
                    {
                      "x": -0.215,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": -0.187,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": -0.215,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": -0.187,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": -0.21,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.79,
                      "z": -0.095
                    },
                    {
                      "x": -0.19,
                      "y": 0.77,
                      "z": -0.0275
                    },
                    {
                      "x": -0.19,
                      "y": 0.77,
                      "z": -0.0525
                    },
                    {
                      "x": -0.19,
                      "y": 0.78,
                      "z": -0.0775
                    },
                    {
                      "x": -0.212,
                      "y": 0.745,
                      "z": -0.015
                    },
                    {
                      "x": -0.188,
                      "y": 0.745,
                      "z": -0.02
                    },
                    {
                      "x": -0.2,
                      "y": 0.745,
                      "z": -0.0255
                    },
                    {
                      "x": -0.2,
                      "y": 0.745,
                      "z": -0.0045
                    },
                    {
                      "x": -0.211,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": -0.189,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.0252
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.0048
                    },
                    {
                      "x": -0.21,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": -0.19,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.025
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.005
                    },
                    {
                      "x": -0.2,
                      "y": 0.685,
                      "z": -0.015
                    },
                    {
                      "x": -0.215,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": -0.185,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.055
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.025
                    },
                    {
                      "x": -0.21,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": -0.19,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.7142,
                      "z": -0.053
                    },
                    {
                      "x": -0.2,
                      "y": 0.7142,
                      "z": -0.027
                    },
                    {
                      "x": -0.21,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": -0.19,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.68,
                      "z": -0.05
                    },
                    {
                      "x": -0.2,
                      "y": 0.68,
                      "z": -0.03
                    },
                    {
                      "x": -0.2,
                      "y": 0.67,
                      "z": -0.04
                    },
                    {
                      "x": -0.212,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": -0.188,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.0756
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.0542
                    },
                    {
                      "x": -0.21,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": -0.19,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.7177,
                      "z": -0.0751
                    },
                    {
                      "x": -0.2,
                      "y": 0.7177,
                      "z": -0.0549
                    },
                    {
                      "x": -0.21,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": -0.19,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.075
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.055
                    },
                    {
                      "x": -0.2,
                      "y": 0.685,
                      "z": -0.065
                    },
                    {
                      "x": -0.211,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": -0.189,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.755,
                      "z": -0.0952
                    },
                    {
                      "x": -0.2,
                      "y": 0.755,
                      "z": -0.0748
                    },
                    {
                      "x": -0.21,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.735,
                      "z": -0.0951
                    },
                    {
                      "x": -0.2,
                      "y": 0.735,
                      "z": -0.0749
                    },
                    {
                      "x": -0.21,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.095
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.075
                    },
                    {
                      "x": -0.2,
                      "y": 0.71,
                      "z": -0.085
                    },
                    {
                      "x": 0.115,
                      "y": 0.466,
                      "z": 0.06
                    },
                    {
                      "x": 0.115,
                      "y": 0.466,
                      "z": -0.055
                    },
                    {
                      "x": 0.15,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": 0.05,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": 0.17,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": 0.06,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0.3,
                      "z": -0.05
                    },
                    {
                      "x": 0.1,
                      "y": 0.3,
                      "z": 0.05
                    },
                    {
                      "x": 0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": 0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": 0.115,
                      "y": 0.069,
                      "z": -0.045
                    },
                    {
                      "x": 0.117,
                      "y": 0.0975,
                      "z": 0.0615
                    },
                    {
                      "x": 0.1375,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": 0.095,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": 0.115,
                      "y": 0.015,
                      "z": -0.045
                    },
                    {
                      "x": 0.115,
                      "y": 0.06,
                      "z": 0.1
                    },
                    {
                      "x": 0.115,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": 0.165,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": 0.095,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": 0.115,
                      "y": 0.04,
                      "z": 0.13
                    },
                    {
                      "x": 0.125,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": 0.165,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": 0.087,
                      "y": 0,
                      "z": 0.122
                    },
                    {
                      "x": 0.09,
                      "y": 0.012,
                      "z": 0.188
                    },
                    {
                      "x": 0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": 0.128,
                      "y": 0.011,
                      "z": 0.185
                    },
                    {
                      "x": 0.142,
                      "y": 0.011,
                      "z": 0.178
                    },
                    {
                      "x": 0.154,
                      "y": 0.01,
                      "z": 0.168
                    },
                    {
                      "x": -0.115,
                      "y": 0.466,
                      "z": 0.06
                    },
                    {
                      "x": -0.115,
                      "y": 0.466,
                      "z": -0.055
                    },
                    {
                      "x": -0.17,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.05,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.17,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": -0.06,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": -0.1,
                      "y": 0.3,
                      "z": -0.05
                    },
                    {
                      "x": -0.1,
                      "y": 0.3,
                      "z": 0.05
                    },
                    {
                      "x": -0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": -0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": -0.115,
                      "y": 0.069,
                      "z": -0.045
                    },
                    {
                      "x": -0.117,
                      "y": 0.0975,
                      "z": 0.0615
                    },
                    {
                      "x": -0.1375,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": -0.095,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": -0.095,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": -0.115,
                      "y": 0.06,
                      "z": 0.1
                    },
                    {
                      "x": -0.115,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": -0.165,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": -0.095,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": -0.115,
                      "y": 0.04,
                      "z": 0.13
                    },
                    {
                      "x": -0.125,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": -0.165,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": -0.087,
                      "y": 0,
                      "z": 0.122
                    },
                    {
                      "x": -0.09,
                      "y": 0.012,
                      "z": 0.188
                    },
                    {
                      "x": -0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": -0.128,
                      "y": 0.011,
                      "z": 0.185
                    },
                    {
                      "x": -0.142,
                      "y": 0.011,
                      "z": 0.178
                    },
                    {
                      "x": -0.154,
                      "y": 0.01,
                      "z": 0.168
                    }
                  ],
                  "points": [
                    {
                      "x": 0,
                      "y": 1.77,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 1.665,
                      "z": 0.09
                    },
                    {
                      "x": -0.033,
                      "y": 1.62,
                      "z": 0.087
                    },
                    {
                      "x": 0.033,
                      "y": 1.62,
                      "z": 0.087
                    },
                    {
                      "x": 0,
                      "y": 1.55,
                      "z": 0.097
                    },
                    {
                      "x": -0.077,
                      "y": 1.64,
                      "z": -0.01
                    },
                    {
                      "x": -0.0527,
                      "y": 1.58,
                      "z": 0.015
                    },
                    {
                      "x": 0.077,
                      "y": 1.64,
                      "z": -0.01
                    },
                    {
                      "x": 0.0527,
                      "y": 1.58,
                      "z": 0.015
                    },
                    {
                      "x": 0,
                      "y": 1.625,
                      "z": -0.0925
                    },
                    {
                      "x": -0.03,
                      "y": 1.46,
                      "z": 0.035
                    },
                    {
                      "x": 0,
                      "y": 1.44,
                      "z": 0.03
                    },
                    {
                      "x": 0.03,
                      "y": 1.46,
                      "z": 0.035
                    },
                    {
                      "x": -0.1135,
                      "y": 1.318,
                      "z": 0.095
                    },
                    {
                      "x": 0.1135,
                      "y": 1.318,
                      "z": 0.095
                    },
                    {
                      "x": 0,
                      "y": 1.25,
                      "z": 0.113
                    },
                    {
                      "x": -0.087,
                      "y": 1.19,
                      "z": 0.09
                    },
                    {
                      "x": -0.0935,
                      "y": 1.03,
                      "z": 0.075
                    },
                    {
                      "x": 0.087,
                      "y": 1.19,
                      "z": 0.09
                    },
                    {
                      "x": 0.0935,
                      "y": 1.03,
                      "z": 0.075
                    },
                    {
                      "x": -0.1425,
                      "y": 1.065,
                      "z": 0.0033
                    },
                    {
                      "x": -0.15,
                      "y": 0.9,
                      "z": -0.01
                    },
                    {
                      "x": 0.1425,
                      "y": 1.065,
                      "z": 0.0033
                    },
                    {
                      "x": 0.15,
                      "y": 0.9,
                      "z": -0.01
                    },
                    {
                      "x": 0,
                      "y": 1.53,
                      "z": -0.084
                    },
                    {
                      "x": 0.0049,
                      "y": 1.1908,
                      "z": -0.1113
                    },
                    {
                      "x": -0.0773,
                      "y": 1.019,
                      "z": -0.12
                    },
                    {
                      "x": 0.0773,
                      "y": 1.019,
                      "z": -0.12
                    },
                    {
                      "x": 0.005,
                      "y": 1.0915,
                      "z": -0.1091
                    },
                    {
                      "x": -0.178,
                      "y": 1.4825,
                      "z": -0.0625
                    },
                    {
                      "x": -0.17,
                      "y": 1.38,
                      "z": 0.007
                    },
                    {
                      "x": -0.1884,
                      "y": 0.8676,
                      "z": -0.036
                    },
                    {
                      "x": -0.16,
                      "y": 1.38,
                      "z": -0.127
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": -0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.23,
                      "y": 1.133,
                      "z": -0.055
                    },
                    {
                      "x": -0.1977,
                      "y": 0.8169,
                      "z": -0.0177
                    },
                    {
                      "x": -0.1941,
                      "y": 0.6772,
                      "z": -0.0423
                    },
                    {
                      "x": -0.2117,
                      "y": 0.8562,
                      "z": -0.0584
                    },
                    {
                      "x": -0.1929,
                      "y": 0.789,
                      "z": -0.1064
                    },
                    {
                      "x": 0.175,
                      "y": 1.4825,
                      "z": -0.06
                    },
                    {
                      "x": 0.17,
                      "y": 1.38,
                      "z": 0.007
                    },
                    {
                      "x": 0.1901,
                      "y": 0.8645,
                      "z": -0.0415
                    },
                    {
                      "x": 0.16,
                      "y": 1.38,
                      "z": -0.125
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": 0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.23,
                      "y": 1.133,
                      "z": -0.055
                    },
                    {
                      "x": 0.2009,
                      "y": 0.8139,
                      "z": -0.0237
                    },
                    {
                      "x": 0.2056,
                      "y": 0.6743,
                      "z": -0.0482
                    },
                    {
                      "x": 0.2142,
                      "y": 0.8529,
                      "z": -0.0648
                    },
                    {
                      "x": 0.1929,
                      "y": 0.786,
                      "z": -0.1122
                    },
                    {
                      "x": -0.1,
                      "y": 0.4913,
                      "z": -0.03
                    },
                    {
                      "x": -0.17,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.05,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.165,
                      "y": 0.01,
                      "z": 0.12
                    },
                    {
                      "x": -0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": -0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": -0.09,
                      "y": 0.056,
                      "z": 0.0125
                    },
                    {
                      "x": -0.115,
                      "y": 0.02,
                      "z": 0.122
                    },
                    {
                      "x": -0.115,
                      "y": 0.04,
                      "z": -0.055
                    },
                    {
                      "x": -0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": 0.0993,
                      "y": 0.4881,
                      "z": -0.0309
                    },
                    {
                      "x": 0.17,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": 0.05,
                      "y": 0.4867,
                      "z": 0
                    },
                    {
                      "x": 0.165,
                      "y": 0.01,
                      "z": 0.12
                    },
                    {
                      "x": 0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": 0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": 0.09,
                      "y": 0.056,
                      "z": 0.0125
                    },
                    {
                      "x": 0.115,
                      "y": 0.02,
                      "z": 0.122
                    },
                    {
                      "x": 0.115,
                      "y": 0.04,
                      "z": -0.055
                    },
                    {
                      "x": 0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": 0,
                      "y": 0.875,
                      "z": 0
                    },
                    {
                      "x": -0.0646,
                      "y": 1.5149,
                      "z": -0.038
                    },
                    {
                      "x": 0.0646,
                      "y": 1.5149,
                      "z": -0.038
                    },
                    {
                      "x": 0,
                      "y": 1.07225,
                      "z": 0.09
                    },
                    {
                      "x": -0.11,
                      "y": 1.427,
                      "z": -0.1375
                    },
                    {
                      "x": -0.235,
                      "y": 1.42,
                      "z": -0.0625
                    },
                    {
                      "x": 0.11,
                      "y": 1.427,
                      "z": -0.1375
                    },
                    {
                      "x": 0.235,
                      "y": 1.42,
                      "z": -0.0625
                    },
                    {
                      "x": 0,
                      "y": 1.41,
                      "z": -0.145
                    },
                    {
                      "x": 0,
                      "y": 0.925,
                      "z": 0.08
                    },
                    {
                      "x": -0.087,
                      "y": 1.19,
                      "z": -0.09
                    },
                    {
                      "x": 0.087,
                      "y": 1.19,
                      "z": -0.09
                    },
                    {
                      "x": 0.172,
                      "y": 1.32,
                      "z": -0.03
                    },
                    {
                      "x": -0.172,
                      "y": 1.32,
                      "z": -0.03
                    },
                    {
                      "x": 0.15,
                      "y": 1.23,
                      "z": -0.015
                    },
                    {
                      "x": -0.15,
                      "y": 1.23,
                      "z": -0.015
                    },
                    {
                      "x": 0.079,
                      "y": 0.92,
                      "z": -0.14
                    },
                    {
                      "x": 0.1,
                      "y": 0.9,
                      "z": 0.077
                    },
                    {
                      "x": -0.079,
                      "y": 0.92,
                      "z": -0.14
                    },
                    {
                      "x": -0.1,
                      "y": 0.9,
                      "z": 0.075
                    },
                    {
                      "x": 0,
                      "y": 0.87,
                      "z": 0
                    },
                    {
                      "x": 0.171,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": 0.02,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0.65,
                      "z": -0.08
                    },
                    {
                      "x": 0.1,
                      "y": 0.65,
                      "z": 0.07
                    },
                    {
                      "x": -0.171,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": -0.02,
                      "y": 0.65,
                      "z": 0
                    },
                    {
                      "x": -0.1,
                      "y": 0.65,
                      "z": -0.08
                    },
                    {
                      "x": -0.1,
                      "y": 0.65,
                      "z": 0.07
                    },
                    {
                      "x": 0.25,
                      "y": 1.27,
                      "z": -0.04
                    },
                    {
                      "x": 0.17,
                      "y": 1.27,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 1.27,
                      "z": -0.09
                    },
                    {
                      "x": 0.2,
                      "y": 1.27,
                      "z": 0.02
                    },
                    {
                      "x": 0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.013
                    },
                    {
                      "x": 0.225,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": 0.225,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": 0.185,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": 0.185,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": 0.2,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": 0.225,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": 0.175,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.92,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.92,
                      "z": -0.015
                    },
                    {
                      "x": 0.225,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": 0.175,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.89,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.89,
                      "z": -0.015
                    },
                    {
                      "x": 0.218,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": 0.184,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.87,
                      "z": -0.07
                    },
                    {
                      "x": 0.2,
                      "y": 0.87,
                      "z": 0
                    },
                    {
                      "x": 0.21,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": 0.1854,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": 0.212,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": 0.183,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": 0.213,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": 0.19,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": 0.211,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": 0.192,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": 0.208,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.84,
                      "z": -0.095
                    },
                    {
                      "x": 0.215,
                      "y": 0.82,
                      "z": 0
                    },
                    {
                      "x": 0.193,
                      "y": 0.815,
                      "z": 0.005
                    },
                    {
                      "x": 0.198,
                      "y": 0.8,
                      "z": 0.012
                    },
                    {
                      "x": 0.21,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": 0.19,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": 0.2,
                      "y": 0.835,
                      "z": 0.039
                    },
                    {
                      "x": 0.212,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": 0.188,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": 0.2,
                      "y": 0.807,
                      "z": 0.057
                    },
                    {
                      "x": 0.2,
                      "y": 0.793,
                      "z": 0.035
                    },
                    {
                      "x": 0.2,
                      "y": 0.774,
                      "z": 0.076
                    },
                    {
                      "x": 0.212,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": 0.188,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": 0.2,
                      "y": 0.785,
                      "z": 0.075
                    },
                    {
                      "x": 0.2,
                      "y": 0.77,
                      "z": 0.062
                    },
                    {
                      "x": 0.215,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": 0.187,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": 0.2,
                      "y": 0.793,
                      "z": -0.005
                    },
                    {
                      "x": 0.215,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": 0.187,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": 0.215,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": 0.187,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": 0.21,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.79,
                      "z": -0.095
                    },
                    {
                      "x": 0.19,
                      "y": 0.77,
                      "z": -0.0275
                    },
                    {
                      "x": 0.19,
                      "y": 0.77,
                      "z": -0.0525
                    },
                    {
                      "x": 0.19,
                      "y": 0.78,
                      "z": -0.0775
                    },
                    {
                      "x": 0.212,
                      "y": 0.745,
                      "z": -0.015
                    },
                    {
                      "x": 0.188,
                      "y": 0.745,
                      "z": -0.02
                    },
                    {
                      "x": 0.2,
                      "y": 0.745,
                      "z": -0.0255
                    },
                    {
                      "x": 0.2,
                      "y": 0.745,
                      "z": -0.0045
                    },
                    {
                      "x": 0.211,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": 0.189,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.0252
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.0048
                    },
                    {
                      "x": 0.21,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": 0.19,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.025
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.005
                    },
                    {
                      "x": 0.2,
                      "y": 0.685,
                      "z": -0.015
                    },
                    {
                      "x": 0.215,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": 0.185,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.055
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.025
                    },
                    {
                      "x": 0.21,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": 0.19,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.7142,
                      "z": -0.053
                    },
                    {
                      "x": 0.2,
                      "y": 0.7142,
                      "z": -0.027
                    },
                    {
                      "x": 0.21,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": 0.19,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": 0.2,
                      "y": 0.68,
                      "z": -0.05
                    },
                    {
                      "x": 0.2,
                      "y": 0.68,
                      "z": -0.03
                    },
                    {
                      "x": 0.2,
                      "y": 0.67,
                      "z": -0.04
                    },
                    {
                      "x": 0.212,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": 0.188,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.0756
                    },
                    {
                      "x": 0.2,
                      "y": 0.74,
                      "z": -0.0542
                    },
                    {
                      "x": 0.21,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": 0.19,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.7177,
                      "z": -0.0751
                    },
                    {
                      "x": 0.2,
                      "y": 0.7177,
                      "z": -0.0549
                    },
                    {
                      "x": 0.21,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": 0.19,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.075
                    },
                    {
                      "x": 0.2,
                      "y": 0.695,
                      "z": -0.055
                    },
                    {
                      "x": 0.2,
                      "y": 0.685,
                      "z": -0.065
                    },
                    {
                      "x": 0.211,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": 0.189,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.755,
                      "z": -0.0952
                    },
                    {
                      "x": 0.2,
                      "y": 0.755,
                      "z": -0.0748
                    },
                    {
                      "x": 0.21,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.735,
                      "z": -0.0951
                    },
                    {
                      "x": 0.2,
                      "y": 0.735,
                      "z": -0.0749
                    },
                    {
                      "x": 0.21,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": 0.19,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.095
                    },
                    {
                      "x": 0.2,
                      "y": 0.72,
                      "z": -0.075
                    },
                    {
                      "x": 0.2,
                      "y": 0.71,
                      "z": -0.085
                    },
                    {
                      "x": -0.23,
                      "y": 1.23,
                      "z": -0.04
                    },
                    {
                      "x": -0.16,
                      "y": 1.23,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 1.235,
                      "z": -0.105
                    },
                    {
                      "x": -0.2,
                      "y": 1.235,
                      "z": 0.02
                    },
                    {
                      "x": -0.244,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.165,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": -0.08
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": 0.013
                    },
                    {
                      "x": -0.225,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": -0.225,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": -0.185,
                      "y": 1,
                      "z": -0.01
                    },
                    {
                      "x": -0.185,
                      "y": 1,
                      "z": -0.07
                    },
                    {
                      "x": -0.2,
                      "y": 1.1388,
                      "z": -0.04
                    },
                    {
                      "x": -0.225,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": -0.175,
                      "y": 0.92,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.92,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.92,
                      "z": -0.015
                    },
                    {
                      "x": -0.225,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": -0.175,
                      "y": 0.89,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.89,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.89,
                      "z": -0.015
                    },
                    {
                      "x": -0.218,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": -0.184,
                      "y": 0.86,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.87,
                      "z": -0.07
                    },
                    {
                      "x": -0.2,
                      "y": 0.87,
                      "z": 0
                    },
                    {
                      "x": -0.21,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": -0.1854,
                      "y": 0.85,
                      "z": 0
                    },
                    {
                      "x": -0.212,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": -0.183,
                      "y": 0.84,
                      "z": -0.015
                    },
                    {
                      "x": -0.213,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": -0.19,
                      "y": 0.835,
                      "z": -0.04
                    },
                    {
                      "x": -0.211,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": -0.192,
                      "y": 0.835,
                      "z": -0.065
                    },
                    {
                      "x": -0.208,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.84,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.84,
                      "z": -0.095
                    },
                    {
                      "x": -0.215,
                      "y": 0.82,
                      "z": 0
                    },
                    {
                      "x": -0.193,
                      "y": 0.815,
                      "z": 0.005
                    },
                    {
                      "x": -0.198,
                      "y": 0.8,
                      "z": 0.012
                    },
                    {
                      "x": -0.21,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": -0.19,
                      "y": 0.82,
                      "z": 0.03
                    },
                    {
                      "x": -0.2,
                      "y": 0.835,
                      "z": 0.039
                    },
                    {
                      "x": -0.212,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": -0.188,
                      "y": 0.8,
                      "z": 0.05
                    },
                    {
                      "x": -0.2,
                      "y": 0.807,
                      "z": 0.057
                    },
                    {
                      "x": -0.2,
                      "y": 0.793,
                      "z": 0.035
                    },
                    {
                      "x": -0.2,
                      "y": 0.774,
                      "z": 0.076
                    },
                    {
                      "x": -0.212,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": -0.188,
                      "y": 0.78,
                      "z": 0.07
                    },
                    {
                      "x": -0.2,
                      "y": 0.785,
                      "z": 0.075
                    },
                    {
                      "x": -0.2,
                      "y": 0.77,
                      "z": 0.062
                    },
                    {
                      "x": -0.215,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": -0.187,
                      "y": 0.793,
                      "z": -0.015
                    },
                    {
                      "x": -0.2,
                      "y": 0.793,
                      "z": -0.005
                    },
                    {
                      "x": -0.215,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": -0.187,
                      "y": 0.788,
                      "z": -0.04
                    },
                    {
                      "x": -0.215,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": -0.187,
                      "y": 0.793,
                      "z": -0.065
                    },
                    {
                      "x": -0.21,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.79,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.79,
                      "z": -0.095
                    },
                    {
                      "x": -0.19,
                      "y": 0.77,
                      "z": -0.0275
                    },
                    {
                      "x": -0.19,
                      "y": 0.77,
                      "z": -0.0525
                    },
                    {
                      "x": -0.19,
                      "y": 0.78,
                      "z": -0.0775
                    },
                    {
                      "x": -0.212,
                      "y": 0.745,
                      "z": -0.015
                    },
                    {
                      "x": -0.188,
                      "y": 0.745,
                      "z": -0.02
                    },
                    {
                      "x": -0.2,
                      "y": 0.745,
                      "z": -0.0255
                    },
                    {
                      "x": -0.2,
                      "y": 0.745,
                      "z": -0.0045
                    },
                    {
                      "x": -0.211,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": -0.189,
                      "y": 0.72,
                      "z": -0.015
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.0252
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.0048
                    },
                    {
                      "x": -0.21,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": -0.19,
                      "y": 0.695,
                      "z": -0.015
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.025
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.005
                    },
                    {
                      "x": -0.2,
                      "y": 0.685,
                      "z": -0.015
                    },
                    {
                      "x": -0.215,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": -0.185,
                      "y": 0.74,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.055
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.025
                    },
                    {
                      "x": -0.21,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": -0.19,
                      "y": 0.7142,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.7142,
                      "z": -0.053
                    },
                    {
                      "x": -0.2,
                      "y": 0.7142,
                      "z": -0.027
                    },
                    {
                      "x": -0.21,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": -0.19,
                      "y": 0.68,
                      "z": -0.04
                    },
                    {
                      "x": -0.2,
                      "y": 0.68,
                      "z": -0.05
                    },
                    {
                      "x": -0.2,
                      "y": 0.68,
                      "z": -0.03
                    },
                    {
                      "x": -0.2,
                      "y": 0.67,
                      "z": -0.04
                    },
                    {
                      "x": -0.212,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": -0.188,
                      "y": 0.74,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.0756
                    },
                    {
                      "x": -0.2,
                      "y": 0.74,
                      "z": -0.0542
                    },
                    {
                      "x": -0.21,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": -0.19,
                      "y": 0.7177,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.7177,
                      "z": -0.0751
                    },
                    {
                      "x": -0.2,
                      "y": 0.7177,
                      "z": -0.0549
                    },
                    {
                      "x": -0.21,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": -0.19,
                      "y": 0.695,
                      "z": -0.065
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.075
                    },
                    {
                      "x": -0.2,
                      "y": 0.695,
                      "z": -0.055
                    },
                    {
                      "x": -0.2,
                      "y": 0.685,
                      "z": -0.065
                    },
                    {
                      "x": -0.211,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": -0.189,
                      "y": 0.755,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.755,
                      "z": -0.0952
                    },
                    {
                      "x": -0.2,
                      "y": 0.755,
                      "z": -0.0748
                    },
                    {
                      "x": -0.21,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.735,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.735,
                      "z": -0.0951
                    },
                    {
                      "x": -0.2,
                      "y": 0.735,
                      "z": -0.0749
                    },
                    {
                      "x": -0.21,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": -0.19,
                      "y": 0.72,
                      "z": -0.085
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.095
                    },
                    {
                      "x": -0.2,
                      "y": 0.72,
                      "z": -0.075
                    },
                    {
                      "x": -0.2,
                      "y": 0.71,
                      "z": -0.085
                    },
                    {
                      "x": 0.115,
                      "y": 0.466,
                      "z": 0.06
                    },
                    {
                      "x": 0.115,
                      "y": 0.466,
                      "z": -0.055
                    },
                    {
                      "x": 0.15,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": 0.05,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": 0.17,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": 0.06,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0.3,
                      "z": -0.05
                    },
                    {
                      "x": 0.1,
                      "y": 0.3,
                      "z": 0.05
                    },
                    {
                      "x": 0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": 0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": 0.115,
                      "y": 0.069,
                      "z": -0.045
                    },
                    {
                      "x": 0.117,
                      "y": 0.0975,
                      "z": 0.0615
                    },
                    {
                      "x": 0.1375,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": 0.095,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": 0.115,
                      "y": 0.015,
                      "z": -0.045
                    },
                    {
                      "x": 0.115,
                      "y": 0.06,
                      "z": 0.1
                    },
                    {
                      "x": 0.115,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": 0.165,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": 0.095,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": 0.115,
                      "y": 0.04,
                      "z": 0.13
                    },
                    {
                      "x": 0.125,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": 0.165,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": 0.087,
                      "y": 0,
                      "z": 0.122
                    },
                    {
                      "x": 0.09,
                      "y": 0.012,
                      "z": 0.188
                    },
                    {
                      "x": 0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": 0.128,
                      "y": 0.011,
                      "z": 0.185
                    },
                    {
                      "x": 0.142,
                      "y": 0.011,
                      "z": 0.178
                    },
                    {
                      "x": 0.154,
                      "y": 0.01,
                      "z": 0.168
                    },
                    {
                      "x": -0.115,
                      "y": 0.466,
                      "z": 0.06
                    },
                    {
                      "x": -0.115,
                      "y": 0.466,
                      "z": -0.055
                    },
                    {
                      "x": -0.17,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.05,
                      "y": 0.466,
                      "z": 0
                    },
                    {
                      "x": -0.17,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": -0.06,
                      "y": 0.3,
                      "z": 0
                    },
                    {
                      "x": -0.1,
                      "y": 0.3,
                      "z": -0.05
                    },
                    {
                      "x": -0.1,
                      "y": 0.3,
                      "z": 0.05
                    },
                    {
                      "x": -0.15,
                      "y": 0.07,
                      "z": 0
                    },
                    {
                      "x": -0.085,
                      "y": 0.086,
                      "z": 0.0125
                    },
                    {
                      "x": -0.115,
                      "y": 0.069,
                      "z": -0.045
                    },
                    {
                      "x": -0.117,
                      "y": 0.0975,
                      "z": 0.0615
                    },
                    {
                      "x": -0.1375,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": -0.095,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": -0.095,
                      "y": 0.006,
                      "z": -0.03
                    },
                    {
                      "x": -0.115,
                      "y": 0.06,
                      "z": 0.1
                    },
                    {
                      "x": -0.115,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": -0.165,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": -0.095,
                      "y": 0,
                      "z": 0.07
                    },
                    {
                      "x": -0.115,
                      "y": 0.04,
                      "z": 0.13
                    },
                    {
                      "x": -0.125,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": -0.165,
                      "y": 0,
                      "z": 0.12
                    },
                    {
                      "x": -0.087,
                      "y": 0,
                      "z": 0.122
                    },
                    {
                      "x": -0.09,
                      "y": 0.012,
                      "z": 0.188
                    },
                    {
                      "x": -0.11,
                      "y": 0.011,
                      "z": 0.19
                    },
                    {
                      "x": -0.128,
                      "y": 0.011,
                      "z": 0.185
                    },
                    {
                      "x": -0.142,
                      "y": 0.011,
                      "z": 0.178
                    },
                    {
                      "x": -0.154,
                      "y": 0.01,
                      "z": 0.168
                    }
                  ]
                },
                {
                  "string": "color",
                  "nodeType": "color",
                  "children": [],
                  "color": [
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 0,
                      "g": 1,
                      "b": 0
                    },
                    {
                      "r": 1,
                      "g": 0,
                      "b": 1
                    },
                    {
                      "r": 1,
                      "g": 1,
                      "b": 1
                    }
                  ]
                }
              ],
              "coordIndex": [
                [
                  0,
                  9,
                  5
                ],
                [
                  0,
                  7,
                  9
                ],
                [
                  0,
                  5,
                  1
                ],
                [
                  1,
                  5,
                  2
                ],
                [
                  1,
                  3,
                  7
                ],
                [
                  2,
                  4,
                  3
                ],
                [
                  0,
                  1,
                  7
                ],
                [
                  1,
                  2,
                  3
                ],
                [
                  5,
                  6,
                  2
                ],
                [
                  7,
                  3,
                  8
                ],
                [
                  6,
                  4,
                  2
                ],
                [
                  3,
                  4,
                  8
                ],
                [
                  9,
                  6,
                  5
                ],
                [
                  9,
                  7,
                  8
                ],
                [
                  4,
                  6,
                  10
                ],
                [
                  4,
                  10,
                  12
                ],
                [
                  4,
                  12,
                  8
                ],
                [
                  10,
                  11,
                  12
                ],
                [
                  9,
                  75,
                  24
                ],
                [
                  9,
                  24,
                  74
                ],
                [
                  9,
                  8,
                  75
                ],
                [
                  9,
                  74,
                  6
                ],
                [
                  10,
                  6,
                  74
                ],
                [
                  12,
                  75,
                  8
                ],
                [
                  74,
                  24,
                  29
                ],
                [
                  24,
                  77,
                  29
                ],
                [
                  10,
                  74,
                  29
                ],
                [
                  77,
                  32,
                  29
                ],
                [
                  32,
                  78,
                  29
                ],
                [
                  78,
                  30,
                  29
                ],
                [
                  30,
                  10,
                  29
                ],
                [
                  41,
                  24,
                  75
                ],
                [
                  41,
                  75,
                  12
                ],
                [
                  41,
                  12,
                  42
                ],
                [
                  41,
                  42,
                  80
                ],
                [
                  41,
                  80,
                  44
                ],
                [
                  41,
                  44,
                  79
                ],
                [
                  41,
                  79,
                  24
                ],
                [
                  81,
                  24,
                  79
                ],
                [
                  81,
                  77,
                  24
                ],
                [
                  81,
                  25,
                  77
                ],
                [
                  81,
                  79,
                  25
                ],
                [
                  25,
                  79,
                  44
                ],
                [
                  25,
                  32,
                  77
                ],
                [
                  25,
                  83,
                  32
                ],
                [
                  25,
                  26,
                  83
                ],
                [
                  25,
                  27,
                  26
                ],
                [
                  25,
                  84,
                  27
                ],
                [
                  25,
                  44,
                  84
                ],
                [
                  11,
                  10,
                  30
                ],
                [
                  11,
                  30,
                  13
                ],
                [
                  11,
                  13,
                  15
                ],
                [
                  11,
                  15,
                  14
                ],
                [
                  11,
                  14,
                  42
                ],
                [
                  11,
                  42,
                  12
                ],
                [
                  15,
                  13,
                  16
                ],
                [
                  15,
                  18,
                  14
                ],
                [
                  15,
                  16,
                  76
                ],
                [
                  15,
                  76,
                  18
                ],
                [
                  76,
                  16,
                  17
                ],
                [
                  76,
                  17,
                  82
                ],
                [
                  76,
                  82,
                  19
                ],
                [
                  76,
                  19,
                  18
                ],
                [
                  22,
                  18,
                  19
                ],
                [
                  22,
                  87,
                  18
                ],
                [
                  22,
                  27,
                  84
                ],
                [
                  22,
                  84,
                  87
                ],
                [
                  87,
                  84,
                  85
                ],
                [
                  85,
                  84,
                  44
                ],
                [
                  85,
                  42,
                  14
                ],
                [
                  87,
                  14,
                  18
                ],
                [
                  87,
                  85,
                  14
                ],
                [
                  20,
                  83,
                  26
                ],
                [
                  20,
                  17,
                  16
                ],
                [
                  20,
                  16,
                  88
                ],
                [
                  20,
                  88,
                  83
                ],
                [
                  88,
                  16,
                  13
                ],
                [
                  88,
                  13,
                  86
                ],
                [
                  88,
                  86,
                  83
                ],
                [
                  86,
                  13,
                  30
                ],
                [
                  86,
                  32,
                  83
                ],
                [
                  23,
                  89,
                  22
                ],
                [
                  89,
                  27,
                  22
                ],
                [
                  89,
                  91,
                  27
                ],
                [
                  91,
                  26,
                  27
                ],
                [
                  91,
                  20,
                  26
                ],
                [
                  21,
                  20,
                  91
                ],
                [
                  21,
                  17,
                  20
                ],
                [
                  21,
                  92,
                  17
                ],
                [
                  82,
                  17,
                  92
                ],
                [
                  82,
                  90,
                  19
                ],
                [
                  23,
                  22,
                  19
                ],
                [
                  23,
                  19,
                  90
                ],
                [
                  82,
                  92,
                  101
                ],
                [
                  82,
                  101,
                  99
                ],
                [
                  82,
                  99,
                  93
                ],
                [
                  82,
                  93,
                  95
                ],
                [
                  82,
                  95,
                  97
                ],
                [
                  82,
                  97,
                  90
                ],
                [
                  23,
                  90,
                  97
                ],
                [
                  23,
                  97,
                  94
                ],
                [
                  23,
                  94,
                  89
                ],
                [
                  89,
                  94,
                  96
                ],
                [
                  89,
                  96,
                  95
                ],
                [
                  89,
                  95,
                  93
                ],
                [
                  89,
                  93,
                  91
                ],
                [
                  91,
                  93,
                  99
                ],
                [
                  91,
                  99,
                  100
                ],
                [
                  91,
                  100,
                  98
                ],
                [
                  21,
                  91,
                  98
                ],
                [
                  21,
                  98,
                  101
                ],
                [
                  21,
                  101,
                  92
                ],
                [
                  85,
                  105,
                  42
                ],
                [
                  85,
                  103,
                  105
                ],
                [
                  85,
                  44,
                  103
                ],
                [
                  103,
                  44,
                  104
                ],
                [
                  80,
                  42,
                  105
                ],
                [
                  80,
                  105,
                  102
                ],
                [
                  80,
                  102,
                  104
                ],
                [
                  80,
                  104,
                  44
                ],
                [
                  105,
                  109,
                  102
                ],
                [
                  102,
                  109,
                  47
                ],
                [
                  47,
                  104,
                  102
                ],
                [
                  104,
                  47,
                  45
                ],
                [
                  104,
                  45,
                  103
                ],
                [
                  103,
                  45,
                  46
                ],
                [
                  103,
                  46,
                  109
                ],
                [
                  103,
                  109,
                  105
                ],
                [
                  109,
                  112,
                  110
                ],
                [
                  109,
                  110,
                  47
                ],
                [
                  47,
                  110,
                  111
                ],
                [
                  47,
                  111,
                  45
                ],
                [
                  45,
                  111,
                  113
                ],
                [
                  113,
                  46,
                  45
                ],
                [
                  46,
                  113,
                  112
                ],
                [
                  112,
                  109,
                  46
                ],
                [
                  112,
                  118,
                  110
                ],
                [
                  110,
                  118,
                  115
                ],
                [
                  110,
                  115,
                  111
                ],
                [
                  111,
                  115,
                  117
                ],
                [
                  111,
                  117,
                  113
                ],
                [
                  113,
                  117,
                  116
                ],
                [
                  113,
                  116,
                  112
                ],
                [
                  112,
                  116,
                  118
                ],
                [
                  115,
                  118,
                  119
                ],
                [
                  119,
                  118,
                  122
                ],
                [
                  118,
                  116,
                  122
                ],
                [
                  122,
                  116,
                  120
                ],
                [
                  116,
                  117,
                  120
                ],
                [
                  120,
                  117,
                  121
                ],
                [
                  117,
                  115,
                  121
                ],
                [
                  115,
                  119,
                  121
                ],
                [
                  119,
                  127,
                  123
                ],
                [
                  119,
                  122,
                  127
                ],
                [
                  122,
                  126,
                  127
                ],
                [
                  122,
                  128,
                  126
                ],
                [
                  122,
                  120,
                  128
                ],
                [
                  120,
                  124,
                  128
                ],
                [
                  120,
                  121,
                  124
                ],
                [
                  121,
                  125,
                  124
                ],
                [
                  121,
                  119,
                  125
                ],
                [
                  119,
                  123,
                  125
                ],
                [
                  127,
                  129,
                  123
                ],
                [
                  127,
                  126,
                  129
                ],
                [
                  129,
                  126,
                  141
                ],
                [
                  141,
                  126,
                  143
                ],
                [
                  126,
                  142,
                  143
                ],
                [
                  126,
                  128,
                  142
                ],
                [
                  128,
                  124,
                  130
                ],
                [
                  142,
                  128,
                  130
                ],
                [
                  124,
                  132,
                  130
                ],
                [
                  124,
                  134,
                  132
                ],
                [
                  125,
                  134,
                  124
                ],
                [
                  125,
                  136,
                  134
                ],
                [
                  125,
                  137,
                  136
                ],
                [
                  125,
                  135,
                  137
                ],
                [
                  125,
                  133,
                  135
                ],
                [
                  125,
                  123,
                  133
                ],
                [
                  123,
                  131,
                  133
                ],
                [
                  123,
                  129,
                  131
                ],
                [
                  131,
                  129,
                  138
                ],
                [
                  129,
                  141,
                  138
                ],
                [
                  138,
                  141,
                  144
                ],
                [
                  141,
                  143,
                  144
                ],
                [
                  143,
                  146,
                  144
                ],
                [
                  142,
                  146,
                  143
                ],
                [
                  142,
                  145,
                  146
                ],
                [
                  139,
                  145,
                  142
                ],
                [
                  130,
                  139,
                  142
                ],
                [
                  139,
                  130,
                  132
                ],
                [
                  139,
                  132,
                  154
                ],
                [
                  132,
                  157,
                  154
                ],
                [
                  132,
                  159,
                  157
                ],
                [
                  132,
                  134,
                  159
                ],
                [
                  134,
                  136,
                  159
                ],
                [
                  136,
                  161,
                  159
                ],
                [
                  136,
                  137,
                  161
                ],
                [
                  137,
                  162,
                  161
                ],
                [
                  160,
                  162,
                  137
                ],
                [
                  135,
                  160,
                  137
                ],
                [
                  133,
                  160,
                  135
                ],
                [
                  133,
                  158,
                  160
                ],
                [
                  131,
                  158,
                  133
                ],
                [
                  156,
                  158,
                  131
                ],
                [
                  153,
                  156,
                  131
                ],
                [
                  131,
                  138,
                  153
                ],
                [
                  138,
                  155,
                  153
                ],
                [
                  140,
                  155,
                  138
                ],
                [
                  138,
                  144,
                  140
                ],
                [
                  144,
                  147,
                  140
                ],
                [
                  140,
                  147,
                  145
                ],
                [
                  140,
                  145,
                  139
                ],
                [
                  139,
                  155,
                  140
                ],
                [
                  154,
                  155,
                  139
                ],
                [
                  146,
                  149,
                  144
                ],
                [
                  146,
                  151,
                  149
                ],
                [
                  145,
                  151,
                  146
                ],
                [
                  150,
                  151,
                  145
                ],
                [
                  145,
                  152,
                  150
                ],
                [
                  147,
                  152,
                  145
                ],
                [
                  147,
                  149,
                  152
                ],
                [
                  147,
                  144,
                  149
                ],
                [
                  148,
                  149,
                  151
                ],
                [
                  148,
                  152,
                  149
                ],
                [
                  148,
                  150,
                  152
                ],
                [
                  148,
                  151,
                  150
                ],
                [
                  160,
                  207,
                  162
                ],
                [
                  160,
                  205,
                  207
                ],
                [
                  165,
                  208,
                  205
                ],
                [
                  160,
                  165,
                  205
                ],
                [
                  158,
                  165,
                  160
                ],
                [
                  161,
                  162,
                  207
                ],
                [
                  161,
                  207,
                  206
                ],
                [
                  165,
                  206,
                  208
                ],
                [
                  206,
                  165,
                  161
                ],
                [
                  161,
                  165,
                  159
                ],
                [
                  207,
                  209,
                  211
                ],
                [
                  205,
                  209,
                  207
                ],
                [
                  205,
                  212,
                  209
                ],
                [
                  205,
                  208,
                  212
                ],
                [
                  206,
                  212,
                  208
                ],
                [
                  206,
                  210,
                  212
                ],
                [
                  206,
                  207,
                  210
                ],
                [
                  207,
                  211,
                  210
                ],
                [
                  209,
                  212,
                  213
                ],
                [
                  212,
                  216,
                  213
                ],
                [
                  212,
                  214,
                  216
                ],
                [
                  210,
                  214,
                  212
                ],
                [
                  210,
                  215,
                  214
                ],
                [
                  210,
                  211,
                  215
                ],
                [
                  209,
                  215,
                  211
                ],
                [
                  209,
                  213,
                  215
                ],
                [
                  217,
                  213,
                  216
                ],
                [
                  217,
                  215,
                  213
                ],
                [
                  217,
                  214,
                  215
                ],
                [
                  217,
                  216,
                  214
                ],
                [
                  158,
                  194,
                  165
                ],
                [
                  192,
                  194,
                  158
                ],
                [
                  164,
                  195,
                  192
                ],
                [
                  158,
                  164,
                  192
                ],
                [
                  156,
                  164,
                  158
                ],
                [
                  159,
                  194,
                  165
                ],
                [
                  159,
                  194,
                  193
                ],
                [
                  159,
                  193,
                  195
                ],
                [
                  159,
                  195,
                  164
                ],
                [
                  159,
                  164,
                  157
                ],
                [
                  157,
                  164,
                  180
                ],
                [
                  192,
                  198,
                  194
                ],
                [
                  192,
                  196,
                  198
                ],
                [
                  192,
                  195,
                  196
                ],
                [
                  195,
                  199,
                  196
                ],
                [
                  196,
                  199,
                  200
                ],
                [
                  199,
                  203,
                  200
                ],
                [
                  193,
                  199,
                  195
                ],
                [
                  193,
                  197,
                  199
                ],
                [
                  193,
                  198,
                  197
                ],
                [
                  193,
                  194,
                  198
                ],
                [
                  199,
                  201,
                  203
                ],
                [
                  197,
                  201,
                  199
                ],
                [
                  197,
                  198,
                  201
                ],
                [
                  198,
                  202,
                  201
                ],
                [
                  196,
                  202,
                  198
                ],
                [
                  200,
                  202,
                  196
                ],
                [
                  204,
                  202,
                  200
                ],
                [
                  204,
                  201,
                  202
                ],
                [
                  204,
                  203,
                  201
                ],
                [
                  204,
                  200,
                  203
                ],
                [
                  156,
                  181,
                  164
                ],
                [
                  156,
                  179,
                  181
                ],
                [
                  156,
                  182,
                  179
                ],
                [
                  156,
                  163,
                  182
                ],
                [
                  163,
                  180,
                  182
                ],
                [
                  157,
                  180,
                  163
                ],
                [
                  164,
                  181,
                  180
                ],
                [
                  179,
                  182,
                  183
                ],
                [
                  182,
                  186,
                  183
                ],
                [
                  182,
                  184,
                  186
                ],
                [
                  180,
                  184,
                  182
                ],
                [
                  180,
                  181,
                  184
                ],
                [
                  181,
                  185,
                  184
                ],
                [
                  179,
                  185,
                  181
                ],
                [
                  183,
                  185,
                  179
                ],
                [
                  183,
                  186,
                  187
                ],
                [
                  186,
                  190,
                  187
                ],
                [
                  184,
                  190,
                  186
                ],
                [
                  184,
                  188,
                  190
                ],
                [
                  184,
                  185,
                  188
                ],
                [
                  185,
                  189,
                  188
                ],
                [
                  185,
                  183,
                  189
                ],
                [
                  183,
                  187,
                  189
                ],
                [
                  191,
                  189,
                  187
                ],
                [
                  191,
                  188,
                  189
                ],
                [
                  191,
                  190,
                  188
                ],
                [
                  191,
                  187,
                  190
                ],
                [
                  153,
                  163,
                  156
                ],
                [
                  153,
                  168,
                  163
                ],
                [
                  153,
                  166,
                  168
                ],
                [
                  153,
                  169,
                  166
                ],
                [
                  155,
                  169,
                  153
                ],
                [
                  155,
                  167,
                  169
                ],
                [
                  154,
                  167,
                  155
                ],
                [
                  154,
                  163,
                  167
                ],
                [
                  154,
                  157,
                  163
                ],
                [
                  163,
                  168,
                  167
                ],
                [
                  166,
                  169,
                  170
                ],
                [
                  169,
                  173,
                  170
                ],
                [
                  169,
                  171,
                  173
                ],
                [
                  169,
                  167,
                  171
                ],
                [
                  167,
                  168,
                  171
                ],
                [
                  168,
                  172,
                  171
                ],
                [
                  168,
                  170,
                  172
                ],
                [
                  170,
                  168,
                  166
                ],
                [
                  170,
                  173,
                  174
                ],
                [
                  173,
                  177,
                  174
                ],
                [
                  173,
                  175,
                  177
                ],
                [
                  173,
                  171,
                  175
                ],
                [
                  171,
                  172,
                  175
                ],
                [
                  172,
                  176,
                  175
                ],
                [
                  172,
                  174,
                  176
                ],
                [
                  170,
                  174,
                  172
                ],
                [
                  178,
                  176,
                  174
                ],
                [
                  178,
                  175,
                  176
                ],
                [
                  178,
                  177,
                  175
                ],
                [
                  178,
                  174,
                  177
                ],
                [
                  86,
                  30,
                  221
                ],
                [
                  86,
                  221,
                  219
                ],
                [
                  86,
                  219,
                  32
                ],
                [
                  32,
                  219,
                  220
                ],
                [
                  78,
                  32,
                  220
                ],
                [
                  78,
                  220,
                  218
                ],
                [
                  78,
                  218,
                  221
                ],
                [
                  78,
                  221,
                  30
                ],
                [
                  221,
                  225,
                  219
                ],
                [
                  219,
                  225,
                  35
                ],
                [
                  35,
                  33,
                  219
                ],
                [
                  33,
                  220,
                  219
                ],
                [
                  33,
                  34,
                  220
                ],
                [
                  220,
                  34,
                  218
                ],
                [
                  221,
                  218,
                  34
                ],
                [
                  34,
                  225,
                  221
                ],
                [
                  225,
                  226,
                  228
                ],
                [
                  225,
                  228,
                  35
                ],
                [
                  35,
                  228,
                  229
                ],
                [
                  35,
                  229,
                  33
                ],
                [
                  33,
                  229,
                  227
                ],
                [
                  33,
                  227,
                  34
                ],
                [
                  34,
                  227,
                  226
                ],
                [
                  34,
                  226,
                  225
                ],
                [
                  226,
                  234,
                  228
                ],
                [
                  228,
                  234,
                  232
                ],
                [
                  232,
                  229,
                  228
                ],
                [
                  232,
                  233,
                  229
                ],
                [
                  229,
                  233,
                  227
                ],
                [
                  227,
                  233,
                  231
                ],
                [
                  227,
                  231,
                  226
                ],
                [
                  226,
                  231,
                  234
                ],
                [
                  231,
                  235,
                  234
                ],
                [
                  235,
                  238,
                  234
                ],
                [
                  234,
                  238,
                  232
                ],
                [
                  238,
                  236,
                  232
                ],
                [
                  232,
                  236,
                  233
                ],
                [
                  236,
                  237,
                  233
                ],
                [
                  233,
                  237,
                  231
                ],
                [
                  231,
                  237,
                  235
                ],
                [
                  235,
                  239,
                  243
                ],
                [
                  235,
                  243,
                  238
                ],
                [
                  238,
                  243,
                  242
                ],
                [
                  238,
                  242,
                  244
                ],
                [
                  238,
                  244,
                  236
                ],
                [
                  236,
                  244,
                  240
                ],
                [
                  236,
                  240,
                  237
                ],
                [
                  237,
                  240,
                  241
                ],
                [
                  237,
                  241,
                  235
                ],
                [
                  235,
                  241,
                  239
                ],
                [
                  243,
                  239,
                  245
                ],
                [
                  243,
                  245,
                  242
                ],
                [
                  245,
                  257,
                  242
                ],
                [
                  257,
                  259,
                  242
                ],
                [
                  242,
                  259,
                  258
                ],
                [
                  242,
                  258,
                  244
                ],
                [
                  244,
                  246,
                  240
                ],
                [
                  258,
                  246,
                  244
                ],
                [
                  240,
                  246,
                  248
                ],
                [
                  240,
                  248,
                  250
                ],
                [
                  241,
                  240,
                  250
                ],
                [
                  241,
                  250,
                  252
                ],
                [
                  241,
                  252,
                  253
                ],
                [
                  241,
                  253,
                  251
                ],
                [
                  241,
                  251,
                  249
                ],
                [
                  241,
                  249,
                  239
                ],
                [
                  239,
                  249,
                  247
                ],
                [
                  239,
                  247,
                  245
                ],
                [
                  247,
                  254,
                  245
                ],
                [
                  245,
                  254,
                  257
                ],
                [
                  254,
                  260,
                  257
                ],
                [
                  257,
                  260,
                  259
                ],
                [
                  259,
                  260,
                  262
                ],
                [
                  258,
                  259,
                  262
                ],
                [
                  258,
                  262,
                  261
                ],
                [
                  255,
                  258,
                  261
                ],
                [
                  246,
                  258,
                  255
                ],
                [
                  255,
                  248,
                  246
                ],
                [
                  255,
                  270,
                  248
                ],
                [
                  248,
                  270,
                  273
                ],
                [
                  248,
                  273,
                  275
                ],
                [
                  248,
                  275,
                  250
                ],
                [
                  250,
                  275,
                  252
                ],
                [
                  252,
                  275,
                  277
                ],
                [
                  252,
                  277,
                  253
                ],
                [
                  253,
                  277,
                  278
                ],
                [
                  276,
                  253,
                  278
                ],
                [
                  251,
                  253,
                  276
                ],
                [
                  249,
                  251,
                  276
                ],
                [
                  249,
                  276,
                  274
                ],
                [
                  247,
                  249,
                  274
                ],
                [
                  272,
                  247,
                  274
                ],
                [
                  269,
                  247,
                  272
                ],
                [
                  247,
                  269,
                  254
                ],
                [
                  254,
                  269,
                  271
                ],
                [
                  256,
                  254,
                  271
                ],
                [
                  254,
                  256,
                  260
                ],
                [
                  260,
                  256,
                  263
                ],
                [
                  256,
                  261,
                  263
                ],
                [
                  256,
                  255,
                  261
                ],
                [
                  255,
                  256,
                  271
                ],
                [
                  270,
                  255,
                  271
                ],
                [
                  262,
                  260,
                  265
                ],
                [
                  262,
                  265,
                  267
                ],
                [
                  261,
                  262,
                  267
                ],
                [
                  266,
                  261,
                  267
                ],
                [
                  261,
                  266,
                  268
                ],
                [
                  263,
                  261,
                  268
                ],
                [
                  263,
                  268,
                  265
                ],
                [
                  263,
                  265,
                  260
                ],
                [
                  264,
                  267,
                  265
                ],
                [
                  264,
                  265,
                  268
                ],
                [
                  264,
                  268,
                  266
                ],
                [
                  264,
                  266,
                  267
                ],
                [
                  276,
                  278,
                  323
                ],
                [
                  276,
                  323,
                  321
                ],
                [
                  281,
                  321,
                  324
                ],
                [
                  276,
                  321,
                  281
                ],
                [
                  274,
                  276,
                  281
                ],
                [
                  277,
                  323,
                  278
                ],
                [
                  277,
                  322,
                  323
                ],
                [
                  281,
                  324,
                  322
                ],
                [
                  322,
                  277,
                  281
                ],
                [
                  277,
                  275,
                  281
                ],
                [
                  323,
                  327,
                  325
                ],
                [
                  321,
                  323,
                  325
                ],
                [
                  321,
                  325,
                  328
                ],
                [
                  321,
                  328,
                  324
                ],
                [
                  322,
                  324,
                  328
                ],
                [
                  322,
                  328,
                  326
                ],
                [
                  322,
                  326,
                  323
                ],
                [
                  323,
                  326,
                  327
                ],
                [
                  325,
                  329,
                  328
                ],
                [
                  328,
                  329,
                  332
                ],
                [
                  328,
                  332,
                  330
                ],
                [
                  326,
                  328,
                  330
                ],
                [
                  326,
                  330,
                  331
                ],
                [
                  326,
                  331,
                  327
                ],
                [
                  325,
                  327,
                  331
                ],
                [
                  325,
                  331,
                  329
                ],
                [
                  333,
                  332,
                  329
                ],
                [
                  333,
                  329,
                  331
                ],
                [
                  333,
                  331,
                  330
                ],
                [
                  333,
                  330,
                  332
                ],
                [
                  274,
                  281,
                  310
                ],
                [
                  308,
                  274,
                  310
                ],
                [
                  280,
                  308,
                  311
                ],
                [
                  274,
                  308,
                  280
                ],
                [
                  272,
                  274,
                  280
                ],
                [
                  275,
                  310,
                  281
                ],
                [
                  275,
                  309,
                  310
                ],
                [
                  275,
                  311,
                  309
                ],
                [
                  275,
                  280,
                  311
                ],
                [
                  275,
                  273,
                  280
                ],
                [
                  273,
                  296,
                  280
                ],
                [
                  308,
                  310,
                  314
                ],
                [
                  308,
                  314,
                  312
                ],
                [
                  308,
                  312,
                  311
                ],
                [
                  311,
                  312,
                  315
                ],
                [
                  312,
                  316,
                  315
                ],
                [
                  315,
                  316,
                  319
                ],
                [
                  309,
                  311,
                  315
                ],
                [
                  309,
                  315,
                  313
                ],
                [
                  309,
                  313,
                  314
                ],
                [
                  309,
                  314,
                  310
                ],
                [
                  315,
                  319,
                  317
                ],
                [
                  313,
                  315,
                  317
                ],
                [
                  313,
                  317,
                  314
                ],
                [
                  314,
                  317,
                  318
                ],
                [
                  312,
                  314,
                  318
                ],
                [
                  316,
                  312,
                  318
                ],
                [
                  320,
                  316,
                  318
                ],
                [
                  320,
                  318,
                  317
                ],
                [
                  320,
                  317,
                  319
                ],
                [
                  320,
                  319,
                  316
                ],
                [
                  272,
                  280,
                  297
                ],
                [
                  272,
                  297,
                  295
                ],
                [
                  272,
                  295,
                  298
                ],
                [
                  272,
                  298,
                  279
                ],
                [
                  279,
                  298,
                  296
                ],
                [
                  273,
                  279,
                  296
                ],
                [
                  280,
                  296,
                  297
                ],
                [
                  295,
                  299,
                  298
                ],
                [
                  298,
                  299,
                  302
                ],
                [
                  298,
                  302,
                  300
                ],
                [
                  296,
                  298,
                  300
                ],
                [
                  296,
                  300,
                  297
                ],
                [
                  297,
                  300,
                  301
                ],
                [
                  295,
                  297,
                  301
                ],
                [
                  299,
                  295,
                  301
                ],
                [
                  299,
                  303,
                  302
                ],
                [
                  302,
                  303,
                  306
                ],
                [
                  300,
                  302,
                  306
                ],
                [
                  300,
                  306,
                  304
                ],
                [
                  300,
                  304,
                  301
                ],
                [
                  301,
                  304,
                  305
                ],
                [
                  301,
                  305,
                  299
                ],
                [
                  299,
                  305,
                  303
                ],
                [
                  307,
                  303,
                  305
                ],
                [
                  307,
                  305,
                  304
                ],
                [
                  307,
                  304,
                  306
                ],
                [
                  307,
                  306,
                  303
                ],
                [
                  269,
                  272,
                  279
                ],
                [
                  269,
                  279,
                  284
                ],
                [
                  269,
                  284,
                  282
                ],
                [
                  269,
                  282,
                  285
                ],
                [
                  271,
                  269,
                  285
                ],
                [
                  271,
                  285,
                  283
                ],
                [
                  270,
                  271,
                  283
                ],
                [
                  270,
                  283,
                  279
                ],
                [
                  270,
                  279,
                  273
                ],
                [
                  279,
                  283,
                  284
                ],
                [
                  282,
                  286,
                  285
                ],
                [
                  285,
                  286,
                  289
                ],
                [
                  285,
                  289,
                  287
                ],
                [
                  285,
                  287,
                  283
                ],
                [
                  283,
                  287,
                  284
                ],
                [
                  284,
                  287,
                  288
                ],
                [
                  284,
                  288,
                  286
                ],
                [
                  286,
                  282,
                  284
                ],
                [
                  286,
                  290,
                  289
                ],
                [
                  289,
                  290,
                  293
                ],
                [
                  289,
                  293,
                  291
                ],
                [
                  289,
                  291,
                  287
                ],
                [
                  287,
                  291,
                  288
                ],
                [
                  288,
                  291,
                  292
                ],
                [
                  288,
                  292,
                  290
                ],
                [
                  286,
                  288,
                  290
                ],
                [
                  294,
                  290,
                  292
                ],
                [
                  294,
                  292,
                  291
                ],
                [
                  294,
                  291,
                  293
                ],
                [
                  294,
                  293,
                  290
                ],
                [
                  97,
                  334,
                  336
                ],
                [
                  97,
                  336,
                  94
                ],
                [
                  94,
                  336,
                  96
                ],
                [
                  336,
                  335,
                  96
                ],
                [
                  96,
                  335,
                  95
                ],
                [
                  95,
                  335,
                  337
                ],
                [
                  95,
                  337,
                  334
                ],
                [
                  95,
                  334,
                  97
                ],
                [
                  334,
                  341,
                  336
                ],
                [
                  336,
                  341,
                  338
                ],
                [
                  336,
                  338,
                  335
                ],
                [
                  335,
                  338,
                  340
                ],
                [
                  335,
                  340,
                  337
                ],
                [
                  337,
                  340,
                  339
                ],
                [
                  337,
                  339,
                  334
                ],
                [
                  334,
                  339,
                  341
                ],
                [
                  341,
                  345,
                  342
                ],
                [
                  341,
                  342,
                  338
                ],
                [
                  338,
                  342,
                  340
                ],
                [
                  340,
                  342,
                  344
                ],
                [
                  340,
                  344,
                  339
                ],
                [
                  339,
                  344,
                  343
                ],
                [
                  339,
                  343,
                  345
                ],
                [
                  339,
                  345,
                  341
                ],
                [
                  345,
                  349,
                  342
                ],
                [
                  342,
                  349,
                  351
                ],
                [
                  342,
                  351,
                  346
                ],
                [
                  342,
                  346,
                  344
                ],
                [
                  71,
                  346,
                  348
                ],
                [
                  71,
                  344,
                  346
                ],
                [
                  71,
                  348,
                  347
                ],
                [
                  71,
                  347,
                  344
                ],
                [
                  344,
                  347,
                  343
                ],
                [
                  343,
                  347,
                  352
                ],
                [
                  343,
                  352,
                  349
                ],
                [
                  343,
                  349,
                  345
                ],
                [
                  349,
                  352,
                  356
                ],
                [
                  349,
                  356,
                  353
                ],
                [
                  349,
                  353,
                  355
                ],
                [
                  349,
                  355,
                  351
                ],
                [
                  354,
                  356,
                  352
                ],
                [
                  354,
                  352,
                  350
                ],
                [
                  354,
                  350,
                  351
                ],
                [
                  354,
                  351,
                  355
                ],
                [
                  353,
                  356,
                  357
                ],
                [
                  353,
                  357,
                  358
                ],
                [
                  353,
                  358,
                  359
                ],
                [
                  353,
                  359,
                  360
                ],
                [
                  353,
                  360,
                  361
                ],
                [
                  353,
                  361,
                  355
                ],
                [
                  354,
                  357,
                  356
                ],
                [
                  350,
                  346,
                  351
                ],
                [
                  348,
                  346,
                  347
                ],
                [
                  350,
                  347,
                  346
                ],
                [
                  350,
                  352,
                  347
                ],
                [
                  354,
                  358,
                  357
                ],
                [
                  354,
                  359,
                  358
                ],
                [
                  354,
                  360,
                  359
                ],
                [
                  354,
                  361,
                  360
                ],
                [
                  354,
                  355,
                  361
                ],
                [
                  101,
                  362,
                  365
                ],
                [
                  101,
                  365,
                  99
                ],
                [
                  99,
                  365,
                  100
                ],
                [
                  100,
                  365,
                  363
                ],
                [
                  100,
                  363,
                  98
                ],
                [
                  98,
                  363,
                  364
                ],
                [
                  98,
                  364,
                  101
                ],
                [
                  101,
                  364,
                  362
                ],
                [
                  362,
                  369,
                  367
                ],
                [
                  362,
                  367,
                  365
                ],
                [
                  365,
                  367,
                  363
                ],
                [
                  363,
                  367,
                  368
                ],
                [
                  363,
                  367,
                  368
                ],
                [
                  363,
                  368,
                  366
                ],
                [
                  363,
                  366,
                  364
                ],
                [
                  364,
                  366,
                  362
                ],
                [
                  362,
                  366,
                  369
                ],
                [
                  369,
                  373,
                  371
                ],
                [
                  369,
                  371,
                  367
                ],
                [
                  367,
                  371,
                  368
                ],
                [
                  368,
                  371,
                  372
                ],
                [
                  368,
                  372,
                  366
                ],
                [
                  366,
                  372,
                  370
                ],
                [
                  366,
                  370,
                  369
                ],
                [
                  369,
                  370,
                  373
                ],
                [
                  373,
                  377,
                  380
                ],
                [
                  373,
                  380,
                  375
                ],
                [
                  373,
                  375,
                  371
                ],
                [
                  371,
                  375,
                  372
                ],
                [
                  372,
                  375,
                  376
                ],
                [
                  372,
                  376,
                  374
                ],
                [
                  372,
                  374,
                  370
                ],
                [
                  370,
                  374,
                  379
                ],
                [
                  373,
                  370,
                  379
                ],
                [
                  373,
                  379,
                  377
                ],
                [
                  377,
                  379,
                  383
                ],
                [
                  377,
                  383,
                  381
                ],
                [
                  377,
                  381,
                  384
                ],
                [
                  377,
                  384,
                  380
                ],
                [
                  381,
                  383,
                  389
                ],
                [
                  381,
                  389,
                  388
                ],
                [
                  381,
                  388,
                  387
                ],
                [
                  381,
                  387,
                  386
                ],
                [
                  381,
                  386,
                  385
                ],
                [
                  381,
                  385,
                  384
                ],
                [
                  376,
                  375,
                  374
                ],
                [
                  378,
                  379,
                  374
                ],
                [
                  378,
                  374,
                  375
                ],
                [
                  378,
                  375,
                  380
                ],
                [
                  382,
                  386,
                  387
                ],
                [
                  382,
                  387,
                  388
                ],
                [
                  382,
                  388,
                  389
                ],
                [
                  382,
                  389,
                  383
                ],
                [
                  382,
                  383,
                  379
                ],
                [
                  382,
                  379,
                  378
                ],
                [
                  382,
                  378,
                  380
                ],
                [
                  382,
                  380,
                  384
                ],
                [
                  382,
                  384,
                  385
                ],
                [
                  382,
                  385,
                  386
                ]
              ],
              "creaseAngle": 3.1
            },
            {
              "string": "appearance DEF SkinAppearance",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance imagetexture DEF zBlueSpiralBkg2",
                  "nodeType": "imagetexture",
                  "children": [],
                  "DEF": "zBlueSpiralBkg2",
                  "description": "Blue Spiral Pattern",
                  "url": [
                    "../data/zBlueSpiralBkg2.gif",
                    "zBlueSpiralBkg2.gif",
                    "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"
                  ]
                },
                {
                  "string": "appearance material DEF SkinMaterial",
                  "nodeType": "material",
                  "children": [],
                  "DEF": "SkinMaterial",
                  "ambientIntensity": 0.6,
                  "diffuseColor": {
                    "r": 1,
                    "g": 1,
                    "b": 1
                  },
                  "shininess": 0.6,
                  "transparency": 0.2
                }
              ],
              "DEF": "SkinAppearance"
            }
          ],
          "DEF": "SkinShape",
          "containerField": "skin"
        },
        {
          "string": "skinCoord coordinate USE TheSkinCoord",
          "nodeType": "coordinate",
          "children": [],
          "USE": "TheSkinCoord"
        },
        {
          "string": "skeleton hanimjoint DEF hanim_humanoid_root",
          "nodeType": "hanimjoint",
          "children": [
            {
              "string": " hanimjoint DEF hanim_sacroiliac",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimjoint DEF hanim_l_hip",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF hanim_l_knee",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF hanim_l_talocrural",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF hanim_l_talocalcaneonavicular",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_l_cuneonavicular_1",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_1",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_1",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_interphalangeal_1",
                                              "nodeType": "hanimjoint",
                                              "children": [],
                                              "name": "l_tarsal_interphalangeal_1",
                                              "DEF": "hanim_l_tarsal_interphalangeal_1",
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "l_metatarsophalangeal_1",
                                          "DEF": "hanim_l_metatarsophalangeal_1",
                                          "center": {
                                            "x": 0.0619,
                                            "y": 0.0059,
                                            "z": -0.0083
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "l_tarsometatarsal_1",
                                      "DEF": "hanim_l_tarsometatarsal_1",
                                      "center": {
                                        "x": 0.0644,
                                        "y": 0.0147,
                                        "z": -0.0577
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "l_cuneonavicular_1",
                                  "DEF": "hanim_l_cuneonavicular_1",
                                  "center": {
                                    "x": 0.0672,
                                    "y": 0.0235,
                                    "z": -0.0835
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_cuneonavicular_2",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_2",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_2",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_2",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_2",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_2",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_2",
                                                  "center": {
                                                    "x": 0.0841,
                                                    "y": 0.0013,
                                                    "z": 0.0216
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "l_tarsal_proximal_interphalangeal_2",
                                              "DEF": "hanim_l_tarsal_proximal_interphalangeal_2",
                                              "center": {
                                                "x": 0.0841,
                                                "y": 0.0041,
                                                "z": 0.0121
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "l_metatarsophalangeal_2",
                                          "DEF": "hanim_l_metatarsophalangeal_2",
                                          "center": {
                                            "x": 0.0824,
                                            "y": 0.0064,
                                            "z": -0.004
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "l_tarsometatarsal_2",
                                      "DEF": "hanim_l_tarsometatarsal_2",
                                      "center": {
                                        "x": 0.08,
                                        "y": 0.0175,
                                        "z": -0.0608
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "l_cuneonavicular_2",
                                  "DEF": "hanim_l_cuneonavicular_2",
                                  "center": {
                                    "x": 0.0812,
                                    "y": 0.025,
                                    "z": -0.0805
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_cuneonavicular_3",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_3",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_3",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_3",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_3",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_3",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_3",
                                                  "center": {
                                                    "x": 0.1002,
                                                    "y": 0.0013,
                                                    "z": 0.0178
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "l_tarsal_proximal_interphalangeal_3",
                                              "DEF": "hanim_l_tarsal_proximal_interphalangeal_3",
                                              "center": {
                                                "x": 0.0987,
                                                "y": 0.0034,
                                                "z": 0.0086
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "l_metatarsophalangeal_3",
                                          "DEF": "hanim_l_metatarsophalangeal_3",
                                          "center": {
                                            "x": 0.0963,
                                            "y": 0.0065,
                                            "z": -0.0065
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "l_tarsometatarsal_3",
                                      "DEF": "hanim_l_tarsometatarsal_3",
                                      "center": {
                                        "x": 0.0944,
                                        "y": 0.0175,
                                        "z": -0.0625
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "l_cuneonavicular_3",
                                  "DEF": "hanim_l_cuneonavicular_3",
                                  "center": {
                                    "x": 0.0928,
                                    "y": 0.0248,
                                    "z": -0.0821
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "l_talocalcaneonavicular",
                              "DEF": "hanim_l_talocalcaneonavicular",
                              "center": {
                                "x": 0.0781,
                                "y": 0.0283,
                                "z": -0.097
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                0
                              ],
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_calcaneocuboid",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_l_transversetarsal",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_4",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_4",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_4",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_4",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_4",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_4",
                                                  "center": {
                                                    "x": 0.1155,
                                                    "y": 0.0008,
                                                    "z": 0.0118
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "l_tarsal_proximal_interphalangeal_4",
                                              "DEF": "hanim_l_tarsal_proximal_interphalangeal_4",
                                              "center": {
                                                "x": 0.114,
                                                "y": 0.0037,
                                                "z": 0.0044
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "l_metatarsophalangeal_4",
                                          "DEF": "hanim_l_metatarsophalangeal_4",
                                          "center": {
                                            "x": 0.1097,
                                            "y": 0.0058,
                                            "z": -0.0107
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "l_tarsometatarsal_4",
                                      "DEF": "hanim_l_tarsometatarsal_4",
                                      "center": {
                                        "x": 0.1063,
                                        "y": 0.016,
                                        "z": -0.0634
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    },
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_5",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_5",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_5",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_5",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_5",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_5",
                                                  "center": {
                                                    "x": 0.1271,
                                                    "y": 0,
                                                    "z": 0
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "l_tarsal_proximal_interphalangeal_5",
                                              "DEF": "hanim_l_tarsal_proximal_interphalangeal_5",
                                              "center": {
                                                "x": 0.1262,
                                                "y": 0.0023,
                                                "z": -0.0077
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "l_metatarsophalangeal_5",
                                          "DEF": "hanim_l_metatarsophalangeal_5",
                                          "center": {
                                            "x": 0.1239,
                                            "y": 0.0051,
                                            "z": -0.0153
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "l_tarsometatarsal_5",
                                      "DEF": "hanim_l_tarsometatarsal_5",
                                      "center": {
                                        "x": 0.1206,
                                        "y": 0.0124,
                                        "z": -0.0671
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "l_transversetarsal",
                                  "DEF": "hanim_l_transversetarsal",
                                  "center": {
                                    "x": 0.1105,
                                    "y": 0.0267,
                                    "z": -0.0998
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "l_calcaneocuboid",
                              "DEF": "hanim_l_calcaneocuboid",
                              "center": {
                                "x": 0.0889,
                                "y": 0.0494,
                                "z": -0.1278
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                0
                              ],
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "l_talocrural",
                          "DEF": "hanim_l_talocrural",
                          "center": {
                            "x": 0.1101,
                            "y": 0.0656,
                            "z": -0.0736
                          },
                          "skinCoordIndex": [],
                          "skinCoordWeight": [
                            0
                          ],
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "l_knee",
                      "DEF": "hanim_l_knee",
                      "center": {
                        "x": 0.104,
                        "y": 0.4867,
                        "z": 0.0308
                      },
                      "skinCoordIndex": [],
                      "skinCoordWeight": [
                        0
                      ],
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "l_hip",
                  "DEF": "hanim_l_hip",
                  "center": {
                    "x": 0.0961,
                    "y": 0.9124,
                    "z": -0.0001
                  },
                  "skinCoordIndex": [],
                  "skinCoordWeight": [
                    0
                  ],
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                },
                {
                  "string": " hanimjoint DEF hanim_r_hip",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF hanim_r_knee",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF hanim_r_talocrural",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF hanim_r_talocalcaneonavicular",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_r_cuneonavicular_1",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_1",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_1",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_interphalangeal_1",
                                              "nodeType": "hanimjoint",
                                              "children": [],
                                              "name": "r_tarsal_interphalangeal_1",
                                              "DEF": "hanim_r_tarsal_interphalangeal_1",
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "r_metatarsophalangeal_1",
                                          "DEF": "hanim_r_metatarsophalangeal_1",
                                          "center": {
                                            "x": -0.0619,
                                            "y": 0.0059,
                                            "z": -0.0083
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "r_tarsometatarsal_1",
                                      "DEF": "hanim_r_tarsometatarsal_1",
                                      "center": {
                                        "x": -0.0644,
                                        "y": 0.0147,
                                        "z": -0.0577
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "r_cuneonavicular_1",
                                  "DEF": "hanim_r_cuneonavicular_1",
                                  "center": {
                                    "x": -0.0672,
                                    "y": 0.0235,
                                    "z": -0.0835
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                },
                                {
                                  "string": " hanimjoint DEF hanim_r_cuneonavicular_2",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_2",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_2",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_2",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_2",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_2",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_2",
                                                  "center": {
                                                    "x": -0.0841,
                                                    "y": 0.0013,
                                                    "z": 0.0216
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "r_tarsal_proximal_interphalangeal_2",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_2",
                                              "center": {
                                                "x": -0.0841,
                                                "y": 0.0041,
                                                "z": 0.0121
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "r_metatarsophalangeal_2",
                                          "DEF": "hanim_r_metatarsophalangeal_2",
                                          "center": {
                                            "x": -0.0823,
                                            "y": 0.0064,
                                            "z": -0.004
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "r_tarsometatarsal_2",
                                      "DEF": "hanim_r_tarsometatarsal_2",
                                      "center": {
                                        "x": -0.08,
                                        "y": 0.0175,
                                        "z": -0.0608
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "r_cuneonavicular_2",
                                  "DEF": "hanim_r_cuneonavicular_2",
                                  "center": {
                                    "x": -0.0812,
                                    "y": 0.025,
                                    "z": -0.0805
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                },
                                {
                                  "string": " hanimjoint DEF hanim_r_cuneonavicular_3",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_3",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_3",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_3",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_3",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_3",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_3",
                                                  "center": {
                                                    "x": -0.1002,
                                                    "y": 0.0013,
                                                    "z": 0.0178
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "r_tarsal_proximal_interphalangeal_3",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_3",
                                              "center": {
                                                "x": -0.0987,
                                                "y": 0.0034,
                                                "z": 0.0086
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "r_metatarsophalangeal_3",
                                          "DEF": "hanim_r_metatarsophalangeal_3",
                                          "center": {
                                            "x": -0.0963,
                                            "y": 0.0065,
                                            "z": -0.0065
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "r_tarsometatarsal_3",
                                      "DEF": "hanim_r_tarsometatarsal_3",
                                      "center": {
                                        "x": -0.0944,
                                        "y": 0.0175,
                                        "z": -0.0625
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "r_cuneonavicular_3",
                                  "DEF": "hanim_r_cuneonavicular_3",
                                  "center": {
                                    "x": -0.0928,
                                    "y": 0.0248,
                                    "z": -0.0821
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "r_talocalcaneonavicular",
                              "DEF": "hanim_r_talocalcaneonavicular",
                              "center": {
                                "x": -0.0781,
                                "y": 0.0283,
                                "z": -0.097
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                0
                              ],
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            },
                            {
                              "string": " hanimjoint DEF hanim_r_calcaneocuboid",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_r_transversetarsal",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_4",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_4",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_4",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_4",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_4",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_4",
                                                  "center": {
                                                    "x": -0.1155,
                                                    "y": 0.0008,
                                                    "z": 0.0118
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "r_tarsal_proximal_interphalangeal_4",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_4",
                                              "center": {
                                                "x": -0.114,
                                                "y": 0.0037,
                                                "z": 0.0044
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "r_metatarsophalangeal_4",
                                          "DEF": "hanim_r_metatarsophalangeal_4",
                                          "center": {
                                            "x": -0.1097,
                                            "y": 0.0058,
                                            "z": -0.0107
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "r_tarsometatarsal_4",
                                      "DEF": "hanim_r_tarsometatarsal_4",
                                      "center": {
                                        "x": -0.1063,
                                        "y": 0.016,
                                        "z": -0.0634
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    },
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_5",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_5",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_5",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_5",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_5",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_5",
                                                  "center": {
                                                    "x": -0.1271,
                                                    "y": 0,
                                                    "z": 0
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "r_tarsal_proximal_interphalangeal_5",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_5",
                                              "center": {
                                                "x": -0.1262,
                                                "y": 0.0023,
                                                "z": -0.0077
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "r_metatarsophalangeal_5",
                                          "DEF": "hanim_r_metatarsophalangeal_5",
                                          "center": {
                                            "x": -0.1239,
                                            "y": 0.0051,
                                            "z": -0.0153
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "r_tarsometatarsal_5",
                                      "DEF": "hanim_r_tarsometatarsal_5",
                                      "center": {
                                        "x": -0.1206,
                                        "y": 0.0124,
                                        "z": -0.0671
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "r_transversetarsal",
                                  "DEF": "hanim_r_transversetarsal",
                                  "center": {
                                    "x": -0.1105,
                                    "y": 0.0267,
                                    "z": -0.0998
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "r_calcaneocuboid",
                              "DEF": "hanim_r_calcaneocuboid",
                              "center": {
                                "x": -0.0889,
                                "y": 0.0494,
                                "z": -0.1278
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                0
                              ],
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "r_talocrural",
                          "DEF": "hanim_r_talocrural",
                          "center": {
                            "x": -0.0801,
                            "y": 0.0712,
                            "z": -0.0766
                          },
                          "skinCoordIndex": [],
                          "skinCoordWeight": [
                            0
                          ],
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "r_knee",
                      "DEF": "hanim_r_knee",
                      "center": {
                        "x": -0.0867,
                        "y": 0.4913,
                        "z": 0.0318
                      },
                      "skinCoordIndex": [],
                      "skinCoordWeight": [
                        0
                      ],
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "r_hip",
                  "DEF": "hanim_r_hip",
                  "center": {
                    "x": -0.095,
                    "y": 0.9171,
                    "z": 0.0029
                  },
                  "skinCoordIndex": [],
                  "skinCoordWeight": [
                    0
                  ],
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                }
              ],
              "name": "sacroiliac",
              "DEF": "hanim_sacroiliac",
              "center": {
                "x": 0,
                "y": 0.9149,
                "z": 0.0016
              },
              "skinCoordIndex": [],
              "skinCoordWeight": [
                0
              ],
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ]
            },
            {
              "string": " hanimjoint DEF hanim_vl5",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimjoint DEF hanim_vl4",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF hanim_vl3",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF hanim_vl2",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF hanim_vl1",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_vt12",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_vt11",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_vt10",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_vt9",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_vt8",
                                                  "nodeType": "hanimjoint",
                                                  "children": [
                                                    {
                                                      "string": " hanimjoint DEF hanim_vt7",
                                                      "nodeType": "hanimjoint",
                                                      "children": [
                                                        {
                                                          "string": " hanimjoint DEF hanim_vt6",
                                                          "nodeType": "hanimjoint",
                                                          "children": [
                                                            {
                                                              "string": " hanimjoint DEF hanim_vt5",
                                                              "nodeType": "hanimjoint",
                                                              "children": [
                                                                {
                                                                  "string": " hanimjoint DEF hanim_vt4",
                                                                  "nodeType": "hanimjoint",
                                                                  "children": [
                                                                    {
                                                                      "string": " hanimjoint DEF hanim_vt3",
                                                                      "nodeType": "hanimjoint",
                                                                      "children": [
                                                                        {
                                                                          "string": " hanimjoint DEF hanim_vt2",
                                                                          "nodeType": "hanimjoint",
                                                                          "children": [
                                                                            {
                                                                              "string": " hanimjoint DEF hanim_vt1",
                                                                              "nodeType": "hanimjoint",
                                                                              "children": [
                                                                                {
                                                                                  "string": " hanimjoint DEF hanim_vc7",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF hanim_vc6",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF hanim_vc5",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF hanim_vc4",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF hanim_vc3",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_vc2",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_vc1",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_skullbase",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_eyelid_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_eyelid_joint",
                                                                                                                  "DEF": "hanim_l_eyelid_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0.0503,
                                                                                                                    "y": 1.4157,
                                                                                                                    "z": -0.0689
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                },
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_eyelid_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_eyelid_joint",
                                                                                                                  "DEF": "hanim_r_eyelid_joint",
                                                                                                                  "center": {
                                                                                                                    "x": -0.0507,
                                                                                                                    "y": 1.4157,
                                                                                                                    "z": -0.0689
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                },
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_eyeball_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_eyeball_joint",
                                                                                                                  "DEF": "hanim_l_eyeball_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0.0479,
                                                                                                                    "y": 1.3963,
                                                                                                                    "z": -0.0188
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                },
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_eyeball_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_eyeball_joint",
                                                                                                                  "DEF": "hanim_r_eyeball_joint",
                                                                                                                  "center": {
                                                                                                                    "x": -0.0483,
                                                                                                                    "y": 1.3963,
                                                                                                                    "z": -0.0188
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                },
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_eyebrow_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_eyebrow_joint",
                                                                                                                  "DEF": "hanim_l_eyebrow_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0.0216,
                                                                                                                    "y": 1.4053,
                                                                                                                    "z": 0.0051
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                },
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_eyebrow_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_eyebrow_joint",
                                                                                                                  "DEF": "hanim_r_eyebrow_joint",
                                                                                                                  "center": {
                                                                                                                    "x": -0.0219,
                                                                                                                    "y": 1.4053,
                                                                                                                    "z": 0.0051
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                },
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_temporomandibular",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "temporomandibular",
                                                                                                                  "DEF": "hanim_temporomandibular",
                                                                                                                  "center": {
                                                                                                                    "x": -0.0002,
                                                                                                                    "y": 1.3043,
                                                                                                                    "z": -0.0865
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "skullbase",
                                                                                                              "DEF": "hanim_skullbase",
                                                                                                              "center": {
                                                                                                                "x": 0.0044,
                                                                                                                "y": 1.6209,
                                                                                                                "z": 0.0236
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "vc1",
                                                                                                          "DEF": "hanim_vc1",
                                                                                                          "center": {
                                                                                                            "x": 0.0066,
                                                                                                            "y": 1.6144,
                                                                                                            "z": -0.0034
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "vc2",
                                                                                                      "DEF": "hanim_vc2",
                                                                                                      "center": {
                                                                                                        "x": 0.0066,
                                                                                                        "y": 1.5928,
                                                                                                        "z": -0.0103
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    }
                                                                                                  ],
                                                                                                  "name": "vc3",
                                                                                                  "DEF": "hanim_vc3",
                                                                                                  "center": {
                                                                                                    "x": 0.0066,
                                                                                                    "y": 1.58,
                                                                                                    "z": -0.0103
                                                                                                  },
                                                                                                  "skinCoordIndex": [],
                                                                                                  "skinCoordWeight": [
                                                                                                    0
                                                                                                  ],
                                                                                                  "ulimit": [
                                                                                                    0,
                                                                                                    0,
                                                                                                    0
                                                                                                  ],
                                                                                                  "llimit": [
                                                                                                    0,
                                                                                                    0,
                                                                                                    0
                                                                                                  ]
                                                                                                }
                                                                                              ],
                                                                                              "name": "vc4",
                                                                                              "DEF": "hanim_vc4",
                                                                                              "center": {
                                                                                                "x": 0.0066,
                                                                                                "y": 1.5662,
                                                                                                "z": -0.0084
                                                                                              },
                                                                                              "skinCoordIndex": [],
                                                                                              "skinCoordWeight": [
                                                                                                0
                                                                                              ],
                                                                                              "ulimit": [
                                                                                                0,
                                                                                                0,
                                                                                                0
                                                                                              ],
                                                                                              "llimit": [
                                                                                                0,
                                                                                                0,
                                                                                                0
                                                                                              ]
                                                                                            }
                                                                                          ],
                                                                                          "name": "vc5",
                                                                                          "DEF": "hanim_vc5",
                                                                                          "center": {
                                                                                            "x": 0.0066,
                                                                                            "y": 1.552,
                                                                                            "z": -0.0082
                                                                                          },
                                                                                          "skinCoordIndex": [],
                                                                                          "skinCoordWeight": [
                                                                                            0
                                                                                          ],
                                                                                          "ulimit": [
                                                                                            0,
                                                                                            0,
                                                                                            0
                                                                                          ],
                                                                                          "llimit": [
                                                                                            0,
                                                                                            0,
                                                                                            0
                                                                                          ]
                                                                                        }
                                                                                      ],
                                                                                      "name": "vc6",
                                                                                      "DEF": "hanim_vc6",
                                                                                      "center": {
                                                                                        "x": 0.0066,
                                                                                        "y": 1.5357,
                                                                                        "z": -0.0143
                                                                                      },
                                                                                      "skinCoordIndex": [],
                                                                                      "skinCoordWeight": [
                                                                                        0
                                                                                      ],
                                                                                      "ulimit": [
                                                                                        0,
                                                                                        0,
                                                                                        0
                                                                                      ],
                                                                                      "llimit": [
                                                                                        0,
                                                                                        0,
                                                                                        0
                                                                                      ]
                                                                                    }
                                                                                  ],
                                                                                  "name": "vc7",
                                                                                  "DEF": "hanim_vc7",
                                                                                  "center": {
                                                                                    "x": 0.0066,
                                                                                    "y": 1.5132,
                                                                                    "z": -0.0301
                                                                                  },
                                                                                  "skinCoordIndex": [],
                                                                                  "skinCoordWeight": [
                                                                                    0
                                                                                  ],
                                                                                  "ulimit": [
                                                                                    0,
                                                                                    0,
                                                                                    0
                                                                                  ],
                                                                                  "llimit": [
                                                                                    0,
                                                                                    0,
                                                                                    0
                                                                                  ]
                                                                                },
                                                                                {
                                                                                  "string": " hanimjoint DEF hanim_l_sternoclavicular",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF hanim_l_acromioclavicular",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF hanim_l_shoulder",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF hanim_l_elbow",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF hanim_l_radiocarpal",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_1",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_1",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_interphalangeal_1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_carpal_interphalangeal_1",
                                                                                                                  "DEF": "hanim_l_carpal_interphalangeal_1",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1955,
                                                                                                                    "y": 0.8159,
                                                                                                                    "z": 0.0464
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "l_metacarpophalangeal_1",
                                                                                                              "DEF": "hanim_l_metacarpophalangeal_1",
                                                                                                              "center": {
                                                                                                                "x": 0.1951,
                                                                                                                "y": 0.8226,
                                                                                                                "z": 0.0246
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "l_carpometacarpal_1",
                                                                                                          "DEF": "hanim_l_carpometacarpal_1",
                                                                                                          "center": {
                                                                                                            "x": 0.1924,
                                                                                                            "y": 0.8472,
                                                                                                            "z": -0.0534
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "l_midcarpal_1",
                                                                                                      "DEF": "hanim_l_midcarpal_1",
                                                                                                      "center": {
                                                                                                        "x": 0.1811,
                                                                                                        "y": 0.6975,
                                                                                                        "z": -0.0826
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    },
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_2",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_2",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_2",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_2",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_2",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_2",
                                                                                                                      "center": {
                                                                                                                        "x": 0.2028,
                                                                                                                        "y": 0.7139,
                                                                                                                        "z": -0.0236
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "l_carpal_proximal_interphalangeal_2",
                                                                                                                  "DEF": "hanim_l_carpal_proximal_interphalangeal_2",
                                                                                                                  "center": {
                                                                                                                    "x": 0.2017,
                                                                                                                    "y": 0.7363,
                                                                                                                    "z": -0.0248
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "l_metacarpophalangeal_2",
                                                                                                              "DEF": "hanim_l_metacarpophalangeal_2",
                                                                                                              "center": {
                                                                                                                "x": 0.1983,
                                                                                                                "y": 0.7815,
                                                                                                                "z": -0.028
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "l_carpometacarpal_2",
                                                                                                          "DEF": "hanim_l_carpometacarpal_2",
                                                                                                          "center": {
                                                                                                            "x": 0.1983,
                                                                                                            "y": 0.8024,
                                                                                                            "z": -0.028
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "l_midcarpal_2",
                                                                                                      "DEF": "hanim_l_midcarpal_2",
                                                                                                      "center": {
                                                                                                        "x": 0.1811,
                                                                                                        "y": 0.6984,
                                                                                                        "z": -0.0935
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    },
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_3",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_3",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_3",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_3",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_3",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_3",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_3",
                                                                                                                      "center": {
                                                                                                                        "x": 0.2026,
                                                                                                                        "y": 0.7011,
                                                                                                                        "z": -0.0494
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "l_carpal_proximal_interphalangeal_3",
                                                                                                                  "DEF": "hanim_l_carpal_proximal_interphalangeal_3",
                                                                                                                  "center": {
                                                                                                                    "x": 0.2013,
                                                                                                                    "y": 0.7273,
                                                                                                                    "z": -0.0503
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "l_metacarpophalangeal_3",
                                                                                                              "DEF": "hanim_l_metacarpophalangeal_3",
                                                                                                              "center": {
                                                                                                                "x": 0.1987,
                                                                                                                "y": 0.7818,
                                                                                                                "z": -0.053
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "l_carpometacarpal_3",
                                                                                                          "DEF": "hanim_l_carpometacarpal_3",
                                                                                                          "center": {
                                                                                                            "x": 0.1987,
                                                                                                            "y": 0.8029,
                                                                                                            "z": -0.053
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "l_midcarpal_3",
                                                                                                      "DEF": "hanim_l_midcarpal_3",
                                                                                                      "center": {
                                                                                                        "x": 0.1809,
                                                                                                        "y": 0.7,
                                                                                                        "z": -0.1067
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    },
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_4_5",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_4",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_4",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_4",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_4",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_4",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_4",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1983,
                                                                                                                        "y": 0.7045,
                                                                                                                        "z": -0.0767
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "l_carpal_proximal_interphalangeal_4",
                                                                                                                  "DEF": "hanim_l_carpal_proximal_interphalangeal_4",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1973,
                                                                                                                    "y": 0.7287,
                                                                                                                    "z": -0.0777
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "l_metacarpophalangeal_4",
                                                                                                              "DEF": "hanim_l_metacarpophalangeal_4",
                                                                                                              "center": {
                                                                                                                "x": 0.1956,
                                                                                                                "y": 0.7815,
                                                                                                                "z": -0.0794
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "l_carpometacarpal_4",
                                                                                                          "DEF": "hanim_l_carpometacarpal_4",
                                                                                                          "center": {
                                                                                                            "x": 0.1956,
                                                                                                            "y": 0.8019,
                                                                                                            "z": -0.0794
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        },
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_5",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_5",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_5",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_5",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_5",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_5",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1948,
                                                                                                                        "y": 0.7277,
                                                                                                                        "z": -0.1017
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "l_carpal_proximal_interphalangeal_5",
                                                                                                                  "DEF": "hanim_l_carpal_proximal_interphalangeal_5",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1938,
                                                                                                                    "y": 0.7452,
                                                                                                                    "z": -0.1024
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "l_metacarpophalangeal_5",
                                                                                                              "DEF": "hanim_l_metacarpophalangeal_5",
                                                                                                              "center": {
                                                                                                                "x": 0.1925,
                                                                                                                "y": 0.7866,
                                                                                                                "z": -0.1036
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "l_carpometacarpal_5",
                                                                                                          "DEF": "hanim_l_carpometacarpal_5",
                                                                                                          "center": {
                                                                                                            "x": 0.1925,
                                                                                                            "y": 0.8066,
                                                                                                            "z": -0.1036
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "l_midcarpal_4_5",
                                                                                                      "DEF": "hanim_l_midcarpal_4_5",
                                                                                                      "center": {
                                                                                                        "x": 0.1809,
                                                                                                        "y": 0.6973,
                                                                                                        "z": -0.1276
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    }
                                                                                                  ],
                                                                                                  "name": "l_radiocarpal",
                                                                                                  "DEF": "hanim_l_radiocarpal",
                                                                                                  "center": {
                                                                                                    "x": 0.1984,
                                                                                                    "y": 0.8663,
                                                                                                    "z": -0.0583
                                                                                                  },
                                                                                                  "skinCoordIndex": [],
                                                                                                  "skinCoordWeight": [
                                                                                                    0
                                                                                                  ],
                                                                                                  "ulimit": [
                                                                                                    0,
                                                                                                    0,
                                                                                                    0
                                                                                                  ],
                                                                                                  "llimit": [
                                                                                                    0,
                                                                                                    0,
                                                                                                    0
                                                                                                  ]
                                                                                                }
                                                                                              ],
                                                                                              "name": "l_elbow",
                                                                                              "DEF": "hanim_l_elbow",
                                                                                              "center": {
                                                                                                "x": 0.2014,
                                                                                                "y": 1.1357,
                                                                                                "z": -0.0682
                                                                                              },
                                                                                              "skinCoordIndex": [],
                                                                                              "skinCoordWeight": [
                                                                                                0
                                                                                              ],
                                                                                              "ulimit": [
                                                                                                0,
                                                                                                0,
                                                                                                0
                                                                                              ],
                                                                                              "llimit": [
                                                                                                0,
                                                                                                0,
                                                                                                0
                                                                                              ]
                                                                                            }
                                                                                          ],
                                                                                          "name": "l_shoulder",
                                                                                          "DEF": "hanim_l_shoulder",
                                                                                          "center": {
                                                                                            "x": 0.2029,
                                                                                            "y": 1.4376,
                                                                                            "z": -0.0387
                                                                                          },
                                                                                          "skinCoordIndex": [],
                                                                                          "skinCoordWeight": [
                                                                                            0
                                                                                          ],
                                                                                          "ulimit": [
                                                                                            0,
                                                                                            0,
                                                                                            0
                                                                                          ],
                                                                                          "llimit": [
                                                                                            0,
                                                                                            0,
                                                                                            0
                                                                                          ]
                                                                                        }
                                                                                      ],
                                                                                      "name": "l_acromioclavicular",
                                                                                      "DEF": "hanim_l_acromioclavicular",
                                                                                      "center": {
                                                                                        "x": 0.0962,
                                                                                        "y": 1.4269,
                                                                                        "z": -0.0424
                                                                                      },
                                                                                      "skinCoordIndex": [],
                                                                                      "skinCoordWeight": [
                                                                                        0
                                                                                      ],
                                                                                      "ulimit": [
                                                                                        0,
                                                                                        0,
                                                                                        0
                                                                                      ],
                                                                                      "llimit": [
                                                                                        0,
                                                                                        0,
                                                                                        0
                                                                                      ]
                                                                                    }
                                                                                  ],
                                                                                  "name": "l_sternoclavicular",
                                                                                  "DEF": "hanim_l_sternoclavicular",
                                                                                  "center": {
                                                                                    "x": 0.082,
                                                                                    "y": 1.4488,
                                                                                    "z": -0.0353
                                                                                  },
                                                                                  "skinCoordIndex": [],
                                                                                  "skinCoordWeight": [
                                                                                    0
                                                                                  ],
                                                                                  "ulimit": [
                                                                                    0,
                                                                                    0,
                                                                                    0
                                                                                  ],
                                                                                  "llimit": [
                                                                                    0,
                                                                                    0,
                                                                                    0
                                                                                  ]
                                                                                },
                                                                                {
                                                                                  "string": " hanimjoint DEF hanim_r_sternoclavicular",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF hanim_r_acromioclavicular",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF hanim_r_shoulder",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF hanim_r_elbow",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF hanim_r_radiocarpal",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_1",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_1",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_interphalangeal_1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_carpal_interphalangeal_1",
                                                                                                                  "DEF": "hanim_r_carpal_interphalangeal_1",
                                                                                                                  "center": {
                                                                                                                    "x": -0.1864,
                                                                                                                    "y": 0.819,
                                                                                                                    "z": 0.0506
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "r_metacarpophalangeal_1",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_1",
                                                                                                              "center": {
                                                                                                                "x": -0.1874,
                                                                                                                "y": 0.8256,
                                                                                                                "z": 0.0306
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "r_carpometacarpal_1",
                                                                                                          "DEF": "hanim_r_carpometacarpal_1",
                                                                                                          "center": {
                                                                                                            "x": -0.1899,
                                                                                                            "y": 0.8502,
                                                                                                            "z": -0.0473
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "r_midcarpal_1",
                                                                                                      "DEF": "hanim_r_midcarpal_1",
                                                                                                      "center": {
                                                                                                        "x": -0.1811,
                                                                                                        "y": 0.6975,
                                                                                                        "z": -0.0826
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    },
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_2",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_2",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_2",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_2",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_2",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_2",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1945,
                                                                                                                        "y": 0.7169,
                                                                                                                        "z": -0.0173
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_2",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_2",
                                                                                                                  "center": {
                                                                                                                    "x": -0.1954,
                                                                                                                    "y": 0.7393,
                                                                                                                    "z": -0.0185
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "r_metacarpophalangeal_2",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_2",
                                                                                                              "center": {
                                                                                                                "x": -0.1961,
                                                                                                                "y": 0.7846,
                                                                                                                "z": -0.0218
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "r_carpometacarpal_2",
                                                                                                          "DEF": "hanim_r_carpometacarpal_2",
                                                                                                          "center": {
                                                                                                            "x": -0.1961,
                                                                                                            "y": 0.8055,
                                                                                                            "z": -0.0218
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "r_midcarpal_2",
                                                                                                      "DEF": "hanim_r_midcarpal_2",
                                                                                                      "center": {
                                                                                                        "x": -0.1811,
                                                                                                        "y": 0.6984,
                                                                                                        "z": -0.0935
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    },
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_3",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_3",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_3",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_3",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_3",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_3",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_3",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1939,
                                                                                                                        "y": 0.7042,
                                                                                                                        "z": -0.0432
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_3",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_3",
                                                                                                                  "center": {
                                                                                                                    "x": -0.195,
                                                                                                                    "y": 0.7304,
                                                                                                                    "z": -0.0441
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "r_metacarpophalangeal_3",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_3",
                                                                                                              "center": {
                                                                                                                "x": -0.1972,
                                                                                                                "y": 0.7849,
                                                                                                                "z": -0.0468
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "r_carpometacarpal_3",
                                                                                                          "DEF": "hanim_r_carpometacarpal_3",
                                                                                                          "center": {
                                                                                                            "x": -0.1972,
                                                                                                            "y": 0.806,
                                                                                                            "z": -0.0468
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "r_midcarpal_3",
                                                                                                      "DEF": "hanim_r_midcarpal_3",
                                                                                                      "center": {
                                                                                                        "x": -0.1809,
                                                                                                        "y": 0.7,
                                                                                                        "z": -0.1067
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    },
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_4_5",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_4",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_4",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_4",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_4",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_4",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_4",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1908,
                                                                                                                        "y": 0.7077,
                                                                                                                        "z": -0.0706
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_4",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_4",
                                                                                                                  "center": {
                                                                                                                    "x": -0.192,
                                                                                                                    "y": 0.7318,
                                                                                                                    "z": -0.0716
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "r_metacarpophalangeal_4",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_4",
                                                                                                              "center": {
                                                                                                                "x": -0.1951,
                                                                                                                "y": 0.7845,
                                                                                                                "z": -0.0732
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "r_carpometacarpal_4",
                                                                                                          "DEF": "hanim_r_carpometacarpal_4",
                                                                                                          "center": {
                                                                                                            "x": -0.1951,
                                                                                                            "y": 0.8049,
                                                                                                            "z": -0.0732
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        },
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_5",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_5",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_5",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_5",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_5",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_5",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1908,
                                                                                                                        "y": 0.754,
                                                                                                                        "z": -0.096
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "ulimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ],
                                                                                                                      "llimit": [
                                                                                                                        0,
                                                                                                                        0,
                                                                                                                        0
                                                                                                                      ]
                                                                                                                    }
                                                                                                                  ],
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_5",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_5",
                                                                                                                  "center": {
                                                                                                                    "x": -0.1902,
                                                                                                                    "y": 0.7483,
                                                                                                                    "z": -0.0963
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "ulimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ],
                                                                                                                  "llimit": [
                                                                                                                    0,
                                                                                                                    0,
                                                                                                                    0
                                                                                                                  ]
                                                                                                                }
                                                                                                              ],
                                                                                                              "name": "r_metacarpophalangeal_5",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_5",
                                                                                                              "center": {
                                                                                                                "x": -0.1926,
                                                                                                                "y": 0.7896,
                                                                                                                "z": -0.0975
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                0
                                                                                                              ],
                                                                                                              "ulimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ],
                                                                                                              "llimit": [
                                                                                                                0,
                                                                                                                0,
                                                                                                                0
                                                                                                              ]
                                                                                                            }
                                                                                                          ],
                                                                                                          "name": "r_carpometacarpal_5",
                                                                                                          "DEF": "hanim_r_carpometacarpal_5",
                                                                                                          "center": {
                                                                                                            "x": -0.1926,
                                                                                                            "y": 0.8096,
                                                                                                            "z": -0.0975
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            0
                                                                                                          ],
                                                                                                          "ulimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ],
                                                                                                          "llimit": [
                                                                                                            0,
                                                                                                            0,
                                                                                                            0
                                                                                                          ]
                                                                                                        }
                                                                                                      ],
                                                                                                      "name": "r_midcarpal_4_5",
                                                                                                      "DEF": "hanim_r_midcarpal_4_5",
                                                                                                      "center": {
                                                                                                        "x": -0.1809,
                                                                                                        "y": 0.6973,
                                                                                                        "z": -0.1276
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        0
                                                                                                      ],
                                                                                                      "ulimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ],
                                                                                                      "llimit": [
                                                                                                        0,
                                                                                                        0,
                                                                                                        0
                                                                                                      ]
                                                                                                    }
                                                                                                  ],
                                                                                                  "name": "r_radiocarpal",
                                                                                                  "DEF": "hanim_r_radiocarpal",
                                                                                                  "center": {
                                                                                                    "x": -0.1959,
                                                                                                    "y": 0.8694,
                                                                                                    "z": -0.0521
                                                                                                  },
                                                                                                  "skinCoordIndex": [],
                                                                                                  "skinCoordWeight": [
                                                                                                    0
                                                                                                  ],
                                                                                                  "ulimit": [
                                                                                                    0,
                                                                                                    0,
                                                                                                    0
                                                                                                  ],
                                                                                                  "llimit": [
                                                                                                    0,
                                                                                                    0,
                                                                                                    0
                                                                                                  ]
                                                                                                }
                                                                                              ],
                                                                                              "name": "r_elbow",
                                                                                              "DEF": "hanim_r_elbow",
                                                                                              "center": {
                                                                                                "x": -0.1949,
                                                                                                "y": 1.1388,
                                                                                                "z": -0.062
                                                                                              },
                                                                                              "skinCoordIndex": [],
                                                                                              "skinCoordWeight": [
                                                                                                0
                                                                                              ],
                                                                                              "ulimit": [
                                                                                                0,
                                                                                                0,
                                                                                                0
                                                                                              ],
                                                                                              "llimit": [
                                                                                                0,
                                                                                                0,
                                                                                                0
                                                                                              ]
                                                                                            }
                                                                                          ],
                                                                                          "name": "r_shoulder",
                                                                                          "DEF": "hanim_r_shoulder",
                                                                                          "center": {
                                                                                            "x": -0.1907,
                                                                                            "y": 1.4407,
                                                                                            "z": -0.0325
                                                                                          },
                                                                                          "skinCoordIndex": [],
                                                                                          "skinCoordWeight": [
                                                                                            0
                                                                                          ],
                                                                                          "ulimit": [
                                                                                            0,
                                                                                            0,
                                                                                            0
                                                                                          ],
                                                                                          "llimit": [
                                                                                            0,
                                                                                            0,
                                                                                            0
                                                                                          ]
                                                                                        }
                                                                                      ],
                                                                                      "name": "r_acromioclavicular",
                                                                                      "DEF": "hanim_r_acromioclavicular",
                                                                                      "center": {
                                                                                        "x": -0.0836,
                                                                                        "y": 1.4281,
                                                                                        "z": -0.0401
                                                                                      },
                                                                                      "skinCoordIndex": [],
                                                                                      "skinCoordWeight": [
                                                                                        0
                                                                                      ],
                                                                                      "ulimit": [
                                                                                        0,
                                                                                        0,
                                                                                        0
                                                                                      ],
                                                                                      "llimit": [
                                                                                        0,
                                                                                        0,
                                                                                        0
                                                                                      ]
                                                                                    }
                                                                                  ],
                                                                                  "name": "r_sternoclavicular",
                                                                                  "DEF": "hanim_r_sternoclavicular",
                                                                                  "center": {
                                                                                    "x": -0.0694,
                                                                                    "y": 1.46,
                                                                                    "z": -0.033
                                                                                  },
                                                                                  "skinCoordIndex": [],
                                                                                  "skinCoordWeight": [
                                                                                    0
                                                                                  ],
                                                                                  "ulimit": [
                                                                                    0,
                                                                                    0,
                                                                                    0
                                                                                  ],
                                                                                  "llimit": [
                                                                                    0,
                                                                                    0,
                                                                                    0
                                                                                  ]
                                                                                }
                                                                              ],
                                                                              "name": "vt1",
                                                                              "DEF": "hanim_vt1",
                                                                              "center": {
                                                                                "x": 0.0065,
                                                                                "y": 1.4951,
                                                                                "z": -0.0387
                                                                              },
                                                                              "skinCoordIndex": [],
                                                                              "skinCoordWeight": [
                                                                                0
                                                                              ],
                                                                              "ulimit": [
                                                                                0,
                                                                                0,
                                                                                0
                                                                              ],
                                                                              "llimit": [
                                                                                0,
                                                                                0,
                                                                                0
                                                                              ]
                                                                            }
                                                                          ],
                                                                          "name": "vt2",
                                                                          "DEF": "hanim_vt2",
                                                                          "center": {
                                                                            "x": 0.0063,
                                                                            "y": 1.4761,
                                                                            "z": -0.0484
                                                                          },
                                                                          "skinCoordIndex": [],
                                                                          "skinCoordWeight": [
                                                                            0
                                                                          ],
                                                                          "ulimit": [
                                                                            0,
                                                                            0,
                                                                            0
                                                                          ],
                                                                          "llimit": [
                                                                            0,
                                                                            0,
                                                                            0
                                                                          ]
                                                                        }
                                                                      ],
                                                                      "name": "vt3",
                                                                      "DEF": "hanim_vt3",
                                                                      "center": {
                                                                        "x": 0.0062,
                                                                        "y": 1.4583,
                                                                        "z": -0.057
                                                                      },
                                                                      "skinCoordIndex": [],
                                                                      "skinCoordWeight": [
                                                                        0
                                                                      ],
                                                                      "ulimit": [
                                                                        0,
                                                                        0,
                                                                        0
                                                                      ],
                                                                      "llimit": [
                                                                        0,
                                                                        0,
                                                                        0
                                                                      ]
                                                                    }
                                                                  ],
                                                                  "name": "vt4",
                                                                  "DEF": "hanim_vt4",
                                                                  "center": {
                                                                    "x": 0.0061,
                                                                    "y": 1.432,
                                                                    "z": -0.0675
                                                                  },
                                                                  "skinCoordIndex": [],
                                                                  "skinCoordWeight": [
                                                                    0
                                                                  ],
                                                                  "ulimit": [
                                                                    0,
                                                                    0,
                                                                    0
                                                                  ],
                                                                  "llimit": [
                                                                    0,
                                                                    0,
                                                                    0
                                                                  ]
                                                                }
                                                              ],
                                                              "name": "vt5",
                                                              "DEF": "hanim_vt5",
                                                              "center": {
                                                                "x": 0.006,
                                                                "y": 1.4102,
                                                                "z": -0.0745
                                                              },
                                                              "skinCoordIndex": [],
                                                              "skinCoordWeight": [
                                                                0
                                                              ],
                                                              "ulimit": [
                                                                0,
                                                                0,
                                                                0
                                                              ],
                                                              "llimit": [
                                                                0,
                                                                0,
                                                                0
                                                              ]
                                                            }
                                                          ],
                                                          "name": "vt6",
                                                          "DEF": "hanim_vt6",
                                                          "center": {
                                                            "x": 0.0059,
                                                            "y": 1.3866,
                                                            "z": -0.08
                                                          },
                                                          "skinCoordIndex": [],
                                                          "skinCoordWeight": [
                                                            0
                                                          ],
                                                          "ulimit": [
                                                            0,
                                                            0,
                                                            0
                                                          ],
                                                          "llimit": [
                                                            0,
                                                            0,
                                                            0
                                                          ]
                                                        }
                                                      ],
                                                      "name": "vt7",
                                                      "DEF": "hanim_vt7",
                                                      "center": {
                                                        "x": 0.0058,
                                                        "y": 1.3625,
                                                        "z": -0.0833
                                                      },
                                                      "skinCoordIndex": [],
                                                      "skinCoordWeight": [
                                                        0
                                                      ],
                                                      "ulimit": [
                                                        0,
                                                        0,
                                                        0
                                                      ],
                                                      "llimit": [
                                                        0,
                                                        0,
                                                        0
                                                      ]
                                                    }
                                                  ],
                                                  "name": "vt8",
                                                  "DEF": "hanim_vt8",
                                                  "center": {
                                                    "x": 0.0057,
                                                    "y": 1.3382,
                                                    "z": -0.0845
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    0
                                                  ],
                                                  "ulimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ],
                                                  "llimit": [
                                                    0,
                                                    0,
                                                    0
                                                  ]
                                                }
                                              ],
                                              "name": "vt9",
                                              "DEF": "hanim_vt9",
                                              "center": {
                                                "x": 0.0057,
                                                "y": 1.3126,
                                                "z": -0.0838
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                0
                                              ],
                                              "ulimit": [
                                                0,
                                                0,
                                                0
                                              ],
                                              "llimit": [
                                                0,
                                                0,
                                                0
                                              ]
                                            }
                                          ],
                                          "name": "vt10",
                                          "DEF": "hanim_vt10",
                                          "center": {
                                            "x": 0.0056,
                                            "y": 1.2848,
                                            "z": -0.0822
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            0
                                          ],
                                          "ulimit": [
                                            0,
                                            0,
                                            0
                                          ],
                                          "llimit": [
                                            0,
                                            0,
                                            0
                                          ]
                                        }
                                      ],
                                      "name": "vt11",
                                      "DEF": "hanim_vt11",
                                      "center": {
                                        "x": 0.0053,
                                        "y": 1.2679,
                                        "z": -0.081
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        0
                                      ],
                                      "ulimit": [
                                        0,
                                        0,
                                        0
                                      ],
                                      "llimit": [
                                        0,
                                        0,
                                        0
                                      ]
                                    }
                                  ],
                                  "name": "vt12",
                                  "DEF": "hanim_vt12",
                                  "center": {
                                    "x": 0.0051,
                                    "y": 1.2278,
                                    "z": -0.0808
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    0
                                  ],
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "vl1",
                              "DEF": "hanim_vl1",
                              "center": {
                                "x": 0.0048,
                                "y": 1.1912,
                                "z": -0.0805
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                0
                              ],
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "vl2",
                          "DEF": "hanim_vl2",
                          "center": {
                            "x": 0.0045,
                            "y": 1.1546,
                            "z": -0.08
                          },
                          "skinCoordIndex": [],
                          "skinCoordWeight": [
                            0
                          ],
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "vl3",
                      "DEF": "hanim_vl3",
                      "center": {
                        "x": 0.0041,
                        "y": 1.1276,
                        "z": -0.0796
                      },
                      "skinCoordIndex": [],
                      "skinCoordWeight": [
                        0
                      ],
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "vl4",
                  "DEF": "hanim_vl4",
                  "center": {
                    "x": 0.0035,
                    "y": 1.0925,
                    "z": -0.0787
                  },
                  "skinCoordIndex": [],
                  "skinCoordWeight": [
                    0
                  ],
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                }
              ],
              "name": "vl5",
              "DEF": "hanim_vl5",
              "center": {
                "x": 0.0028,
                "y": 1.0568,
                "z": -0.0776
              },
              "skinCoordIndex": [],
              "skinCoordWeight": [
                0
              ],
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ]
            }
          ],
          "name": "humanoid_root",
          "DEF": "hanim_humanoid_root",
          "center": {
            "x": 0,
            "y": 0.824,
            "z": 0.0277
          },
          "skinCoordIndex": [],
          "skinCoordWeight": [
            0
          ],
          "ulimit": [
            0,
            0,
            0
          ],
          "llimit": [
            0,
            0,
            0
          ],
          "containerField": "skeleton"
        },
        {
          "string": "joints hanimjoint USE hanim_humanoid_root",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_humanoid_root",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_sacroiliac",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_sacroiliac",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_hip",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_hip",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_knee",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_knee",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_talocrural",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_talocrural",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_talocalcaneonavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_talocalcaneonavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_calcaneocuboid",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_calcaneocuboid",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_transversetarsal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_transversetarsal",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_hip",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_hip",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_knee",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_knee",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_talocrural",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_talocrural",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_talocalcaneonavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_talocalcaneonavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_cuneonavicular_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_cuneonavicular_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_cuneonavicular_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_cuneonavicular_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_cuneonavicular_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_cuneonavicular_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_calcaneocuboid",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_calcaneocuboid",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_transversetarsal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_transversetarsal",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt12",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt12",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt11",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt11",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt10",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt10",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt9",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt9",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt8",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt8",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt7",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt7",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt6",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt6",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc7",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc7",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc6",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc6",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_skullbase",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_skullbase",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_eyelid_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_eyelid_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_eyelid_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_eyelid_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_eyeball_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_eyeball_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_eyeball_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_eyeball_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_eyebrow_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_eyebrow_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_eyebrow_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_eyebrow_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_temporomandibular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_temporomandibular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_sternoclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_sternoclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_acromioclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_acromioclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_shoulder",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_shoulder",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_elbow",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_elbow",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_radiocarpal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_radiocarpal",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_4_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_4_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_sternoclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_sternoclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_acromioclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_acromioclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_shoulder",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_shoulder",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_elbow",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_elbow",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_radiocarpal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_radiocarpal",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_4_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_4_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_5",
          "containerField": "joints"
        }
      ],
      "name": "HAnim",
      "DEF": "hanim_HAnim",
      "info": [
        "humanoidVersion=2.0"
      ],
      "version": "2.0"
    }
  ]
}