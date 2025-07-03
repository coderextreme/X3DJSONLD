{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "LOA1_RunAnimation.x3d"
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
                    0.2182,
                    0.2909,
                    0.3091,
                    0.7091,
                    0.8,
                    0.8182,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0,
                      "y": -0.0351,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.0351,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.04087,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.04886,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.04051,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.03666,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.03666,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": -0.0351,
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
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.9969,
                      "y": -0.05444,
                      "z": 0.05596,
                      "w": 0.07687
                    },
                    {
                      "x": 0.9969,
                      "y": -0.05444,
                      "z": 0.05596,
                      "w": 0.07687
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": -0.9986,
                      "y": 0.03354,
                      "z": 0.04001,
                      "w": 1.212
                    },
                    {
                      "x": -0.9889,
                      "y": 0.1328,
                      "z": 0.06696,
                      "w": 0.4025
                    },
                    {
                      "x": 0.9894,
                      "y": 0.1453,
                      "z": 0.009351,
                      "w": 0.4114
                    },
                    {
                      "x": -0.9963,
                      "y": 0.07032,
                      "z": 0.05003,
                      "w": 0.7035
                    },
                    {
                      "x": -0.9986,
                      "y": 0.03354,
                      "z": 0.04001,
                      "w": 1.212
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.108
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.4265
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.7052
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 2.179
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.108
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
                    0.2182,
                    0.3091,
                    0.4909,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.03543
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1037
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.4328
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.1929
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.03543
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.9999,
                      "y": 0.00293,
                      "z": -0.00989,
                      "w": 0.402
                    },
                    {
                      "x": -1,
                      "y": 0.004977,
                      "z": -0.00497,
                      "w": 0.5943
                    },
                    {
                      "x": -1,
                      "y": 0.003265,
                      "z": -0.001752,
                      "w": 1.178
                    },
                    {
                      "x": -0.9999,
                      "y": 0.00815,
                      "z": -0.01093,
                      "w": 0.3031
                    },
                    {
                      "x": 0.9999,
                      "y": 0.00293,
                      "z": -0.00989,
                      "w": 0.402
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
                    0.03636,
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.7004
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.011
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.892
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 1.188
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3964
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.7004
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
                    0.4909,
                    0.7091,
                    0.8,
                    0.8182,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2323
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.07843
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.09676
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3274
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.3278
                    },
                    {
                      "x": 1,
                      "y": 0,
                      "z": 0,
                      "w": 0.2323
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
                    0.2545,
                    0.4909,
                    0.7636,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.7651,
                      "y": 0.6382,
                      "z": 0.08586,
                      "w": 0.2712
                    },
                    {
                      "x": 0.9999,
                      "y": 0.002845,
                      "z": -0.01547,
                      "w": 0.3756
                    },
                    {
                      "x": 0.7459,
                      "y": -0.6505,
                      "z": -0.1432,
                      "w": 0.2416
                    },
                    {
                      "x": 0.9984,
                      "y": 0.05536,
                      "z": -0.01154,
                      "w": 0.3488
                    },
                    {
                      "x": 0.7651,
                      "y": 0.6382,
                      "z": 0.08586,
                      "w": 0.2712
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
                    0.4909,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.6517,
                      "y": -0.7559,
                      "z": 0.06211,
                      "w": 0.2508
                    },
                    {
                      "x": 0.6467,
                      "y": 0.7527,
                      "z": -0.1238,
                      "w": 0.2344
                    },
                    {
                      "x": 0.6517,
                      "y": -0.7559,
                      "z": 0.06211,
                      "w": 0.2508
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.9907,
                      "y": -0.07264,
                      "z": 0.115,
                      "w": 1.135
                    },
                    {
                      "x": 0.9291,
                      "y": -0.1222,
                      "z": 0.349,
                      "w": 0.1695
                    },
                    {
                      "x": -0.9892,
                      "y": 0.1364,
                      "z": -0.05394,
                      "w": 0.5112
                    },
                    {
                      "x": 0.9942,
                      "y": -0.0002052,
                      "z": 0.1073,
                      "w": 0.4975
                    },
                    {
                      "x": 0.9907,
                      "y": -0.07264,
                      "z": 0.115,
                      "w": 1.135
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.9985,
                      "y": 0.03887,
                      "z": 0.03802,
                      "w": 4.689
                    },
                    {
                      "x": -0.965,
                      "y": -0.1889,
                      "z": -0.1821,
                      "w": 1.415
                    },
                    {
                      "x": 0.9758,
                      "y": 0.1563,
                      "z": 0.1529,
                      "w": 4.666
                    },
                    {
                      "x": -0.9956,
                      "y": -0.0936,
                      "z": 0.009826,
                      "w": 1.126
                    },
                    {
                      "x": 0.9985,
                      "y": 0.03887,
                      "z": 0.03802,
                      "w": 4.689
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
                    1
                  ],
                  "keyValue": [
                    {
                      "x": -0.0240995,
                      "y": -0.999682,
                      "z": 0.00741506,
                      "w": 0.120409
                    },
                    {
                      "x": -0.0240995,
                      "y": -0.999682,
                      "z": 0.00741506,
                      "w": 0.120409
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6979
                    },
                    {
                      "x": 0.9094,
                      "y": 0.2062,
                      "z": -0.3613,
                      "w": 0.4157
                    },
                    {
                      "x": 0.9637,
                      "y": 0.1537,
                      "z": -0.2185,
                      "w": 1.353
                    },
                    {
                      "x": 0.4864,
                      "y": 0.08841,
                      "z": -0.8693,
                      "w": 0.1716
                    },
                    {
                      "x": -1,
                      "y": 0,
                      "z": 0,
                      "w": 0.6979
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
                    0.2182,
                    0.4909,
                    0.7455,
                    1
                  ],
                  "keyValue": [
                    {
                      "x": 0.9353,
                      "y": -0.2978,
                      "z": -0.191,
                      "w": 4.222
                    },
                    {
                      "x": -0.9362,
                      "y": 0.2924,
                      "z": -0.1952,
                      "w": 1.05
                    },
                    {
                      "x": 0.9941,
                      "y": -0.09719,
                      "z": -0.04725,
                      "w": 4.512
                    },
                    {
                      "x": -0.9594,
                      "y": 0.2653,
                      "z": 0.09579,
                      "w": 1.525
                    },
                    {
                      "x": 0.9353,
                      "y": -0.2978,
                      "z": -0.191,
                      "w": 4.222
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
                    1
                  ],
                  "keyValue": [
                    {
                      "x": -0.917742,
                      "y": -0.237244,
                      "z": -0.318536,
                      "w": 0.214273
                    },
                    {
                      "x": -0.917742,
                      "y": -0.237244,
                      "z": -0.318536,
                      "w": 0.214273
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
      "name": "LOA1_RunAnimation"
    },
    "/*======================================*/",
    "/*Point to example use in case someone inspects this file*/",
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
                "LOA1_RunAnimation.x3d",
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