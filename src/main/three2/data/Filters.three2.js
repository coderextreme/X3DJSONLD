{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "Filters.x3d"
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
      "skyColor": [
        {
          "r": 0.2,
          "g": 0.2,
          "b": 0.2
        }
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "View entire audio model",
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
      "string": " transform DEF TransformAudio1",
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
                    "r": 0.1,
                    "g": 0.1,
                    "b": 0.1
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
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 30
            }
          ]
        }
      ],
      "DEF": "TransformAudio1",
      "translation": {
        "x": -200,
        "y": 50,
        "z": 0
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
              "string": "appearance DEF audio_emit2",
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
              "DEF": "audio_emit2"
            },
            {
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 30
            }
          ]
        }
      ],
      "DEF": "TransformAudio2",
      "translation": {
        "x": 0,
        "y": 50,
        "z": 0
      }
    },
    {
      "string": " transform DEF TransformAudio3",
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
                    "r": 0.1,
                    "g": 0.1,
                    "b": 0.1
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
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 30
            }
          ]
        }
      ],
      "DEF": "TransformAudio3",
      "translation": {
        "x": 200,
        "y": 50,
        "z": 0
      }
    },
    {
      "string": " transform DEF AnimData",
      "nodeType": "transform",
      "children": [],
      "DEF": "AnimData",
      "translation": {
        "x": 0,
        "y": 50,
        "z": 0
      }
    },
    {
      "string": " transform DEF AnimDataBoxH",
      "nodeType": "transform",
      "children": [],
      "DEF": "AnimDataBoxH",
      "translation": {
        "x": 0,
        "y": 100,
        "z": 0
      }
    },
    {
      "string": " transform DEF AnimDataBoxM",
      "nodeType": "transform",
      "children": [],
      "DEF": "AnimDataBoxM",
      "translation": {
        "x": 15,
        "y": 100,
        "z": 0
      }
    },
    {
      "string": " transform DEF AnimDataBoxL",
      "nodeType": "transform",
      "children": [],
      "DEF": "AnimDataBoxL",
      "translation": {
        "x": 30,
        "y": 100,
        "z": 0
      }
    },
    {
      "string": " transform DEF AnimDataBoxMM",
      "nodeType": "transform",
      "children": [],
      "DEF": "AnimDataBoxMM",
      "translation": {
        "x": -15,
        "y": 100,
        "z": 0
      }
    },
    {
      "string": " transform DEF AnimDataBoxLM",
      "nodeType": "transform",
      "children": [],
      "DEF": "AnimDataBoxLM",
      "translation": {
        "x": -30,
        "y": 100,
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
              "string": "geometry cylinder",
              "nodeType": "cylinder",
              "children": [],
              "radius": 500
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
          "string": " dynamicscompressor",
          "nodeType": "dynamicscompressor",
          "children": [
            {
              "string": " gain",
              "nodeType": "gain",
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
                          "string": " analyser",
                          "nodeType": "analyser",
                          "children": [
                            {
                              "string": " biquadfilter",
                              "nodeType": "biquadfilter",
                              "children": [
                                {
                                  "string": " audioclip",
                                  "nodeType": "audioclip",
                                  "children": [],
                                  "description": "Techno beat",
                                  "loop": true,
                                  "url": [
                                    "sound/techno_beat.mp3",
                                    "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3"
                                  ]
                                }
                              ],
                              "detune": 50,
                              "frequency": 600,
                              "qualityFactor": 30,
                              "type": "ALLPASS"
                            }
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
                          "string": " analyser",
                          "nodeType": "analyser",
                          "children": [
                            {
                              "string": " biquadfilter",
                              "nodeType": "biquadfilter",
                              "children": [
                                {
                                  "string": " audioclip",
                                  "nodeType": "audioclip",
                                  "children": [],
                                  "description": "Simple beat",
                                  "loop": true,
                                  "url": [
                                    "sound/beat.mp3",
                                    "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3"
                                  ]
                                }
                              ],
                              "detune": 15,
                              "frequency": 600,
                              "qualityFactor": 15,
                              "type": "ALLPASS"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "DEF": "Audio2"
                },
                {
                  "string": " spatialsound DEF Audio3",
                  "nodeType": "spatialsound",
                  "children": [
                    {
                      "string": " gain",
                      "nodeType": "gain",
                      "children": [
                        {
                          "string": " analyser",
                          "nodeType": "analyser",
                          "children": [
                            {
                              "string": " biquadfilter",
                              "nodeType": "biquadfilter",
                              "children": [
                                {
                                  "string": " audioclip",
                                  "nodeType": "audioclip",
                                  "children": [],
                                  "description": "Wobble loop",
                                  "loop": true,
                                  "url": [
                                    "sound/wobble_loop.mp3",
                                    "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3"
                                  ]
                                }
                              ],
                              "frequency": 1000,
                              "qualityFactor": 0,
                              "type": "ALLPASS"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "DEF": "Audio3"
                }
              ]
            }
          ]
        }
      ]
    }
  ]
}