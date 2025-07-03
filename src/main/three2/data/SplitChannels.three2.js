{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "SplitChannels.x3d"
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        "NONE"
      ]
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 0.2,
          "g": 0.2,
          "b": 0.21
        }
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -0.5
      },
      "position": {
        "x": 0,
        "y": 500,
        "z": 600
      },
      "retainUserOffsets": true
    },
    {
      "string": " transform DEF PowerR",
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
                  "string": "appearance DEF audio_emit",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "diffuseColor": {
                        "r": 0,
                        "g": 1,
                        "b": 0
                      },
                      "emissiveColor": {
                        "r": 0.8,
                        "g": 0.8,
                        "b": 0.8
                      },
                      "specularColor": {
                        "r": 0.01,
                        "g": 0.01,
                        "b": 0.01
                      }
                    }
                  ],
                  "DEF": "audio_emit"
                },
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 10,
                    "y": 80,
                    "z": 0.01
                  }
                }
              ]
            }
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -0.5
          },
          "translation": {
            "x": 0,
            "y": 40,
            "z": 0
          }
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
                  "string": "appearance DEF audio_emit2",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "diffuseColor": {
                        "r": 0,
                        "g": 1,
                        "b": 0
                      },
                      "emissiveColor": {
                        "r": 0.8,
                        "g": 0.8,
                        "b": 0.8
                      },
                      "specularColor": {
                        "r": 0.01,
                        "g": 0.01,
                        "b": 0.01
                      }
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "images/line.png",
                        "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"
                      ]
                    }
                  ],
                  "DEF": "audio_emit2"
                },
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 25,
                    "y": 83,
                    "z": 0.01
                  }
                }
              ]
            }
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -0.5
          },
          "translation": {
            "x": -2.7,
            "y": 37,
            "z": 0
          }
        },
        {
          "string": " transform DEF volumeRight",
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
                        "r": 0.345,
                        "g": 0.345,
                        "b": 0.882
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
                    "Right Channel Volume"
                  ],
                  "nodeType": "text",
                  "children": [
                    {
                      "string": "fontStyle fontstyle DEF VolumeFontStyle",
                      "nodeType": "fontstyle",
                      "children": [],
                      "DEF": "VolumeFontStyle",
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
          "DEF": "volumeRight",
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -0.5
          },
          "scale": {
            "x": 10,
            "y": 10,
            "z": 10
          },
          "translation": {
            "x": 0,
            "y": -10,
            "z": 0
          }
        }
      ],
      "DEF": "PowerR",
      "translation": {
        "x": 100,
        "y": 400,
        "z": 400
      }
    },
    {
      "string": " transform DEF PowerL",
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
                  "string": "appearance DEF audio_emit3",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "diffuseColor": {
                        "r": 0,
                        "g": 1,
                        "b": 0
                      },
                      "emissiveColor": {
                        "r": 0.8,
                        "g": 0.8,
                        "b": 0.8
                      },
                      "specularColor": {
                        "r": 0.01,
                        "g": 0.01,
                        "b": 0.01
                      }
                    }
                  ],
                  "DEF": "audio_emit3"
                },
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 10,
                    "y": 80,
                    "z": 0.01
                  }
                }
              ]
            }
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -0.5
          },
          "translation": {
            "x": 0,
            "y": 40,
            "z": 0
          }
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
                  "string": "appearance DEF audio_emit4",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "diffuseColor": {
                        "r": 0,
                        "g": 1,
                        "b": 0
                      },
                      "emissiveColor": {
                        "r": 0.8,
                        "g": 0.8,
                        "b": 0.8
                      },
                      "specularColor": {
                        "r": 0.01,
                        "g": 0.01,
                        "b": 0.01
                      }
                    },
                    {
                      "string": "appearance imagetexture",
                      "nodeType": "imagetexture",
                      "children": [],
                      "url": [
                        "images/line.png",
                        "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"
                      ]
                    }
                  ],
                  "DEF": "audio_emit4"
                },
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 25,
                    "y": 83,
                    "z": 0.01
                  }
                }
              ]
            }
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -0.5
          },
          "translation": {
            "x": 13.2,
            "y": 37,
            "z": 0
          }
        },
        {
          "string": " transform DEF volumeLeft",
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
                        "r": 0.345,
                        "g": 0.345,
                        "b": 0.882
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
                    "Left Channel Volume"
                  ],
                  "nodeType": "text",
                  "children": [
                    {
                      "string": "fontStyle fontstyle USE VolumeFontStyle",
                      "nodeType": "fontstyle",
                      "children": [],
                      "USE": "VolumeFontStyle"
                    }
                  ]
                }
              ]
            }
          ],
          "DEF": "volumeLeft",
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -0.5
          },
          "scale": {
            "x": 10,
            "y": 10,
            "z": 10
          },
          "translation": {
            "x": 0,
            "y": -10,
            "z": 0
          }
        }
      ],
      "DEF": "PowerL",
      "translation": {
        "x": -100,
        "y": 400,
        "z": 400
      }
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
              "string": "appearance DEF floor",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 0.1,
                    "g": 0.1,
                    "b": 0.1
                  },
                  "shininess": 0.8,
                  "specularColor": {
                    "r": 0.5,
                    "g": 0.6,
                    "b": 0.7
                  }
                }
              ],
              "DEF": "floor"
            },
            {
              "string": "geometry box",
              "nodeType": "box",
              "children": [],
              "size": {
                "x": 1500,
                "y": 10,
                "z": 500
              }
            }
          ]
        }
      ]
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
          "string": " gain",
          "nodeType": "gain",
          "children": [
            {
              "string": " channelmerger",
              "nodeType": "channelmerger",
              "children": [
                {
                  "string": " channelselector",
                  "nodeType": "channelselector",
                  "children": [
                    {
                      "string": " gain USE ChannelSplitter",
                      "nodeType": "gain",
                      "children": [],
                      "USE": "ChannelSplitter"
                    }
                  ]
                },
                {
                  "string": " channelselector",
                  "nodeType": "channelselector",
                  "children": [
                    {
                      "string": " gain USE ChannelSplitter",
                      "nodeType": "gain",
                      "children": [],
                      "USE": "ChannelSplitter"
                    }
                  ],
                  "channelSelection": 1
                }
              ]
            }
          ]
        }
      ]
    },
    {
      "string": " channelsplitter DEF ChannelSplitter",
      "nodeType": "channelsplitter",
      "children": [
        {
          "string": " audioclip",
          "nodeType": "audioclip",
          "children": [],
          "description": "Violin",
          "url": [
            "sound/violin.mp3",
            "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"
          ]
        }
      ],
      "DEF": "ChannelSplitter",
      "channelCountMode": "EXPLICIT"
    },
    {
      "string": " transform DEF Audio3",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "appearance DEF audio_emit5",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 0.3,
                    "g": 1,
                    "b": 0.3
                  },
                  "emissiveColor": {
                    "r": 0.8,
                    "g": 0.8,
                    "b": 0.8
                  },
                  "specularColor": {
                    "r": 0.01,
                    "g": 0.01,
                    "b": 0.01
                  }
                },
                {
                  "string": "appearance imagetexture",
                  "nodeType": "imagetexture",
                  "children": [],
                  "url": [
                    "images/loudspeaker.png",
                    "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"
                  ]
                }
              ],
              "DEF": "audio_emit5"
            },
            {
              "string": "geometry box",
              "nodeType": "box",
              "children": [],
              "size": {
                "x": 100,
                "y": 100,
                "z": 0.001
              }
            }
          ]
        }
      ],
      "DEF": "Audio3",
      "rotation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -0.5
      },
      "translation": {
        "x": 0,
        "y": 100,
        "z": 0
      }
    }
  ]
}