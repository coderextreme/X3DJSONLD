{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "HAnimModelFootLeft.x3d"
    },
    {
      "string": " hanimhumanoid DEF hanim_Foot_Left",
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
            "/*Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model*/",
            {
              "string": " hanimjoint DEF hanim_l_talocrural",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment DEF hanim_l_talus",
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
                              "string": "appearance DEF HAnimJointAppearance",
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
                              "DEF": "HAnimJointAppearance"
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
                          "string": "geometry indexedlineset DEF TCtoTCN",
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
                                  "y": -0.3,
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
                                  "y": -0.3,
                                  "z": 0
                                }
                              ]
                            }
                          ],
                          "DEF": "TCtoTCN",
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
                          "string": "geometry indexedlineset DEF TCtoCC",
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
                                  "x": 0.2,
                                  "y": 0.3,
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
                                  "x": 0.2,
                                  "y": 0.3,
                                  "z": 0
                                }
                              ]
                            }
                          ],
                          "DEF": "TCtoCC",
                          "coordIndex": []
                        }
                      ]
                    }
                  ],
                  "name": "l_talus",
                  "DEF": "hanim_l_talus"
                },
                "/*TCN*/",
                {
                  "string": " hanimjoint DEF hanim_l_talocalcaneonavicular",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimsegment DEF hanim_l_navicular",
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
                            "y": -0.3,
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
                              "string": "geometry indexedlineset DEF TCNtoCN1",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0,
                                      "y": -0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.1,
                                      "y": -0.45,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0,
                                      "y": -0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": -0.1,
                                      "y": -0.45,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "TCNtoCN1",
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
                              "string": "geometry indexedlineset DEF TCNtoCN2",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0,
                                      "y": -0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": -0.45,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0,
                                      "y": -0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": -0.45,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "TCNtoCN2",
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
                              "string": "geometry indexedlineset DEF TCNtoCN3",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0,
                                      "y": -0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.1,
                                      "y": -0.4,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0,
                                      "y": -0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.1,
                                      "y": -0.4,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "TCNtoCN3",
                              "coordIndex": []
                            }
                          ]
                        }
                      ],
                      "name": "l_navicular",
                      "DEF": "hanim_l_navicular"
                    },
                    "/*CN1*/",
                    {
                      "string": " hanimjoint DEF hanim_l_cuneonavicular_1",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_cuneiform_1",
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
                                "y": -0.45,
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
                                  "string": "geometry indexedlineset DEF CN1toTMT1",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": -0.1,
                                          "y": -0.45,
                                          "z": 0
                                        },
                                        {
                                          "x": -0.1,
                                          "y": -0.6,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": -0.1,
                                          "y": -0.45,
                                          "z": 0
                                        },
                                        {
                                          "x": -0.1,
                                          "y": -0.6,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CN1toTMT1",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_cuneiform_1",
                          "DEF": "hanim_l_cuneiform_1"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_tarsometatarsal_1",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_metatarsal_1",
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
                                    "y": -0.6,
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
                                      "string": "geometry indexedlineset DEF TMT1toMTP1",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": -0.1,
                                              "y": -0.6,
                                              "z": 0
                                            },
                                            {
                                              "x": -0.1,
                                              "y": -0.9,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": -0.1,
                                              "y": -0.6,
                                              "z": 0
                                            },
                                            {
                                              "x": -0.1,
                                              "y": -0.9,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "TMT1toMTP1",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_metatarsal_1",
                              "DEF": "hanim_l_metatarsal_1"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_metatarsophalangeal_1",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_tarsal_proximal_phalanx_1",
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
                                        "y": -0.9,
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
                                          "string": "geometry indexedlineset DEF MTP1toIP1",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": -0.1,
                                                  "y": -0.9,
                                                  "z": 0
                                                },
                                                {
                                                  "x": -0.1,
                                                  "y": -1.05,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": -0.1,
                                                  "y": -0.9,
                                                  "z": 0
                                                },
                                                {
                                                  "x": -0.1,
                                                  "y": -1.05,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "MTP1toIP1",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_tarsal_proximal_phalanx_1",
                                  "DEF": "hanim_l_tarsal_proximal_phalanx_1"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_tarsal_interphalangeal_1",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_tarsal_distal_phalanx_1",
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
                                            "y": -1.05,
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
                                              "string": "geometry indexedlineset DEF tiptoe_l_tarsal_distal_interphalangeal_1",
                                              "nodeType": "indexedlineset",
                                              "children": [
                                                {
                                                  "string": "coord coordinate",
                                                  "nodeType": "coordinate",
                                                  "children": [],
                                                  "point": [
                                                    {
                                                      "x": -0.1,
                                                      "y": -1.05,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": -0.1,
                                                      "y": -1.1,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": -0.1,
                                                      "y": -1.05,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": -0.1,
                                                      "y": -1.1,
                                                      "z": 0
                                                    }
                                                  ]
                                                }
                                              ],
                                              "DEF": "tiptoe_l_tarsal_distal_interphalangeal_1",
                                              "coordIndex": []
                                            }
                                          ]
                                        }
                                      ],
                                      "name": "l_tarsal_distal_phalanx_1",
                                      "DEF": "hanim_l_tarsal_distal_phalanx_1"
                                    }
                                  ],
                                  "name": "l_tarsal_interphalangeal_1",
                                  "DEF": "hanim_l_tarsal_interphalangeal_1",
                                  "center": {
                                    "x": -0.1,
                                    "y": -1.05,
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
                              "name": "l_metatarsophalangeal_1",
                              "DEF": "hanim_l_metatarsophalangeal_1",
                              "center": {
                                "x": -0.1,
                                "y": -0.9,
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
                          "name": "l_tarsometatarsal_1",
                          "DEF": "hanim_l_tarsometatarsal_1",
                          "center": {
                            "x": -0.1,
                            "y": -0.6,
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
                      "name": "l_cuneonavicular_1",
                      "DEF": "hanim_l_cuneonavicular_1",
                      "center": {
                        "x": -0.1,
                        "y": -0.45,
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
                    "/*CN2*/",
                    {
                      "string": " hanimjoint DEF hanim_l_cuneonavicular_2",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_cuneiform_2",
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
                                "y": -0.45,
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
                                  "string": "geometry indexedlineset DEF CN2toTMT2",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0,
                                          "y": -0.45,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.05,
                                          "y": -0.6,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0,
                                          "y": -0.45,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.05,
                                          "y": -0.6,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CN2toTMT2",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_cuneiform_2",
                          "DEF": "hanim_l_cuneiform_2"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_tarsometatarsal_2",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_metatarsal_2",
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
                                    "y": -0.6,
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
                                      "string": "geometry indexedlineset DEF TMT2toMTP2",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.05,
                                              "y": -0.6,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.05,
                                              "y": -0.9,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.05,
                                              "y": -0.6,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.05,
                                              "y": -0.9,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "TMT2toMTP2",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_metatarsal_2",
                              "DEF": "hanim_l_metatarsal_2"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_metatarsophalangeal_2",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_tarsal_proximal_phalanx_2",
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
                                        "y": -0.9,
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
                                          "string": "geometry indexedlineset DEF MTP2toPIP2",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.05,
                                                  "y": -0.9,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.05,
                                                  "y": -1.05,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.05,
                                                  "y": -0.9,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.05,
                                                  "y": -1.05,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "MTP2toPIP2",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_tarsal_proximal_phalanx_2",
                                  "DEF": "hanim_l_tarsal_proximal_phalanx_2"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_2",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_tarsal_middle_phalanx_2",
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
                                            "y": -1.05,
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
                                                      "x": 0.05,
                                                      "y": -1.05,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.05,
                                                      "y": -1.12,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": 0.05,
                                                      "y": -1.05,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.05,
                                                      "y": -1.12,
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
                                      "name": "l_tarsal_middle_phalanx_2",
                                      "DEF": "hanim_l_tarsal_middle_phalanx_2"
                                    },
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_2",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimsegment DEF hanim_l_tarsal_distal_phalanx_2",
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
                                                "y": -1.12,
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
                                                  "string": "geometry indexedlineset DEF tiptoe_l_tarsal_distal_phalanx_2",
                                                  "nodeType": "indexedlineset",
                                                  "children": [
                                                    {
                                                      "string": "coord coordinate",
                                                      "nodeType": "coordinate",
                                                      "children": [],
                                                      "point": [
                                                        {
                                                          "x": 0.05,
                                                          "y": -1.12,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.05,
                                                          "y": -1.16,
                                                          "z": 0
                                                        }
                                                      ],
                                                      "points": [
                                                        {
                                                          "x": 0.05,
                                                          "y": -1.12,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.05,
                                                          "y": -1.16,
                                                          "z": 0
                                                        }
                                                      ]
                                                    }
                                                  ],
                                                  "DEF": "tiptoe_l_tarsal_distal_phalanx_2",
                                                  "coordIndex": []
                                                }
                                              ]
                                            }
                                          ],
                                          "name": "l_tarsal_distal_phalanx_2",
                                          "DEF": "hanim_l_tarsal_distal_phalanx_2"
                                        }
                                      ],
                                      "name": "l_tarsal_distal_interphalangeal_2",
                                      "DEF": "hanim_l_tarsal_distal_interphalangeal_2",
                                      "center": {
                                        "x": 0.05,
                                        "y": -1.12,
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
                                  "name": "l_tarsal_proximal_interphalangeal_2",
                                  "DEF": "hanim_l_tarsal_proximal_interphalangeal_2",
                                  "center": {
                                    "x": 0.05,
                                    "y": -1.05,
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
                              "name": "l_metatarsophalangeal_2",
                              "DEF": "hanim_l_metatarsophalangeal_2",
                              "center": {
                                "x": 0.05,
                                "y": -0.9,
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
                          "name": "l_tarsometatarsal_2",
                          "DEF": "hanim_l_tarsometatarsal_2",
                          "center": {
                            "x": 0.05,
                            "y": -0.6,
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
                      "name": "l_cuneonavicular_2",
                      "DEF": "hanim_l_cuneonavicular_2",
                      "center": {
                        "x": 0,
                        "y": -0.45,
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
                    "/*CN3*/",
                    {
                      "string": " hanimjoint DEF hanim_l_cuneonavicular_3",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_cuneiform_3",
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
                                "y": -0.4,
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
                                  "string": "geometry indexedlineset DEF CN3toTMT3",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0.1,
                                          "y": -0.4,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.15,
                                          "y": -0.6,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0.1,
                                          "y": -0.4,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.15,
                                          "y": -0.6,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "CN3toTMT3",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_cuneiform_3",
                          "DEF": "hanim_l_cuneiform_3"
                        },
                        {
                          "string": " hanimjoint DEF hanim_l_tarsometatarsal_3",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_metatarsal_3",
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
                                    "y": -0.6,
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
                                      "string": "geometry indexedlineset DEF TMT3toMTP3",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.15,
                                              "y": -0.6,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.15,
                                              "y": -0.9,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.15,
                                              "y": -0.6,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.15,
                                              "y": -0.9,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "TMT3toMTP3",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_metatarsal_3",
                              "DEF": "hanim_l_metatarsal_3"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_metatarsophalangeal_3",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_tarsal_proximal_phalanx_3",
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
                                        "y": -0.9,
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
                                          "string": "geometry indexedlineset DEF MTP3toPIP3",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.15,
                                                  "y": -0.9,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.15,
                                                  "y": -1.05,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.15,
                                                  "y": -0.9,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.15,
                                                  "y": -1.05,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "MTP3toPIP3",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_tarsal_proximal_phalanx_3",
                                  "DEF": "hanim_l_tarsal_proximal_phalanx_3"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_3",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_tarsal_middle_phalanx_3",
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
                                            "y": -1.05,
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
                                                      "x": 0.15,
                                                      "y": -1.05,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.15,
                                                      "y": -1.13,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": 0.15,
                                                      "y": -1.05,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.15,
                                                      "y": -1.13,
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
                                      "name": "l_tarsal_middle_phalanx_3",
                                      "DEF": "hanim_l_tarsal_middle_phalanx_3"
                                    },
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_3",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimsegment DEF hanim_l_tarsal_distal_phalanx_3",
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
                                                "y": -1.13,
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
                                                  "string": "geometry indexedlineset DEF tiptoe_l_tarsal_distal_interphalangeal_3",
                                                  "nodeType": "indexedlineset",
                                                  "children": [
                                                    {
                                                      "string": "coord coordinate",
                                                      "nodeType": "coordinate",
                                                      "children": [],
                                                      "point": [
                                                        {
                                                          "x": 0.15,
                                                          "y": -1.13,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.15,
                                                          "y": -1.16,
                                                          "z": 0
                                                        }
                                                      ],
                                                      "points": [
                                                        {
                                                          "x": 0.15,
                                                          "y": -1.13,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.15,
                                                          "y": -1.16,
                                                          "z": 0
                                                        }
                                                      ]
                                                    }
                                                  ],
                                                  "DEF": "tiptoe_l_tarsal_distal_interphalangeal_3",
                                                  "coordIndex": []
                                                }
                                              ]
                                            }
                                          ],
                                          "name": "l_tarsal_distal_phalanx_3",
                                          "DEF": "hanim_l_tarsal_distal_phalanx_3"
                                        }
                                      ],
                                      "name": "l_tarsal_distal_interphalangeal_3",
                                      "DEF": "hanim_l_tarsal_distal_interphalangeal_3",
                                      "center": {
                                        "x": 0.15,
                                        "y": -1.13,
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
                                  "name": "l_tarsal_proximal_interphalangeal_3",
                                  "DEF": "hanim_l_tarsal_proximal_interphalangeal_3",
                                  "center": {
                                    "x": 0.15,
                                    "y": -1.05,
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
                              "name": "l_metatarsophalangeal_3",
                              "DEF": "hanim_l_metatarsophalangeal_3",
                              "center": {
                                "x": 0.15,
                                "y": -0.9,
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
                          "name": "l_tarsometatarsal_3",
                          "DEF": "hanim_l_tarsometatarsal_3",
                          "center": {
                            "x": 0.15,
                            "y": -0.6,
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
                      "name": "l_cuneonavicular_3",
                      "DEF": "hanim_l_cuneonavicular_3",
                      "center": {
                        "x": 0.1,
                        "y": -0.4,
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
                  "name": "l_talocalcaneonavicular",
                  "DEF": "hanim_l_talocalcaneonavicular",
                  "center": {
                    "x": 0,
                    "y": -0.3,
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
                "/*CC*/",
                {
                  "string": " hanimjoint DEF hanim_l_calcaneocuboid",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimsegment DEF hanim_l_calcaneus",
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
                              "string": "geometry indexedlineset DEF CCtoTT",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "point": [
                                    {
                                      "x": 0.2,
                                      "y": 0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.21,
                                      "y": -0.3,
                                      "z": 0
                                    }
                                  ],
                                  "points": [
                                    {
                                      "x": 0.2,
                                      "y": 0.3,
                                      "z": 0
                                    },
                                    {
                                      "x": 0.21,
                                      "y": -0.3,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "CCtoTT",
                              "coordIndex": []
                            }
                          ]
                        }
                      ],
                      "name": "l_calcaneus",
                      "DEF": "hanim_l_calcaneus"
                    },
                    "/*TT*/",
                    {
                      "string": " hanimjoint DEF hanim_l_transversetarsal",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimsegment DEF hanim_l_cuboid",
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
                                "x": 0.21,
                                "y": -0.3,
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
                                  "string": "geometry indexedlineset DEF TTtoTMT4",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0.21,
                                          "y": -0.3,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.25,
                                          "y": -0.58,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0.21,
                                          "y": -0.3,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.25,
                                          "y": -0.58,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "TTtoTMT4",
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
                                  "string": "geometry indexedlineset DEF TTtoTMT5",
                                  "nodeType": "indexedlineset",
                                  "children": [
                                    {
                                      "string": "coord coordinate",
                                      "nodeType": "coordinate",
                                      "children": [],
                                      "point": [
                                        {
                                          "x": 0.21,
                                          "y": -0.3,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.33,
                                          "y": -0.52,
                                          "z": 0
                                        }
                                      ],
                                      "points": [
                                        {
                                          "x": 0.21,
                                          "y": -0.3,
                                          "z": 0
                                        },
                                        {
                                          "x": 0.33,
                                          "y": -0.52,
                                          "z": 0
                                        }
                                      ]
                                    }
                                  ],
                                  "DEF": "TTtoTMT5",
                                  "coordIndex": []
                                }
                              ]
                            }
                          ],
                          "name": "l_cuboid",
                          "DEF": "hanim_l_cuboid"
                        },
                        "/*TMT4*/",
                        {
                          "string": " hanimjoint DEF hanim_l_tarsometatarsal_4",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_metatarsal_4",
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
                                    "x": 0.25,
                                    "y": -0.58,
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
                                      "string": "geometry indexedlineset DEF TMT4toMTP4",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.25,
                                              "y": -0.58,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.25,
                                              "y": -0.87,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.25,
                                              "y": -0.58,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.25,
                                              "y": -0.87,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "TMT4toMTP4",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_metatarsal_4",
                              "DEF": "hanim_l_metatarsal_4"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_metatarsophalangeal_4",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_tarsal_proximal_phalanx_4",
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
                                        "x": 0.25,
                                        "y": -0.87,
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
                                          "string": "geometry indexedlineset DEF MTP4toPIP4",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.25,
                                                  "y": -0.87,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.25,
                                                  "y": -1,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.25,
                                                  "y": -0.87,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.25,
                                                  "y": -1,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "MTP4toPIP4",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_tarsal_proximal_phalanx_4",
                                  "DEF": "hanim_l_tarsal_proximal_phalanx_4"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_4",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_tarsal_middle_phalanx_4",
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
                                            "x": 0.25,
                                            "y": -1,
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
                                                      "x": 0.25,
                                                      "y": -1,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.25,
                                                      "y": -1.1,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": 0.25,
                                                      "y": -1,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.25,
                                                      "y": -1.1,
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
                                      "name": "l_tarsal_middle_phalanx_4",
                                      "DEF": "hanim_l_tarsal_middle_phalanx_4"
                                    },
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_4",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimsegment DEF hanim_l_tarsal_distal_phalanx_4",
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
                                                "x": 0.25,
                                                "y": -1.1,
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
                                                  "string": "geometry indexedlineset DEF tiptoe_l_tarsal_distal_interphalangeal_4",
                                                  "nodeType": "indexedlineset",
                                                  "children": [
                                                    {
                                                      "string": "coord coordinate",
                                                      "nodeType": "coordinate",
                                                      "children": [],
                                                      "point": [
                                                        {
                                                          "x": 0.25,
                                                          "y": -1.1,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.25,
                                                          "y": -1.15,
                                                          "z": 0
                                                        }
                                                      ],
                                                      "points": [
                                                        {
                                                          "x": 0.25,
                                                          "y": -1.1,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.25,
                                                          "y": -1.15,
                                                          "z": 0
                                                        }
                                                      ]
                                                    }
                                                  ],
                                                  "DEF": "tiptoe_l_tarsal_distal_interphalangeal_4",
                                                  "coordIndex": []
                                                }
                                              ]
                                            }
                                          ],
                                          "name": "l_tarsal_distal_phalanx_4",
                                          "DEF": "hanim_l_tarsal_distal_phalanx_4"
                                        }
                                      ],
                                      "name": "l_tarsal_distal_interphalangeal_4",
                                      "DEF": "hanim_l_tarsal_distal_interphalangeal_4",
                                      "center": {
                                        "x": 0.25,
                                        "y": -1.1,
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
                                  "name": "l_tarsal_proximal_interphalangeal_4",
                                  "DEF": "hanim_l_tarsal_proximal_interphalangeal_4",
                                  "center": {
                                    "x": 0.25,
                                    "y": -1,
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
                              "name": "l_metatarsophalangeal_4",
                              "DEF": "hanim_l_metatarsophalangeal_4",
                              "center": {
                                "x": 0.25,
                                "y": -0.87,
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
                          "name": "l_tarsometatarsal_4",
                          "DEF": "hanim_l_tarsometatarsal_4",
                          "center": {
                            "x": 0.25,
                            "y": -0.58,
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
                        "/*TMT5*/",
                        {
                          "string": " hanimjoint DEF hanim_l_tarsometatarsal_5",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimsegment DEF hanim_l_metatarsal_5",
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
                                    "x": 0.33,
                                    "y": -0.52,
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
                                      "string": "geometry indexedlineset DEF TMT5toMTP5",
                                      "nodeType": "indexedlineset",
                                      "children": [
                                        {
                                          "string": "coord coordinate",
                                          "nodeType": "coordinate",
                                          "children": [],
                                          "point": [
                                            {
                                              "x": 0.33,
                                              "y": -0.52,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.34,
                                              "y": -0.8,
                                              "z": 0
                                            }
                                          ],
                                          "points": [
                                            {
                                              "x": 0.33,
                                              "y": -0.52,
                                              "z": 0
                                            },
                                            {
                                              "x": 0.34,
                                              "y": -0.8,
                                              "z": 0
                                            }
                                          ]
                                        }
                                      ],
                                      "DEF": "TMT5toMTP5",
                                      "coordIndex": []
                                    }
                                  ]
                                }
                              ],
                              "name": "l_metatarsal_5",
                              "DEF": "hanim_l_metatarsal_5"
                            },
                            {
                              "string": " hanimjoint DEF hanim_l_metatarsophalangeal_5",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimsegment DEF hanim_l_tarsal_proximal_phalanx_5",
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
                                        "x": 0.34,
                                        "y": -0.8,
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
                                          "string": "geometry indexedlineset DEF MTP5toPIP5",
                                          "nodeType": "indexedlineset",
                                          "children": [
                                            {
                                              "string": "coord coordinate",
                                              "nodeType": "coordinate",
                                              "children": [],
                                              "point": [
                                                {
                                                  "x": 0.34,
                                                  "y": -0.8,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.34,
                                                  "y": -0.95,
                                                  "z": 0
                                                }
                                              ],
                                              "points": [
                                                {
                                                  "x": 0.34,
                                                  "y": -0.8,
                                                  "z": 0
                                                },
                                                {
                                                  "x": 0.34,
                                                  "y": -0.95,
                                                  "z": 0
                                                }
                                              ]
                                            }
                                          ],
                                          "DEF": "MTP5toPIP5",
                                          "coordIndex": []
                                        }
                                      ]
                                    }
                                  ],
                                  "name": "l_tarsal_proximal_phalanx_5",
                                  "DEF": "hanim_l_tarsal_proximal_phalanx_5"
                                },
                                {
                                  "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_5",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimsegment DEF hanim_l_tarsal_middle_phalanx_5",
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
                                            "x": 0.34,
                                            "y": -0.95,
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
                                                      "x": 0.34,
                                                      "y": -0.95,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.34,
                                                      "y": -1.05,
                                                      "z": 0
                                                    }
                                                  ],
                                                  "points": [
                                                    {
                                                      "x": 0.34,
                                                      "y": -0.95,
                                                      "z": 0
                                                    },
                                                    {
                                                      "x": 0.34,
                                                      "y": -1.05,
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
                                      "name": "l_tarsal_middle_phalanx_5",
                                      "DEF": "hanim_l_tarsal_middle_phalanx_5"
                                    },
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_5",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimsegment DEF hanim_l_tarsal_distal_phalanx_5",
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
                                                "x": 0.34,
                                                "y": -1.05,
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
                                                  "string": "geometry indexedlineset DEF tiptoe_l_tarsal_distal_interphalangeal_5",
                                                  "nodeType": "indexedlineset",
                                                  "children": [
                                                    {
                                                      "string": "coord coordinate",
                                                      "nodeType": "coordinate",
                                                      "children": [],
                                                      "point": [
                                                        {
                                                          "x": 0.34,
                                                          "y": -1.05,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.34,
                                                          "y": -1.08,
                                                          "z": 0
                                                        }
                                                      ],
                                                      "points": [
                                                        {
                                                          "x": 0.34,
                                                          "y": -1.05,
                                                          "z": 0
                                                        },
                                                        {
                                                          "x": 0.34,
                                                          "y": -1.08,
                                                          "z": 0
                                                        }
                                                      ]
                                                    }
                                                  ],
                                                  "DEF": "tiptoe_l_tarsal_distal_interphalangeal_5",
                                                  "coordIndex": []
                                                }
                                              ]
                                            }
                                          ],
                                          "name": "l_tarsal_distal_phalanx_5",
                                          "DEF": "hanim_l_tarsal_distal_phalanx_5"
                                        }
                                      ],
                                      "name": "l_tarsal_distal_interphalangeal_5",
                                      "DEF": "hanim_l_tarsal_distal_interphalangeal_5",
                                      "center": {
                                        "x": 0.34,
                                        "y": -1.05,
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
                                  "name": "l_tarsal_proximal_interphalangeal_5",
                                  "DEF": "hanim_l_tarsal_proximal_interphalangeal_5",
                                  "center": {
                                    "x": 0.34,
                                    "y": -0.95,
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
                              "name": "l_metatarsophalangeal_5",
                              "DEF": "hanim_l_metatarsophalangeal_5",
                              "center": {
                                "x": 0.34,
                                "y": -0.8,
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
                          "name": "l_tarsometatarsal_5",
                          "DEF": "hanim_l_tarsometatarsal_5",
                          "center": {
                            "x": 0.33,
                            "y": -0.52,
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
                      "name": "l_transversetarsal",
                      "DEF": "hanim_l_transversetarsal",
                      "center": {
                        "x": 0.21,
                        "y": -0.3,
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
                  "name": "l_calcaneocuboid",
                  "DEF": "hanim_l_calcaneocuboid",
                  "center": {
                    "x": 0.2,
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
              "name": "l_talocrural",
              "DEF": "hanim_l_talocrural",
              "description": "connection joint of foot to leg above",
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
          "string": "joints hanimjoint USE hanim_l_calcaneocuboid",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_calcaneocuboid",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_talocalcaneonavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_talocalcaneonavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_talocrural",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_talocrural",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_transversetarsal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_transversetarsal",
          "containerField": "joints"
        },
        {
          "string": "segments hanimsegment USE hanim_l_calcaneus",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_calcaneus",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_cuboid",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_cuboid",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_cuneiform_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_cuneiform_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_cuneiform_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_cuneiform_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_cuneiform_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_cuneiform_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metatarsal_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metatarsal_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metatarsal_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metatarsal_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metatarsal_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metatarsal_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metatarsal_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metatarsal_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_metatarsal_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_metatarsal_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_navicular",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_navicular",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_talus",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_talus",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_distal_phalanx_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_distal_phalanx_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_distal_phalanx_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_distal_phalanx_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_distal_phalanx_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_distal_phalanx_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_distal_phalanx_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_distal_phalanx_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_distal_phalanx_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_distal_phalanx_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_middle_phalanx_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_middle_phalanx_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_middle_phalanx_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_middle_phalanx_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_middle_phalanx_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_middle_phalanx_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_middle_phalanx_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_middle_phalanx_5",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_proximal_phalanx_1",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_phalanx_1",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_proximal_phalanx_2",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_phalanx_2",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_proximal_phalanx_3",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_phalanx_3",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_proximal_phalanx_4",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_phalanx_4",
          "containerField": "segments"
        },
        {
          "string": "segments hanimsegment USE hanim_l_tarsal_proximal_phalanx_5",
          "nodeType": "hanimsegment",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_phalanx_5",
          "containerField": "segments"
        }
      ],
      "name": "Foot_Left",
      "DEF": "hanim_Foot_Left",
      "loa": 4,
      "version": "2.0"
    }
  ]
}