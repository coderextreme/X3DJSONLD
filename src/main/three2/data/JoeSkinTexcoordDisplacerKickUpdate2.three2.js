{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "info": [
        "X3D Humanoid V1 LOA3 skeleton",
        "skin from hanim sites, surface features, and some added points",
        "390 points"
      ],
      "title": "X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"
    },
    {
      "string": " navigationinfo DEF Start_NavigationInfo",
      "nodeType": "navigationinfo",
      "children": [],
      "DEF": "Start_NavigationInfo",
      "headlight": false,
      "speed": 2.5
    },
    {
      "string": " background DEF blue_Background",
      "nodeType": "background",
      "children": [],
      "DEF": "blue_Background"
    },
    {
      "string": " spotlight DEF light1",
      "nodeType": "spotlight",
      "children": [],
      "DEF": "light1",
      "ambientIntensity": 0.7,
      "beamWidth": 1.5,
      "color": {
        "r": 0.8,
        "g": 0.8,
        "b": 1
      },
      "cutOffAngle": 0.6,
      "direction": {
        "x": 0,
        "y": 0,
        "z": 0
      },
      "location": {
        "x": 0,
        "y": 3,
        "z": 3
      },
      "radius": 10
    },
    {
      "string": " pointlight DEF light2",
      "nodeType": "pointlight",
      "children": [],
      "DEF": "light2",
      "ambientIntensity": 0.7,
      "color": {
        "r": 0.8,
        "g": 0.8,
        "b": 1
      },
      "location": {
        "x": 0,
        "y": 10,
        "z": -7
      }
    },
    "/*External from the Humanoid viewpoints*/",
    {
      "string": " viewpoint DEF Scene_InclinedView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_InclinedView",
      "centerOfRotation": {
        "x": 0,
        "y": 0.85,
        "z": 0
      },
      "description": "Scene_Inclined View",
      "orientation": {
        "x": -0.113,
        "y": 0.993,
        "z": 0.0347,
        "w": 0.671
      },
      "position": {
        "x": 1.62,
        "y": 1.05,
        "z": 3.06
      }
    },
    {
      "string": " viewpoint DEF Scene_IFrontView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_IFrontView",
      "centerOfRotation": {
        "x": 0,
        "y": 0.8,
        "z": 0
      },
      "description": "Scene_Front View",
      "position": {
        "x": 0,
        "y": 0.8,
        "z": 2.58
      }
    },
    {
      "string": " viewpoint DEF Scene_ISideView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_ISideView",
      "centerOfRotation": {
        "x": 0,
        "y": 0.8,
        "z": 0
      },
      "description": "Scene_Side View",
      "orientation": {
        "x": 0,
        "y": 1,
        "z": 0,
        "w": 1.5708
      },
      "position": {
        "x": 2.6,
        "y": 0.5,
        "z": 0
      }
    },
    {
      "string": " viewpoint DEF Scene_BackView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_BackView",
      "centerOfRotation": {
        "x": 0,
        "y": 1.5,
        "z": 0
      },
      "description": "Scene_Back View",
      "orientation": {
        "x": 0,
        "y": 1,
        "z": 0,
        "w": 3.14
      },
      "position": {
        "x": 0,
        "y": 2.5,
        "z": -3
      }
    },
    {
      "string": " viewpoint DEF Scene_TopView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_TopView",
      "centerOfRotation": {
        "x": 0,
        "y": 1.5,
        "z": 0
      },
      "description": "Scene_Top View",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -1.5708
      },
      "position": {
        "x": 0,
        "y": 3.5,
        "z": 0
      }
    },
    {
      "string": " group DEF Joe_Humanoid",
      "nodeType": "group",
      "children": [
        {
          "string": " hanimhumanoid DEF Joe_Human",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint DEF Joe_HumanoidRoot",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment DEF Joe_sacrum",
                  "nodeType": "hanimsegment",
                  "children": [
                    {
                      "string": " hanimsite DEF Joe_RootFront",
                      "nodeType": "hanimsite",
                      "children": [
                        {
                          "string": " transform DEF hanimcordsys",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " viewpoint DEF ViewBodyRootAxes",
                              "nodeType": "viewpoint",
                              "children": [],
                              "DEF": "ViewBodyRootAxes",
                              "description": "Joe_HAnim Root Coordinate Axes View"
                            },
                            {
                              "string": " shape DEF AxisLinesShape",
                              "nodeType": "shape",
                              "children": [
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
                                          "x": 1,
                                          "y": 0,
                                          "z": 0
                                        },
                                        {
                                          "x": 0,
                                          "y": 1,
                                          "z": 0
                                        },
                                        {
                                          "x": 0,
                                          "y": 0,
                                          "z": 1
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0,
                                          "y": 0,
                                          "z": 0
                                        },
                                        {
                                          "x": 1,
                                          "y": 0,
                                          "z": 0
                                        },
                                        {
                                          "x": 0,
                                          "y": 1,
                                          "z": 0
                                        },
                                        {
                                          "x": 0,
                                          "y": 0,
                                          "z": 1
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
                          ],
                          "DEF": "hanimcordsys",
                          "scale": {
                            "x": 0.175,
                            "y": 0.175,
                            "z": 0.175
                          }
                        }
                      ],
                      "name": "RootFront",
                      "DEF": "Joe_RootFront"
                    }
                  ],
                  "name": "sacrum",
                  "DEF": "Joe_sacrum"
                },
                {
                  "string": " hanimjoint DEF Joe_sacroiliac",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF Joe_l_hip",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF Joe_l_knee",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF Joe_l_ankle",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF Joe_l_subtalar",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF Joe_l_midtarsal",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF Joe_l_metatarsal",
                                          "nodeType": "hanimjoint",
                                          "children": [],
                                          "name": "l_metatarsal",
                                          "DEF": "Joe_l_metatarsal",
                                          "center": {
                                            "x": 0.115,
                                            "y": 0.02,
                                            "z": 0.122
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1
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
                                      "name": "l_midtarsal",
                                      "DEF": "Joe_l_midtarsal",
                                      "center": {
                                        "x": 0.115,
                                        "y": 0.037,
                                        "z": 0.09
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        1,
                                        1,
                                        1,
                                        1
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
                                  "name": "l_subtalar",
                                  "DEF": "Joe_l_subtalar",
                                  "center": {
                                    "x": 0.115,
                                    "y": 0.031,
                                    "z": 0.03
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    1,
                                    1,
                                    1,
                                    1
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
                              "name": "l_ankle",
                              "DEF": "Joe_l_ankle",
                              "center": {
                                "x": 0.115,
                                "y": 0.069,
                                "z": 0
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                1,
                                1,
                                1,
                                1
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
                          "DEF": "Joe_l_knee",
                          "center": {
                            "x": 0.115,
                            "y": 0.466,
                            "z": 0
                          },
                          "skinCoordIndex": [],
                          "skinCoordWeight": [
                            1,
                            1,
                            1,
                            1,
                            1,
                            1,
                            1,
                            1
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
                      "DEF": "Joe_l_hip",
                      "center": {
                        "x": 0.1,
                        "y": 0.92,
                        "z": 0
                      },
                      "skinCoordIndex": [],
                      "skinCoordWeight": [
                        0.65,
                        1,
                        1,
                        1,
                        1,
                        1
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
                      "string": " hanimjoint DEF Joe_r_hip",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF Joe_r_knee",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF Joe_r_ankle",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF Joe_r_subtalar",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF Joe_r_midtarsal",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF Joe_r_metatarsal",
                                          "nodeType": "hanimjoint",
                                          "children": [],
                                          "name": "r_metatarsal",
                                          "DEF": "Joe_r_metatarsal",
                                          "center": {
                                            "x": -0.1,
                                            "y": 0.01,
                                            "z": 0.14
                                          },
                                          "skinCoordIndex": [],
                                          "skinCoordWeight": [
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1,
                                            1
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
                                      "name": "r_midtarsal",
                                      "DEF": "Joe_r_midtarsal",
                                      "center": {
                                        "x": -0.115,
                                        "y": 0.037,
                                        "z": 0.09
                                      },
                                      "skinCoordIndex": [],
                                      "skinCoordWeight": [
                                        1,
                                        1,
                                        1,
                                        1
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
                                  "name": "r_subtalar",
                                  "DEF": "Joe_r_subtalar",
                                  "center": {
                                    "x": -0.1,
                                    "y": 0.015,
                                    "z": -0.01
                                  },
                                  "skinCoordIndex": [],
                                  "skinCoordWeight": [
                                    1,
                                    1,
                                    1
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
                              "name": "r_ankle",
                              "DEF": "Joe_r_ankle",
                              "center": {
                                "x": -0.115,
                                "y": 0.069,
                                "z": 0
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                1,
                                1,
                                1,
                                1
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
                          "DEF": "Joe_r_knee",
                          "center": {
                            "x": -0.05,
                            "y": 0.466,
                            "z": 0
                          },
                          "skinCoordIndex": [],
                          "skinCoordWeight": [
                            0.6,
                            0.2,
                            1,
                            1,
                            1,
                            1,
                            1,
                            1,
                            0.2
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
                      "DEF": "Joe_r_hip",
                      "center": {
                        "x": -0.1,
                        "y": 0.92,
                        "z": 0
                      },
                      "skinCoordIndex": [],
                      "skinCoordWeight": [
                        0.65,
                        1,
                        0.8,
                        1,
                        1,
                        1,
                        0.4,
                        0.8
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
                  "DEF": "Joe_sacroiliac",
                  "center": {
                    "x": 0,
                    "y": 0.92,
                    "z": 0
                  },
                  "skinCoordIndex": [],
                  "skinCoordWeight": [
                    1,
                    1,
                    1,
                    1,
                    1,
                    1,
                    1,
                    1,
                    1,
                    1,
                    0.35,
                    0.35,
                    1
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
                  "string": " hanimjoint DEF Joe_vl5",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF Joe_vl4",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF Joe_vl3",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF Joe_vl2",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF Joe_vl1",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF Joe_vt12",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF Joe_vt11",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF Joe_vt10",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF Joe_vt9",
                                                  "nodeType": "hanimjoint",
                                                  "children": [
                                                    {
                                                      "string": " hanimjoint DEF Joe_vt8",
                                                      "nodeType": "hanimjoint",
                                                      "children": [
                                                        {
                                                          "string": " hanimjoint DEF Joe_vt7",
                                                          "nodeType": "hanimjoint",
                                                          "children": [
                                                            {
                                                              "string": " hanimjoint DEF Joe_vt6",
                                                              "nodeType": "hanimjoint",
                                                              "children": [
                                                                {
                                                                  "string": " hanimjoint DEF Joe_vt5",
                                                                  "nodeType": "hanimjoint",
                                                                  "children": [
                                                                    {
                                                                      "string": " hanimjoint DEF Joe_vt4",
                                                                      "nodeType": "hanimjoint",
                                                                      "children": [
                                                                        {
                                                                          "string": " hanimjoint DEF Joe_vt3",
                                                                          "nodeType": "hanimjoint",
                                                                          "children": [
                                                                            {
                                                                              "string": " hanimjoint DEF Joe_vt2",
                                                                              "nodeType": "hanimjoint",
                                                                              "children": [
                                                                                {
                                                                                  "string": " hanimjoint DEF Joe_vt1",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF Joe_vc7",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF Joe_vc6",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF Joe_vc5",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF Joe_vc4",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF Joe_vc3",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF Joe_vc2",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF Joe_vc1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_skullbase",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": "displacers hanimdisplacer DEF Joe_skull_tipTest",
                                                                                                                      "nodeType": "hanimdisplacer",
                                                                                                                      "children": [],
                                                                                                                      "name": "skull_tip_raiser_action",
                                                                                                                      "DEF": "Joe_skull_tipTest",
                                                                                                                      "coordIndex": [],
                                                                                                                      "displacements": [
                                                                                                                        {
                                                                                                                          "x": 0,
                                                                                                                          "y": 0.15,
                                                                                                                          "z": 0
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": 0,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0.15
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": -0.1,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0.15
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": 0.1,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0.05
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": 0,
                                                                                                                          "y": -0.02,
                                                                                                                          "z": 0.05
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": -0.15,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": -0.05,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": 0.15,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": 0.05,
                                                                                                                          "y": 0,
                                                                                                                          "z": 0
                                                                                                                        },
                                                                                                                        {
                                                                                                                          "x": 0,
                                                                                                                          "y": 0,
                                                                                                                          "z": -0.15
                                                                                                                        }
                                                                                                                      ]
                                                                                                                    },
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_l_eyelid_joint",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_eyelid_joint",
                                                                                                                      "DEF": "Joe_l_eyelid_joint",
                                                                                                                      "center": {
                                                                                                                        "x": 0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                      "string": " hanimjoint DEF Joe_l_eyeball_joint",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_eyeball_joint",
                                                                                                                      "DEF": "Joe_l_eyeball_joint",
                                                                                                                      "center": {
                                                                                                                        "x": 0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                      "string": " hanimjoint DEF Joe_l_eyebrow_joint",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_eyebrow_joint",
                                                                                                                      "DEF": "Joe_l_eyebrow_joint",
                                                                                                                      "center": {
                                                                                                                        "x": 0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                      "string": " hanimjoint DEF Joe_r_eyelid_joint",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_eyelid_joint",
                                                                                                                      "DEF": "Joe_r_eyelid_joint",
                                                                                                                      "center": {
                                                                                                                        "x": -0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                      "string": " hanimjoint DEF Joe_r_eyeball_joint",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_eyeball_joint",
                                                                                                                      "DEF": "Joe_r_eyeball_joint",
                                                                                                                      "center": {
                                                                                                                        "x": -0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                      "string": " hanimjoint DEF Joe_r_eyebrow_joint",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_eyebrow_joint",
                                                                                                                      "DEF": "Joe_r_eyebrow_joint",
                                                                                                                      "center": {
                                                                                                                        "x": -0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                      "string": " hanimjoint DEF Joe_temporomandibular",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "temporomandibular",
                                                                                                                      "DEF": "Joe_temporomandibular",
                                                                                                                      "center": {
                                                                                                                        "x": 0.034,
                                                                                                                        "y": 1.659,
                                                                                                                        "z": 0.06
                                                                                                                      },
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
                                                                                                                  "DEF": "Joe_skullbase",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1.63,
                                                                                                                    "z": -0.01
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1
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
                                                                                                              "DEF": "Joe_vc1",
                                                                                                              "center": {
                                                                                                                "x": 0,
                                                                                                                "y": 1.61,
                                                                                                                "z": -0.015
                                                                                                              },
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
                                                                                                          "DEF": "Joe_vc2",
                                                                                                          "center": {
                                                                                                            "x": 0,
                                                                                                            "y": 1.595,
                                                                                                            "z": -0.0175
                                                                                                          },
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
                                                                                                      "DEF": "Joe_vc3",
                                                                                                      "center": {
                                                                                                        "x": 0,
                                                                                                        "y": 1.58225,
                                                                                                        "z": -0.0185
                                                                                                      },
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
                                                                                                  "DEF": "Joe_vc4",
                                                                                                  "center": {
                                                                                                    "x": 0,
                                                                                                    "y": 1.5675,
                                                                                                    "z": -0.0256
                                                                                                  },
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
                                                                                              "DEF": "Joe_vc5",
                                                                                              "center": {
                                                                                                "x": 0,
                                                                                                "y": 1.552,
                                                                                                "z": -0.035
                                                                                              },
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
                                                                                          "DEF": "Joe_vc6",
                                                                                          "center": {
                                                                                            "x": 0,
                                                                                            "y": 1.54,
                                                                                            "z": -0.05
                                                                                          },
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
                                                                                          "string": " hanimjoint DEF Joe_l_sternoclavicular",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF Joe_l_acromioclavicular",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF Joe_l_shoulder",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF Joe_l_elbow",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF Joe_l_wrist",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF Joe_l_thumb1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_l_thumb2",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_l_thumb3",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_thumb3",
                                                                                                                      "DEF": "Joe_l_thumb3",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1955,
                                                                                                                        "y": 0.8159,
                                                                                                                        "z": 0.0464
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "l_thumb2",
                                                                                                                  "DEF": "Joe_l_thumb2",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1951,
                                                                                                                    "y": 0.8226,
                                                                                                                    "z": 0.0246
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1
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
                                                                                                              "name": "l_thumb1",
                                                                                                              "DEF": "Joe_l_thumb1",
                                                                                                              "center": {
                                                                                                                "x": 0.1924,
                                                                                                                "y": 0.8472,
                                                                                                                "z": -0.0534
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_l_index0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_l_index1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_l_index2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_l_index3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "l_index3",
                                                                                                                          "DEF": "Joe_l_index3",
                                                                                                                          "center": {
                                                                                                                            "x": 0.2028,
                                                                                                                            "y": 0.7139,
                                                                                                                            "z": -0.0236
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "l_index2",
                                                                                                                      "DEF": "Joe_l_index2",
                                                                                                                      "center": {
                                                                                                                        "x": 0.2017,
                                                                                                                        "y": 0.7363,
                                                                                                                        "z": -0.0248
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "l_index1",
                                                                                                                  "DEF": "Joe_l_index1",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1983,
                                                                                                                    "y": 0.7815,
                                                                                                                    "z": -0.028
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    0.5
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
                                                                                                              "name": "l_index0",
                                                                                                              "DEF": "Joe_l_index0",
                                                                                                              "center": {
                                                                                                                "x": 0.1983,
                                                                                                                "y": 0.8024,
                                                                                                                "z": -0.028
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_l_middle0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_l_middle1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_l_middle2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_l_middle3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "l_middle3",
                                                                                                                          "DEF": "Joe_l_middle3",
                                                                                                                          "center": {
                                                                                                                            "x": 0.2026,
                                                                                                                            "y": 0.7011,
                                                                                                                            "z": -0.0494
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "l_middle2",
                                                                                                                      "DEF": "Joe_l_middle2",
                                                                                                                      "center": {
                                                                                                                        "x": 0.2013,
                                                                                                                        "y": 0.7273,
                                                                                                                        "z": -0.0503
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "l_middle1",
                                                                                                                  "DEF": "Joe_l_middle1",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1987,
                                                                                                                    "y": 0.7818,
                                                                                                                    "z": -0.053
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    0.5,
                                                                                                                    0.5
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
                                                                                                              "name": "l_middle0",
                                                                                                              "DEF": "Joe_l_middle0",
                                                                                                              "center": {
                                                                                                                "x": 0.1987,
                                                                                                                "y": 0.8029,
                                                                                                                "z": -0.053
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_l_ring0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_l_ring1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_l_ring2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_l_ring3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "l_ring3",
                                                                                                                          "DEF": "Joe_l_ring3",
                                                                                                                          "center": {
                                                                                                                            "x": 0.1983,
                                                                                                                            "y": 0.7045,
                                                                                                                            "z": -0.0767
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "l_ring2",
                                                                                                                      "DEF": "Joe_l_ring2",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1973,
                                                                                                                        "y": 0.7287,
                                                                                                                        "z": -0.0777
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "l_ring1",
                                                                                                                  "DEF": "Joe_l_ring1",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1956,
                                                                                                                    "y": 0.7815,
                                                                                                                    "z": -0.0794
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    0.5,
                                                                                                                    0.5
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
                                                                                                              "name": "l_ring0",
                                                                                                              "DEF": "Joe_l_ring0",
                                                                                                              "center": {
                                                                                                                "x": 0.1956,
                                                                                                                "y": 0.8019,
                                                                                                                "z": -0.0794
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_l_pinky0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_l_pinky1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_l_pinky2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_l_pinky3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "l_pinky3",
                                                                                                                          "DEF": "Joe_l_pinky3",
                                                                                                                          "center": {
                                                                                                                            "x": 0.1948,
                                                                                                                            "y": 0.7277,
                                                                                                                            "z": -0.1017
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "l_pinky2",
                                                                                                                      "DEF": "Joe_l_pinky2",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1938,
                                                                                                                        "y": 0.7452,
                                                                                                                        "z": -0.1024
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "l_pinky1",
                                                                                                                  "DEF": "Joe_l_pinky1",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1925,
                                                                                                                    "y": 0.7866,
                                                                                                                    "z": -0.1036
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1
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
                                                                                                              "name": "l_pinky0",
                                                                                                              "DEF": "Joe_l_pinky0",
                                                                                                              "center": {
                                                                                                                "x": 0.1925,
                                                                                                                "y": 0.8066,
                                                                                                                "z": -0.1036
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1,
                                                                                                                1,
                                                                                                                0.5
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
                                                                                                          "name": "l_wrist",
                                                                                                          "DEF": "Joe_l_wrist",
                                                                                                          "center": {
                                                                                                            "x": 0.2,
                                                                                                            "y": 0.87,
                                                                                                            "z": -0.04
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1
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
                                                                                                      "DEF": "Joe_l_elbow",
                                                                                                      "center": {
                                                                                                        "x": 0.2,
                                                                                                        "y": 1.1388,
                                                                                                        "z": -0.04
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1
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
                                                                                                  "DEF": "Joe_l_shoulder",
                                                                                                  "center": {
                                                                                                    "x": 0.2,
                                                                                                    "y": 1.44,
                                                                                                    "z": -0.04
                                                                                                  },
                                                                                                  "skinCoordIndex": [],
                                                                                                  "skinCoordWeight": [
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1
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
                                                                                              "DEF": "Joe_l_acromioclavicular",
                                                                                              "center": {
                                                                                                "x": 0.0962,
                                                                                                "y": 1.4269,
                                                                                                "z": -0.0424
                                                                                              },
                                                                                              "skinCoordIndex": [],
                                                                                              "skinCoordWeight": [
                                                                                                1
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
                                                                                          "DEF": "Joe_l_sternoclavicular",
                                                                                          "center": {
                                                                                            "x": 0.082,
                                                                                            "y": 1.4488,
                                                                                            "z": -0.0353
                                                                                          },
                                                                                          "skinCoordIndex": [],
                                                                                          "skinCoordWeight": [
                                                                                            1
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
                                                                                          "string": " hanimjoint DEF Joe_r_sternoclavicular",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF Joe_r_acromioclavicular",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF Joe_r_shoulder",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF Joe_r_elbow",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF Joe_r_wrist",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF Joe_r_thumb1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_r_thumb2",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_r_thumb3",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_thumb3",
                                                                                                                      "DEF": "Joe_r_thumb3",
                                                                                                                      "center": {
                                                                                                                        "x": -0.2,
                                                                                                                        "y": 0.8,
                                                                                                                        "z": 0.05
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "r_thumb2",
                                                                                                                  "DEF": "Joe_r_thumb2",
                                                                                                                  "center": {
                                                                                                                    "x": -0.2,
                                                                                                                    "y": 0.82,
                                                                                                                    "z": 0.03
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1
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
                                                                                                              "name": "r_thumb1",
                                                                                                              "DEF": "Joe_r_thumb1",
                                                                                                              "center": {
                                                                                                                "x": -0.2,
                                                                                                                "y": 0.85,
                                                                                                                "z": 0
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_r_index0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_r_index1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_r_index2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_r_index3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "r_index3",
                                                                                                                          "DEF": "Joe_r_index3",
                                                                                                                          "center": {
                                                                                                                            "x": -0.2,
                                                                                                                            "y": 0.72,
                                                                                                                            "z": -0.015
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "r_index2",
                                                                                                                      "DEF": "Joe_r_index2",
                                                                                                                      "center": {
                                                                                                                        "x": -0.2,
                                                                                                                        "y": 0.745,
                                                                                                                        "z": -0.015
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "r_index1",
                                                                                                                  "DEF": "Joe_r_index1",
                                                                                                                  "center": {
                                                                                                                    "x": -0.2,
                                                                                                                    "y": 0.793,
                                                                                                                    "z": -0.015
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    0.5,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    0.5
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
                                                                                                              "name": "r_index0",
                                                                                                              "DEF": "Joe_r_index0",
                                                                                                              "center": {
                                                                                                                "x": -0.2,
                                                                                                                "y": 0.84,
                                                                                                                "z": -0.015
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_r_middle0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_r_middle1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_r_middle2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_r_middle3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "r_middle3",
                                                                                                                          "DEF": "Joe_r_middle3",
                                                                                                                          "center": {
                                                                                                                            "x": -0.2,
                                                                                                                            "y": 0.7142,
                                                                                                                            "z": -0.04
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "r_middle2",
                                                                                                                      "DEF": "Joe_r_middle2",
                                                                                                                      "center": {
                                                                                                                        "x": -0.2,
                                                                                                                        "y": 0.74,
                                                                                                                        "z": -0.04
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "r_middle1",
                                                                                                                  "DEF": "Joe_r_middle1",
                                                                                                                  "center": {
                                                                                                                    "x": -0.2,
                                                                                                                    "y": 0.788,
                                                                                                                    "z": -0.04
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    0.5,
                                                                                                                    0.5
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
                                                                                                              "name": "r_middle0",
                                                                                                              "DEF": "Joe_r_middle0",
                                                                                                              "center": {
                                                                                                                "x": -0.2,
                                                                                                                "y": 0.835,
                                                                                                                "z": -0.04
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_r_ring0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_r_ring1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_r_ring2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_r_ring3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "r_ring3",
                                                                                                                          "DEF": "Joe_r_ring3",
                                                                                                                          "center": {
                                                                                                                            "x": -0.2,
                                                                                                                            "y": 0.7177,
                                                                                                                            "z": -0.065
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "r_ring2",
                                                                                                                      "DEF": "Joe_r_ring2",
                                                                                                                      "center": {
                                                                                                                        "x": -0.2,
                                                                                                                        "y": 0.74,
                                                                                                                        "z": -0.065
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "r_ring1",
                                                                                                                  "DEF": "Joe_r_ring1",
                                                                                                                  "center": {
                                                                                                                    "x": -0.2,
                                                                                                                    "y": 0.793,
                                                                                                                    "z": -0.065
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    0.5,
                                                                                                                    0.5
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
                                                                                                              "name": "r_ring0",
                                                                                                              "DEF": "Joe_r_ring0",
                                                                                                              "center": {
                                                                                                                "x": -0.2,
                                                                                                                "y": 0.835,
                                                                                                                "z": -0.065
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1
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
                                                                                                              "string": " hanimjoint DEF Joe_r_pinky0",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF Joe_r_pinky1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF Joe_r_pinky2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [
                                                                                                                        {
                                                                                                                          "string": " hanimjoint DEF Joe_r_pinky3",
                                                                                                                          "nodeType": "hanimjoint",
                                                                                                                          "children": [],
                                                                                                                          "name": "r_pinky3",
                                                                                                                          "DEF": "Joe_r_pinky3",
                                                                                                                          "center": {
                                                                                                                            "x": -0.2,
                                                                                                                            "y": 0.735,
                                                                                                                            "z": -0.09
                                                                                                                          },
                                                                                                                          "skinCoordIndex": [],
                                                                                                                          "skinCoordWeight": [
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1,
                                                                                                                            1
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
                                                                                                                      "name": "r_pinky2",
                                                                                                                      "DEF": "Joe_r_pinky2",
                                                                                                                      "center": {
                                                                                                                        "x": -0.2,
                                                                                                                        "y": 0.755,
                                                                                                                        "z": -0.085
                                                                                                                      },
                                                                                                                      "skinCoordIndex": [],
                                                                                                                      "skinCoordWeight": [
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1,
                                                                                                                        1
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
                                                                                                                  "name": "r_pinky1",
                                                                                                                  "DEF": "Joe_r_pinky1",
                                                                                                                  "center": {
                                                                                                                    "x": -0.2,
                                                                                                                    "y": 0.79,
                                                                                                                    "z": -0.085
                                                                                                                  },
                                                                                                                  "skinCoordIndex": [],
                                                                                                                  "skinCoordWeight": [
                                                                                                                    1,
                                                                                                                    1,
                                                                                                                    1
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
                                                                                                              "name": "r_pinky0",
                                                                                                              "DEF": "Joe_r_pinky0",
                                                                                                              "center": {
                                                                                                                "x": -0.2,
                                                                                                                "y": 0.84,
                                                                                                                "z": -0.085
                                                                                                              },
                                                                                                              "skinCoordIndex": [],
                                                                                                              "skinCoordWeight": [
                                                                                                                1,
                                                                                                                1,
                                                                                                                1,
                                                                                                                0.5
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
                                                                                                          "name": "r_wrist",
                                                                                                          "DEF": "Joe_r_wrist",
                                                                                                          "center": {
                                                                                                            "x": -0.2,
                                                                                                            "y": 0.89,
                                                                                                            "z": -0.04
                                                                                                          },
                                                                                                          "skinCoordIndex": [],
                                                                                                          "skinCoordWeight": [
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1,
                                                                                                            1
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
                                                                                                      "DEF": "Joe_r_elbow",
                                                                                                      "center": {
                                                                                                        "x": -0.2,
                                                                                                        "y": 1.1388,
                                                                                                        "z": -0.04
                                                                                                      },
                                                                                                      "skinCoordIndex": [],
                                                                                                      "skinCoordWeight": [
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1,
                                                                                                        1
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
                                                                                                  "DEF": "Joe_r_shoulder",
                                                                                                  "center": {
                                                                                                    "x": -0.2,
                                                                                                    "y": 1.44,
                                                                                                    "z": -0.04
                                                                                                  },
                                                                                                  "skinCoordIndex": [],
                                                                                                  "skinCoordWeight": [
                                                                                                    0.1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    1,
                                                                                                    0.3,
                                                                                                    0.2
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
                                                                                              "DEF": "Joe_r_acromioclavicular",
                                                                                              "center": {
                                                                                                "x": -0.09,
                                                                                                "y": 1.41,
                                                                                                "z": -0.11
                                                                                              },
                                                                                              "skinCoordIndex": [],
                                                                                              "skinCoordWeight": [
                                                                                                1,
                                                                                                0.9
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
                                                                                          "DEF": "Joe_r_sternoclavicular",
                                                                                          "center": {
                                                                                            "x": -0.03,
                                                                                            "y": 1.46,
                                                                                            "z": 0
                                                                                          },
                                                                                          "skinCoordIndex": [],
                                                                                          "skinCoordWeight": [
                                                                                            1
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
                                                                                      "DEF": "Joe_vc7",
                                                                                      "center": {
                                                                                        "x": 0,
                                                                                        "y": 1.525,
                                                                                        "z": -0.072
                                                                                      },
                                                                                      "skinCoordIndex": [],
                                                                                      "skinCoordWeight": [
                                                                                        1,
                                                                                        1
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
                                                                                  "DEF": "Joe_vt1",
                                                                                  "center": {
                                                                                    "x": 0,
                                                                                    "y": 1.497,
                                                                                    "z": -0.09
                                                                                  },
                                                                                  "skinCoordIndex": [],
                                                                                  "skinCoordWeight": [
                                                                                    1,
                                                                                    1
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
                                                                              "DEF": "Joe_vt2",
                                                                              "center": {
                                                                                "x": 0,
                                                                                "y": 1.468,
                                                                                "z": -0.105
                                                                              },
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
                                                                          "DEF": "Joe_vt3",
                                                                          "center": {
                                                                            "x": 0,
                                                                            "y": 1.438,
                                                                            "z": -0.12
                                                                          },
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
                                                                      "DEF": "Joe_vt4",
                                                                      "center": {
                                                                        "x": 0,
                                                                        "y": 1.41,
                                                                        "z": -0.1235
                                                                      },
                                                                      "skinCoordIndex": [],
                                                                      "skinCoordWeight": [
                                                                        1
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
                                                                  "DEF": "Joe_vt5",
                                                                  "center": {
                                                                    "x": 0,
                                                                    "y": 1.381,
                                                                    "z": -0.1235
                                                                  },
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
                                                              "DEF": "Joe_vt6",
                                                              "center": {
                                                                "x": 0,
                                                                "y": 1.352,
                                                                "z": -0.12
                                                              },
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
                                                          "DEF": "Joe_vt7",
                                                          "center": {
                                                            "x": 0,
                                                            "y": 1.323,
                                                            "z": -0.1155
                                                          },
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
                                                      "DEF": "Joe_vt8",
                                                      "center": {
                                                        "x": 0,
                                                        "y": 1.294,
                                                        "z": -0.11
                                                      },
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
                                                  "DEF": "Joe_vt9",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1.268,
                                                    "z": -0.1
                                                  },
                                                  "skinCoordIndex": [],
                                                  "skinCoordWeight": [
                                                    1,
                                                    1
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
                                              "DEF": "Joe_vt10",
                                              "center": {
                                                "x": 0,
                                                "y": 1.242,
                                                "z": -0.09
                                              },
                                              "skinCoordIndex": [],
                                              "skinCoordWeight": [
                                                1
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
                                          "DEF": "Joe_vt11",
                                          "center": {
                                            "x": 0,
                                            "y": 1.2679,
                                            "z": -0.081
                                          },
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
                                      "DEF": "Joe_vt12",
                                      "center": {
                                        "x": 0,
                                        "y": 1.179,
                                        "z": -0.068
                                      },
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
                                  "DEF": "Joe_vl1",
                                  "center": {
                                    "x": 0,
                                    "y": 1.1459,
                                    "z": -0.0625
                                  },
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
                              "DEF": "Joe_vl2",
                              "center": {
                                "x": 0,
                                "y": 1.12,
                                "z": -0.065
                              },
                              "skinCoordIndex": [],
                              "skinCoordWeight": [
                                1,
                                1,
                                1,
                                1,
                                1,
                                1,
                                0.7,
                                1,
                                0.8
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
                          "DEF": "Joe_vl3",
                          "center": {
                            "x": 0,
                            "y": 1.092,
                            "z": -0.0725
                          },
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
                      "DEF": "Joe_vl4",
                      "center": {
                        "x": 0,
                        "y": 1.068,
                        "z": -0.085
                      },
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
                  "DEF": "Joe_vl5",
                  "center": {
                    "x": 0,
                    "y": 1.045,
                    "z": -0.095
                  },
                  "skinCoordIndex": [],
                  "skinCoordWeight": [
                    1,
                    1
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
              "name": "HumanoidRoot",
              "DEF": "Joe_HumanoidRoot",
              "center": {
                "x": 0,
                "y": 0.875,
                "z": 0
              },
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
              "string": "skin shape DEF Joe_Shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance DEF Joe_skin_Appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material DEF Joe_skin_Material",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "Joe_skin_Material",
                      "diffuseColor": {
                        "r": 0.3,
                        "g": 0.3,
                        "b": 0.6
                      },
                      "emissiveColor": {
                        "r": 0.3,
                        "g": 0.3,
                        "b": 0.6
                      }
                    },
                    {
                      "string": "appearance imagetexture DEF JoeSkinImageTexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "JoeSkinImageTexture",
                      "url": [
                        "bodytexture28.png"
                      ]
                    },
                    {
                      "string": "appearance texturetransform DEF kicktextrans",
                      "nodeType": "texturetransform",
                      "children": [],
                      "DEF": "kicktextrans"
                    }
                  ],
                  "DEF": "Joe_skin_Appearance"
                },
                {
                  "string": "geometry indexedfaceset DEF Joe_skin_IndexedFaceSet",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "coord coordinate DEF Joe_SkinCoord",
                      "nodeType": "coordinate",
                      "children": [],
                      "DEF": "Joe_SkinCoord",
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
                          "y": 1.255,
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
                          "y": 1.255,
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
                      "string": "texCoord texturecoordinate",
                      "nodeType": "texturecoordinate",
                      "children": [],
                      "point": [
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        }
                      ],
                      "points": [
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        },
                        {
                          "x": 0.5,
                          "y": 0
                        },
                        {
                          "x": 0,
                          "y": 0.5
                        },
                        {
                          "x": 0,
                          "y": 0
                        },
                        {
                          "x": 0.5,
                          "y": 0.5
                        }
                      ]
                    }
                  ],
                  "DEF": "Joe_skin_IndexedFaceSet",
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
                  "creaseAngle": 3.14
                }
              ],
              "DEF": "Joe_Shape",
              "containerField": "skin"
            },
            {
              "string": "skinCoord coordinate USE Joe_SkinCoord",
              "nodeType": "coordinate",
              "children": [],
              "USE": "Joe_SkinCoord"
            }
          ],
          "name": "Human",
          "DEF": "Joe_Human",
          "version": "2.0"
        }
      ],
      "DEF": "Joe_Humanoid"
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " timesensor DEF KickTimer",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "KickTimer",
          "cycleInterval": 3.73,
          "loop": true
        },
        "/*Interpolators*/",
        {
          "string": " orientationinterpolator DEF HumanoidRootRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "HumanoidRootRotInterp",
          "key": [
            0,
            0.1,
            0.4,
            0.6,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 0.5
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 0.5
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 0.1
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 0.5
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 0.5
            }
          ]
        },
        {
          "string": " positioninterpolator DEF HumanoidRootTransInterp",
          "nodeType": "positioninterpolator",
          "children": [],
          "DEF": "HumanoidRootTransInterp",
          "key": [
            0,
            0.2,
            0.6,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0.3,
              "z": -1
            },
            {
              "x": 0.4,
              "y": -0.04,
              "z": -0.4
            },
            {
              "x": -0.18,
              "y": 0.1,
              "z": 0
            },
            {
              "x": -0.2,
              "y": 0.15,
              "z": 0.15
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF sacroiliacRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "sacroiliacRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_hipRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_hipRotInterp",
          "key": [
            0,
            0.1,
            0.3,
            0.45,
            1
          ],
          "keyValue": [
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1.5
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 0.5
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_kneeRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_kneeRotInterp",
          "key": [
            0,
            0.2,
            0.35,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0.2
            },
            {
              "x": 1,
              "y": 0,
              "z": 1,
              "w": 0.5
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1.4
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_ankleRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_ankleRotInterp",
          "key": [
            0,
            0.25,
            1
          ],
          "keyValue": [
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_subtalarRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_subtalarRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_midtarsalRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_midtarsalRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_metatarsalRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_metatarsalRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_hipRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_hipRotInterp",
          "key": [
            0,
            0.25,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_kneeRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_kneeRotInterp",
          "key": [
            0,
            0.25,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 0.1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1.5
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_ankleRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_ankleRotInterp",
          "key": [
            0,
            0.25,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 1
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 0.5
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_subtalarRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_subtalarRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_midtarsalRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_midtarsalRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_metatarsalRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_metatarsalRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vl5RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vl5RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vl4RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vl4RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vl3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vl3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vl2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vl2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vl1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vl1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt12RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt12RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt11RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt11RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt10RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt10RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt9RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt9RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt8RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt8RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt7RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt7RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt6RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt6RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt5RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt5RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt4RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt4RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vt1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vt1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc7RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc7RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc6RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc6RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc5RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc5RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc4RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc4RotInterp",
          "key": [
            0,
            0.3,
            0.4,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0,
              "z": 1,
              "w": 0.25
            },
            {
              "x": -1,
              "y": 0,
              "z": -1,
              "w": 0.35
            },
            {
              "x": 1,
              "y": 0,
              "z": 0,
              "w": 0.75
            },
            {
              "x": 1,
              "y": 0,
              "z": 1,
              "w": 0.5
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF vc1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "vc1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF skullbaseRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "skullbaseRotInterp",
          "key": [
            0,
            0.2,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": -1,
              "z": 0,
              "w": 0.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 1,
              "z": 0,
              "w": 0.35
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_eyelid_jointRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_eyelid_jointRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_eyeball_jointRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_eyeball_jointRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_eyebrow_jointRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_eyebrow_jointRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_eyelid_jointRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_eyelid_jointRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_eyeball_jointRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_eyeball_jointRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_eyebrow_jointRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_eyebrow_jointRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF temporomandibularRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "temporomandibularRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_sternoclavicularRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_sternoclavicularRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_acromioclavicularRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_acromioclavicularRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_shoulderRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_shoulderRotInterp",
          "key": [
            0,
            0.4,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": -1,
              "y": 0,
              "z": 1,
              "w": 1.75
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_elbowRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_elbowRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 3
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 0.75
            },
            {
              "x": -1,
              "y": -1,
              "z": 0,
              "w": 0.5
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_wristRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_wristRotInterp",
          "key": [
            0,
            0.4,
            0.8,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 1,
              "z": 0,
              "w": 1.3
            },
            {
              "x": 0,
              "y": -0.5,
              "z": 1,
              "w": 1.3
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_thumb1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_thumb1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_thumb2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_thumb2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_thumb3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_thumb3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_index0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_index0RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_index1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_index1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_index2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_index2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_index3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_index3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_middle0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_middle0RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_middle1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_middle1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_middle2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_middle2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_middle3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_middle3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_ring0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_ring0RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_ring1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_ring1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_ring2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_ring2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_ring3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_ring3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_pinky0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_pinky0RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_pinky1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_pinky1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_pinky2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_pinky2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF l_pinky3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "l_pinky3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_sternoclavicularRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_sternoclavicularRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_acromioclavicularRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_acromioclavicularRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_shoulderRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_shoulderRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": -1,
              "w": 2.5
            },
            {
              "x": 0,
              "y": 0,
              "z": -1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": -1,
              "w": 1.75
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_elbowRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_elbowRotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 3
            },
            {
              "x": -1,
              "y": 0,
              "z": 0,
              "w": 0.75
            },
            {
              "x": -1,
              "y": -1,
              "z": 0,
              "w": 0.5
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_wristRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_wristRotInterp",
          "key": [
            0,
            0.5,
            0.7,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 1,
              "z": 0,
              "w": 0.3
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": -1,
              "w": 1
            },
            {
              "x": 0,
              "y": -1,
              "z": 0,
              "w": 0.3
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_thumb1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_thumb1RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_thumb2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_thumb2RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_thumb3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_thumb3RotInterp",
          "key": [
            0,
            0.5,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_index0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_index0RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_index1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_index1RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_index2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_index2RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_index3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_index3RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_middle0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_middle0RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_middle1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_middle1RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_middle2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_middle2RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_middle3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_middle3RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_ring0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_ring0RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_ring1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_ring1RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_ring2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_ring2RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_ring3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_ring3RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_pinky0RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_pinky0RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_pinky1RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_pinky1RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_pinky2RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_pinky2RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF r_pinky3RotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "r_pinky3RotInterp",
          "key": [
            0,
            0.5,
            0.75,
            1
          ],
          "keyValue": [
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 1.5
            },
            {
              "x": 0,
              "y": 0,
              "z": 1,
              "w": 0
            }
          ]
        }
      ]
    },
    "/*TimeSensor to Interpolators*/",
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "HumanoidRootRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "HumanoidRootTransInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "sacroiliacRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_hipRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_kneeRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_ankleRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_subtalarRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_midtarsalRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_metatarsalRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_hipRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_kneeRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_ankleRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_subtalarRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_midtarsalRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_metatarsalRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vl5RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vl4RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vl3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vl2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vl1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt12RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt11RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt10RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt9RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt8RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt7RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt6RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt5RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt4RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vt1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc7RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc6RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc5RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc4RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "vc1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "skullbaseRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_eyelid_jointRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_eyeball_jointRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_eyebrow_jointRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_eyelid_jointRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_eyeball_jointRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_eyebrow_jointRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "temporomandibularRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_sternoclavicularRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_acromioclavicularRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_shoulderRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_elbowRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_wristRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_thumb1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_thumb2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_thumb3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_index0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_index1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_index2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_index3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_middle0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_middle1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_middle2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_middle3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_ring0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_ring1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_ring2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_ring3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_pinky0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_pinky1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_pinky2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "l_pinky3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_sternoclavicularRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_acromioclavicularRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_shoulderRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_elbowRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_wristRotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_thumb1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_thumb2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_thumb3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_index0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_index1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_index2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_index3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_middle0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_middle1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_middle2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_middle3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_ring0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_ring1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_ring2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_ring3RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_pinky0RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_pinky1RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_pinky2RotInterp"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "KickTimer",
      "toField": "set_fraction",
      "toNode": "r_pinky3RotInterp"
    },
    "/*Routes from Interpolators to Joe_ model Joints*/",
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "HumanoidRootRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_HumanoidRoot"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "HumanoidRootTransInterp",
      "toField": "set_translation",
      "toNode": "Joe_HumanoidRoot"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "sacroiliacRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_sacroiliac"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_hipRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_hip"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_kneeRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_knee"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_ankleRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_ankle"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_subtalarRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_subtalar"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_midtarsalRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_midtarsal"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_metatarsalRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_metatarsal"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_hipRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_hip"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_kneeRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_knee"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_ankleRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_ankle"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_subtalarRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_subtalar"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_midtarsalRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_midtarsal"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_metatarsalRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_metatarsal"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vl5RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vl5"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vl4RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vl4"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vl3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vl3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vl2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vl2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vl1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vl1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt12RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt12"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt11RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt11"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt10RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt10"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt9RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt9"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt8RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt8"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt7RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt7"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt6RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt6"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt5RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt5"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt4RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt4"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vt1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vt1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc7RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc7"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc6RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc6"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc5RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc5"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc4RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc4"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "vc1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_vc1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "skullbaseRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_skullbase"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_eyelid_jointRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_eyelid_joint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_eyeball_jointRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_eyeball_joint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_eyebrow_jointRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_eyebrow_joint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_eyelid_jointRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_eyelid_joint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_eyeball_jointRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_eyeball_joint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_eyebrow_jointRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_eyebrow_joint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "temporomandibularRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_temporomandibular"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_sternoclavicularRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_sternoclavicular"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_acromioclavicularRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_acromioclavicular"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_shoulderRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_shoulder"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_elbowRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_elbow"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_wristRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_wrist"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_thumb1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_thumb1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_thumb2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_thumb2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_thumb3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_thumb3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_index0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_index0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_index1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_index1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_index2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_index2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_index3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_index3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_middle0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_middle0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_middle1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_middle1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_middle2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_middle2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_middle3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_middle3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_ring0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_ring0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_ring1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_ring1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_ring2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_ring2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_ring3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_ring3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_pinky0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_pinky0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_pinky1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_pinky1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_pinky2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_pinky2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "l_pinky3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_l_pinky3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_sternoclavicularRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_sternoclavicular"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_acromioclavicularRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_acromioclavicular"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_shoulderRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_shoulder"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_elbowRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_elbow"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_wristRotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_wrist"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_thumb1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_thumb1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_thumb2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_thumb2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_thumb3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_thumb3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_index0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_index0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_index1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_index1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_index2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_index2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_index3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_index3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_middle0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_middle0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_middle1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_middle1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_middle2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_middle2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_middle3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_middle3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_ring0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_ring0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_ring1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_ring1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_ring2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_ring2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_ring3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_ring3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_pinky0RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_pinky0"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_pinky1RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_pinky1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_pinky2RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_pinky2"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "r_pinky3RotInterp",
      "toField": "set_rotation",
      "toNode": "Joe_r_pinky3"
    },
    {
      "string": " group DEF DisplacersAnimationGroup",
      "nodeType": "group",
      "children": [
        "/*TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor*/",
        {
          "string": " scalarinterpolator DEF skull_tipTest",
          "nodeType": "scalarinterpolator",
          "children": [],
          "DEF": "skull_tipTest",
          "key": [
            0,
            0.1,
            0.2,
            0.35,
            0.6,
            0.7,
            0.85,
            0.88,
            0.94,
            0.97,
            1
          ],
          "keyValue": [
            0,
            0,
            0,
            0,
            0.2,
            0.4,
            1,
            0,
            1,
            0.4,
            0
          ]
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "fraction_changed",
          "fromNode": "KickTimer",
          "toField": "set_fraction",
          "toNode": "skull_tipTest"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "value_changed",
          "fromNode": "skull_tipTest",
          "toField": "weight",
          "toNode": "Joe_skull_tipTest"
        }
      ],
      "DEF": "DisplacersAnimationGroup"
    },
    {
      "string": " group DEF skintexturetransform_animation",
      "nodeType": "group",
      "children": [
        {
          "string": " scalarinterpolator DEF skinTexTransTest",
          "nodeType": "scalarinterpolator",
          "children": [],
          "DEF": "skinTexTransTest",
          "key": [
            0,
            0.2,
            0.4,
            0.5,
            0.6,
            0.7,
            0.8,
            1
          ],
          "keyValue": [
            0,
            0,
            0,
            0,
            0,
            1,
            2,
            0
          ]
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "fraction_changed",
          "fromNode": "KickTimer",
          "toField": "set_fraction",
          "toNode": "skinTexTransTest"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "value_changed",
          "fromNode": "skinTexTransTest",
          "toField": "rotation",
          "toNode": "kicktextrans"
        }
      ],
      "DEF": "skintexturetransform_animation"
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " transform DEF SBall",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF ball_Shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance DEF ball_Appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material DEF ball_Material",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "ball_Material",
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
                    },
                    {
                      "string": "appearance imagetexture USE JoeSkinImageTexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "USE": "JoeSkinImageTexture"
                    }
                  ],
                  "DEF": "ball_Appearance"
                },
                {
                  "string": "geometry indexedfaceset DEF ball_IndexedFaceSet",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "coord coordinate DEF Ball_Coordinates",
                      "nodeType": "coordinate",
                      "children": [],
                      "DEF": "Ball_Coordinates",
                      "point": [
                        {
                          "x": 0,
                          "y": 0.4675,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": 0.4049,
                          "z": -0.2338
                        },
                        {
                          "x": -0.1169,
                          "y": 0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": 0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": -0.2338,
                          "y": 0.4049,
                          "z": 0
                        },
                        {
                          "x": -0.2024,
                          "y": 0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": -0.1169,
                          "y": 0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0,
                          "y": 0.4049,
                          "z": 0.2338
                        },
                        {
                          "x": 0.1169,
                          "y": 0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": 0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": 0.2338,
                          "y": 0.4049,
                          "z": 0
                        },
                        {
                          "x": 0.2024,
                          "y": 0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": 0.1169,
                          "y": 0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": 0,
                          "y": 0.2338,
                          "z": -0.4049
                        },
                        {
                          "x": -0.2024,
                          "y": 0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": -0.3506,
                          "y": 0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": -0.4049,
                          "y": 0.2338,
                          "z": 0
                        },
                        {
                          "x": -0.3506,
                          "y": 0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": 0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0,
                          "y": 0.2338,
                          "z": 0.4049
                        },
                        {
                          "x": 0.2024,
                          "y": 0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0.3506,
                          "y": 0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": 0.4049,
                          "y": 0.2338,
                          "z": 0
                        },
                        {
                          "x": 0.3506,
                          "y": 0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": 0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -0.4675
                        },
                        {
                          "x": -0.2338,
                          "y": 0,
                          "z": -0.4049
                        },
                        {
                          "x": -0.4049,
                          "y": 0,
                          "z": -0.2338
                        },
                        {
                          "x": -0.4675,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": -0.4049,
                          "y": 0,
                          "z": 0.2338
                        },
                        {
                          "x": -0.2338,
                          "y": 0,
                          "z": 0.4049
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 0.4675
                        },
                        {
                          "x": 0.2338,
                          "y": 0,
                          "z": 0.4049
                        },
                        {
                          "x": 0.4049,
                          "y": 0,
                          "z": 0.2338
                        },
                        {
                          "x": 0.4675,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0.4049,
                          "y": 0,
                          "z": -0.2338
                        },
                        {
                          "x": 0.2338,
                          "y": 0,
                          "z": -0.4049
                        },
                        {
                          "x": 0,
                          "y": -0.2338,
                          "z": -0.4049
                        },
                        {
                          "x": -0.2024,
                          "y": -0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": -0.3506,
                          "y": -0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": -0.4049,
                          "y": -0.2338,
                          "z": 0
                        },
                        {
                          "x": -0.3506,
                          "y": -0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": -0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0,
                          "y": -0.2338,
                          "z": 0.4049
                        },
                        {
                          "x": 0.2024,
                          "y": -0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0.3506,
                          "y": -0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": 0.4049,
                          "y": -0.2338,
                          "z": 0
                        },
                        {
                          "x": 0.3506,
                          "y": -0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": -0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": 0,
                          "y": -0.4049,
                          "z": -0.2338
                        },
                        {
                          "x": -0.1169,
                          "y": -0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": -0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": -0.2338,
                          "y": -0.4049,
                          "z": 0
                        },
                        {
                          "x": -0.2024,
                          "y": -0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": -0.1169,
                          "y": -0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0,
                          "y": -0.4049,
                          "z": 0.2338
                        },
                        {
                          "x": 0.1169,
                          "y": -0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": -0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": 0.2338,
                          "y": -0.4049,
                          "z": 0
                        },
                        {
                          "x": 0.2024,
                          "y": -0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": 0.1169,
                          "y": -0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": 0,
                          "y": -0.4675,
                          "z": 0
                        }
                      ],
                      "points": [
                        {
                          "x": 0,
                          "y": 0.4675,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": 0.4049,
                          "z": -0.2338
                        },
                        {
                          "x": -0.1169,
                          "y": 0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": 0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": -0.2338,
                          "y": 0.4049,
                          "z": 0
                        },
                        {
                          "x": -0.2024,
                          "y": 0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": -0.1169,
                          "y": 0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0,
                          "y": 0.4049,
                          "z": 0.2338
                        },
                        {
                          "x": 0.1169,
                          "y": 0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": 0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": 0.2338,
                          "y": 0.4049,
                          "z": 0
                        },
                        {
                          "x": 0.2024,
                          "y": 0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": 0.1169,
                          "y": 0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": 0,
                          "y": 0.2338,
                          "z": -0.4049
                        },
                        {
                          "x": -0.2024,
                          "y": 0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": -0.3506,
                          "y": 0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": -0.4049,
                          "y": 0.2338,
                          "z": 0
                        },
                        {
                          "x": -0.3506,
                          "y": 0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": 0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0,
                          "y": 0.2338,
                          "z": 0.4049
                        },
                        {
                          "x": 0.2024,
                          "y": 0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0.3506,
                          "y": 0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": 0.4049,
                          "y": 0.2338,
                          "z": 0
                        },
                        {
                          "x": 0.3506,
                          "y": 0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": 0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -0.4675
                        },
                        {
                          "x": -0.2338,
                          "y": 0,
                          "z": -0.4049
                        },
                        {
                          "x": -0.4049,
                          "y": 0,
                          "z": -0.2338
                        },
                        {
                          "x": -0.4675,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": -0.4049,
                          "y": 0,
                          "z": 0.2338
                        },
                        {
                          "x": -0.2338,
                          "y": 0,
                          "z": 0.4049
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 0.4675
                        },
                        {
                          "x": 0.2338,
                          "y": 0,
                          "z": 0.4049
                        },
                        {
                          "x": 0.4049,
                          "y": 0,
                          "z": 0.2338
                        },
                        {
                          "x": 0.4675,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0.4049,
                          "y": 0,
                          "z": -0.2338
                        },
                        {
                          "x": 0.2338,
                          "y": 0,
                          "z": -0.4049
                        },
                        {
                          "x": 0,
                          "y": -0.2338,
                          "z": -0.4049
                        },
                        {
                          "x": -0.2024,
                          "y": -0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": -0.3506,
                          "y": -0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": -0.4049,
                          "y": -0.2338,
                          "z": 0
                        },
                        {
                          "x": -0.3506,
                          "y": -0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": -0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0,
                          "y": -0.2338,
                          "z": 0.4049
                        },
                        {
                          "x": 0.2024,
                          "y": -0.2338,
                          "z": 0.3506
                        },
                        {
                          "x": 0.3506,
                          "y": -0.2338,
                          "z": 0.2024
                        },
                        {
                          "x": 0.4049,
                          "y": -0.2338,
                          "z": 0
                        },
                        {
                          "x": 0.3506,
                          "y": -0.2338,
                          "z": -0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": -0.2338,
                          "z": -0.3506
                        },
                        {
                          "x": 0,
                          "y": -0.4049,
                          "z": -0.2338
                        },
                        {
                          "x": -0.1169,
                          "y": -0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": -0.2024,
                          "y": -0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": -0.2338,
                          "y": -0.4049,
                          "z": 0
                        },
                        {
                          "x": -0.2024,
                          "y": -0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": -0.1169,
                          "y": -0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0,
                          "y": -0.4049,
                          "z": 0.2338
                        },
                        {
                          "x": 0.1169,
                          "y": -0.4049,
                          "z": 0.2024
                        },
                        {
                          "x": 0.2024,
                          "y": -0.4049,
                          "z": 0.1169
                        },
                        {
                          "x": 0.2338,
                          "y": -0.4049,
                          "z": 0
                        },
                        {
                          "x": 0.2024,
                          "y": -0.4049,
                          "z": -0.1169
                        },
                        {
                          "x": 0.1169,
                          "y": -0.4049,
                          "z": -0.2024
                        },
                        {
                          "x": 0,
                          "y": -0.4675,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "DEF": "ball_IndexedFaceSet",
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
                      5
                    ],
                    [
                      0,
                      5,
                      6
                    ],
                    [
                      0,
                      6,
                      7
                    ],
                    [
                      0,
                      7,
                      8
                    ],
                    [
                      0,
                      8,
                      9
                    ],
                    [
                      0,
                      9,
                      10
                    ],
                    [
                      0,
                      10,
                      11
                    ],
                    [
                      0,
                      11,
                      12
                    ],
                    [
                      0,
                      12,
                      1
                    ],
                    [
                      1,
                      13,
                      14
                    ],
                    [
                      1,
                      14,
                      2
                    ],
                    [
                      2,
                      14,
                      15
                    ],
                    [
                      2,
                      15,
                      3
                    ],
                    [
                      3,
                      15,
                      16
                    ],
                    [
                      3,
                      16,
                      4
                    ],
                    [
                      4,
                      16,
                      17
                    ],
                    [
                      4,
                      17,
                      5
                    ],
                    [
                      5,
                      17,
                      18
                    ],
                    [
                      5,
                      18,
                      6
                    ],
                    [
                      6,
                      18,
                      19
                    ],
                    [
                      6,
                      19,
                      7
                    ],
                    [
                      7,
                      19,
                      20
                    ],
                    [
                      7,
                      20,
                      8
                    ],
                    [
                      8,
                      20,
                      21
                    ],
                    [
                      8,
                      21,
                      9
                    ],
                    [
                      9,
                      21,
                      22
                    ],
                    [
                      9,
                      22,
                      10
                    ],
                    [
                      10,
                      22,
                      23
                    ],
                    [
                      10,
                      23,
                      11
                    ],
                    [
                      11,
                      23,
                      24
                    ],
                    [
                      11,
                      24,
                      12
                    ],
                    [
                      12,
                      24,
                      13
                    ],
                    [
                      12,
                      13,
                      1
                    ],
                    [
                      13,
                      25,
                      26
                    ],
                    [
                      13,
                      26,
                      14
                    ],
                    [
                      14,
                      26,
                      27
                    ],
                    [
                      14,
                      27,
                      15
                    ],
                    [
                      15,
                      27,
                      28
                    ],
                    [
                      15,
                      28,
                      16
                    ],
                    [
                      16,
                      28,
                      29
                    ],
                    [
                      16,
                      29,
                      17
                    ],
                    [
                      17,
                      29,
                      30
                    ],
                    [
                      17,
                      30,
                      18
                    ],
                    [
                      18,
                      30,
                      31
                    ],
                    [
                      18,
                      31,
                      19
                    ],
                    [
                      19,
                      31,
                      32
                    ],
                    [
                      19,
                      32,
                      20
                    ],
                    [
                      20,
                      32,
                      33
                    ],
                    [
                      20,
                      33,
                      21
                    ],
                    [
                      21,
                      33,
                      34
                    ],
                    [
                      21,
                      34,
                      22
                    ],
                    [
                      22,
                      34,
                      35
                    ],
                    [
                      22,
                      35,
                      23
                    ],
                    [
                      23,
                      35,
                      36
                    ],
                    [
                      23,
                      36,
                      24
                    ],
                    [
                      24,
                      36,
                      25
                    ],
                    [
                      24,
                      25,
                      13
                    ],
                    [
                      25,
                      37,
                      38
                    ],
                    [
                      25,
                      38,
                      26
                    ],
                    [
                      26,
                      38,
                      39
                    ],
                    [
                      26,
                      39,
                      27
                    ],
                    [
                      27,
                      39,
                      40
                    ],
                    [
                      27,
                      40,
                      28
                    ],
                    [
                      28,
                      40,
                      41
                    ],
                    [
                      28,
                      41,
                      29
                    ],
                    [
                      29,
                      41,
                      42
                    ],
                    [
                      29,
                      42,
                      30
                    ],
                    [
                      30,
                      42,
                      43
                    ],
                    [
                      30,
                      43,
                      31
                    ],
                    [
                      31,
                      43,
                      44
                    ],
                    [
                      31,
                      44,
                      32
                    ],
                    [
                      32,
                      44,
                      45
                    ],
                    [
                      32,
                      45,
                      33
                    ],
                    [
                      33,
                      45,
                      46
                    ],
                    [
                      33,
                      46,
                      34
                    ],
                    [
                      34,
                      46,
                      47
                    ],
                    [
                      34,
                      47,
                      35
                    ],
                    [
                      35,
                      47,
                      48
                    ],
                    [
                      35,
                      48,
                      36
                    ],
                    [
                      36,
                      48,
                      37
                    ],
                    [
                      36,
                      37,
                      25
                    ],
                    [
                      37,
                      49,
                      50
                    ],
                    [
                      37,
                      50,
                      38
                    ],
                    [
                      38,
                      50,
                      51
                    ],
                    [
                      38,
                      51,
                      39
                    ],
                    [
                      39,
                      51,
                      52
                    ],
                    [
                      39,
                      52,
                      40
                    ],
                    [
                      40,
                      52,
                      53
                    ],
                    [
                      40,
                      53,
                      41
                    ],
                    [
                      41,
                      53,
                      54
                    ],
                    [
                      41,
                      54,
                      42
                    ],
                    [
                      42,
                      54,
                      55
                    ],
                    [
                      42,
                      55,
                      43
                    ],
                    [
                      43,
                      55,
                      56
                    ],
                    [
                      43,
                      56,
                      44
                    ],
                    [
                      44,
                      56,
                      57
                    ],
                    [
                      44,
                      57,
                      45
                    ],
                    [
                      45,
                      57,
                      58
                    ],
                    [
                      45,
                      58,
                      46
                    ],
                    [
                      46,
                      58,
                      59
                    ],
                    [
                      46,
                      59,
                      47
                    ],
                    [
                      47,
                      59,
                      60
                    ],
                    [
                      47,
                      60,
                      48
                    ],
                    [
                      48,
                      60,
                      49
                    ],
                    [
                      48,
                      49,
                      37
                    ],
                    [
                      61,
                      50,
                      49
                    ],
                    [
                      61,
                      51,
                      50
                    ],
                    [
                      61,
                      52,
                      51
                    ],
                    [
                      61,
                      53,
                      52
                    ],
                    [
                      61,
                      54,
                      53
                    ],
                    [
                      61,
                      55,
                      54
                    ],
                    [
                      61,
                      56,
                      55
                    ],
                    [
                      61,
                      57,
                      56
                    ],
                    [
                      61,
                      58,
                      57
                    ],
                    [
                      61,
                      59,
                      58
                    ],
                    [
                      61,
                      60,
                      59
                    ],
                    [
                      61,
                      49,
                      60
                    ]
                  ]
                }
              ],
              "DEF": "ball_Shape"
            },
            {
              "string": " viewpoint DEF ballView_1",
              "nodeType": "viewpoint",
              "children": [],
              "DEF": "ballView_1",
              "description": "Ball View"
            }
          ],
          "DEF": "SBall",
          "rotation": {
            "x": 0.7,
            "y": 0,
            "z": 0.7,
            "w": 0.1
          },
          "scale": {
            "x": 0.23,
            "y": 0.23,
            "z": 0.23
          },
          "translation": {
            "x": -0.916,
            "y": 0.37,
            "z": -0.92
          }
        },
        "/*Ball Animation interpolators*/",
        {
          "string": " positioninterpolator DEF ballTransInterp",
          "nodeType": "positioninterpolator",
          "children": [],
          "DEF": "ballTransInterp",
          "key": [
            0,
            0.4,
            0.409,
            1
          ],
          "keyValue": [
            {
              "x": -1,
              "y": 0.4,
              "z": -1
            },
            {
              "x": 0,
              "y": 0.07,
              "z": 0
            },
            {
              "x": 0.05,
              "y": 0.06,
              "z": 0.05
            },
            {
              "x": 2,
              "y": 4,
              "z": 10
            }
          ]
        },
        {
          "string": " orientationinterpolator DEF ballRotInterp",
          "nodeType": "orientationinterpolator",
          "children": [],
          "DEF": "ballRotInterp",
          "key": [
            0,
            0.4,
            0.41,
            0.71,
            1
          ],
          "keyValue": [
            {
              "x": 1,
              "y": 0,
              "z": 1,
              "w": 0.25
            },
            {
              "x": -1,
              "y": 0,
              "z": -1,
              "w": 1.35
            },
            {
              "x": -1,
              "y": 1,
              "z": -1,
              "w": 3.35
            },
            {
              "x": -1,
              "y": 0.2,
              "z": -1,
              "w": 3
            },
            {
              "x": -1,
              "y": 0.2,
              "z": -1,
              "w": 3
            }
          ]
        },
        "/*Ball Animation Routes*/",
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "fraction_changed",
          "fromNode": "KickTimer",
          "toField": "set_fraction",
          "toNode": "ballTransInterp"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "value_changed",
          "fromNode": "ballTransInterp",
          "toField": "set_translation",
          "toNode": "SBall"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "fraction_changed",
          "fromNode": "KickTimer",
          "toField": "set_fraction",
          "toNode": "ballRotInterp"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "value_changed",
          "fromNode": "ballRotInterp",
          "toField": "set_rotation",
          "toNode": "SBall"
        }
      ]
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE AxisLinesShape",
              "nodeType": "shape",
              "children": [],
              "USE": "AxisLinesShape"
            }
          ],
          "scale": {
            "x": 0.2,
            "y": 0.2,
            "z": 0.2
          }
        },
        {
          "string": " transform DEF Circle0",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF circle_Shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance DEF circle0_Appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material DEF circle0_Material",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "circle0_Material",
                      "ambientIntensity": 0.9,
                      "diffuseColor": {
                        "r": 0.9,
                        "g": 0,
                        "b": 0.7
                      },
                      "emissiveColor": {
                        "r": 0.425,
                        "g": 0.486,
                        "b": 1
                      }
                    }
                  ],
                  "DEF": "circle0_Appearance"
                },
                {
                  "string": "geometry indexedlineset DEF Orbit1",
                  "nodeType": "indexedlineset",
                  "children": [
                    {
                      "string": "coord coordinate DEF circle_Coordinates",
                      "nodeType": "coordinate",
                      "children": [],
                      "DEF": "circle_Coordinates",
                      "point": [
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0.995,
                          "y": 0,
                          "z": -0.105
                        },
                        {
                          "x": 0.979,
                          "y": 0,
                          "z": -0.208
                        },
                        {
                          "x": 0.951,
                          "y": 0,
                          "z": -0.309
                        },
                        {
                          "x": 0.914,
                          "y": 0,
                          "z": -0.407
                        },
                        {
                          "x": 0.866,
                          "y": 0,
                          "z": -0.5
                        },
                        {
                          "x": 0.809,
                          "y": 0,
                          "z": -0.588
                        },
                        {
                          "x": 0.743,
                          "y": 0,
                          "z": -0.669
                        },
                        {
                          "x": 0.669,
                          "y": 0,
                          "z": -0.743
                        },
                        {
                          "x": 0.588,
                          "y": 0,
                          "z": -0.809
                        },
                        {
                          "x": 0.5,
                          "y": 0,
                          "z": -0.866
                        },
                        {
                          "x": 0.407,
                          "y": 0,
                          "z": -0.914
                        },
                        {
                          "x": 0.309,
                          "y": 0,
                          "z": -0.951
                        },
                        {
                          "x": 0.208,
                          "y": 0,
                          "z": -0.978
                        },
                        {
                          "x": 0.105,
                          "y": 0,
                          "z": -0.995
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -1
                        },
                        {
                          "x": -0.105,
                          "y": 0,
                          "z": -0.994522
                        },
                        {
                          "x": -0.208,
                          "y": 0,
                          "z": -0.978
                        },
                        {
                          "x": -0.309,
                          "y": 0,
                          "z": -0.951
                        },
                        {
                          "x": -0.407,
                          "y": 0,
                          "z": -0.914
                        },
                        {
                          "x": -0.5,
                          "y": 0,
                          "z": -0.866
                        },
                        {
                          "x": -0.588,
                          "y": 0,
                          "z": -0.809
                        },
                        {
                          "x": -0.669,
                          "y": 0,
                          "z": -0.743
                        },
                        {
                          "x": -0.743,
                          "y": 0,
                          "z": -0.669
                        },
                        {
                          "x": -0.809,
                          "y": 0,
                          "z": -0.588
                        },
                        {
                          "x": -0.866,
                          "y": 0,
                          "z": -0.5
                        },
                        {
                          "x": -0.914,
                          "y": 0,
                          "z": -0.407
                        },
                        {
                          "x": -0.951,
                          "y": 0,
                          "z": -0.309
                        },
                        {
                          "x": -0.978,
                          "y": 0,
                          "z": -0.208
                        },
                        {
                          "x": -0.995,
                          "y": 0,
                          "z": -0.105
                        },
                        {
                          "x": -1,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": -0.995,
                          "y": 0,
                          "z": 0.105
                        },
                        {
                          "x": -0.978,
                          "y": 0,
                          "z": 0.208
                        },
                        {
                          "x": -0.951,
                          "y": 0,
                          "z": 0.309
                        },
                        {
                          "x": -0.914,
                          "y": 0,
                          "z": 0.407
                        },
                        {
                          "x": -0.866,
                          "y": 0,
                          "z": 0.5
                        },
                        {
                          "x": -0.809,
                          "y": 0,
                          "z": 0.588
                        },
                        {
                          "x": -0.743,
                          "y": 0,
                          "z": 0.669
                        },
                        {
                          "x": -0.669,
                          "y": 0,
                          "z": 0.743
                        },
                        {
                          "x": -0.588,
                          "y": 0,
                          "z": 0.809
                        },
                        {
                          "x": -0.5,
                          "y": 0,
                          "z": 0.866
                        },
                        {
                          "x": -0.407,
                          "y": 0,
                          "z": 0.914
                        },
                        {
                          "x": -0.309,
                          "y": 0,
                          "z": 0.951
                        },
                        {
                          "x": -0.208,
                          "y": 0,
                          "z": 0.978
                        },
                        {
                          "x": -0.105,
                          "y": 0,
                          "z": 0.995
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 1
                        },
                        {
                          "x": 0.105,
                          "y": 0,
                          "z": 0.995
                        },
                        {
                          "x": 0.208,
                          "y": 0,
                          "z": 0.978
                        },
                        {
                          "x": 0.309,
                          "y": 0,
                          "z": 0.951
                        },
                        {
                          "x": 0.407,
                          "y": 0,
                          "z": 0.914
                        },
                        {
                          "x": 0.5,
                          "y": 0,
                          "z": 0.866
                        },
                        {
                          "x": 0.588,
                          "y": 0,
                          "z": 0.809
                        },
                        {
                          "x": 0.669,
                          "y": 0,
                          "z": 0.743
                        },
                        {
                          "x": 0.743,
                          "y": 0,
                          "z": 0.669
                        },
                        {
                          "x": 0.809,
                          "y": 0,
                          "z": 0.588
                        },
                        {
                          "x": 0.866,
                          "y": 0,
                          "z": 0.5
                        },
                        {
                          "x": 0.914,
                          "y": 0,
                          "z": 0.407
                        },
                        {
                          "x": 0.951,
                          "y": 0,
                          "z": 0.309
                        },
                        {
                          "x": 0.978,
                          "y": 0,
                          "z": 0.208
                        },
                        {
                          "x": 0.995,
                          "y": 0,
                          "z": 0.104
                        },
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0
                        }
                      ],
                      "points": [
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0.995,
                          "y": 0,
                          "z": -0.105
                        },
                        {
                          "x": 0.979,
                          "y": 0,
                          "z": -0.208
                        },
                        {
                          "x": 0.951,
                          "y": 0,
                          "z": -0.309
                        },
                        {
                          "x": 0.914,
                          "y": 0,
                          "z": -0.407
                        },
                        {
                          "x": 0.866,
                          "y": 0,
                          "z": -0.5
                        },
                        {
                          "x": 0.809,
                          "y": 0,
                          "z": -0.588
                        },
                        {
                          "x": 0.743,
                          "y": 0,
                          "z": -0.669
                        },
                        {
                          "x": 0.669,
                          "y": 0,
                          "z": -0.743
                        },
                        {
                          "x": 0.588,
                          "y": 0,
                          "z": -0.809
                        },
                        {
                          "x": 0.5,
                          "y": 0,
                          "z": -0.866
                        },
                        {
                          "x": 0.407,
                          "y": 0,
                          "z": -0.914
                        },
                        {
                          "x": 0.309,
                          "y": 0,
                          "z": -0.951
                        },
                        {
                          "x": 0.208,
                          "y": 0,
                          "z": -0.978
                        },
                        {
                          "x": 0.105,
                          "y": 0,
                          "z": -0.995
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -1
                        },
                        {
                          "x": -0.105,
                          "y": 0,
                          "z": -0.994522
                        },
                        {
                          "x": -0.208,
                          "y": 0,
                          "z": -0.978
                        },
                        {
                          "x": -0.309,
                          "y": 0,
                          "z": -0.951
                        },
                        {
                          "x": -0.407,
                          "y": 0,
                          "z": -0.914
                        },
                        {
                          "x": -0.5,
                          "y": 0,
                          "z": -0.866
                        },
                        {
                          "x": -0.588,
                          "y": 0,
                          "z": -0.809
                        },
                        {
                          "x": -0.669,
                          "y": 0,
                          "z": -0.743
                        },
                        {
                          "x": -0.743,
                          "y": 0,
                          "z": -0.669
                        },
                        {
                          "x": -0.809,
                          "y": 0,
                          "z": -0.588
                        },
                        {
                          "x": -0.866,
                          "y": 0,
                          "z": -0.5
                        },
                        {
                          "x": -0.914,
                          "y": 0,
                          "z": -0.407
                        },
                        {
                          "x": -0.951,
                          "y": 0,
                          "z": -0.309
                        },
                        {
                          "x": -0.978,
                          "y": 0,
                          "z": -0.208
                        },
                        {
                          "x": -0.995,
                          "y": 0,
                          "z": -0.105
                        },
                        {
                          "x": -1,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": -0.995,
                          "y": 0,
                          "z": 0.105
                        },
                        {
                          "x": -0.978,
                          "y": 0,
                          "z": 0.208
                        },
                        {
                          "x": -0.951,
                          "y": 0,
                          "z": 0.309
                        },
                        {
                          "x": -0.914,
                          "y": 0,
                          "z": 0.407
                        },
                        {
                          "x": -0.866,
                          "y": 0,
                          "z": 0.5
                        },
                        {
                          "x": -0.809,
                          "y": 0,
                          "z": 0.588
                        },
                        {
                          "x": -0.743,
                          "y": 0,
                          "z": 0.669
                        },
                        {
                          "x": -0.669,
                          "y": 0,
                          "z": 0.743
                        },
                        {
                          "x": -0.588,
                          "y": 0,
                          "z": 0.809
                        },
                        {
                          "x": -0.5,
                          "y": 0,
                          "z": 0.866
                        },
                        {
                          "x": -0.407,
                          "y": 0,
                          "z": 0.914
                        },
                        {
                          "x": -0.309,
                          "y": 0,
                          "z": 0.951
                        },
                        {
                          "x": -0.208,
                          "y": 0,
                          "z": 0.978
                        },
                        {
                          "x": -0.105,
                          "y": 0,
                          "z": 0.995
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 1
                        },
                        {
                          "x": 0.105,
                          "y": 0,
                          "z": 0.995
                        },
                        {
                          "x": 0.208,
                          "y": 0,
                          "z": 0.978
                        },
                        {
                          "x": 0.309,
                          "y": 0,
                          "z": 0.951
                        },
                        {
                          "x": 0.407,
                          "y": 0,
                          "z": 0.914
                        },
                        {
                          "x": 0.5,
                          "y": 0,
                          "z": 0.866
                        },
                        {
                          "x": 0.588,
                          "y": 0,
                          "z": 0.809
                        },
                        {
                          "x": 0.669,
                          "y": 0,
                          "z": 0.743
                        },
                        {
                          "x": 0.743,
                          "y": 0,
                          "z": 0.669
                        },
                        {
                          "x": 0.809,
                          "y": 0,
                          "z": 0.588
                        },
                        {
                          "x": 0.866,
                          "y": 0,
                          "z": 0.5
                        },
                        {
                          "x": 0.914,
                          "y": 0,
                          "z": 0.407
                        },
                        {
                          "x": 0.951,
                          "y": 0,
                          "z": 0.309
                        },
                        {
                          "x": 0.978,
                          "y": 0,
                          "z": 0.208
                        },
                        {
                          "x": 0.995,
                          "y": 0,
                          "z": 0.104
                        },
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "DEF": "Orbit1",
                  "coordIndex": [
                    [
                      0,
                      1,
                      2,
                      3,
                      4,
                      5,
                      6,
                      7,
                      8,
                      9,
                      10,
                      11,
                      12,
                      13,
                      14,
                      15,
                      16,
                      17,
                      18,
                      19,
                      20,
                      21,
                      22,
                      23,
                      24,
                      25,
                      26,
                      27,
                      28,
                      29,
                      30,
                      31,
                      32,
                      33,
                      34,
                      35,
                      36,
                      37,
                      38,
                      39,
                      40,
                      41,
                      42,
                      43,
                      44,
                      45,
                      46,
                      47,
                      48,
                      49,
                      50,
                      51,
                      52,
                      53,
                      54,
                      55,
                      56,
                      57,
                      58,
                      59,
                      60
                    ]
                  ]
                }
              ],
              "DEF": "circle_Shape"
            }
          ],
          "DEF": "Circle0",
          "scale": {
            "x": 1.175,
            "y": 1,
            "z": 1.175
          }
        },
        {
          "string": " transform DEF Circle1",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF circle1_Shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance DEF circle1_Appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material DEF circle1_Material",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "circle1_Material",
                      "diffuseColor": {
                        "r": 0.9,
                        "g": 0,
                        "b": 0.7
                      },
                      "emissiveColor": {
                        "r": 0.424956,
                        "g": 0.483976,
                        "b": 1
                      }
                    }
                  ],
                  "DEF": "circle1_Appearance"
                },
                {
                  "string": "geometry indexedlineset USE Orbit1",
                  "nodeType": "indexedlineset",
                  "children": [],
                  "USE": "Orbit1"
                }
              ],
              "DEF": "circle1_Shape"
            }
          ],
          "DEF": "Circle1",
          "scale": {
            "x": 0.5,
            "y": 1,
            "z": 0.5
          }
        },
        {
          "string": " transform DEF Circle2",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF circle2_Shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance DEF circle2_Appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material DEF circle2_Material",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "circle2_Material",
                      "diffuseColor": {
                        "r": 0.9,
                        "g": 0,
                        "b": 0.7
                      },
                      "emissiveColor": {
                        "r": 0.424956,
                        "g": 0.483976,
                        "b": 1
                      }
                    }
                  ],
                  "DEF": "circle2_Appearance"
                },
                {
                  "string": "geometry indexedlineset USE Orbit1",
                  "nodeType": "indexedlineset",
                  "children": [],
                  "USE": "Orbit1"
                }
              ],
              "DEF": "circle2_Shape"
            }
          ],
          "DEF": "Circle2",
          "scale": {
            "x": 0.25,
            "y": 1,
            "z": 0.25
          }
        }
      ]
    }
  ]
}