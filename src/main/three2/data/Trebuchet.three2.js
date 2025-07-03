{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "Trebuchet.x3d"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "backUrl": [
        "https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"
      ],
      "bottomUrl": [
        "https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"
      ],
      "frontUrl": [
        "https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"
      ],
      "groundAngle": [
        1.309,
        1.570796
      ],
      "groundColor": [
        {
          "r": 0.1,
          "g": 0.1,
          "b": 0
        },
        {
          "r": 0.4,
          "g": 0.25,
          "b": 0.2
        },
        {
          "r": 0.6,
          "g": 0.6,
          "b": 0.6
        }
      ],
      "leftUrl": [
        "https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"
      ],
      "rightUrl": [
        "https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"
      ],
      "skyAngle": [
        1.309,
        1.57079
      ],
      "skyColor": [
        {
          "r": 0,
          "g": 0.2,
          "b": 0.7
        },
        {
          "r": 0,
          "g": 0.5,
          "b": 1
        },
        {
          "r": 1,
          "g": 1,
          "b": 1
        }
      ],
      "topUrl": [
        "https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"
      ]
    },
    {
      "string": " sound",
      "nodeType": "sound",
      "children": [
        {
          "string": "source audioclip DEF HolyGrail",
          "nodeType": "audioclip",
          "children": [],
          "DEF": "HolyGrail",
          "description": "HolyGrail",
          "loop": true,
          "url": [
            "holygral.mp3",
            "http://www.nps.navy.mil/code32/vrml/holygral.mp3"
          ]
        }
      ],
      "maxBack": 1000,
      "maxFront": 1000
    },
    {
      "string": " shape",
      "nodeType": "shape",
      "children": [
        {
          "string": "geometry box",
          "nodeType": "box",
          "children": [],
          "size": {
            "x": 10000,
            "y": 1,
            "z": 10000
          }
        },
        {
          "string": "appearance",
          "nodeType": "appearance",
          "children": [
            {
              "string": "appearance imagetexture",
              "nodeType": "imagetexture",
              "children": [],
              "url": [
                "grass.jpg",
                "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"
              ]
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
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "appearance DEF TextAppearance",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 1,
                    "g": 0,
                    "b": 0
                  },
                  "emissiveColor": {
                    "r": 1,
                    "g": 1,
                    "b": 0
                  }
                }
              ],
              "DEF": "TextAppearance"
            },
            {
              "string": [
                "Click Sling to Select Projectile"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle",
                  "nodeType": "fontstyle",
                  "children": []
                }
              ]
            }
          ]
        }
      ],
      "rotation": {
        "x": 0,
        "y": 1,
        "z": 0,
        "w": 1.57
      },
      "scale": {
        "x": 0.5,
        "y": 0.5,
        "z": 0.5
      },
      "translation": {
        "x": 10.5,
        "y": 6.5,
        "z": 4.5
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " switch DEF Weight",
          "nodeType": "switch",
          "children": [
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE TextAppearance",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "TextAppearance"
                    },
                    {
                      "string": [
                        "Click Here to Change Counter Weight (50 lbs)"
                      ],
                      "nodeType": "text",
                      "children": []
                    }
                  ]
                }
              ]
            },
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE TextAppearance",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "TextAppearance"
                    },
                    {
                      "string": [
                        "Click Here to Change Counter Weight (500 lbs)"
                      ],
                      "nodeType": "text",
                      "children": []
                    }
                  ]
                }
              ]
            },
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE TextAppearance",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "TextAppearance"
                    },
                    {
                      "string": [
                        "Click Here to Change Counter Weight (1000 lbs)"
                      ],
                      "nodeType": "text",
                      "children": []
                    }
                  ]
                }
              ]
            },
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "appearance USE TextAppearance",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "TextAppearance"
                    },
                    {
                      "string": [
                        "Click Here to Change Counter Weight (10000 lbs)"
                      ],
                      "nodeType": "text",
                      "children": []
                    }
                  ]
                }
              ]
            }
          ],
          "DEF": "Weight",
          "whichChoice": 0
        },
        {
          "string": " touchsensor DEF weightselector",
          "nodeType": "touchsensor",
          "children": [],
          "DEF": "weightselector",
          "description": "weight selector"
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
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 20,
                    "y": 1,
                    "z": 1
                  }
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
              ]
            }
          ],
          "translation": {
            "x": 8,
            "y": 0,
            "z": 0
          }
        }
      ],
      "rotation": {
        "x": 0,
        "y": 1,
        "z": 0,
        "w": 1.57
      },
      "scale": {
        "x": 0.5,
        "y": 0.5,
        "z": 0.5
      },
      "translation": {
        "x": 11,
        "y": 5.5,
        "z": 6
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF launch",
          "nodeType": "transform",
          "children": [
            {
              "string": " billboard",
              "nodeType": "billboard",
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
                          "diffuseColor": {
                            "r": 1,
                            "g": 0,
                            "b": 0
                          }
                        }
                      ]
                    },
                    {
                      "string": [
                        "LAUNCH"
                      ],
                      "nodeType": "text",
                      "children": [
                        {
                          "string": "fontStyle fontstyle",
                          "nodeType": "fontstyle",
                          "children": []
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
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry box",
                          "nodeType": "box",
                          "children": [],
                          "size": {
                            "x": 5,
                            "y": 1,
                            "z": 1
                          }
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
                      ]
                    }
                  ],
                  "translation": {
                    "x": 2,
                    "y": 0.3,
                    "z": 0
                  }
                },
                {
                  "string": " switch DEF PigdogMonk",
                  "nodeType": "switch",
                  "children": [
                    {
                      "string": " group",
                      "nodeType": "group",
                      "children": [
                        {
                          "string": " sound",
                          "nodeType": "sound",
                          "children": [
                            {
                              "string": "source audioclip DEF PigDogSound",
                              "nodeType": "audioclip",
                              "children": [],
                              "DEF": "PigDogSound",
                              "description": "PigDogSound",
                              "url": [
                                "pigdog.wav",
                                "http://www.nps.navy.mil/code32/vrml/pigdog.wav"
                              ]
                            }
                          ],
                          "maxBack": 1000,
                          "maxFront": 1000
                        }
                      ]
                    },
                    {
                      "string": " group",
                      "nodeType": "group",
                      "children": [
                        {
                          "string": " sound",
                          "nodeType": "sound",
                          "children": [
                            {
                              "string": "source audioclip DEF MonkSound",
                              "nodeType": "audioclip",
                              "children": [],
                              "DEF": "MonkSound",
                              "description": "MonkSound",
                              "url": [
                                "monks.wav",
                                "http://www.nps.navy.mil/code32/vrml/monks.wav"
                              ]
                            }
                          ],
                          "maxBack": 1000,
                          "maxFront": 1000
                        }
                      ]
                    }
                  ],
                  "DEF": "PigdogMonk",
                  "whichChoice": -1
                }
              ]
            },
            {
              "string": " touchsensor DEF Launch",
              "nodeType": "touchsensor",
              "children": [],
              "DEF": "Launch",
              "description": "launch!"
            }
          ],
          "DEF": "launch",
          "translation": {
            "x": 0,
            "y": 2,
            "z": 5
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " switch DEF projectilename",
              "nodeType": "switch",
              "children": [
                {
                  "string": " group",
                  "nodeType": "group",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance USE TextAppearance",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "TextAppearance"
                        },
                        {
                          "string": [
                            "Bowling Ball (10 lbs)"
                          ],
                          "nodeType": "text",
                          "children": [
                            {
                              "string": "fontStyle fontstyle",
                              "nodeType": "fontstyle",
                              "children": [],
                              "size": 0.5
                            }
                          ]
                        }
                      ]
                    },
                    {
                      "string": " sound",
                      "nodeType": "sound",
                      "children": [
                        {
                          "string": "source audioclip DEF HolyHandGrenadeSound",
                          "nodeType": "audioclip",
                          "children": [],
                          "DEF": "HolyHandGrenadeSound",
                          "description": "HolyHandGrenadeSound",
                          "url": [
                            "grenade.wav",
                            "http://www.nps.navy.mil/code32/vrml/grenade.wav"
                          ]
                        }
                      ],
                      "maxBack": 1000,
                      "maxFront": 1000,
                      "priority": 1
                    }
                  ]
                },
                {
                  "string": " group",
                  "nodeType": "group",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance USE TextAppearance",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "TextAppearance"
                        },
                        {
                          "string": [
                            "Cow (1000 lbs)"
                          ],
                          "nodeType": "text",
                          "children": [
                            {
                              "string": "fontStyle fontstyle",
                              "nodeType": "fontstyle",
                              "children": [],
                              "size": 0.5
                            }
                          ]
                        }
                      ]
                    },
                    {
                      "string": " sound",
                      "nodeType": "sound",
                      "children": [
                        {
                          "string": "source audioclip DEF CowSound",
                          "nodeType": "audioclip",
                          "children": [],
                          "DEF": "CowSound",
                          "description": "CowSound",
                          "url": [
                            "lavache.wav",
                            "http://www.nps.navy.mil/code32/vrml/lavache.wav"
                          ]
                        }
                      ],
                      "maxBack": 1000,
                      "maxFront": 1000
                    }
                  ]
                },
                {
                  "string": " group",
                  "nodeType": "group",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "appearance USE TextAppearance",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "TextAppearance"
                        },
                        {
                          "string": [
                            "Chicken (5 lbs)"
                          ],
                          "nodeType": "text",
                          "children": [
                            {
                              "string": "fontStyle fontstyle",
                              "nodeType": "fontstyle",
                              "children": [],
                              "size": 0.5
                            }
                          ]
                        }
                      ]
                    },
                    {
                      "string": " sound",
                      "nodeType": "sound",
                      "children": [
                        {
                          "string": "source audioclip DEF HamsterSound",
                          "nodeType": "audioclip",
                          "children": [],
                          "DEF": "HamsterSound",
                          "description": "HamsterSound",
                          "url": [
                            "hamster.wav",
                            "http://www.nps.navy.mil/code32/vrml/hamster.wav"
                          ]
                        }
                      ],
                      "maxBack": 1000,
                      "maxFront": 1000,
                      "priority": 1
                    }
                  ]
                }
              ],
              "DEF": "projectilename",
              "whichChoice": 0
            }
          ]
        }
      ],
      "rotation": {
        "x": 0,
        "y": 1,
        "z": 0,
        "w": 1.57
      },
      "translation": {
        "x": 10,
        "y": 0.5,
        "z": 4.5
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF aft",
          "nodeType": "transform",
          "children": [
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform USE launch",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "launch"
                }
              ],
              "translation": {
                "x": -2.5,
                "y": -4.5,
                "z": -2
              }
            }
          ],
          "DEF": "aft",
          "translation": {
            "x": 5,
            "y": 5,
            "z": 15
          }
        }
      ],
      "rotation": {
        "x": 0,
        "y": 1,
        "z": 0,
        "w": -1.67
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape DEF plank",
          "nodeType": "shape",
          "children": [
            {
              "string": "geometry box",
              "nodeType": "box",
              "children": [],
              "size": {
                "x": 25,
                "y": 1,
                "z": 1
              }
            },
            {
              "string": "appearance DEF wood",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance imagetexture DEF woodTexture",
                  "nodeType": "imagetexture",
                  "children": [],
                  "DEF": "woodTexture",
                  "url": [
                    "wood.gif",
                    "https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"
                  ]
                }
              ],
              "DEF": "wood"
            }
          ],
          "DEF": "plank"
        },
        {
          "string": " transform DEF angledsupport",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE plank",
              "nodeType": "shape",
              "children": [],
              "USE": "plank"
            }
          ],
          "DEF": "angledsupport",
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": 1
          },
          "translation": {
            "x": -5,
            "y": 10,
            "z": 0
          }
        },
        {
          "string": " transform DEF angledsupport2",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE plank",
              "nodeType": "shape",
              "children": [],
              "USE": "plank"
            }
          ],
          "DEF": "angledsupport2",
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": -1
          },
          "translation": {
            "x": 5,
            "y": 10,
            "z": 0
          }
        },
        {
          "string": " transform DEF verticalsupport",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE plank",
              "nodeType": "shape",
              "children": [],
              "USE": "plank"
            },
            "/*Main Verticle Support*/"
          ],
          "DEF": "verticalsupport",
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": 1.57
          },
          "scale": {
            "x": 0.9,
            "y": 1,
            "z": 1
          },
          "translation": {
            "x": 0,
            "y": 11,
            "z": 0
          }
        },
        {
          "string": " transform DEF horizontalsupport",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE plank",
              "nodeType": "shape",
              "children": [],
              "USE": "plank"
            }
          ],
          "DEF": "horizontalsupport",
          "scale": {
            "x": 0.4,
            "y": 1,
            "z": 1
          },
          "translation": {
            "x": 0,
            "y": 10,
            "z": 0
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE plank",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "plank"
                }
              ],
              "rotation": {
                "x": 0,
                "y": 1,
                "z": 0,
                "w": 0.4
              }
            }
          ],
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": 1.57
          },
          "scale": {
            "x": 0.6,
            "y": 1,
            "z": 1
          },
          "translation": {
            "x": 0,
            "y": 5,
            "z": 10
          }
        },
        {
          "string": " transform DEF panel",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 5,
                    "y": 5,
                    "z": 0.5
                  }
                },
                {
                  "string": "appearance USE wood",
                  "nodeType": "appearance",
                  "children": [],
                  "USE": "wood"
                }
              ]
            }
          ],
          "DEF": "panel",
          "translation": {
            "x": 0,
            "y": 18.2,
            "z": -0.3
          }
        },
        {
          "string": " transform",
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
                      "string": "geometry extrusion",
                      "nodeType": "extrusion",
                      "children": [],
                      "beginCap": false,
                      "crossSection": [
                        {
                          "x": 1,
                          "y": -0.38
                        },
                        {
                          "x": 0.92,
                          "y": -0.38
                        },
                        {
                          "x": 0.71,
                          "y": -0.71
                        },
                        {
                          "x": 0.38,
                          "y": -0.92
                        },
                        {
                          "x": 0,
                          "y": -1
                        },
                        {
                          "x": -0.38,
                          "y": -0.92
                        },
                        {
                          "x": -0.71,
                          "y": -0.71
                        },
                        {
                          "x": -0.92,
                          "y": -0.38
                        },
                        {
                          "x": -1,
                          "y": -0.38
                        },
                        {
                          "x": -1,
                          "y": -1.1
                        },
                        {
                          "x": 1,
                          "y": -1.1
                        },
                        {
                          "x": 1,
                          "y": -0.38
                        }
                      ],
                      "endCap": false,
                      "solid": false,
                      "spine": [
                        {
                          "x": 0,
                          "y": 6,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": -11,
                          "z": 0
                        }
                      ]
                    },
                    {
                      "string": "appearance USE wood",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "wood"
                    }
                  ]
                }
              ],
              "rotation": {
                "x": 0,
                "y": 0,
                "z": 1,
                "w": 1.57
              }
            }
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "translation": {
            "x": 0,
            "y": 0.6,
            "z": 2.5
          }
        },
        {
          "string": " transform DEF flinger",
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
                      "string": "geometry box",
                      "nodeType": "box",
                      "children": [],
                      "size": {
                        "x": 35,
                        "y": 1,
                        "z": 1
                      }
                    },
                    {
                      "string": "appearance USE wood",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "wood"
                    }
                  ]
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
                          "string": "geometry box",
                          "nodeType": "box",
                          "children": [],
                          "size": {
                            "x": 8,
                            "y": 2,
                            "z": 2
                          }
                        },
                        {
                          "string": "appearance USE wood",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "wood"
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 7,
                    "y": 0,
                    "z": 0
                  }
                }
              ]
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF Torus",
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
                          "specularColor": {
                            "r": 1,
                            "g": 1,
                            "b": 1
                          }
                        }
                      ]
                    },
                    {
                      "string": "geometry extrusion",
                      "nodeType": "extrusion",
                      "children": [],
                      "beginCap": false,
                      "convex": false,
                      "creaseAngle": 1.57,
                      "crossSection": [
                        {
                          "x": 0.9,
                          "y": 0
                        },
                        {
                          "x": 0.81,
                          "y": -0.34
                        },
                        {
                          "x": 0.63,
                          "y": -0.63
                        },
                        {
                          "x": 0.34,
                          "y": -0.83
                        },
                        {
                          "x": 0,
                          "y": -0.9
                        },
                        {
                          "x": -0.34,
                          "y": -0.81
                        },
                        {
                          "x": -0.63,
                          "y": -0.63
                        },
                        {
                          "x": -0.81,
                          "y": -0.34
                        },
                        {
                          "x": -0.9,
                          "y": 0
                        },
                        {
                          "x": -0.81,
                          "y": 0.34
                        },
                        {
                          "x": -0.63,
                          "y": 0.63
                        },
                        {
                          "x": -0.34,
                          "y": 0.81
                        },
                        {
                          "x": 0,
                          "y": 0.9
                        },
                        {
                          "x": 0.38,
                          "y": 0.81
                        },
                        {
                          "x": 0.63,
                          "y": 0.63
                        },
                        {
                          "x": 0.81,
                          "y": 0.34
                        },
                        {
                          "x": 0.9,
                          "y": 0
                        }
                      ],
                      "endCap": false,
                      "spine": [
                        {
                          "x": 2,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 1.85,
                          "y": 0,
                          "z": 0.77
                        },
                        {
                          "x": 1.41,
                          "y": 0,
                          "z": 1.41
                        },
                        {
                          "x": 0.77,
                          "y": 0,
                          "z": 1.85
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 2
                        },
                        {
                          "x": -0.77,
                          "y": 0,
                          "z": 1.85
                        },
                        {
                          "x": -1.41,
                          "y": 0,
                          "z": 1.41
                        },
                        {
                          "x": -1.85,
                          "y": 0,
                          "z": 0.77
                        },
                        {
                          "x": -2,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": -1.85,
                          "y": 0,
                          "z": -0.77
                        },
                        {
                          "x": -1.41,
                          "y": 0,
                          "z": -1.41
                        },
                        {
                          "x": -0.77,
                          "y": 0,
                          "z": -1.85
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -2
                        },
                        {
                          "x": 0.77,
                          "y": 0,
                          "z": -1.85
                        },
                        {
                          "x": 1.41,
                          "y": 0,
                          "z": -1.41
                        },
                        {
                          "x": 1.85,
                          "y": 0,
                          "z": -0.77
                        },
                        {
                          "x": 2,
                          "y": 0,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "DEF": "Torus"
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
                          "string": "appearance DEF rope",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance imagetexture USE woodTexture",
                              "nodeType": "imagetexture",
                              "children": [],
                              "USE": "woodTexture"
                            }
                          ],
                          "DEF": "rope"
                        },
                        {
                          "string": "geometry sphere",
                          "nodeType": "sphere",
                          "children": [],
                          "radius": 1.5
                        }
                      ]
                    },
                    "/*knott*/"
                  ],
                  "translation": {
                    "x": 1,
                    "y": 0,
                    "z": 2
                  }
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              },
              "scale": {
                "x": 0.2,
                "y": 0.2,
                "z": 0.2
              },
              "translation": {
                "x": -15,
                "y": -1,
                "z": 0
              }
            },
            "/*The Unicorn*/",
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": [],
                      "height": 10
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [],
                          "specularColor": {
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
                    "/*The Unicorn*/",
                    {
                      "string": " shape USE Torus",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "Torus"
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
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 1.5
                            },
                            {
                              "string": "appearance USE rope",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "rope"
                            }
                          ]
                        },
                        "/*Knott*/"
                      ],
                      "translation": {
                        "x": -2,
                        "y": 0,
                        "z": 0
                      }
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": -2.5,
                    "z": 0
                  }
                },
                {
                  "string": " transform",
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
                              "string": "appearance USE rope",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "rope"
                            },
                            {
                              "string": "geometry extrusion",
                              "nodeType": "extrusion",
                              "children": [],
                              "beginCap": false,
                              "creaseAngle": 0.76,
                              "crossSection": [
                                {
                                  "x": 0.1,
                                  "y": 0
                                },
                                {
                                  "x": 0.092,
                                  "y": -0.038
                                },
                                {
                                  "x": 0.071,
                                  "y": -0.071
                                },
                                {
                                  "x": 0.038,
                                  "y": -0.092
                                },
                                {
                                  "x": 0,
                                  "y": -0.1
                                },
                                {
                                  "x": -0.038,
                                  "y": -0.092
                                },
                                {
                                  "x": -0.071,
                                  "y": -0.071
                                },
                                {
                                  "x": -0.092,
                                  "y": -0.038
                                },
                                {
                                  "x": -0.1,
                                  "y": 0
                                },
                                {
                                  "x": -0.092,
                                  "y": 0.038
                                },
                                {
                                  "x": -0.071,
                                  "y": 0.071
                                },
                                {
                                  "x": -0.038,
                                  "y": 0.092
                                },
                                {
                                  "x": 0,
                                  "y": 0.1
                                },
                                {
                                  "x": 0.038,
                                  "y": 0.092
                                },
                                {
                                  "x": 0.071,
                                  "y": 0.071
                                },
                                {
                                  "x": 0.092,
                                  "y": 0.038
                                },
                                {
                                  "x": 0.1,
                                  "y": 0
                                }
                              ],
                              "endCap": false,
                              "solid": false,
                              "spine": [
                                {
                                  "x": -15.2,
                                  "y": 1.4,
                                  "z": 2.2
                                },
                                {
                                  "x": -12,
                                  "y": -0.8,
                                  "z": 2.2
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "scale": {
                        "x": 5,
                        "y": 5,
                        "z": 5
                      }
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.2
                  },
                  "translation": {
                    "x": 15,
                    "y": 55,
                    "z": -11
                  }
                }
              ],
              "rotation": {
                "x": 0,
                "y": 0,
                "z": 1,
                "w": 1.2
              },
              "scale": {
                "x": 0.2,
                "y": 0.2,
                "z": 0.2
              },
              "translation": {
                "x": -18.3,
                "y": 0.3,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    "/*Knot*/",
                    {
                      "string": " shape USE Torus",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "Torus"
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
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 1.5
                            },
                            {
                              "string": "appearance USE rope",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "rope"
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": -1,
                        "y": 0,
                        "z": 1.7
                      }
                    }
                  ],
                  "scale": {
                    "x": 0.2,
                    "y": 0.2,
                    "z": 0.2
                  }
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": -1.7
              },
              "translation": {
                "x": -17,
                "y": -4.5,
                "z": 0
              }
            },
            {
              "string": " transform DEF RnS",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform DEF ropes",
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
                              "string": "appearance USE rope",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "rope"
                            },
                            {
                              "string": "geometry extrusion",
                              "nodeType": "extrusion",
                              "children": [],
                              "beginCap": false,
                              "creaseAngle": 0.76,
                              "crossSection": [
                                {
                                  "x": 0.1,
                                  "y": 0
                                },
                                {
                                  "x": 0.092,
                                  "y": -0.038
                                },
                                {
                                  "x": 0.071,
                                  "y": -0.071
                                },
                                {
                                  "x": 0.038,
                                  "y": -0.092
                                },
                                {
                                  "x": 0,
                                  "y": -0.1
                                },
                                {
                                  "x": -0.038,
                                  "y": -0.092
                                },
                                {
                                  "x": -0.071,
                                  "y": -0.071
                                },
                                {
                                  "x": -0.092,
                                  "y": -0.038
                                },
                                {
                                  "x": -0.1,
                                  "y": 0
                                },
                                {
                                  "x": -0.092,
                                  "y": 0.038
                                },
                                {
                                  "x": -0.071,
                                  "y": 0.071
                                },
                                {
                                  "x": -0.038,
                                  "y": 0.092
                                },
                                {
                                  "x": 0,
                                  "y": 0.1
                                },
                                {
                                  "x": 0.038,
                                  "y": 0.092
                                },
                                {
                                  "x": 0.071,
                                  "y": 0.071
                                },
                                {
                                  "x": 0.092,
                                  "y": 0.038
                                },
                                {
                                  "x": 0.1,
                                  "y": 0
                                }
                              ],
                              "endCap": false,
                              "solid": false,
                              "spine": [
                                {
                                  "x": -33,
                                  "y": 0.9,
                                  "z": 2.5
                                },
                                {
                                  "x": -18.5,
                                  "y": 1.9,
                                  "z": 2.55
                                }
                              ]
                            }
                          ]
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "appearance USE rope",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "rope"
                            },
                            {
                              "string": "geometry extrusion",
                              "nodeType": "extrusion",
                              "children": [],
                              "beginCap": false,
                              "creaseAngle": 0.76,
                              "crossSection": [
                                {
                                  "x": 0.1,
                                  "y": 0
                                },
                                {
                                  "x": 0.092,
                                  "y": -0.038
                                },
                                {
                                  "x": 0.071,
                                  "y": -0.071
                                },
                                {
                                  "x": 0.038,
                                  "y": -0.092
                                },
                                {
                                  "x": 0,
                                  "y": -0.1
                                },
                                {
                                  "x": -0.038,
                                  "y": -0.092
                                },
                                {
                                  "x": -0.071,
                                  "y": -0.071
                                },
                                {
                                  "x": -0.092,
                                  "y": -0.038
                                },
                                {
                                  "x": -0.1,
                                  "y": 0
                                },
                                {
                                  "x": -0.092,
                                  "y": 0.038
                                },
                                {
                                  "x": -0.071,
                                  "y": 0.071
                                },
                                {
                                  "x": -0.038,
                                  "y": 0.092
                                },
                                {
                                  "x": 0,
                                  "y": 0.1
                                },
                                {
                                  "x": 0.038,
                                  "y": 0.092
                                },
                                {
                                  "x": 0.071,
                                  "y": 0.071
                                },
                                {
                                  "x": 0.092,
                                  "y": 0.038
                                },
                                {
                                  "x": 0.1,
                                  "y": 0
                                }
                              ],
                              "endCap": false,
                              "solid": false,
                              "spine": [
                                {
                                  "x": -35.7,
                                  "y": -0.8,
                                  "z": 2.5
                                },
                                {
                                  "x": -18.8,
                                  "y": -0.8,
                                  "z": 2.55
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "rotation": {
                        "x": 0,
                        "y": 0,
                        "z": 1,
                        "w": -0.82
                      },
                      "translation": {
                        "x": 7,
                        "y": -26,
                        "z": -2.5
                      }
                    }
                  ],
                  "DEF": "ropes"
                },
                {
                  "string": " transform DEF sling",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " transform",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " transform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape DEF halfsling",
                                      "nodeType": "shape",
                                      "children": [
                                        {
                                          "string": "appearance DEF clear",
                                          "nodeType": "appearance",
                                          "children": [
                                            {
                                              "string": "appearance material",
                                              "nodeType": "material",
                                              "children": [],
                                              "transparency": 0.5
                                            }
                                          ],
                                          "DEF": "clear"
                                        },
                                        {
                                          "string": "geometry extrusion",
                                          "nodeType": "extrusion",
                                          "children": [],
                                          "crossSection": [
                                            {
                                              "x": 0,
                                              "y": 0
                                            },
                                            {
                                              "x": 0,
                                              "y": 5
                                            },
                                            {
                                              "x": 0.5,
                                              "y": 7
                                            },
                                            {
                                              "x": 1,
                                              "y": 8
                                            },
                                            {
                                              "x": 2,
                                              "y": 9
                                            },
                                            {
                                              "x": 3,
                                              "y": 11
                                            },
                                            {
                                              "x": 3.5,
                                              "y": 11.2
                                            },
                                            {
                                              "x": 4,
                                              "y": 11
                                            },
                                            {
                                              "x": 5,
                                              "y": 9
                                            },
                                            {
                                              "x": 6,
                                              "y": 8
                                            },
                                            {
                                              "x": 6.5,
                                              "y": 7
                                            },
                                            {
                                              "x": 6.7,
                                              "y": 5
                                            },
                                            {
                                              "x": 6.7,
                                              "y": 0
                                            },
                                            {
                                              "x": 0,
                                              "y": 0
                                            }
                                          ],
                                          "spine": [
                                            {
                                              "x": 0,
                                              "y": 0,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.1,
                                              "y": 0,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "halfsling"
                                    },
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE Torus",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "Torus"
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
                                                  "string": "appearance USE rope",
                                                  "nodeType": "appearance",
                                                  "children": [],
                                                  "USE": "rope"
                                                },
                                                {
                                                  "string": "geometry sphere",
                                                  "nodeType": "sphere",
                                                  "children": [],
                                                  "radius": 1.5
                                                }
                                              ]
                                            }
                                          ],
                                          "translation": {
                                            "x": 0,
                                            "y": 0,
                                            "z": 2
                                          }
                                        }
                                      ],
                                      "scale": {
                                        "x": 0.3,
                                        "y": 0.3,
                                        "z": 0.3
                                      },
                                      "translation": {
                                        "x": 0,
                                        "y": -3.5,
                                        "z": 11.5
                                      }
                                    }
                                  ],
                                  "scale": {
                                    "x": 0.3,
                                    "y": 0.3,
                                    "z": 0.3
                                  }
                                },
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape USE halfsling",
                                      "nodeType": "shape",
                                      "children": [],
                                      "USE": "halfsling"
                                    },
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE Torus",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "Torus"
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
                                                  "string": "appearance USE rope",
                                                  "nodeType": "appearance",
                                                  "children": [],
                                                  "USE": "rope"
                                                },
                                                {
                                                  "string": "geometry sphere",
                                                  "nodeType": "sphere",
                                                  "children": [],
                                                  "radius": 1.5
                                                }
                                              ]
                                            }
                                          ],
                                          "translation": {
                                            "x": 0,
                                            "y": 0,
                                            "z": 2
                                          }
                                        }
                                      ],
                                      "scale": {
                                        "x": 0.3,
                                        "y": 0.3,
                                        "z": 0.3
                                      },
                                      "translation": {
                                        "x": 0,
                                        "y": -3.5,
                                        "z": 11.3
                                      }
                                    }
                                  ],
                                  "scale": {
                                    "x": 0.3,
                                    "y": 0.3,
                                    "z": 0.3
                                  },
                                  "translation": {
                                    "x": 2,
                                    "y": 0,
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
                                          "string": "geometry extrusion",
                                          "nodeType": "extrusion",
                                          "children": [],
                                          "beginCap": false,
                                          "creaseAngle": 0.785,
                                          "crossSection": [
                                            {
                                              "x": 1,
                                              "y": 0
                                            },
                                            {
                                              "x": 0.92,
                                              "y": -0.38
                                            },
                                            {
                                              "x": 0.71,
                                              "y": -0.71
                                            },
                                            {
                                              "x": 0.38,
                                              "y": -0.92
                                            },
                                            {
                                              "x": 0,
                                              "y": -1
                                            },
                                            {
                                              "x": -0.38,
                                              "y": -0.92
                                            },
                                            {
                                              "x": -0.71,
                                              "y": -0.71
                                            },
                                            {
                                              "x": -0.92,
                                              "y": -0.38
                                            },
                                            {
                                              "x": -1,
                                              "y": 0
                                            }
                                          ],
                                          "endCap": false,
                                          "solid": false,
                                          "spine": [
                                            {
                                              "x": 0,
                                              "y": -1,
                                              "z": 0
                                            },
                                            {
                                              "x": 0,
                                              "y": 1,
                                              "z": 0
                                            }
                                          ]
                                        },
                                        {
                                          "string": "appearance USE clear",
                                          "nodeType": "appearance",
                                          "children": [],
                                          "USE": "clear"
                                        }
                                      ]
                                    }
                                  ],
                                  "translation": {
                                    "x": 1,
                                    "y": -1,
                                    "z": 0
                                  }
                                }
                              ],
                              "rotation": {
                                "x": 0,
                                "y": 0,
                                "z": 1,
                                "w": 1.57
                              }
                            },
                            {
                              "string": " touchsensor DEF LauncheeChoice",
                              "nodeType": "touchsensor",
                              "children": [],
                              "DEF": "LauncheeChoice",
                              "description": "launcher choice"
                            }
                          ],
                          "rotation": {
                            "x": 0,
                            "y": 1,
                            "z": 0,
                            "w": -1.57
                          },
                          "scale": {
                            "x": 1,
                            "y": 1.3,
                            "z": 1
                          },
                          "translation": {
                            "x": 0.5,
                            "y": 0,
                            "z": -1
                          }
                        },
                        {
                          "string": " transform DEF projectiletransform",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " switch DEF projectile",
                              "nodeType": "switch",
                              "children": [
                                {
                                  "string": " group",
                                  "nodeType": "group",
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
                                              "string": "geometry sphere",
                                              "nodeType": "sphere",
                                              "children": [],
                                              "radius": 0.7
                                            },
                                            {
                                              "string": "appearance DEF black",
                                              "nodeType": "appearance",
                                              "children": [
                                                {
                                                  "string": "appearance material",
                                                  "nodeType": "material",
                                                  "children": [],
                                                  "diffuseColor": {
                                                    "r": 0,
                                                    "g": 0,
                                                    "b": 0
                                                  },
                                                  "specularColor": {
                                                    "r": 1,
                                                    "g": 1,
                                                    "b": 1
                                                  }
                                                }
                                              ],
                                              "DEF": "black"
                                            }
                                          ]
                                        }
                                      ],
                                      "translation": {
                                        "x": 0,
                                        "y": 0.7,
                                        "z": 0
                                      }
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
                                          "string": " inline",
                                          "nodeType": "inline",
                                          "children": [],
                                          "url": [
                                            "cow.wrl",
                                            "http://www.uoguelph.ca/~dchiu/cow.wrl"
                                          ]
                                        }
                                      ]
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
                                          "string": " inline",
                                          "nodeType": "inline",
                                          "children": [],
                                          "url": [
                                            "vrml_ginger.wrl",
                                            "http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"
                                          ]
                                        }
                                      ],
                                      "rotation": {
                                        "x": 0,
                                        "y": 1,
                                        "z": 0,
                                        "w": 1.57
                                      },
                                      "scale": {
                                        "x": 0.4,
                                        "y": 0.4,
                                        "z": 0.4
                                      },
                                      "translation": {
                                        "x": 0,
                                        "y": 0.7,
                                        "z": 0
                                      }
                                    }
                                  ]
                                }
                              ],
                              "DEF": "projectile",
                              "whichChoice": 0
                            }
                          ],
                          "DEF": "projectiletransform",
                          "scale": {
                            "x": 0.01,
                            "y": 0.01,
                            "z": 0.01
                          }
                        }
                      ]
                    }
                  ],
                  "DEF": "sling",
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": -0.82
                  },
                  "translation": {
                    "x": -4,
                    "y": -15.3,
                    "z": 0
                  }
                }
              ],
              "DEF": "RnS"
            }
          ],
          "DEF": "flinger",
          "center": {
            "x": 7,
            "y": 0,
            "z": 0
          },
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": 0.82
          },
          "scale": {
            "x": 0.9,
            "y": 1,
            "z": 1
          },
          "translation": {
            "x": -7,
            "y": 18,
            "z": 2.5
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
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "height": 8,
                  "radius": 0.4
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
                        "r": 0,
                        "g": 0,
                        "b": 0
                      },
                      "specularColor": {
                        "r": 1,
                        "g": 1,
                        "b": 1
                      }
                    }
                  ]
                }
              ]
            },
            "/*Top Pivot*/"
          ],
          "rotation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": 1.57
          },
          "translation": {
            "x": 0,
            "y": 18,
            "z": 2.5
          }
        },
        {
          "string": " transform DEF verticalweight",
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
                      "string": "geometry box",
                      "nodeType": "box",
                      "children": [],
                      "size": {
                        "x": 1,
                        "y": 10,
                        "z": 0.5
                      }
                    },
                    {
                      "string": "appearance USE wood",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "wood"
                    }
                  ]
                }
              ],
              "translation": {
                "x": 4,
                "y": 18,
                "z": 1.8
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
                      "string": "geometry box",
                      "nodeType": "box",
                      "children": [],
                      "size": {
                        "x": 1,
                        "y": 10,
                        "z": 0.5
                      }
                    },
                    {
                      "string": "appearance USE wood",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "wood"
                    }
                  ]
                }
              ],
              "translation": {
                "x": 4,
                "y": 18,
                "z": 3.2
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                "/*CounterWeight*/",
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": [],
                      "height": 4,
                      "radius": 1.5
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
                            "r": 0,
                            "g": 0,
                            "b": 0
                          },
                          "specularColor": {
                            "r": 1,
                            "g": 1,
                            "b": 1
                          }
                        }
                      ]
                    }
                  ]
                }
              ],
              "translation": {
                "x": 4,
                "y": 14,
                "z": 2.5
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
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": [],
                      "height": 2.5,
                      "radius": 0.3
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
                            "r": 0,
                            "g": 0,
                            "b": 0
                          },
                          "specularColor": {
                            "r": 1,
                            "g": 1,
                            "b": 1
                          }
                        }
                      ]
                    }
                  ]
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              },
              "translation": {
                "x": 4,
                "y": 22,
                "z": 2.5
              }
            }
          ],
          "DEF": "verticalweight"
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " transform DEF screw",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE Torus",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "Torus"
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "height": 10,
                          "radius": 0.7
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material",
                              "nodeType": "material",
                              "children": [],
                              "specularColor": {
                                "r": 1,
                                "g": 1,
                                "b": 1
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 1,
                    "y": 0,
                    "z": 0,
                    "w": -1.57
                  },
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 7
                  }
                }
              ],
              "DEF": "screw",
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform USE screw",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "screw"
                }
              ],
              "translation": {
                "x": 0,
                "y": 0,
                "z": 7
              }
            },
            "/*Release Pin*/",
            {
              "string": " transform DEF Pin",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform USE screw",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "screw"
                }
              ],
              "DEF": "Pin",
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": -1.57
              },
              "translation": {
                "x": 0,
                "y": 0,
                "z": -3
              }
            }
          ],
          "rotation": {
            "x": 0,
            "y": 0,
            "z": 1,
            "w": 1.57
          },
          "scale": {
            "x": 0.2,
            "y": 0.2,
            "z": 0.2
          },
          "translation": {
            "x": -11.5,
            "y": -1,
            "z": 2
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE plank",
              "nodeType": "shape",
              "children": [],
              "USE": "plank"
            },
            {
              "string": " transform USE angledsupport",
              "nodeType": "transform",
              "children": [],
              "USE": "angledsupport"
            },
            {
              "string": " transform USE angledsupport2",
              "nodeType": "transform",
              "children": [],
              "USE": "angledsupport2"
            },
            {
              "string": " transform USE verticalsupport",
              "nodeType": "transform",
              "children": [],
              "USE": "verticalsupport"
            },
            {
              "string": " transform USE horizontalsupport",
              "nodeType": "transform",
              "children": [],
              "USE": "horizontalsupport"
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform USE horizontalsupport",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "horizontalsupport"
                }
              ],
              "rotation": {
                "x": 0,
                "y": 1,
                "z": 0,
                "w": 1.57
              },
              "scale": {
                "x": 0.6,
                "y": 1,
                "z": 1
              },
              "translation": {
                "x": 0,
                "y": -11,
                "z": -2.5
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape USE plank",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "plank"
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 1,
                    "z": 0,
                    "w": 0.4
                  }
                }
              ],
              "rotation": {
                "x": 0,
                "y": 0,
                "z": 1,
                "w": -1.57
              },
              "scale": {
                "x": 0.6,
                "y": 1,
                "z": 1
              },
              "translation": {
                "x": 0,
                "y": 5,
                "z": -10
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform USE panel",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "panel"
                }
              ],
              "translation": {
                "x": 0,
                "y": 0,
                "z": 0.6
              }
            }
          ],
          "translation": {
            "x": 0,
            "y": 0,
            "z": 5
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF Axle",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 1,
                    "y": 1,
                    "z": 8
                  }
                },
                {
                  "string": "appearance USE wood",
                  "nodeType": "appearance",
                  "children": [],
                  "USE": "wood"
                }
              ],
              "DEF": "Axle"
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF wheel",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": [],
                      "radius": 2
                    },
                    {
                      "string": "appearance USE wood",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "wood"
                    }
                  ],
                  "DEF": "wheel"
                },
                {
                  "string": " shape DEF tracks",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": [],
                      "radius": 1.5
                    },
                    {
                      "string": "appearance USE black",
                      "nodeType": "appearance",
                      "children": [],
                      "USE": "black"
                    }
                  ],
                  "DEF": "tracks"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape DEF hub",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry sphere",
                          "nodeType": "sphere",
                          "children": [],
                          "radius": 1.5
                        },
                        {
                          "string": "appearance USE black",
                          "nodeType": "appearance",
                          "children": [],
                          "USE": "black"
                        }
                      ],
                      "DEF": "hub"
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0.55,
                    "z": 0
                  }
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              },
              "translation": {
                "x": 0,
                "y": 0,
                "z": 4.5
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE wheel",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "wheel"
                },
                {
                  "string": " shape USE tracks",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "tracks"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape USE hub",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "hub"
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": -0.55,
                    "z": 0
                  }
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              },
              "translation": {
                "x": 0,
                "y": 0,
                "z": -4.5
              }
            }
          ],
          "translation": {
            "x": 10,
            "y": -1,
            "z": 2.5
          }
        },
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape USE Axle",
              "nodeType": "shape",
              "children": [],
              "USE": "Axle"
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE wheel",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "wheel"
                },
                {
                  "string": " shape USE tracks",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "tracks"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape USE hub",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "hub"
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0.55,
                    "z": 0
                  }
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              },
              "translation": {
                "x": 0,
                "y": 0,
                "z": 4.5
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape USE wheel",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "wheel"
                },
                {
                  "string": " shape USE tracks",
                  "nodeType": "shape",
                  "children": [],
                  "USE": "tracks"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape USE hub",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "hub"
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": -0.55,
                    "z": 0
                  }
                }
              ],
              "rotation": {
                "x": 1,
                "y": 0,
                "z": 0,
                "w": 1.57
              },
              "translation": {
                "x": 0,
                "y": 0,
                "z": -4.5
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " viewpoint",
                      "nodeType": "viewpoint",
                      "children": [],
                      "description": "Side"
                    }
                  ],
                  "translation": {
                    "x": 1,
                    "y": 3,
                    "z": 0
                  }
                },
                {
                  "string": " transform USE launch",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "launch"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " touchsensor USE LauncheeChoice",
                      "nodeType": "touchsensor",
                      "children": [],
                      "USE": "LauncheeChoice"
                    },
                    {
                      "string": " switch USE projectilename",
                      "nodeType": "switch",
                      "children": [],
                      "USE": "projectilename"
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
                              "string": "geometry box",
                              "nodeType": "box",
                              "children": [],
                              "size": {
                                "x": 5,
                                "y": 0.5,
                                "z": 0.5
                              }
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
                          ]
                        }
                      ],
                      "translation": {
                        "x": 2.5,
                        "y": 0,
                        "z": 0
                      }
                    }
                  ]
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " touchsensor USE weightselector",
                      "nodeType": "touchsensor",
                      "children": [],
                      "USE": "weightselector"
                    },
                    {
                      "string": " switch USE Weight",
                      "nodeType": "switch",
                      "children": [],
                      "USE": "Weight"
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
                              "string": "geometry box",
                              "nodeType": "box",
                              "children": [],
                              "size": {
                                "x": 17,
                                "y": 1,
                                "z": 0.5
                              }
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
                          ]
                        }
                      ],
                      "translation": {
                        "x": 8,
                        "y": 0,
                        "z": 0
                      }
                    }
                  ],
                  "scale": {
                    "x": 0.5,
                    "y": 0.5,
                    "z": 0.5
                  },
                  "translation": {
                    "x": 0,
                    "y": -1,
                    "z": 0
                  }
                }
              ],
              "rotation": {
                "x": 0,
                "y": 1,
                "z": 0,
                "w": -0.6
              },
              "translation": {
                "x": 0,
                "y": 100,
                "z": 400
              }
            },
            {
              "string": " transform DEF ProjectileTransform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " switch USE projectile",
                  "nodeType": "switch",
                  "children": [],
                  "USE": "projectile"
                },
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " viewpoint",
                      "nodeType": "viewpoint",
                      "children": [],
                      "description": "Projectile Cam",
                      "position": {
                        "x": 0,
                        "y": 0,
                        "z": 15
                      }
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 1,
                    "z": 0,
                    "w": 1.57
                  },
                  "translation": {
                    "x": 0,
                    "y": 1,
                    "z": 0
                  }
                }
              ],
              "DEF": "ProjectileTransform",
              "translation": {
                "x": 14.25,
                "y": 1.25,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform DEF Front",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " viewpoint",
                      "nodeType": "viewpoint",
                      "children": [],
                      "description": "Fore"
                    }
                  ],
                  "DEF": "Front",
                  "rotation": {
                    "x": 0,
                    "y": 1,
                    "z": 0,
                    "w": 1.57
                  }
                }
              ],
              "translation": {
                "x": 20,
                "y": 2,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " viewpoint",
                      "nodeType": "viewpoint",
                      "children": [],
                      "description": "Aft"
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 1,
                    "z": 0,
                    "w": -1.57
                  }
                }
              ],
              "translation": {
                "x": -8,
                "y": 4,
                "z": 0
              }
            },
            {
              "string": " script DEF WeightScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\necmascript:\r\n\r\n\r\nfunction initialize ()\r\n{\r\n\twhichchoice =0;\r\n\tCounterWeight=100;\r\n}\r\n\r\nfunction set_boolean ( boolean_input, eventTime)\r\n{\r\n\r\n\tif ( boolean_input== false ) { return; } // ignore the unclick\r\n        whichchoice = whichchoice +1;\r\n\tif (whichchoice == 0)CounterWeight=50.00;\r\n\tif (whichchoice == 1)CounterWeight=500.00;\r\n\tif (whichchoice == 2)CounterWeight=1000.00;\r\n\tif (whichchoice == 3)CounterWeight=10000.00;\r\n        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\r\n\r\n\r\n        Browser.println ('CounterWeight ='+CounterWeight);\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "WeightScript"
            },
            {
              "string": " script DEF LauncheeScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\necmascript:\r\n\r\nfunction set_boolean (boolean_input, eventTime)\r\n{\r\n\tif ( boolean_input== false ) { return; } // ignore unclick\r\n        whichchoice = whichchoice +1;\r\n        if (whichchoice == 0)ProjectileWeight=10.00;\r\n        if (whichchoice == 1)ProjectileWeight=1000.00;\r\n\tif (whichchoice == 2)ProjectileWeight=5;\r\n\r\n\tif ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\r\n\tBrowser.println ('Projectile Weight'+ProjectileWeight);\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "LauncheeScript"
            },
            {
              "string": " script DEF PigdogMonkScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\necmascript:\r\n\r\nfunction set_boolean (boolean_input, eventTime)\r\n{\r\n\tif ( boolean_input== false ) { return; } // ignore unclick\r\n\r\n        whichchoice = whichchoice +1;\r\n\r\n        if ( whichchoice ==2 )  whichchoice = 0;\r\n\r\n\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "PigdogMonkScript"
            },
            {
              "string": " script DEF Mover",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\necmascript:\r\n\r\nfunction initialize ()\r\n{\r\n\tMassCounterWeight=100;\r\n\tMassProjectileWeight=10;\r\n\tBrowser.println ('MassCounterWeight =' + MassCounterWeight);\r\n\tBrowser.println ('MassProjectileWeight =' + MassProjectileWeight);\r\n}\r\n\r\nfunction set_MassProjectileWeight (value, timestamp)\r\n{\r\n\tMassProjectileWeight = value;\r\n\tBrowser.println ('new MassProjectileWeight =' + MassProjectileWeight);\r\n}\r\nfunction set_MassCounterWeight (value2, timestamp)\r\n{\r\n\tMassCounterWeight = value2;\r\n\tBrowser.println ('new MassCounterWeight =' + MassCounterWeight);\r\n}\r\n\r\n\r\nfunction set_fraction ( fraction, eventTime )\r\n{\r\n\tvar TrebuchetHeight=45;\r\n\tvar Height =25;\r\n      \tvar x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\r\n\t// start at TrebuchetHeight and keep along z axis (z=zero)\r\n\tvar y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\r\n        var z = 0;\r\n        transparent = new SFVec3f (1,1,1);\r\n     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\r\n\t\t{\r\n\t\tx=x-10;\r\n\t\ty=y+1;\r\n\t\ttransparent = new SFVec3f(.01, .01, .01);\r\n\t\t\t}\r\n\r\n\tvalue_changed = new SFVec3f (x, y, z);\r\n\tBrowser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "Mover"
            }
          ],
          "translation": {
            "x": -10,
            "y": -1,
            "z": 2.5
          }
        }
      ],
      "translation": {
        "x": 0,
        "y": 3,
        "z": 0
      }
    },
    {
      "string": " timesensor DEF clock",
      "nodeType": "timesensor",
      "children": [],
      "DEF": "clock",
      "cycleInterval": 10
    },
    {
      "string": " positioninterpolator DEF verticalweightpath",
      "nodeType": "positioninterpolator",
      "children": [],
      "DEF": "verticalweightpath",
      "key": [
        0,
        0.1,
        0.2,
        0.2,
        0.3,
        0.9
      ],
      "keyValue": [
        {
          "x": 1.4,
          "y": 1.6,
          "z": 0
        },
        {
          "x": 1,
          "y": -8,
          "z": 0
        },
        {
          "x": -3.5,
          "y": -12,
          "z": 0
        },
        {
          "x": -3.5,
          "y": -12,
          "z": 0
        },
        {
          "x": 1.2,
          "y": -8,
          "z": 0
        },
        {
          "x": 1.4,
          "y": 1.6,
          "z": 0
        }
      ]
    },
    {
      "string": " orientationinterpolator DEF flingerangles",
      "nodeType": "orientationinterpolator",
      "children": [],
      "DEF": "flingerangles",
      "key": [
        0,
        0.1,
        0.2,
        0.2,
        0.3,
        0.9
      ],
      "keyValue": [
        {
          "x": 0,
          "y": 0,
          "z": 1,
          "w": 0.82
        },
        {
          "x": 0,
          "y": 0,
          "z": 1,
          "w": -0.77
        },
        {
          "x": 0,
          "y": 0,
          "z": 1,
          "w": -1.57
        },
        {
          "x": 0,
          "y": 0,
          "z": 1,
          "w": -1.57
        },
        {
          "x": 0,
          "y": 0,
          "z": 1,
          "w": -0.77
        },
        {
          "x": 0,
          "y": 0,
          "z": 1,
          "w": 0.82
        }
      ]
    },
    {
      "string": " positioninterpolator DEF pinpath",
      "nodeType": "positioninterpolator",
      "children": [],
      "DEF": "pinpath",
      "key": [
        0,
        0.01,
        0.95,
        1
      ],
      "keyValue": [
        {
          "x": 0,
          "y": 0,
          "z": -3
        },
        {
          "x": 0,
          "y": 0,
          "z": -10
        },
        {
          "x": 0,
          "y": 0,
          "z": -10
        },
        {
          "x": 0,
          "y": 0,
          "z": -3
        }
      ]
    },
    {
      "string": " orientationinterpolator DEF RnSAngels",
      "nodeType": "orientationinterpolator",
      "children": [],
      "DEF": "RnSAngels",
      "key": [
        0,
        0.7,
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
          "w": -3.14
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
      "string": " positioninterpolator DEF invisiable",
      "nodeType": "positioninterpolator",
      "children": [],
      "DEF": "invisiable",
      "key": [
        0,
        0.2,
        0.98,
        0.99
      ],
      "keyValue": [
        {
          "x": 1,
          "y": 1,
          "z": 1
        },
        {
          "x": 0.01,
          "y": 0.01,
          "z": 0.01
        },
        {
          "x": 0.01,
          "y": 0.01,
          "z": 0.01
        },
        {
          "x": 1,
          "y": 1,
          "z": 1
        }
      ]
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "clock",
      "toField": "set_fraction",
      "toNode": "invisiable"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "invisiable",
      "toField": "set_scale",
      "toNode": "projectiletransform"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "CounterWeight",
      "fromNode": "WeightScript",
      "toField": "set_MassCounterWeight",
      "toNode": "Mover"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "ProjectileWeight",
      "fromNode": "LauncheeScript",
      "toField": "set_MassProjectileWeight",
      "toNode": "Mover"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "clock",
      "toField": "set_fraction",
      "toNode": "Mover"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "Mover",
      "toField": "set_translation",
      "toNode": "ProjectileTransform"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "transparent",
      "fromNode": "Mover",
      "toField": "set_scale",
      "toNode": "ProjectileTransform"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "touchTime",
      "fromNode": "Launch",
      "toField": "set_startTime",
      "toNode": "clock"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "isActive",
      "fromNode": "Launch",
      "toField": "set_boolean",
      "toNode": "PigdogMonkScript"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "touchTime",
      "fromNode": "Launch",
      "toField": "set_startTime",
      "toNode": "PigDogSound"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "touchTime",
      "fromNode": "Launch",
      "toField": "set_startTime",
      "toNode": "MonkSound"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "whichchoice",
      "fromNode": "PigdogMonkScript",
      "toField": "whichChoice",
      "toNode": "PigdogMonk"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "touchTime",
      "fromNode": "LauncheeChoice",
      "toField": "set_startTime",
      "toNode": "HolyHandGrenadeSound"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "touchTime",
      "fromNode": "LauncheeChoice",
      "toField": "set_startTime",
      "toNode": "CowSound"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "touchTime",
      "fromNode": "LauncheeChoice",
      "toField": "set_startTime",
      "toNode": "HamsterSound"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "isActive",
      "fromNode": "LauncheeChoice",
      "toField": "set_boolean",
      "toNode": "LauncheeScript"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "whichchoice",
      "fromNode": "LauncheeScript",
      "toField": "whichChoice",
      "toNode": "projectile"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "whichchoice",
      "fromNode": "LauncheeScript",
      "toField": "whichChoice",
      "toNode": "projectilename"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "isActive",
      "fromNode": "weightselector",
      "toField": "set_boolean",
      "toNode": "WeightScript"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "whichchoice",
      "fromNode": "WeightScript",
      "toField": "whichChoice",
      "toNode": "Weight"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "clock",
      "toField": "set_fraction",
      "toNode": "flingerangles"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "flingerangles",
      "toField": "set_rotation",
      "toNode": "flinger"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "clock",
      "toField": "set_fraction",
      "toNode": "verticalweightpath"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "verticalweightpath",
      "toField": "set_translation",
      "toNode": "verticalweight"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "fraction_changed",
      "fromNode": "clock",
      "toField": "set_fraction",
      "toNode": "pinpath"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "value_changed",
      "fromNode": "pinpath",
      "toField": "set_translation",
      "toNode": "Pin"
    }
  ]
}