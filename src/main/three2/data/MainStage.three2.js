{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "MainStage.x3d"
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "headlight": false
    },
    {
      "string": " directionallight",
      "nodeType": "directionallight",
      "children": [],
      "ambientIntensity": 1,
      "direction": {
        "x": -0.5,
        "y": -0.5,
        "z": -0.5
      },
      "global": true
    },
    {
      "string": " directionallight",
      "nodeType": "directionallight",
      "children": [],
      "ambientIntensity": 1,
      "direction": {
        "x": -1,
        "y": -1,
        "z": -1
      },
      "global": true
    },
    {
      "string": " directionallight",
      "nodeType": "directionallight",
      "children": [],
      "ambientIntensity": 1,
      "direction": {
        "x": 1,
        "y": 1,
        "z": -1
      },
      "global": true,
      "intensity": 0.5
    },
    {
      "string": " viewpoint DEF Scene_StageFrontViewFar",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_StageFrontViewFar",
      "description": "hanim_Stage Front View",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -0.449999988
      },
      "position": {
        "x": 0,
        "y": 4,
        "z": 10
      }
    },
    {
      "string": " viewpoint DEF Scene_InclinedView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_InclinedView",
      "description": "hanim_Inclined View",
      "orientation": {
        "x": -0.112999998,
        "y": 0.992999971,
        "z": 0.034699999,
        "w": 0.671000004
      },
      "position": {
        "x": 2.619999886,
        "y": 1.049999952,
        "z": 4.059999943
      }
    },
    {
      "string": " viewpoint DEF Scene_StageFrontView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_StageFrontView",
      "description": "hanim_Stage Front View",
      "position": {
        "x": 0,
        "y": 1,
        "z": 5
      }
    },
    {
      "string": " viewpoint DEF Scene_FeetStageBottomView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_FeetStageBottomView",
      "description": "hanim_feet View",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": 1.570000052
      },
      "position": {
        "x": 0,
        "y": -10,
        "z": 0
      }
    },
    {
      "string": " viewpoint DEF Scene_HeadTopView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_HeadTopView",
      "description": "hanim_Head Top View",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -1.570000052
      },
      "position": {
        "x": 0,
        "y": 15,
        "z": 0
      }
    },
    {
      "string": " viewpoint DEF Scene_TopFrontCloseView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Scene_TopFrontCloseView",
      "description": "hanim_Head Top View",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -1.100000024
      },
      "position": {
        "x": 0,
        "y": 8,
        "z": 3
      }
    },
    {
      "string": " group DEF HAnimStage",
      "nodeType": "group",
      "children": [
        {
          "string": " transform DEF cordsysfloor",
          "nodeType": "transform",
          "children": [
            {
              "string": " inline",
              "nodeType": "inline",
              "children": [],
              "url": [
                "JointCoordinateAxes.x3dv"
              ]
            }
          ],
          "DEF": "cordsysfloor",
          "scale": {
            "x": 0.174999997,
            "y": 0.174999997,
            "z": 0.174999997
          }
        },
        {
          "string": " transform DEF StageGeometry",
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
                      "transparency": 0.6
                    }
                  ]
                },
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 9,
                    "y": 1,
                    "z": 9
                  }
                }
              ]
            },
            {
              "string": " transform DEF Circle0",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance DEF LineColor",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [],
                          "ambientIntensity": 1,
                          "diffuseColor": {
                            "r": 0.699999988,
                            "g": 0,
                            "b": 0.899999976
                          },
                          "emissiveColor": {
                            "r": 0.449999988,
                            "g": 0.449999988,
                            "b": 1
                          },
                          "shininess": 1,
                          "specularColor": {
                            "r": 0,
                            "g": 0,
                            "b": 1
                          }
                        }
                      ],
                      "DEF": "LineColor"
                    },
                    {
                      "string": "geometry indexedlineset DEF Orbit1",
                      "nodeType": "indexedlineset",
                      "children": [
                        {
                          "string": "coord coordinate",
                          "nodeType": "coordinate",
                          "children": [],
                          "point": [
                            {
                              "x": 1,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.995000005,
                              "y": 0,
                              "z": -0.104999997
                            },
                            {
                              "x": 0.978999972,
                              "y": 0,
                              "z": -0.208000004
                            },
                            {
                              "x": 0.950999975,
                              "y": 0,
                              "z": -0.308999985
                            },
                            {
                              "x": 0.913999975,
                              "y": 0,
                              "z": -0.407000005
                            },
                            {
                              "x": 0.865999997,
                              "y": 0,
                              "z": -0.5
                            },
                            {
                              "x": 0.809000015,
                              "y": 0,
                              "z": -0.588
                            },
                            {
                              "x": 0.742999971,
                              "y": 0,
                              "z": -0.66900003
                            },
                            {
                              "x": 0.66900003,
                              "y": 0,
                              "z": -0.742999971
                            },
                            {
                              "x": 0.588,
                              "y": 0,
                              "z": -0.809000015
                            },
                            {
                              "x": 0.5,
                              "y": 0,
                              "z": -0.865999997
                            },
                            {
                              "x": 0.407000005,
                              "y": 0,
                              "z": -0.913999975
                            },
                            {
                              "x": 0.308999985,
                              "y": 0,
                              "z": -0.950999975
                            },
                            {
                              "x": 0.208000004,
                              "y": 0,
                              "z": -0.977999985
                            },
                            {
                              "x": 0.104999997,
                              "y": 0,
                              "z": -0.995000005
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": -1
                            },
                            {
                              "x": -0.104999997,
                              "y": 0,
                              "z": -0.994521976
                            },
                            {
                              "x": -0.208000004,
                              "y": 0,
                              "z": -0.977999985
                            },
                            {
                              "x": -0.308999985,
                              "y": 0,
                              "z": -0.950999975
                            },
                            {
                              "x": -0.407000005,
                              "y": 0,
                              "z": -0.913999975
                            },
                            {
                              "x": -0.5,
                              "y": 0,
                              "z": -0.865999997
                            },
                            {
                              "x": -0.588,
                              "y": 0,
                              "z": -0.809000015
                            },
                            {
                              "x": -0.66900003,
                              "y": 0,
                              "z": -0.742999971
                            },
                            {
                              "x": -0.742999971,
                              "y": 0,
                              "z": -0.66900003
                            },
                            {
                              "x": -0.809000015,
                              "y": 0,
                              "z": -0.588
                            },
                            {
                              "x": -0.865999997,
                              "y": 0,
                              "z": -0.5
                            },
                            {
                              "x": -0.913999975,
                              "y": 0,
                              "z": -0.407000005
                            },
                            {
                              "x": -0.950999975,
                              "y": 0,
                              "z": -0.308999985
                            },
                            {
                              "x": -0.977999985,
                              "y": 0,
                              "z": -0.208000004
                            },
                            {
                              "x": -0.995000005,
                              "y": 0,
                              "z": -0.104999997
                            },
                            {
                              "x": -1,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": -0.995000005,
                              "y": 0,
                              "z": 0.104999997
                            },
                            {
                              "x": -0.977999985,
                              "y": 0,
                              "z": 0.208000004
                            },
                            {
                              "x": -0.950999975,
                              "y": 0,
                              "z": 0.308999985
                            },
                            {
                              "x": -0.913999975,
                              "y": 0,
                              "z": 0.407000005
                            },
                            {
                              "x": -0.865999997,
                              "y": 0,
                              "z": 0.5
                            },
                            {
                              "x": -0.809000015,
                              "y": 0,
                              "z": 0.588
                            },
                            {
                              "x": -0.742999971,
                              "y": 0,
                              "z": 0.66900003
                            },
                            {
                              "x": -0.66900003,
                              "y": 0,
                              "z": 0.742999971
                            },
                            {
                              "x": -0.588,
                              "y": 0,
                              "z": 0.809000015
                            },
                            {
                              "x": -0.5,
                              "y": 0,
                              "z": 0.865999997
                            },
                            {
                              "x": -0.407000005,
                              "y": 0,
                              "z": 0.913999975
                            },
                            {
                              "x": -0.308999985,
                              "y": 0,
                              "z": 0.950999975
                            },
                            {
                              "x": -0.208000004,
                              "y": 0,
                              "z": 0.977999985
                            },
                            {
                              "x": -0.104999997,
                              "y": 0,
                              "z": 0.995000005
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": 1
                            },
                            {
                              "x": 0.104999997,
                              "y": 0,
                              "z": 0.995000005
                            },
                            {
                              "x": 0.208000004,
                              "y": 0,
                              "z": 0.977999985
                            },
                            {
                              "x": 0.308999985,
                              "y": 0,
                              "z": 0.950999975
                            },
                            {
                              "x": 0.407000005,
                              "y": 0,
                              "z": 0.913999975
                            },
                            {
                              "x": 0.5,
                              "y": 0,
                              "z": 0.865999997
                            },
                            {
                              "x": 0.588,
                              "y": 0,
                              "z": 0.809000015
                            },
                            {
                              "x": 0.66900003,
                              "y": 0,
                              "z": 0.742999971
                            },
                            {
                              "x": 0.742999971,
                              "y": 0,
                              "z": 0.66900003
                            },
                            {
                              "x": 0.809000015,
                              "y": 0,
                              "z": 0.588
                            },
                            {
                              "x": 0.865999997,
                              "y": 0,
                              "z": 0.5
                            },
                            {
                              "x": 0.913999975,
                              "y": 0,
                              "z": 0.407000005
                            },
                            {
                              "x": 0.950999975,
                              "y": 0,
                              "z": 0.308999985
                            },
                            {
                              "x": 0.977999985,
                              "y": 0,
                              "z": 0.208000004
                            },
                            {
                              "x": 0.995000005,
                              "y": 0,
                              "z": 0.104000002
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
                              "x": 0.995000005,
                              "y": 0,
                              "z": -0.104999997
                            },
                            {
                              "x": 0.978999972,
                              "y": 0,
                              "z": -0.208000004
                            },
                            {
                              "x": 0.950999975,
                              "y": 0,
                              "z": -0.308999985
                            },
                            {
                              "x": 0.913999975,
                              "y": 0,
                              "z": -0.407000005
                            },
                            {
                              "x": 0.865999997,
                              "y": 0,
                              "z": -0.5
                            },
                            {
                              "x": 0.809000015,
                              "y": 0,
                              "z": -0.588
                            },
                            {
                              "x": 0.742999971,
                              "y": 0,
                              "z": -0.66900003
                            },
                            {
                              "x": 0.66900003,
                              "y": 0,
                              "z": -0.742999971
                            },
                            {
                              "x": 0.588,
                              "y": 0,
                              "z": -0.809000015
                            },
                            {
                              "x": 0.5,
                              "y": 0,
                              "z": -0.865999997
                            },
                            {
                              "x": 0.407000005,
                              "y": 0,
                              "z": -0.913999975
                            },
                            {
                              "x": 0.308999985,
                              "y": 0,
                              "z": -0.950999975
                            },
                            {
                              "x": 0.208000004,
                              "y": 0,
                              "z": -0.977999985
                            },
                            {
                              "x": 0.104999997,
                              "y": 0,
                              "z": -0.995000005
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": -1
                            },
                            {
                              "x": -0.104999997,
                              "y": 0,
                              "z": -0.994521976
                            },
                            {
                              "x": -0.208000004,
                              "y": 0,
                              "z": -0.977999985
                            },
                            {
                              "x": -0.308999985,
                              "y": 0,
                              "z": -0.950999975
                            },
                            {
                              "x": -0.407000005,
                              "y": 0,
                              "z": -0.913999975
                            },
                            {
                              "x": -0.5,
                              "y": 0,
                              "z": -0.865999997
                            },
                            {
                              "x": -0.588,
                              "y": 0,
                              "z": -0.809000015
                            },
                            {
                              "x": -0.66900003,
                              "y": 0,
                              "z": -0.742999971
                            },
                            {
                              "x": -0.742999971,
                              "y": 0,
                              "z": -0.66900003
                            },
                            {
                              "x": -0.809000015,
                              "y": 0,
                              "z": -0.588
                            },
                            {
                              "x": -0.865999997,
                              "y": 0,
                              "z": -0.5
                            },
                            {
                              "x": -0.913999975,
                              "y": 0,
                              "z": -0.407000005
                            },
                            {
                              "x": -0.950999975,
                              "y": 0,
                              "z": -0.308999985
                            },
                            {
                              "x": -0.977999985,
                              "y": 0,
                              "z": -0.208000004
                            },
                            {
                              "x": -0.995000005,
                              "y": 0,
                              "z": -0.104999997
                            },
                            {
                              "x": -1,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": -0.995000005,
                              "y": 0,
                              "z": 0.104999997
                            },
                            {
                              "x": -0.977999985,
                              "y": 0,
                              "z": 0.208000004
                            },
                            {
                              "x": -0.950999975,
                              "y": 0,
                              "z": 0.308999985
                            },
                            {
                              "x": -0.913999975,
                              "y": 0,
                              "z": 0.407000005
                            },
                            {
                              "x": -0.865999997,
                              "y": 0,
                              "z": 0.5
                            },
                            {
                              "x": -0.809000015,
                              "y": 0,
                              "z": 0.588
                            },
                            {
                              "x": -0.742999971,
                              "y": 0,
                              "z": 0.66900003
                            },
                            {
                              "x": -0.66900003,
                              "y": 0,
                              "z": 0.742999971
                            },
                            {
                              "x": -0.588,
                              "y": 0,
                              "z": 0.809000015
                            },
                            {
                              "x": -0.5,
                              "y": 0,
                              "z": 0.865999997
                            },
                            {
                              "x": -0.407000005,
                              "y": 0,
                              "z": 0.913999975
                            },
                            {
                              "x": -0.308999985,
                              "y": 0,
                              "z": 0.950999975
                            },
                            {
                              "x": -0.208000004,
                              "y": 0,
                              "z": 0.977999985
                            },
                            {
                              "x": -0.104999997,
                              "y": 0,
                              "z": 0.995000005
                            },
                            {
                              "x": 0,
                              "y": 0,
                              "z": 1
                            },
                            {
                              "x": 0.104999997,
                              "y": 0,
                              "z": 0.995000005
                            },
                            {
                              "x": 0.208000004,
                              "y": 0,
                              "z": 0.977999985
                            },
                            {
                              "x": 0.308999985,
                              "y": 0,
                              "z": 0.950999975
                            },
                            {
                              "x": 0.407000005,
                              "y": 0,
                              "z": 0.913999975
                            },
                            {
                              "x": 0.5,
                              "y": 0,
                              "z": 0.865999997
                            },
                            {
                              "x": 0.588,
                              "y": 0,
                              "z": 0.809000015
                            },
                            {
                              "x": 0.66900003,
                              "y": 0,
                              "z": 0.742999971
                            },
                            {
                              "x": 0.742999971,
                              "y": 0,
                              "z": 0.66900003
                            },
                            {
                              "x": 0.809000015,
                              "y": 0,
                              "z": 0.588
                            },
                            {
                              "x": 0.865999997,
                              "y": 0,
                              "z": 0.5
                            },
                            {
                              "x": 0.913999975,
                              "y": 0,
                              "z": 0.407000005
                            },
                            {
                              "x": 0.950999975,
                              "y": 0,
                              "z": 0.308999985
                            },
                            {
                              "x": 0.977999985,
                              "y": 0,
                              "z": 0.208000004
                            },
                            {
                              "x": 0.995000005,
                              "y": 0,
                              "z": 0.104000002
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
                  ]
                }
              ],
              "DEF": "Circle0"
            },
            {
              "string": " transform DEF Circle1",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE LineColor",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "LineColor"
                    },
                    {
                      "string": "geometry indexedlineset USE Orbit1",
                      "nodeType": "indexedlineset",
                      "children": [],
                      "USE": "Orbit1"
                    }
                  ]
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
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE LineColor",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "LineColor"
                    },
                    {
                      "string": "geometry indexedlineset USE Orbit1",
                      "nodeType": "indexedlineset",
                      "children": [],
                      "USE": "Orbit1"
                    }
                  ]
                }
              ],
              "DEF": "Circle2",
              "scale": {
                "x": 0.25,
                "y": 1,
                "z": 0.25
              }
            },
            {
              "string": " transform DEF Circle3",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE LineColor",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "LineColor"
                    },
                    {
                      "string": "geometry indexedlineset USE Orbit1",
                      "nodeType": "indexedlineset",
                      "children": [],
                      "USE": "Orbit1"
                    }
                  ]
                }
              ],
              "DEF": "Circle3",
              "scale": {
                "x": 2,
                "y": 1,
                "z": 2
              }
            },
            {
              "string": " transform DEF Circle4",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE LineColor",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "LineColor"
                    },
                    {
                      "string": "geometry indexedlineset USE Orbit1",
                      "nodeType": "indexedlineset",
                      "children": [],
                      "USE": "Orbit1"
                    }
                  ]
                }
              ],
              "DEF": "Circle4",
              "scale": {
                "x": 3,
                "y": 1,
                "z": 3
              }
            }
          ],
          "DEF": "StageGeometry",
          "scale": {
            "x": 1,
            "y": 0.01,
            "z": 1
          },
          "translation": {
            "x": 0,
            "y": -0.01,
            "z": 0
          }
        }
      ],
      "DEF": "HAnimStage"
    }
  ]
}