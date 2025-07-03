{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "ObliqueStrategies.x3d"
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
          "r": 0.419608,
          "g": 0.427451,
          "b": 1
        }
      ]
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " touchsensor DEF RandomTextClickedSensor",
          "nodeType": "touchsensor",
          "children": [],
          "DEF": "RandomTextClickedSensor",
          "description": "Select to see a new strategy"
        },
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": [
                "Oblique Strategies",
                "",
                "(Over One Hundred Worthwhile Dilemmas)",
                "",
                "by Brian Eno and Peter Schmidt"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle DEF MessageFont",
                  "nodeType": "fontstyle",
                  "children": [],
                  "DEF": "MessageFont",
                  "family": [
                    "SANS"
                  ],
                  "justify": [
                    "MIDDLE",
                    "MIDDLE"
                  ],
                  "style": "BOLD"
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
                    "b": 1
                  }
                }
              ]
            }
          ]
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF HeadlineClickSurface",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry indexedfaceset",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "coord coordinate",
                      "nodeType": "coordinate",
                      "children": [],
                      "point": [
                        {
                          "x": 1,
                          "y": 1,
                          "z": 0
                        },
                        {
                          "x": 1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": 1,
                          "z": 0
                        }
                      ],
                      "points": [
                        {
                          "x": 1,
                          "y": 1,
                          "z": 0
                        },
                        {
                          "x": 1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": 1,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "coordIndex": [
                    [
                      0,
                      1,
                      2,
                      3
                    ]
                  ],
                  "solid": false
                },
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "ambientIntensity": 0.245763,
                      "diffuseColor": {
                        "r": 0.34773,
                        "g": 0.090909,
                        "b": 0.005289
                      },
                      "shininess": 0.07,
                      "specularColor": {
                        "r": 0.336735,
                        "g": 0.051091,
                        "b": 0.051091
                      },
                      "transparency": 0.8
                    }
                  ]
                }
              ],
              "DEF": "HeadlineClickSurface"
            }
          ],
          "scale": {
            "x": 10,
            "y": 3,
            "z": 1
          }
        }
      ],
      "scale": {
        "x": 0.4,
        "y": 0.4,
        "z": 0.4
      },
      "translation": {
        "x": 0,
        "y": 1,
        "z": 0
      }
    },
    {
      "string": " script DEF TextScript",
      "nodeType": "script",
      "children": [
        "/*initialize() method includes unit test to printAllStrategies() to console*/",
        "/*TODO insert field definitions here (index string_changed previous next random) and then animate!*/",
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        }
      ],
      "DEF": "TextScript",
      "url": [
        "ObliqueStrategiesScript.js",
        "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"
      ]
    },
    {
      "string": " transform DEF CardTransform",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "geometry text DEF CardText",
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle",
                  "nodeType": "fontstyle",
                  "children": [],
                  "family": [
                    "SANS"
                  ],
                  "justify": [
                    "MIDDLE",
                    "MIDDLE"
                  ],
                  "style": "BOLD"
                }
              ],
              "DEF": "CardText"
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
                    "b": 1
                  }
                }
              ]
            }
          ]
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "string_changed",
          "fromNode": "TextScript",
          "toField": "string",
          "toNode": "CardText"
        },
        {
          "string": " sound DEF CardSoundSpatialization",
          "nodeType": "sound",
          "children": [
            "/*Make sure the sound source AudioClip is audible at the user location*/",
            "/*Not all X3D players seem to use the .mp3*/",
            "/*&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players*/",
            "/*%20 is space character used in uri/url encoding*/",
            {
              "string": "source audioclip DEF TextToSpeechAudioClip",
              "nodeType": "audioclip",
              "children": [],
              "DEF": "TextToSpeechAudioClip",
              "description": "sends strategy text google translate",
              "url": [
                "http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium",
                "translate_tts_mp3FileFormatNotSupported.wav",
                "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"
              ]
            }
          ],
          "DEF": "CardSoundSpatialization",
          "maxBack": 100,
          "maxFront": 100,
          "minBack": 20,
          "minFront": 20
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "textToSpeechUrl",
          "fromNode": "TextScript",
          "toField": "url",
          "toNode": "TextToSpeechAudioClip"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "newCardTime",
          "fromNode": "TextScript",
          "toField": "startTime",
          "toNode": "TextToSpeechAudioClip"
        }
      ],
      "DEF": "CardTransform",
      "scale": {
        "x": 0.4,
        "y": 0.4,
        "z": 0.4
      },
      "translation": {
        "x": 0,
        "y": -1.5,
        "z": 0
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " touchsensor DEF PreviousTextClickedSensor",
          "nodeType": "touchsensor",
          "children": [],
          "DEF": "PreviousTextClickedSensor",
          "description": "Select to see previous strategy"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "isActive",
          "fromNode": "PreviousTextClickedSensor",
          "toField": "selectPreviousCard",
          "toNode": "TextScript"
        },
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": [
                "previous"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle USE MessageFont",
                  "nodeType": "fontstyle",
                  "children": [],
                  "USE": "MessageFont"
                }
              ]
            },
            {
              "string": "appearance DEF InterfaceAppearance",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 1,
                    "g": 0,
                    "b": 0.6
                  }
                }
              ],
              "DEF": "InterfaceAppearance"
            }
          ]
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF TransparentClickSurface",
              "nodeType": "shape",
              "children": [
                "/*support Selectable Text with a scalable IFS*/",
                {
                  "string": "geometry indexedfaceset",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "coord coordinate",
                      "nodeType": "coordinate",
                      "children": [],
                      "point": [
                        {
                          "x": 1,
                          "y": 1,
                          "z": 0
                        },
                        {
                          "x": 1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": 1,
                          "z": 0
                        }
                      ],
                      "points": [
                        {
                          "x": 1,
                          "y": 1,
                          "z": 0
                        },
                        {
                          "x": 1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": -1,
                          "z": 0
                        },
                        {
                          "x": -1,
                          "y": 1,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "coordIndex": [
                    [
                      0,
                      1,
                      2,
                      3
                    ]
                  ],
                  "solid": false
                },
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [],
                      "transparency": 1
                    }
                  ]
                }
              ],
              "DEF": "TransparentClickSurface"
            }
          ],
          "scale": {
            "x": 2,
            "y": 0.6,
            "z": 1
          }
        }
      ],
      "scale": {
        "x": 0.4,
        "y": 0.4,
        "z": 0.4
      },
      "translation": {
        "x": -3.2,
        "y": 2.5,
        "z": 0
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " touchsensor DEF NextTextClickedSensor",
          "nodeType": "touchsensor",
          "children": [],
          "DEF": "NextTextClickedSensor",
          "description": "Select to see next strategy"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "isActive",
          "fromNode": "NextTextClickedSensor",
          "toField": "selectNextCard",
          "toNode": "TextScript"
        },
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": [
                "next"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle USE MessageFont",
                  "nodeType": "fontstyle",
                  "children": [],
                  "USE": "MessageFont"
                }
              ]
            },
            {
              "string": "appearance USE InterfaceAppearance",
              "nodeType": "appearance",
              "children": [],
              "USE": "InterfaceAppearance"
            }
          ]
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE TransparentClickSurface",
              "nodeType": "shape",
              "children": [],
              "USE": "TransparentClickSurface"
            }
          ],
          "scale": {
            "x": 1.2,
            "y": 0.6,
            "z": 1
          }
        }
      ],
      "scale": {
        "x": 0.4,
        "y": 0.4,
        "z": 0.4
      },
      "translation": {
        "x": 3.5,
        "y": 2.5,
        "z": 0
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " touchsensor USE RandomTextClickedSensor",
          "nodeType": "touchsensor",
          "children": [],
          "USE": "RandomTextClickedSensor"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "isActive",
          "fromNode": "RandomTextClickedSensor",
          "toField": "selectRandomCard",
          "toNode": "TextScript"
        },
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": [
                "random"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle USE MessageFont",
                  "nodeType": "fontstyle",
                  "children": [],
                  "USE": "MessageFont"
                }
              ]
            },
            {
              "string": "appearance USE InterfaceAppearance",
              "nodeType": "appearance",
              "children": [],
              "USE": "InterfaceAppearance"
            }
          ]
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE TransparentClickSurface",
              "nodeType": "shape",
              "children": [],
              "USE": "TransparentClickSurface"
            }
          ],
          "scale": {
            "x": 1.8,
            "y": 0.6,
            "z": 1
          }
        }
      ],
      "scale": {
        "x": 0.4,
        "y": 0.4,
        "z": 0.4
      },
      "translation": {
        "x": -3.3,
        "y": -0.5,
        "z": 0
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " anchor DEF TextToSpeechAnchor",
          "nodeType": "anchor",
          "children": [
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "textToSpeechUrl",
              "fromNode": "TextScript",
              "toField": "url",
              "toNode": "TextToSpeechAnchor"
            },
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": [
                    "speech"
                  ],
                  "nodeType": "text",
                  "children": [
                    {
                      "string": "fontStyle fontstyle USE MessageFont",
                      "nodeType": "fontstyle",
                      "children": [],
                      "USE": "MessageFont"
                    }
                  ]
                },
                {
                  "string": "appearance USE InterfaceAppearance",
                  "nodeType": "appearance",
                  "children": [],
                  "USE": "InterfaceAppearance"
                }
              ]
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE TransparentClickSurface",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "TransparentClickSurface"
                }
              ],
              "scale": {
                "x": 1.8,
                "y": 0.6,
                "z": 1
              }
            }
          ],
          "DEF": "TextToSpeechAnchor",
          "description": "text to speech in browser",
          "parameter": [
            "target=_blank"
          ],
          "url": [
            "http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"
          ]
        }
      ],
      "scale": {
        "x": 0.4,
        "y": 0.4,
        "z": 0.4
      },
      "translation": {
        "x": 3.3,
        "y": -0.5,
        "z": 0
      }
    }
  ]
}