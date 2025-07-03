{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "SpatialAudioCameraAnimation.x3d"
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "backUrl": [
        "images/generic/BK1.png",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"
      ],
      "bottomUrl": [
        "images/generic/DN1.png",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"
      ],
      "frontUrl": [
        "images/generic/FR1.png",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"
      ],
      "leftUrl": [
        "images/generic/LF1.png",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"
      ],
      "rightUrl": [
        "images/generic/RT1.png",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"
      ],
      "topUrl": [
        "images/generic/UP1.png",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"
      ]
    },
    {
      "string": " viewpoint DEF Camera001",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Camera001",
      "description": "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -0.523599
      },
      "position": {
        "x": 0,
        "y": 2000,
        "z": 3500
      }
    },
    {
      "string": " timesensor DEF TIMER",
      "nodeType": "timesensor",
      "children": [],
      "DEF": "TIMER",
      "cycleInterval": 33.333332,
      "loop": true
    },
    {
      "string": " positioninterpolator DEF Camera001-POS-INTERP",
      "nodeType": "positioninterpolator",
      "children": [],
      "DEF": "Camera001-POS-INTERP",
      "key": [
        0,
        0.25,
        0.5,
        0.75,
        1
      ],
      "keyValue": [
        {
          "x": 0,
          "y": 2000,
          "z": 3500
        },
        {
          "x": 0,
          "y": 2000,
          "z": 0
        },
        {
          "x": 0,
          "y": 2000,
          "z": -3500
        },
        {
          "x": 0,
          "y": 2000,
          "z": 0
        },
        {
          "x": 0,
          "y": 2000,
          "z": 3500
        }
      ]
    },
    {
      "string": " orientationinterpolator DEF Camera001-ROT-INTERP",
      "nodeType": "orientationinterpolator",
      "children": [],
      "DEF": "Camera001-ROT-INTERP",
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
          "w": -0.523599
        },
        {
          "x": 0.99999,
          "y": 0.003554,
          "z": 0.002727,
          "w": -1.309007
        },
        {
          "x": 0,
          "y": -0.965926,
          "z": -0.258819,
          "w": -3.141593
        },
        {
          "x": 0.002282,
          "y": -0.793351,
          "z": -0.60876,
          "w": -3.135645
        },
        {
          "x": 1,
          "y": -0.000001,
          "z": 0,
          "w": -0.523599
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
      "toNode": "Camera001-POS-INTERP"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "Camera001-POS-INTERP",
      "toField": "set_position",
      "toNode": "Camera001"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "TIMER",
      "toField": "set_fraction",
      "toNode": "Camera001-ROT-INTERP"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "Camera001-ROT-INTERP",
      "toField": "set_orientation",
      "toNode": "Camera001"
    },
    {
      "string": " transform DEF Floor",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "appearance DEF WireColor",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 0.122,
                    "g": 0.114,
                    "b": 0.125
                  }
                }
              ],
              "DEF": "WireColor"
            },
            {
              "string": "geometry box",
              "nodeType": "box",
              "children": [],
              "size": {
                "x": 2000,
                "y": 1,
                "z": 2000
              }
            }
          ]
        }
      ],
      "DEF": "Floor",
      "translation": {
        "x": 1.241,
        "y": 0,
        "z": 0.358
      }
    },
    {
      "string": " transform DEF TransformAudio1",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "appearance DEF WireColor_1",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 0.690196,
                    "g": 0.101961,
                    "b": 0.101961
                  }
                }
              ],
              "DEF": "WireColor_1"
            },
            {
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 100
            }
          ]
        },
        {
          "string": " billboard",
          "nodeType": "billboard",
          "children": [
            {
              "string": " transform DEF violin",
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
                          "ambientIntensity": 0.0933,
                          "diffuseColor": {
                            "r": 1,
                            "g": 1,
                            "b": 1
                          },
                          "shininess": 0.51,
                          "specularColor": {
                            "r": 0.46,
                            "g": 0.46,
                            "b": 0.46
                          }
                        }
                      ]
                    },
                    {
                      "string": [
                        "Violin"
                      ],
                      "nodeType": "text",
                      "children": [
                        {
                          "string": "fontStyle fontstyle DEF ModelFontStyle",
                          "nodeType": "fontstyle",
                          "children": [],
                          "DEF": "ModelFontStyle",
                          "family": [
                            "Times",
                            "SERIF"
                          ],
                          "style": "BOLD"
                        }
                      ]
                    }
                  ]
                }
              ],
              "DEF": "violin",
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": -0.5
              },
              "scale": {
                "x": 100,
                "y": 100,
                "z": 100
              },
              "translation": {
                "x": 0,
                "y": 100,
                "z": 0
              }
            }
          ]
        }
      ],
      "DEF": "TransformAudio1",
      "translation": {
        "x": -933.123474,
        "y": 0,
        "z": -926.253235
      }
    },
    {
      "string": " transform DEF TransformAudio2",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "appearance DEF WireColor_2",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 0.105882,
                    "g": 0.694118,
                    "b": 0.580392
                  }
                }
              ],
              "DEF": "WireColor_2"
            },
            {
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 100
            }
          ]
        },
        {
          "string": " billboard",
          "nodeType": "billboard",
          "children": [
            {
              "string": " transform DEF saxophone",
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
                          "ambientIntensity": 0.0933,
                          "diffuseColor": {
                            "r": 1,
                            "g": 1,
                            "b": 1
                          },
                          "shininess": 0.51,
                          "specularColor": {
                            "r": 0.46,
                            "g": 0.46,
                            "b": 0.46
                          }
                        }
                      ]
                    },
                    {
                      "string": [
                        "Saxophone"
                      ],
                      "nodeType": "text",
                      "children": [
                        {
                          "string": "fontStyle fontstyle USE ModelFontStyle",
                          "nodeType": "fontstyle",
                          "children": [],
                          "USE": "ModelFontStyle"
                        }
                      ]
                    }
                  ]
                }
              ],
              "DEF": "saxophone",
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": -0.5
              },
              "scale": {
                "x": 100,
                "y": 100,
                "z": 100
              },
              "translation": {
                "x": 0,
                "y": 100,
                "z": 0
              }
            }
          ]
        }
      ],
      "DEF": "TransformAudio2",
      "translation": {
        "x": 933.475586,
        "y": 0,
        "z": 924.423218
      }
    },
    {
      "string": " listenerpointsource",
      "nodeType": "listenerpointsource",
      "children": [],
      "trackCurrentView": true
    },
    {
      "string": " streamaudiodestination",
      "nodeType": "streamaudiodestination",
      "children": [
        {
          "string": " spatialsound DEF Audio1",
          "nodeType": "spatialsound",
          "children": [
            {
              "string": " gain",
              "nodeType": "gain",
              "children": [
                {
                  "string": " audioclip",
                  "nodeType": "audioclip",
                  "children": [],
                  "description": "Violin",
                  "loop": true,
                  "url": [
                    "sound/violin.mp3",
                    "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"
                  ]
                }
              ]
            }
          ],
          "DEF": "Audio1"
        },
        {
          "string": " spatialsound DEF Audio2",
          "nodeType": "spatialsound",
          "children": [
            {
              "string": " gain",
              "nodeType": "gain",
              "children": [
                {
                  "string": " audioclip",
                  "nodeType": "audioclip",
                  "children": [],
                  "description": "Saxophone",
                  "loop": true,
                  "url": [
                    "sound/saxophone.mp3",
                    "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"
                  ]
                }
              ]
            }
          ],
          "DEF": "Audio2"
        }
      ]
    }
  ]
}