{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "HAnimModelHandLeft.x3d"
    },
    {
      "string": " hanimhumanoid DEF hanim_Hand_Left",
      "nodeType": "hanimhumanoid",
      "children": [
        "/*original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'*/",
        {
          "string": "metadata metadataset",
          "nodeType": "metadataset",
          "children": [
            {
              "string": "value metadatastring",
              "nodeType": "metadatastring",
              "children": [],
              "name": "authorName",
              "value": [
                "Kwan-Hee YOO, Don Brutzman and Joe Williams"
              ],
              "containerField": "value"
            }
          ],
          "name": "HAnimHumanoid.info",
          "reference": "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
        },
        {
          "string": "skeleton hanimjoint DEF hanim_humanoid_root",
          "nodeType": "hanimjoint",
          "children": [
            "/*Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model*/",
            {
              "string": " hanimjoint DEF hanim_l_radiocarpal",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment DEF hanim_l_carpal",
                  "nodeType": "hanimsegment",
                  "children": [
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " shape DEF HAnimJointShape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.025
                            },
                            {
                              "string": "appearance DEF HAnimJointAppearanceBlue",
                              "nodeType": "appearance",
                              "children": [
                                {
                                  "string": "appearance material",
                                  "nodeType": "material",
                                  "children": [],
                                  "diffuseColor": {
                                    "r": 0,
                                    "g": 0,
                                    "b": 1
                                  }
                                }
                              ],
                              "DEF": "HAnimJointAppearanceBlue"
                            }
                          ],
                          "DEF": "HAnimJointShape"
                        }
                      ]
                    },
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
                              "emissiveColor": {
                                "r": 1,
                                "g": 1,
                                "b": 1
                              }
                            }
                          ]
                        },
                        {
                          "string": "geometry indexedlineset DEF RCToMC12",
                          "nodeType": "indexedlineset",
                          "children": [
                            {
                              "string": "coord coordinate",
                              "nodeType": "coordinate",
                              "children": [],
                              "point": [
                                {
                                  "x": 0,
                                  "y": 0,
                                  "z": 0
                                },
                                {
                                  "x": 0.1,
                                  "y": 0.1,
                                  "z": 0
                                }
                              ],
                              "points": [
                                {
                                  "x": 0,
                                  "y": 0,
                                  "z": 0
                                },
                                {
                                  "x": 0.1,
                                  "y": 0.1,
                                  "z": 0
                                }
                              ]
                            }
                          ],
                          "DEF": "RCToMC12",
                          "coordIndex": []
                        }
                      ]
                    },
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
                              "emissiveColor": {
                                "r": 1,
                                "g": 1,
                                "b": 1
                              }
                            }
                          ]
                        },
                        {
                          "string": "geometry indexedlineset DEF RCToMC3",
                          "nodeType": "indexedlineset",
                          "children": [
                            {
                              "string": "coord coordinate",
                              "nodeType": "coordinate",
                              "children": [],
                              "point": [
                                {
                                  "x": 0,
                                  "y": 0,
                                  "z": 0
                                },
                                {
                                  "x": 0,
                                  "y": 0.07,
                                  "z": 0
                                }
                              ],
                              "points": [
                                {
                                  "x": 0,
                                  "y": 0,
                                  "z": 0
                                },
                                {
                                  "x": 0,
                                  "y": 0.07,
                                  "z": 0
                                }
                              ]
                            }
                          ],
                          "DEF": "RCToMC3",
                          "coordIndex": []
                        }
                      ]
                    },
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
                              "emissiveColor": {
                                "r": 1,
                                "g": 1,
                                "b": 1
                              }
                            }
                          ]
                        },
                        {
                          "string": "geometry indexedlineset DEF RCToMC45",
                          "nodeType": "indexedlineset",
                          "children": [
                            {
                              "string": "coord coordinate",
                              "nodeType": "coordinate",
                              "children": [],
                              "point": [
                                {
                                  "x": 0,
                                  "y": 0,
                                  "z": 0
                                },
                                {
                                  "x": -0.1,
                                  "y": 0.1,
                                  "z": 0
                                }
                              ],
                              "points": [
                                {
                                  "x": 0,
                                  "y": 0,
                                  "z": 0
                                },
                                {
                                  "x": -0.1,
                                  "y": 0.1,
                                  "z": 0
                                }
                              ]
                            }
                          ],
                          "DEF": "RCToMC45",
                          "coordIndex": []
                        }
                      ]
                    }
                  ],
                  "name": "l_carpal",
                  "DEF": "hanim_l_carpal"
                },
                "/*MC1*/",
                {
                  "string": " hanimjoint DEF hanim_l_midcarpal_1",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimsegment DEF hanim_l_trapezium",
                      "nodeType": "hanimsegment",
                      "children": [
                        {
                          "string": " transform",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " shape DEF HAnimNewJointShape",
                              "nodeType": "shape",
                              "children": [
                                {
                                  "string": "geometry sphere",
                                  "nodeType": "sphere",
                                  "children": [],
                                  "radius": 0.025
                                },
                                {
                                  "string": "appearance DEF HAnimJointAppearanceRed",
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
                                  ],
                                  "DEF": "HAnimJointAppearanceRed"
                                }
                              ],
                              "DEF": "HAnimNewJointShape"
                            }
                          ],
                          "translation": {
                            "x": 0.14,
                            "y": 0.09,
                            "z": 0
                          }
                        },
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
                                  "emissiveColor": {
                                    "r": 1,
                                    "g": 1,
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": "geometry indexedlineset DEF MC12toCMC1",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.2,
                                      "y": 0.15,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.2,
                                      "y": 0.15,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "MC12toCMC1",
                              "coordIndex": []
                            }
                          ]
                        },
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
                                  "emissiveColor": {
                                    "r": 1,
                                    "g": 1,
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": "geometry indexedlineset DEF MC1toCMC1",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.1,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.1,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "MC1toCMC1",
                              "coordIndex": []
                            }
                          ]
                        }
                      ],
                      "name": "l_trapezium",
                      "DEF": "hanim_l_trapezium"
                    },
                    "/*thumb finger*/",
                    {
                      "string": " hanimjoint DEF hanim_l_carpometacarpal_1",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_metacarpal_1",
                          "nodeType": "hanimsegment",
                          "children": [
                            {
                              "string": " transform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " shape USE HAnimJointShape",
                                  "nodeType": "shape",
                                  "children": [],
                                  "USE": "HAnimJointShape"
                                }
                              ],
                              "translation": {
                                "x": 0.2,
                                "y": 0.15,
                                "z": 0
                              }
                            },
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
                                      "emissiveColor": {
                                        "r": 1,
                                        "g": 1,
                                        "b": 1
                                      }
                                    }
                                  ]
                                },
                                {
                                  "string": "geometry indexedlineset DEF CMC1toMCP1",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0.2,
                                          "y": 0.15,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.3,
                                          "y": 0.3,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0.2,
                                          "y": 0.15,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.3,
                                          "y": 0.3,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CMC1toMCP1",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_metacarpal_1",
                          "DEF": "hanim_l_metacarpal_1"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_metacarpophalangeal_1",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_carpal_proximal_phalanx_1",
                              "nodeType": "hanimsegment",
                              "children": [
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape USE HAnimJointShape",
                                      "nodeType": "shape",
                                      "children": [],
                                      "USE": "HAnimJointShape"
                                    }
                                  ],
                                  "translation": {
                                    "x": 0.3,
                                    "y": 0.3,
                                    "z": 0
                                  }
                                },
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
                                          "emissiveColor": {
                                            "r": 1,
                                            "g": 1,
                                            "b": 1
                                          }
                                        }
                                      ]
                                    },
                                    {
                                      "string": "geometry indexedlineset DEF MCP11toIP1",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.3,
                                              "y": 0.3,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.35,
                                              "y": 0.4,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.3,
                                              "y": 0.3,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.35,
                                              "y": 0.4,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "MCP11toIP1",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_phalanx_1",
                              "DEF": "hanim_l_carpal_proximal_phalanx_1"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_carpal_interphalangeal_1",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_carpal_distal_phalanx_1",
                                  "nodeType": "hanimsegment",
                                  "children": [
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE HAnimJointShape",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "HAnimJointShape"
                                        }
                                      ],
                                      "translation": {
                                        "x": 0.35,
                                        "y": 0.4,
                                        "z": 0
                                      }
                                    },
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
                                              "emissiveColor": {
                                                "r": 1,
                                                "g": 1,
                                                "b": 1
                                              }
                                            }
                                          ]
                                        },
                                        {
                                          "string": "geometry indexedlineset DEF fingertip_l_carpal_interphalangeal_1",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.35,
                                                  "y": 0.4,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.36,
                                                  "y": 0.45,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.35,
                                                  "y": 0.4,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.36,
                                                  "y": 0.45,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "fingertip_l_carpal_interphalangeal_1",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_carpal_distal_phalanx_1",
                                  "DEF": "hanim_l_carpal_distal_phalanx_1"
                                }
                              ],
                              "name": "l_carpal_interphalangeal_1",
                              "DEF": "hanim_l_carpal_interphalangeal_1",
                              "center": {
                                "x": 0.35,
                                "y": 0.4,
                                "z": 0
                              },
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "l_metacarpophalangeal_1",
                          "DEF": "hanim_l_metacarpophalangeal_1",
                          "center": {
                            "x": 0.3,
                            "y": 0.3,
                            "z": 0
                          },
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "l_carpometacarpal_1",
                      "DEF": "hanim_l_carpometacarpal_1",
                      "center": {
                        "x": 0.2,
                        "y": 0.15,
                        "z": 0
                      },
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "l_midcarpal_1",
                  "DEF": "hanim_l_midcarpal_1",
                  "center": {
                    "x": 0.14,
                    "y": 0.09,
                    "z": 0
                  },
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                },
                "/*MC2*/",
                {
                  "string": " hanimjoint DEF hanim_l_midcarpal_2",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimsegment DEF hanim_l_trapezoid",
                      "nodeType": "hanimsegment",
                      "children": [
                        {
                          "string": " transform",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " shape USE HAnimNewJointShape",
                              "nodeType": "shape",
                              "children": [],
                              "USE": "HAnimNewJointShape"
                            }
                          ],
                          "translation": {
                            "x": 0.07,
                            "y": 0.07,
                            "z": 0
                          }
                        },
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
                                  "emissiveColor": {
                                    "r": 1,
                                    "g": 1,
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": "geometry indexedlineset DEF MC2toCMC2",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": -0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.1,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": -0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.1,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "MC2toCMC2",
                              "coordIndex": []
                            }
                          ]
                        }
                      ],
                      "name": "l_trapezoid",
                      "DEF": "hanim_l_trapezoid"
                    },
                    "/*index finger*/",
                    {
                      "string": " hanimjoint DEF hanim_l_carpometacarpal_2",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_metacarpal_2",
                          "nodeType": "hanimsegment",
                          "children": [
                            {
                              "string": " transform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " shape USE HAnimJointShape",
                                  "nodeType": "shape",
                                  "children": [],
                                  "USE": "HAnimJointShape"
                                }
                              ],
                              "translation": {
                                "x": 0.1,
                                "y": 0.2,
                                "z": 0
                              }
                            },
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
                                      "emissiveColor": {
                                        "r": 1,
                                        "g": 1,
                                        "b": 1
                                      }
                                    }
                                  ]
                                },
                                {
                                  "string": "geometry indexedlineset DEF CMC2toMCP2",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0.1,
                                          "y": 0.2,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.15,
                                          "y": 0.5,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0.1,
                                          "y": 0.2,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.15,
                                          "y": 0.5,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CMC2toMCP2",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_metacarpal_2",
                          "DEF": "hanim_l_metacarpal_2"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_metacarpophalangeal_2",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_carpal_proximal_phalanx_2",
                              "nodeType": "hanimsegment",
                              "children": [
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape USE HAnimJointShape",
                                      "nodeType": "shape",
                                      "children": [],
                                      "USE": "HAnimJointShape"
                                    }
                                  ],
                                  "translation": {
                                    "x": 0.15,
                                    "y": 0.5,
                                    "z": 0
                                  }
                                },
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
                                          "emissiveColor": {
                                            "r": 1,
                                            "g": 1,
                                            "b": 1
                                          }
                                        }
                                      ]
                                    },
                                    {
                                      "string": "geometry indexedlineset DEF MCP2toPIP2",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.15,
                                              "y": 0.5,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.2,
                                              "y": 0.7,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.15,
                                              "y": 0.5,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.2,
                                              "y": 0.7,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "MCP2toPIP2",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_phalanx_2",
                              "DEF": "hanim_l_carpal_proximal_phalanx_2"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_2",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_carpal_middle_phalanx_2",
                                  "nodeType": "hanimsegment",
                                  "children": [
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE HAnimJointShape",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "HAnimJointShape"
                                        }
                                      ],
                                      "translation": {
                                        "x": 0.2,
                                        "y": 0.7,
                                        "z": 0
                                      }
                                    },
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
                                              "emissiveColor": {
                                                "r": 1,
                                                "g": 1,
                                                "b": 1
                                              }
                                            }
                                          ]
                                        },
                                        {
                                          "string": "geometry indexedlineset DEF PIP2toDIP2",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.2,
                                                  "y": 0.7,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.24,
                                                  "y": 0.87,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.2,
                                                  "y": 0.7,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.24,
                                                  "y": 0.87,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "PIP2toDIP2",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_carpal_middle_phalanx_2",
                                  "DEF": "hanim_l_carpal_middle_phalanx_2"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_2",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_carpal_distal_phalanx_2",
                                      "nodeType": "hanimsegment",
                                      "children": [
                                        {
                                          "string": " transform",
                                          "nodeType": "transform",
                                          "children": [
                                            {
                                              "string": " shape USE HAnimJointShape",
                                              "nodeType": "shape",
                                              "children": [],
                                              "USE": "HAnimJointShape"
                                            }
                                          ],
                                          "translation": {
                                            "x": 0.24,
                                            "y": 0.87,
                                            "z": 0
                                          }
                                        },
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
                                                  "emissiveColor": {
                                                    "r": 1,
                                                    "g": 1,
                                                    "b": 1
                                                  }
                                                }
                                              ]
                                            },
                                            {
                                              "string": "geometry indexedlineset DEF fingertip_l_carpal_distal_interphalangeal_2",
                                              "nodeType": "indexedlineset",
                                              "children": [
                                                {
                                                  "string": "coord coordinate",
                                                  "nodeType": "coordinate",
                                                  "children": [],
                                                  "point": [
                                                    {
                                                      "x": 0.24,
                                                      "y": 0.87,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.26,
                                                      "y": 0.93,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": 0.24,
                                                      "y": 0.87,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.26,
                                                      "y": 0.93,
                                                      "z": 0
                                                    }
                                                  ]
                                                }
                                              ],
                                              "DEF": "fingertip_l_carpal_distal_interphalangeal_2",
                                              "coordIndex": []
                                            }
                                          ]
                                        }
                                      ],
                                      "name": "l_carpal_distal_phalanx_2",
                                      "DEF": "hanim_l_carpal_distal_phalanx_2"
                                    }
                                  ],
                                  "name": "l_carpal_distal_interphalangeal_2",
                                  "DEF": "hanim_l_carpal_distal_interphalangeal_2",
                                  "center": {
                                    "x": 0.24,
                                    "y": 0.87,
                                    "z": 0
                                  },
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_interphalangeal_2",
                              "DEF": "hanim_l_carpal_proximal_interphalangeal_2",
                              "center": {
                                "x": 0.2,
                                "y": 0.7,
                                "z": 0
                              },
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "l_metacarpophalangeal_2",
                          "DEF": "hanim_l_metacarpophalangeal_2",
                          "center": {
                            "x": 0.15,
                            "y": 0.5,
                            "z": 0
                          },
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "l_carpometacarpal_2",
                      "DEF": "hanim_l_carpometacarpal_2",
                      "center": {
                        "x": 0.1,
                        "y": 0.2,
                        "z": 0
                      },
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "l_midcarpal_2",
                  "DEF": "hanim_l_midcarpal_2",
                  "center": {
                    "x": 0.07,
                    "y": 0.07,
                    "z": 0
                  },
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                },
                "/*MC3*/",
                {
                  "string": " hanimjoint DEF hanim_l_midcarpal_3",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimsegment DEF hanim_l_capitate",
                      "nodeType": "hanimsegment",
                      "children": [
                        {
                          "string": " transform",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " shape USE HAnimNewJointShape",
                              "nodeType": "shape",
                              "children": [],
                              "USE": "HAnimNewJointShape"
                            }
                          ],
                          "translation": {
                            "x": 0,
                            "y": 0.07,
                            "z": 0
                          }
                        },
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
                                  "emissiveColor": {
                                    "r": 1,
                                    "g": 1,
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": "geometry indexedlineset DEF MC3toCMC3",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0,
                                      "y": 0.07,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0,
                                      "y": 0.07,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "MC3toCMC3",
                              "coordIndex": []
                            }
                          ]
                        }
                      ],
                      "name": "l_capitate",
                      "DEF": "hanim_l_capitate"
                    },
                    "/*Middle fingle*/",
                    {
                      "string": " hanimjoint DEF hanim_l_carpometacarpal_3",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_metacarpal_3",
                          "nodeType": "hanimsegment",
                          "children": [
                            {
                              "string": " transform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " shape USE HAnimJointShape",
                                  "nodeType": "shape",
                                  "children": [],
                                  "USE": "HAnimJointShape"
                                }
                              ],
                              "translation": {
                                "x": 0,
                                "y": 0.2,
                                "z": 0
                              }
                            },
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
                                      "emissiveColor": {
                                        "r": 1,
                                        "g": 1,
                                        "b": 1
                                      }
                                    }
                                  ]
                                },
                                {
                                  "string": "geometry indexedlineset DEF CMC3toMCP3",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0,
                                          "y": 0.2,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.03,
                                          "y": 0.5,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0,
                                          "y": 0.2,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.03,
                                          "y": 0.5,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CMC3toMCP3",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_metacarpal_3",
                          "DEF": "hanim_l_metacarpal_3"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_metacarpophalangeal_3",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_carpal_proximal_phalanx_3",
                              "nodeType": "hanimsegment",
                              "children": [
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape USE HAnimJointShape",
                                      "nodeType": "shape",
                                      "children": [],
                                      "USE": "HAnimJointShape"
                                    }
                                  ],
                                  "translation": {
                                    "x": 0.03,
                                    "y": 0.5,
                                    "z": 0
                                  }
                                },
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
                                          "emissiveColor": {
                                            "r": 1,
                                            "g": 1,
                                            "b": 1
                                          }
                                        }
                                      ]
                                    },
                                    {
                                      "string": "geometry indexedlineset DEF MCP3toPIP3",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.03,
                                              "y": 0.5,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.05,
                                              "y": 0.75,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.03,
                                              "y": 0.5,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.05,
                                              "y": 0.75,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "MCP3toPIP3",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_phalanx_3",
                              "DEF": "hanim_l_carpal_proximal_phalanx_3"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_3",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_carpal_middle_phalanx_3",
                                  "nodeType": "hanimsegment",
                                  "children": [
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE HAnimJointShape",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "HAnimJointShape"
                                        }
                                      ],
                                      "translation": {
                                        "x": 0.05,
                                        "y": 0.75,
                                        "z": 0
                                      }
                                    },
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
                                              "emissiveColor": {
                                                "r": 1,
                                                "g": 1,
                                                "b": 1
                                              }
                                            }
                                          ]
                                        },
                                        {
                                          "string": "geometry indexedlineset DEF PIP3toDIP3",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.05,
                                                  "y": 0.75,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.08,
                                                  "y": 0.96,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.05,
                                                  "y": 0.75,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.08,
                                                  "y": 0.96,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "PIP3toDIP3",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_carpal_middle_phalanx_3",
                                  "DEF": "hanim_l_carpal_middle_phalanx_3"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_3",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_carpal_distal_phalanx_3",
                                      "nodeType": "hanimsegment",
                                      "children": [
                                        {
                                          "string": " transform",
                                          "nodeType": "transform",
                                          "children": [
                                            {
                                              "string": " shape USE HAnimJointShape",
                                              "nodeType": "shape",
                                              "children": [],
                                              "USE": "HAnimJointShape"
                                            }
                                          ],
                                          "translation": {
                                            "x": 0.08,
                                            "y": 0.96,
                                            "z": 0
                                          }
                                        },
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
                                                  "emissiveColor": {
                                                    "r": 1,
                                                    "g": 1,
                                                    "b": 1
                                                  }
                                                }
                                              ]
                                            },
                                            {
                                              "string": "geometry indexedlineset DEF fingertip_l_carpal_distal_interphalangeal_3",
                                              "nodeType": "indexedlineset",
                                              "children": [
                                                {
                                                  "string": "coord coordinate",
                                                  "nodeType": "coordinate",
                                                  "children": [],
                                                  "point": [
                                                    {
                                                      "x": 0.08,
                                                      "y": 0.96,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.09,
                                                      "y": 1.05,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": 0.08,
                                                      "y": 0.96,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.09,
                                                      "y": 1.05,
                                                      "z": 0
                                                    }
                                                  ]
                                                }
                                              ],
                                              "DEF": "fingertip_l_carpal_distal_interphalangeal_3",
                                              "coordIndex": []
                                            }
                                          ]
                                        }
                                      ],
                                      "name": "l_carpal_distal_phalanx_3",
                                      "DEF": "hanim_l_carpal_distal_phalanx_3"
                                    }
                                  ],
                                  "name": "l_carpal_distal_interphalangeal_3",
                                  "DEF": "hanim_l_carpal_distal_interphalangeal_3",
                                  "center": {
                                    "x": 0.08,
                                    "y": 0.96,
                                    "z": 0
                                  },
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_interphalangeal_3",
                              "DEF": "hanim_l_carpal_proximal_interphalangeal_3",
                              "center": {
                                "x": 0.05,
                                "y": 0.75,
                                "z": 0
                              },
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "l_metacarpophalangeal_3",
                          "DEF": "hanim_l_metacarpophalangeal_3",
                          "center": {
                            "x": 0.03,
                            "y": 0.5,
                            "z": 0
                          },
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "l_carpometacarpal_3",
                      "DEF": "hanim_l_carpometacarpal_3",
                      "center": {
                        "x": 0,
                        "y": 0.2,
                        "z": 0
                      },
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "l_midcarpal_3",
                  "DEF": "hanim_l_midcarpal_3",
                  "center": {
                    "x": 0,
                    "y": 0.07,
                    "z": 0
                  },
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                },
                "/*MC45*/",
                {
                  "string": " hanimjoint DEF hanim_l_midcarpal_4_5",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimsegment DEF hanim_l_hamate",
                      "nodeType": "hanimsegment",
                      "children": [
                        {
                          "string": " transform",
                          "nodeType": "transform",
                          "children": [
                            {
                              "string": " shape USE HAnimNewJointShape",
                              "nodeType": "shape",
                              "children": [],
                              "USE": "HAnimNewJointShape"
                            }
                          ],
                          "translation": {
                            "x": -0.1,
                            "y": 0.1,
                            "z": 0
                          }
                        },
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
                                  "emissiveColor": {
                                    "r": 1,
                                    "g": 1,
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": "geometry indexedlineset DEF MC45toCMC4",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": -0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.1,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": -0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.1,
                                      "y": 0.2,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "MC45toCMC4",
                              "coordIndex": []
                            }
                          ]
                        },
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
                                  "emissiveColor": {
                                    "r": 1,
                                    "g": 1,
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": "geometry indexedlineset DEF MC45toCMC5",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": -0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.15,
                                      "y": 0.17,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": -0.1,
                                      "y": 0.1,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.15,
                                      "y": 0.17,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "MC45toCMC5",
                              "coordIndex": []
                            }
                          ]
                        }
                      ],
                      "name": "l_hamate",
                      "DEF": "hanim_l_hamate"
                    },
                    "/*ring finger*/",
                    {
                      "string": " hanimjoint DEF hanim_l_carpometacarpal_4",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_metacarpal_4",
                          "nodeType": "hanimsegment",
                          "children": [
                            {
                              "string": " transform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " shape USE HAnimJointShape",
                                  "nodeType": "shape",
                                  "children": [],
                                  "USE": "HAnimJointShape"
                                }
                              ],
                              "translation": {
                                "x": -0.1,
                                "y": 0.2,
                                "z": 0
                              }
                            },
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
                                      "emissiveColor": {
                                        "r": 1,
                                        "g": 1,
                                        "b": 1
                                      }
                                    }
                                  ]
                                },
                                {
                                  "string": "geometry indexedlineset DEF CMC4toMCP4",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": -0.1,
                                          "y": 0.2,
                                          "z": 0
                                        },
                                        {
                                          "x": -0.1,
                                          "y": 0.47,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": -0.1,
                                          "y": 0.2,
                                          "z": 0
                                        },
                                        {
                                          "x": -0.1,
                                          "y": 0.47,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CMC4toMCP4",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_metacarpal_4",
                          "DEF": "hanim_l_metacarpal_4"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_metacarpophalangeal_4",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_carpal_proximal_phalanx_4",
                              "nodeType": "hanimsegment",
                              "children": [
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape USE HAnimJointShape",
                                      "nodeType": "shape",
                                      "children": [],
                                      "USE": "HAnimJointShape"
                                    }
                                  ],
                                  "translation": {
                                    "x": -0.1,
                                    "y": 0.47,
                                    "z": 0
                                  }
                                },
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
                                          "emissiveColor": {
                                            "r": 1,
                                            "g": 1,
                                            "b": 1
                                          }
                                        }
                                      ]
                                    },
                                    {
                                      "string": "geometry indexedlineset DEF MCP4toPIP4",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": -0.1,
                                              "y": 0.47,
                                              "z": 0
                                            },
                                            {
                                              "x": -0.1,
                                              "y": 0.7,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": -0.1,
                                              "y": 0.47,
                                              "z": 0
                                            },
                                            {
                                              "x": -0.1,
                                              "y": 0.7,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "MCP4toPIP4",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_phalanx_4",
                              "DEF": "hanim_l_carpal_proximal_phalanx_4"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_4",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_carpal_middle_phalanx_4",
                                  "nodeType": "hanimsegment",
                                  "children": [
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE HAnimJointShape",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "HAnimJointShape"
                                        }
                                      ],
                                      "translation": {
                                        "x": -0.1,
                                        "y": 0.7,
                                        "z": 0
                                      }
                                    },
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
                                              "emissiveColor": {
                                                "r": 1,
                                                "g": 1,
                                                "b": 1
                                              }
                                            }
                                          ]
                                        },
                                        {
                                          "string": "geometry indexedlineset DEF PIP4toDIP4",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": -0.1,
                                                  "y": 0.7,
                                                  "z": 0
                                                },
                                                {
                                                  "x": -0.1,
                                                  "y": 0.93,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": -0.1,
                                                  "y": 0.7,
                                                  "z": 0
                                                },
                                                {
                                                  "x": -0.1,
                                                  "y": 0.93,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "PIP4toDIP4",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_carpal_middle_phalanx_4",
                                  "DEF": "hanim_l_carpal_middle_phalanx_4"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_4",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_carpal_distal_phalanx_4",
                                      "nodeType": "hanimsegment",
                                      "children": [
                                        {
                                          "string": " transform",
                                          "nodeType": "transform",
                                          "children": [
                                            {
                                              "string": " shape USE HAnimJointShape",
                                              "nodeType": "shape",
                                              "children": [],
                                              "USE": "HAnimJointShape"
                                            }
                                          ],
                                          "translation": {
                                            "x": -0.1,
                                            "y": 0.93,
                                            "z": 0
                                          }
                                        },
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
                                                  "emissiveColor": {
                                                    "r": 1,
                                                    "g": 1,
                                                    "b": 1
                                                  }
                                                }
                                              ]
                                            },
                                            {
                                              "string": "geometry indexedlineset DEF fingertip_l_carpal_distal_interphalangeal_4",
                                              "nodeType": "indexedlineset",
                                              "children": [
                                                {
                                                  "string": "coord coordinate",
                                                  "nodeType": "coordinate",
                                                  "children": [],
                                                  "point": [
                                                    {
                                                      "x": -0.1,
                                                      "y": 0.93,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": -0.1,
                                                      "y": 1,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": -0.1,
                                                      "y": 0.93,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": -0.1,
                                                      "y": 1,
                                                      "z": 0
                                                    }
                                                  ]
                                                }
                                              ],
                                              "DEF": "fingertip_l_carpal_distal_interphalangeal_4",
                                              "coordIndex": []
                                            }
                                          ]
                                        }
                                      ],
                                      "name": "l_carpal_distal_phalanx_4",
                                      "DEF": "hanim_l_carpal_distal_phalanx_4"
                                    }
                                  ],
                                  "name": "l_carpal_distal_interphalangeal_4",
                                  "DEF": "hanim_l_carpal_distal_interphalangeal_4",
                                  "center": {
                                    "x": -0.1,
                                    "y": 0.93,
                                    "z": 0
                                  },
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_interphalangeal_4",
                              "DEF": "hanim_l_carpal_proximal_interphalangeal_4",
                              "center": {
                                "x": -0.1,
                                "y": 0.7,
                                "z": 0
                              },
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "l_metacarpophalangeal_4",
                          "DEF": "hanim_l_metacarpophalangeal_4",
                          "center": {
                            "x": -0.1,
                            "y": 0.47,
                            "z": 0
                          },
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "l_carpometacarpal_4",
                      "DEF": "hanim_l_carpometacarpal_4",
                      "center": {
                        "x": -0.1,
                        "y": 0.2,
                        "z": 0
                      },
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    },
                    "/*pinky finger*/",
                    {
                      "string": " hanimjoint DEF hanim_l_carpometacarpal_5",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_metacarpal_5",
                          "nodeType": "hanimsegment",
                          "children": [
                            {
                              "string": " transform",
                              "nodeType": "transform",
                              "children": [
                                {
                                  "string": " shape USE HAnimJointShape",
                                  "nodeType": "shape",
                                  "children": [],
                                  "USE": "HAnimJointShape"
                                }
                              ],
                              "translation": {
                                "x": -0.15,
                                "y": 0.17,
                                "z": 0
                              }
                            },
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
                                      "emissiveColor": {
                                        "r": 1,
                                        "g": 1,
                                        "b": 1
                                      }
                                    }
                                  ]
                                },
                                {
                                  "string": "geometry indexedlineset DEF CMC5toMCP5",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": -0.15,
                                          "y": 0.17,
                                          "z": 0
                                        },
                                        {
                                          "x": -0.2,
                                          "y": 0.4,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": -0.15,
                                          "y": 0.17,
                                          "z": 0
                                        },
                                        {
                                          "x": -0.2,
                                          "y": 0.4,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CMC5toMCP5",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_metacarpal_5",
                          "DEF": "hanim_l_metacarpal_5"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_metacarpophalangeal_5",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_carpal_proximal_phalanx_5",
                              "nodeType": "hanimsegment",
                              "children": [
                                {
                                  "string": " transform",
                                  "nodeType": "transform",
                                  "children": [
                                    {
                                      "string": " shape USE HAnimJointShape",
                                      "nodeType": "shape",
                                      "children": [],
                                      "USE": "HAnimJointShape"
                                    }
                                  ],
                                  "translation": {
                                    "x": -0.2,
                                    "y": 0.4,
                                    "z": 0
                                  }
                                },
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
                                          "emissiveColor": {
                                            "r": 1,
                                            "g": 1,
                                            "b": 1
                                          }
                                        }
                                      ]
                                    },
                                    {
                                      "string": "geometry indexedlineset DEF MCP5toPIP5",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": -0.2,
                                              "y": 0.4,
                                              "z": 0
                                            },
                                            {
                                              "x": -0.23,
                                              "y": 0.63,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": -0.2,
                                              "y": 0.4,
                                              "z": 0
                                            },
                                            {
                                              "x": -0.23,
                                              "y": 0.63,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "MCP5toPIP5",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_phalanx_5",
                              "DEF": "hanim_l_carpal_proximal_phalanx_5"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_5",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_carpal_middle_phalanx_5",
                                  "nodeType": "hanimsegment",
                                  "children": [
                                    {
                                      "string": " transform",
                                      "nodeType": "transform",
                                      "children": [
                                        {
                                          "string": " shape USE HAnimJointShape",
                                          "nodeType": "shape",
                                          "children": [],
                                          "USE": "HAnimJointShape"
                                        }
                                      ],
                                      "translation": {
                                        "x": -0.23,
                                        "y": 0.63,
                                        "z": 0
                                      }
                                    },
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
                                              "emissiveColor": {
                                                "r": 1,
                                                "g": 1,
                                                "b": 1
                                              }
                                            }
                                          ]
                                        },
                                        {
                                          "string": "geometry indexedlineset DEF PIP5toDIP5",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": -0.23,
                                                  "y": 0.63,
                                                  "z": 0
                                                },
                                                {
                                                  "x": -0.25,
                                                  "y": 0.79,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": -0.23,
                                                  "y": 0.63,
                                                  "z": 0
                                                },
                                                {
                                                  "x": -0.25,
                                                  "y": 0.79,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "PIP5toDIP5",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_carpal_middle_phalanx_5",
                                  "DEF": "hanim_l_carpal_middle_phalanx_5"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_5",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_carpal_distal_phalanx_5",
                                      "nodeType": "hanimsegment",
                                      "children": [
                                        {
                                          "string": " transform",
                                          "nodeType": "transform",
                                          "children": [
                                            {
                                              "string": " shape USE HAnimJointShape",
                                              "nodeType": "shape",
                                              "children": [],
                                              "USE": "HAnimJointShape"
                                            }
                                          ],
                                          "translation": {
                                            "x": -0.25,
                                            "y": 0.79,
                                            "z": 0
                                          }
                                        },
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
                                                  "emissiveColor": {
                                                    "r": 1,
                                                    "g": 1,
                                                    "b": 1
                                                  }
                                                }
                                              ]
                                            },
                                            {
                                              "string": "geometry indexedlineset DEF fingertip_l_carpal_distal_interphalangeal_5",
                                              "nodeType": "indexedlineset",
                                              "children": [
                                                {
                                                  "string": "coord coordinate",
                                                  "nodeType": "coordinate",
                                                  "children": [],
                                                  "point": [
                                                    {
                                                      "x": -0.25,
                                                      "y": 0.79,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": -0.26,
                                                      "y": 0.85,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": -0.25,
                                                      "y": 0.79,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": -0.26,
                                                      "y": 0.85,
                                                      "z": 0
                                                    }
                                                  ]
                                                }
                                              ],
                                              "DEF": "fingertip_l_carpal_distal_interphalangeal_5",
                                              "coordIndex": []
                                            }
                                          ]
                                        }
                                      ],
                                      "name": "l_carpal_distal_phalanx_5",
                                      "DEF": "hanim_l_carpal_distal_phalanx_5"
                                    }
                                  ],
                                  "name": "l_carpal_distal_interphalangeal_5",
                                  "DEF": "hanim_l_carpal_distal_interphalangeal_5",
                                  "center": {
                                    "x": -0.25,
                                    "y": 0.79,
                                    "z": 0
                                  },
                                  "ulimit": [
                                    0,
                                    0,
                                    0
                                  ],
                                  "llimit": [
                                    0,
                                    0,
                                    0
                                  ]
                                }
                              ],
                              "name": "l_carpal_proximal_interphalangeal_5",
                              "DEF": "hanim_l_carpal_proximal_interphalangeal_5",
                              "center": {
                                "x": -0.23,
                                "y": 0.63,
                                "z": 0
                              },
                              "ulimit": [
                                0,
                                0,
                                0
                              ],
                              "llimit": [
                                0,
                                0,
                                0
                              ]
                            }
                          ],
                          "name": "l_metacarpophalangeal_5",
                          "DEF": "hanim_l_metacarpophalangeal_5",
                          "center": {
                            "x": -0.2,
                            "y": 0.4,
                            "z": 0
                          },
                          "ulimit": [
                            0,
                            0,
                            0
                          ],
                          "llimit": [
                            0,
                            0,
                            0
                          ]
                        }
                      ],
                      "name": "l_carpometacarpal_5",
                      "DEF": "hanim_l_carpometacarpal_5",
                      "center": {
                        "x": -0.15,
                        "y": 0.17,
                        "z": 0
                      },
                      "ulimit": [
                        0,
                        0,
                        0
                      ],
                      "llimit": [
                        0,
                        0,
                        0
                      ]
                    }
                  ],
                  "name": "l_midcarpal_4_5",
                  "DEF": "hanim_l_midcarpal_4_5",
                  "center": {
                    "x": -0.1,
                    "y": 0.1,
                    "z": 0
                  },
                  "ulimit": [
                    0,
                    0,
                    0
                  ],
                  "llimit": [
                    0,
                    0,
                    0
                  ]
                }
              ],
              "name": "l_radiocarpal",
              "DEF": "hanim_l_radiocarpal",
              "description": "connection joint of hand to leg above",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ]
            }
          ],
          "name": "humanoid_root",
          "DEF": "hanim_humanoid_root",
          "ulimit": [
            0,
            0,
            0
          ],
          "llimit": [
            0,
            0,
            0
          ],
          "containerField": "skeleton"
        },
        {
          "string": "joints hanimjoint USE hanim_humanoid_root",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_humanoid_root",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_midcarpal_4_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_4_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_radiocarpal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_radiocarpal",
          "containerField": "joints"
        },
        {
          "string": "segments hanimsegment USE hanim_l_capitate",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_capitate",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_distal_phalanx_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_distal_phalanx_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_distal_phalanx_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_distal_phalanx_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_distal_phalanx_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_distal_phalanx_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_distal_phalanx_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_distal_phalanx_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_distal_phalanx_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_distal_phalanx_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_middle_phalanx_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_middle_phalanx_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_middle_phalanx_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_middle_phalanx_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_middle_phalanx_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_middle_phalanx_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_middle_phalanx_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_middle_phalanx_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_proximal_phalanx_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_proximal_phalanx_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_proximal_phalanx_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_proximal_phalanx_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_proximal_phalanx_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_proximal_phalanx_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_proximal_phalanx_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_proximal_phalanx_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_carpal_proximal_phalanx_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_carpal_proximal_phalanx_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_hamate",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_hamate",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metacarpal_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metacarpal_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metacarpal_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metacarpal_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metacarpal_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metacarpal_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metacarpal_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metacarpal_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metacarpal_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metacarpal_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_trapezium",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_trapezium",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_trapezoid",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_trapezoid",
          "containerField": "segments"
        }
      ],
      "name": "Hand_Left",
      "DEF": "hanim_Hand_Left",
      "loa": 4,
      "version": "2.0"
    }
  ]
}