{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "LOA1_JumpAnimation.x3d"
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
                    0.04,
                    0.08,
                    0.12,
                    0.16,
                    0.2,
                    0.24,
                    0.28,
                    0.32,
                    0.36,
                    0.4,
                    0.44,
                    0.48,
                    0.64,
                    0.76,
                    0.8,
                    0.84,
                    0.88,
                    0.92,
                    0.96,
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
                      "y": -0.01264,
                      "z": -0.01289
                    },
                    {
                      "x": 0,
                      "y": -0.04712,
                      "z": -0.03738
                    },
                    {
                      "x": -0.0003345,
                      "y": -0.1049,
                      "z": -0.05353
                    },
                    {
                      "x": -0.0005712,
                      "y": -0.1892,
                      "z": -0.06561
                    },
                    {
                      "x": -0.0008233,
                      "y": -0.286,
                      "z": -0.06276
                    },
                    {
                      "x": -0.0009591,
                      "y": -0.3795,
                      "z": -0.05148
                    },
                    {
                      "x": -0.00106,
                      "y": -0.4484,
                      "z": -0.03656
                    },
                    {
                      "x": -0.00106,
                      "y": -0.4484,
                      "z": -0.03656
                    },
                    {
                      "x": -0.001122,
                      "y": -0.3269,
                      "z": -0.1499
                    },
                    {
                      "x": -0.0008616,
                      "y": -0.13,
                      "z": -0.06358
                    },
                    {
                      "x": -0.0005128,
                      "y": -0.03123,
                      "z": -0.05488
                    },
                    {
                      "x": 0.0004779,
                      "y": 0.053,
                      "z": 0.02732
                    },
                    {
                      "x": 0.0001728,
                      "y": 0.4148,
                      "z": 0.006873
                    },
                    {
                      "x": 0,
                      "y": 0.03045,
                      "z": 0.02148
                    },
                    {
                      "x": 0,
                      "y": -0.01299,
                      "z": -0.01057
                    },
                    {
                      "x": 0,
                      "y": -0.06932,
                      "z": -0.01064
                    },
                    {
                      "x": 0.0001365,
                      "y": -0.1037,
                      "z": -0.005059
                    },
                    {
                      "x": 0.0001279,
                      "y": -0.07198,
                      "z": -0.007596
                    },
                    {
                      "x": 0.000141,
                      "y": -0.01626,
                      "z": -0.004935
                    },
                    {
                      "x": 0,
                      "y": 0,
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
                    0.28,
                    0.32,
                    0.48,
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
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3273
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3273
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
                  "string": " orientationinterpolator DEF SACROILIAC_ANIMATOR",
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
                  "DEF": "SACROILIAC_ANIMATOR",
                  "key": [
                    0,
                    0.28,
                    0.32,
                    0.48,
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
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1892
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1892
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
                      "y": 0,
                      "z": 1,
                      "w": 0
                    }
                  ]
                },
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
                    0.28,
                    0.32,
                    0.36,
                    0.4,
                    0.44,
                    0.48,
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
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 4.349
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 4.349
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 4.615
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9136
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3614
                    },
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
                      "w": 0.7869
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3918
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5433
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
                    0.28,
                    0.32,
                    0.48,
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
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 2.047
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 2.047
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
                      "w": 1.566
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5913
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9235
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
                    0.28,
                    0.32,
                    0.36,
                    0.4,
                    0.44,
                    0.48,
                    0.64,
                    0.76,
                    0.84,
                    0.88,
                    0.92,
                    0.96,
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
                      "w": 0.625
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.625
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3364
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2742
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.05078
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2833
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6667
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2833
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2108
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.375
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3146
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1174
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
                  "string": " orientationinterpolator DEF L_MIDTARSAL_ANIMATOR",
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
                  "DEF": "L_MIDTARSAL_ANIMATOR",
                  "key": [
                    0,
                    0.5,
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
                      "w": -0.2
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0
                    }
                  ]
                },
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
                    0.28,
                    0.32,
                    0.36,
                    0.4,
                    0.44,
                    0.48,
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
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 4.433
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 4.433
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 4.647
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.8943
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3698
                    },
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
                      "w": 0.4963
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3829
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5169
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
                    0.28,
                    0.32,
                    0.48,
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
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 2.005
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 2.005
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
                      "w": 0.9507
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5845
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.9054
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
                    0.28,
                    0.32,
                    0.36,
                    0.4,
                    0.44,
                    0.48,
                    0.64,
                    0.76,
                    0.84,
                    0.88,
                    0.92,
                    0.96,
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
                      "w": 0.6735
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6735
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3527
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3038
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.07964
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3001
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
                      "w": 0.3001
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2087
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3756
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3279
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1193
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
                  "string": " orientationinterpolator DEF R_MIDTARSAL_ANIMATOR",
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
                  "DEF": "R_MIDTARSAL_ANIMATOR",
                  "key": [
                    0,
                    0.5,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": -0.2
                    },
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
                      "w": -0.2
                    }
                  ]
                },
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
                    0.32,
                    0.48,
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
                      "w": 0.5989
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.5989
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3216
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.06503
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
                    0.28,
                    0.32,
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
                      "x": -0.9987,
                      "y": 0.02554,
                      "z": 0.04498,
                      "w": 1.57
                    },
                    {
                      "x": -0.9987,
                      "y": 0.02554,
                      "z": 0.04498,
                      "w": 1.57
                    },
                    {
                      "x": 1,
                      "y": 0.0004113,
                      "z": 0.003055,
                      "w": 4.114
                    },
                    {
                      "x": -0.8413,
                      "y": 0.3238,
                      "z": 0.4329,
                      "w": 1.453
                    },
                    {
                      "x": -0.877,
                      "y": 0.4198,
                      "z": 0.2337,
                      "w": 0.6009
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
                    0.28,
                    0.32,
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
                      "x": 0.0672928,
                      "y": 0.989475,
                      "z": -0.128107,
                      "w": 4.15574
                    },
                    {
                      "x": 0.0672928,
                      "y": 0.989475,
                      "z": -0.128107,
                      "w": 4.15574
                    },
                    {
                      "x": 0.00364942,
                      "y": 0.999901,
                      "z": 0.0135896,
                      "w": 4.5822
                    },
                    {
                      "x": 0,
                      "y": -1,
                      "z": 0,
                      "w": 0.655922
                    },
                    {
                      "x": -0.00050618,
                      "y": -0.999999,
                      "z": 0.0012782,
                      "w": 1.28397
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
                    0.28,
                    0.32,
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
                      "w": 4.688
                    },
                    {
                      "x": 0.9992,
                      "y": 0.02042,
                      "z": 0.03558,
                      "w": 4.688
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
              "toNode": "SACROILIAC_ANIMATOR"
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
              "toNode": "L_MIDTARSAL_ANIMATOR"
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
              "toNode": "R_MIDTARSAL_ANIMATOR"
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
              "toNode": "SKULLBASE_ANIMATOR"
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
      "name": "LOA1_JumpAnimation"
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
                "LOA1_JumpAnimation.x3d",
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
      "description": "see InterchangableActorsViaDynamicRouting scene",
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