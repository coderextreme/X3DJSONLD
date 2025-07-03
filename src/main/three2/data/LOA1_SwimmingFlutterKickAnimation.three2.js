{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "LOA1_SwimmingFlutterKickAnimation.x3d"
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
                  "DEF": "TIMER",
                  "loop": true
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
                    0.04167,
                    0.125,
                    0.1667,
                    0.2083,
                    0.25,
                    0.2917,
                    0.375,
                    0.4583,
                    0.5,
                    0.5417,
                    0.5833,
                    0.625,
                    0.7083,
                    0.75,
                    0.7917,
                    0.875,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0,
                      "y": -0.00928,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.003858,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.008847,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.01486,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.02641,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.03934,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.0502,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.07469,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.02732,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.01608,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.01129,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.005819,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.002004,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.002579,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.0143,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.03799,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.05648,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.045,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.00928,
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
                    0.25,
                    0.375,
                    0.6667,
                    0.7917,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": -0.873,
                      "y": 0.06094,
                      "z": 0.484,
                      "w": 0.2865
                    },
                    {
                      "x": 0.9963,
                      "y": -0.01057,
                      "z": 0.08481,
                      "w": 0.2488
                    },
                    {
                      "x": 0.9965,
                      "y": 0.01591,
                      "z": -0.08222,
                      "w": 0.3836
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5518
                    },
                    {
                      "x": -0.9964,
                      "y": 0.02231,
                      "z": 0.0817,
                      "w": 0.5351
                    },
                    {
                      "x": -0.9809,
                      "y": 0.04912,
                      "z": 0.1881,
                      "w": 0.5204
                    },
                    {
                      "x": -0.873,
                      "y": 0.06094,
                      "z": 0.484,
                      "w": 0.2865
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
                    0.2083,
                    0.375,
                    0.5,
                    0.6667,
                    0.7917,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3226
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1556
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.08678
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8751
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.131
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.09961
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3942
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3226
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
                    0.125,
                    0.2083,
                    0.375,
                    0.4583,
                    0.5,
                    0.6667,
                    0.75,
                    0.7917,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6001
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
                    0.125,
                    0.2083,
                    0.2917,
                    0.5,
                    0.7917,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": -0.5831,
                      "y": 0.03511,
                      "z": 0.8116,
                      "w": 0.1481
                    },
                    {
                      "x": -0.995,
                      "y": 0.02296,
                      "z": 0.09674,
                      "w": 0.4683
                    },
                    {
                      "x": -1,
                      "y": 0.00192,
                      "z": 0.007964,
                      "w": 0.4732
                    },
                    {
                      "x": -0.998,
                      "y": -0.0158,
                      "z": -0.06102,
                      "w": 0.5079
                    },
                    {
                      "x": -0.9131,
                      "y": -0.06243,
                      "z": -0.403,
                      "w": 0.3361
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2571
                    },
                    {
                      "x": 0.9891,
                      "y": -0.02805,
                      "z": 0.1444,
                      "w": 0.3879
                    },
                    {
                      "x": -0.5831,
                      "y": 0.03511,
                      "z": 0.8116,
                      "w": 0.1481
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
                    0.125,
                    0.2083,
                    0.375,
                    0.5,
                    0.6667,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8573
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5351
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1756
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1194
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3153
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.09354
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.08558
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8573
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
                    0.125,
                    0.2083,
                    0.375,
                    0.4583,
                    0.5,
                    0.6667,
                    0.75,
                    0.7917,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8001
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8509
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.86001
                    }
                  ]
                },
                "/*no L_MIDTARSAL_ANIMATOR*/",
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
                    0.2083,
                    0.375,
                    0.75,
                    0.8333,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0,
                      "y": 1,
                      "z": 0,
                      "w": 0.0826
                    },
                    {
                      "x": -0.01972,
                      "y": -0.5974,
                      "z": 0.8017,
                      "w": 0.08231
                    },
                    {
                      "x": 0.009296,
                      "y": -0.9648,
                      "z": 0.2627,
                      "w": 0.1734
                    },
                    {
                      "x": -0.01238,
                      "y": 0.9549,
                      "z": -0.2968,
                      "w": 0.08732
                    },
                    {
                      "x": -0.008125,
                      "y": 0.9691,
                      "z": -0.2463,
                      "w": 0.158
                    },
                    {
                      "x": 0,
                      "y": 1,
                      "z": 0,
                      "w": 0.0826
                    }
                  ]
                },
                {
                  "string": " orientationinterpolator DEF SKULLBASE_ANIMATOR",
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
                  "DEF": "SKULLBASE_ANIMATOR",
                  "key": [
                    0,
                    0.28,
                    0.3,
                    0.32,
                    0.4,
                    0.45,
                    0.6,
                    0.65,
                    0.7,
                    0.75,
                    0.85,
                    0.9,
                    0.95,
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
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 1
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.999
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.99
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.99
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9
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
                    0.25,
                    0.375,
                    0.6667,
                    0.7917,
                    0.9167,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0,
                      "y": 0,
                      "z": 1,
                      "w": 0.1
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 1,
                      "w": 0.2
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 1,
                      "w": 0.2
                    },
                    {
                      "x": 0.86,
                      "y": 0.25,
                      "z": 0.42,
                      "w": 0.5
                    },
                    {
                      "x": 0.86,
                      "y": 0.25,
                      "z": 0.42,
                      "w": 0.8
                    },
                    {
                      "x": 0.86,
                      "y": 0.25,
                      "z": 0.42,
                      "w": 0.4
                    },
                    {
                      "x": 0.86,
                      "y": 0.25,
                      "z": 0.42,
                      "w": 0.2
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
                    0.28,
                    0.32,
                    0.64,
                    0.76,
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
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1229
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1229
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5976
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3917
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
                  "string": " orientationinterpolator DEF L_WRIST_ANIMATOR",
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
                  "DEF": "L_WRIST_ANIMATOR",
                  "key": [
                    0,
                    0.32,
                    0.64,
                    0.88,
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
                      "x": 0.067,
                      "y": 0.98,
                      "z": -0.128,
                      "w": 4.15
                    },
                    {
                      "x": 0.067,
                      "y": 0.98,
                      "z": -0.128,
                      "w": 4.15
                    },
                    {
                      "x": 0.067,
                      "y": 0.98,
                      "z": -0.128,
                      "w": 4.15
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
                    0.45,
                    0.64,
                    0.76,
                    0.88,
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
                      "x": 0.9992,
                      "y": 0.02042,
                      "z": 0.03558,
                      "w": 7.2
                    },
                    {
                      "x": 0.9989,
                      "y": -0.04623,
                      "z": 0.005159,
                      "w": 4.079
                    },
                    {
                      "x": -0.8687,
                      "y": -0.2525,
                      "z": -0.4261,
                      "w": 1.501
                    },
                    {
                      "x": -0.941,
                      "y": -0.2893,
                      "z": -0.1754,
                      "w": 0.4788
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
                    0.28,
                    0.32,
                    0.64,
                    0.76,
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
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.04151
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.04151
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5855
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5852
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
                  "string": " orientationinterpolator DEF R_WRIST_ANIMATOR",
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
                  "DEF": "R_WRIST_ANIMATOR",
                  "key": [
                    0,
                    0.28,
                    0.32,
                    0.64,
                    0.76,
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
                      "x": -0.0585279,
                      "y": 0.983903,
                      "z": -0.168849,
                      "w": 1.85956
                    },
                    {
                      "x": -0.0585279,
                      "y": 0.983903,
                      "z": -0.168849,
                      "w": 1.85956
                    },
                    {
                      "x": -0.00222418,
                      "y": 0.99801,
                      "z": -0.0630095,
                      "w": 1.46072
                    },
                    {
                      "x": 0,
                      "y": 1,
                      "z": 0,
                      "w": 0.497349
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
              "toNode": "SKULLBASE_ANIMATOR"
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
              "toNode": "L_WRIST_ANIMATOR"
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
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "fraction_changed",
              "fromNode": "TIMER",
              "toField": "set_fraction",
              "toNode": "R_WRIST_ANIMATOR"
            }
          ]
        }
      ],
      "name": "LOA1_DivingAnimation"
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "LOA1_SwimmingFlutterKickAnimation scene",
      "position": {
        "x": 0,
        "y": 0,
        "z": 12
      }
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
                "LOA1_SwimmingFlutterKickAnimation.x3d",
                "defines a prototype",
                "for animating a humanoid.",
                "",
                "Click text to see example."
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
      "description": "Nancy Diving",
      "parameter": [
        "target=_blank"
      ],
      "url": [
        "NancyDiving.x3d",
        "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d",
        "NancyDiving.wrl",
        "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"
      ]
    }
  ]
}