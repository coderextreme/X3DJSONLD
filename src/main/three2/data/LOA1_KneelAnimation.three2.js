{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "LOA1_KneelAnimation.x3d"
    },
    {
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protointerface",
          "nodeType": "protointerface",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " timesensor DEF TIMER",
                  "nodeType": "timesensor",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "TIMER"
                },
                {
                  "string": " positioninterpolator DEF HUMANOIDROOT_POSITION_ANIMATOR",
                  "nodeType": "positioninterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "HUMANOIDROOT_POSITION_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.049999,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.195,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.439997,
                      "z": 0
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF HUMANOIDROOT_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "HUMANOIDROOT_ANIMATOR",
                  "key": [
                    0,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0,
                      "y": 1,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": 0,
                      "y": 1,
                      "z": 0,
                      "w": 0
                    }
                  ]
                },
                "/*no SACROILIAC_ANIMATOR*/",
                {
                  "string": " orientationinterpolator DEF L_HIP_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "L_HIP_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.619393
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 1.069302
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 1.937315
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF L_KNEE_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "L_KNEE_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.615228
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.984524
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 2.076941
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF L_ANKLE_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "L_ANKLE_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.017453
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.069812
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.261799
                    }
                  ]
                },
                "/*no L_MIDTARSAL_ANIMATOR*/",
                {
                  "string": " orientationinterpolator DEF R_HIP_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "R_HIP_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.523598
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.157079
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF R_KNEE_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "R_KNEE_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.349065
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.023397
                    },
                    {
                      "x": 0.999934,
                      "y": 0.008043,
                      "z": 0.008185,
                      "w": 1.727938
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF R_ANKLE_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "R_ANKLE_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -0.991692,
                      "y": -0.072372,
                      "z": 0.106338,
                      "w": 0.205053
                    },
                    {
                      "x": -0.981083,
                      "y": -0.103267,
                      "z": 0.163741,
                      "w": 0.272231
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.349065
                    }
                  ]
                },
                "/*no R_MIDTARSAL_ANIMATOR*/",
                {
                  "string": " orientationinterpolator DEF VL5_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "VL5_ANIMATOR",
                  "key": [
                    0,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.174533
                    }
                  ]
                },
                "/*no SKULLBASE_ANIMATOR*/",
                {
                  "string": " orientationinterpolator DEF L_SHOULDER_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "L_SHOULDER_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.279252
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.506145
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.191986
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF L_ELBOW_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "L_ELBOW_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.052359
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.296706
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 1.431169
                    }
                  ]
                },
                "/*no L_WRIST_ANIMATOR*/",
                {
                  "string": " orientationinterpolator DEF R_SHOULDER_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "R_SHOULDER_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.104719
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.157079
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.314159
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF R_ELBOW_ANIMATOR",
                  "nodeType": "orientationinterpolator",
                  "children": [
                    {
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    }
                  ],
                  "DEF": "R_ELBOW_ANIMATOR",
                  "key": [
                    0,
                    0.3125,
                    0.625,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.837757
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 1.239183
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 1.500983
                    }
                  ]
                },
                "/*no R_WRIST_ANIMATOR*/"
              ]
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "HUMANOIDROOT_POSITION_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "HUMANOIDROOT_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "L_HIP_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "L_KNEE_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "L_ANKLE_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "R_HIP_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "R_KNEE_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "R_ANKLE_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "VL5_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "L_SHOULDER_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "L_ELBOW_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "R_SHOULDER_ANIMATOR"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "R_ELBOW_ANIMATOR"
            }
          ]
        }
      ],
      "name": "LOA1_KneelAnimation"
    },
    {
      "string": " anchor",
      "nodeType": "anchor",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": [
                "LOA1_KneelAnimation.x3d",
                "defines a prototype",
                "for animating a humanoid.",
                "",
                "Click this text to see",
                "InterchangableActorsViaDynamicRouting example."
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle",
                  "nodeType": "fontstyle",
                  "children": [],
                  "justify": [
                    "MIDDLE",
                    "MIDDLE"
                  ],
                  "size": 0.8
                }
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
                    "b": 0.2
                  }
                }
              ]
            }
          ]
        }
      ],
      "description": "InterchangableActorsViaDynamicRouting",
      "parameter": [
        "target=_blank"
      ],
      "url": [
        "InterchangableActorsViaDynamicRouting.x3d",
        "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d",
        "InterchangableActorsViaDynamicRouting.wrl",
        "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"
      ]
    }
  ]
}