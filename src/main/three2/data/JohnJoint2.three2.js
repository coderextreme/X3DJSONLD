{
  "string": "Scene",
  "children": [
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        "/*DEF for markerfor XYZ axes*/",
        {
          "string": " shape DEF AxisLinesShape",
          "nodeType": "shape",
          "children": [
            "/*RGB lines showing XYZ axes*/",
            {
              "string": "geometry indexedlineset",
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
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0.1,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0.1
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
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0.1,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0.1
                    }
                  ]
                },
                {
                  "string": "color",
                  "nodeType": "color",
                  "children": [],
                  "color": [
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0.6,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    }
                  ]
                }
              ],
              "colorIndex": [],
              "colorPerVertex": false,
              "coordIndex": [
                [
                  0,
                  1
                ],
                [
                  0,
                  2
                ],
                [
                  0,
                  3
                ]
              ]
            }
          ],
          "DEF": "AxisLinesShape"
        }
      ]
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        "/*DEFS for markers of skeleton joints, segments, and sites*/",
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            "/*<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/",
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
                      "radius": 0.02
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material DEF HAnimJointMaterial",
                          "nodeType": "material",
                          "children": [],
                          "DEF": "HAnimJointMaterial",
                          "diffuseColor": {
                            "r": 0,
                            "g": 0,
                            "b": 0.8
                          },
                          "transparency": 0.3
                        }
                      ]
                    }
                  ],
                  "DEF": "HAnimJointShape"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.1,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimSegmentLine",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry lineset",
                      "nodeType": "lineset",
                      "children": [
                        {
                          "string": "color colorrgba DEF HAnimSegmentLineColorRGBA",
                          "nodeType": "colorrgba",
                          "children": [],
                          "DEF": "HAnimSegmentLineColorRGBA",
                          "color": [
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 1
                            },
                            {
                              "r": 1,
                              "g": 1,
                              "b": 0,
                              "a": 0.1
                            }
                          ]
                        },
                        {
                          "string": "coord coordinate",
                          "nodeType": "coordinate",
                          "children": [],
                          "point": [
                            {
                              "x": -0.05,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.05,
                              "y": 0,
                              "z": 0
                            }
                          ],
                          "points": [
                            {
                              "x": -0.05,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.05,
                              "y": 0,
                              "z": 0
                            }
                          ]
                        }
                      ],
                      "vertexCount": [
                        2
                      ]
                    }
                  ],
                  "DEF": "HAnimSegmentLine"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.05,
                "z": 0
              }
            },
            "/*<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/"
          ]
        }
      ]
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "speed": 1.5
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "default"
    },
    {
      "string": " hanimhumanoid DEF hanim_HAnim",
      "nodeType": "hanimhumanoid",
      "children": [
        {
          "string": "skeleton hanimjoint DEF hanim_humanoid_root",
          "nodeType": "hanimjoint",
          "children": [
            {
              "string": " hanimjoint DEF hanim_sacroiliac",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimjoint DEF hanim_l_hip",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF hanim_l_knee",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF hanim_l_talocrural",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF hanim_l_talocalcaneonavicular",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_l_cuneonavicular_1",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_1",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_1",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_interphalangeal_1",
                                              "nodeType": "hanimjoint",
                                              "children": [],
                                              "name": "l_tarsal_interphalangeal_1",
                                              "DEF": "hanim_l_tarsal_interphalangeal_1",
                                              "center": {
                                                "x": 0,
                                                "y": 1,
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
                                            "x": 0,
                                            "y": 1,
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
                                        "x": 0,
                                        "y": 1,
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
                                    "x": 0,
                                    "y": 1,
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
                                {
                                  "string": " hanimjoint DEF hanim_l_cuneonavicular_2",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_2",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_2",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_2",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_2",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_2",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_2",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                                "x": 0,
                                                "y": 1,
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
                                            "x": 0,
                                            "y": 1,
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
                                        "x": 0,
                                        "y": 1,
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
                                    "y": 1,
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
                                {
                                  "string": " hanimjoint DEF hanim_l_cuneonavicular_3",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_3",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_3",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_3",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_3",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_3",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_3",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                                "x": 0,
                                                "y": 1,
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
                                            "x": 0,
                                            "y": 1,
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
                                        "x": 0,
                                        "y": 1,
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
                                    "x": 0,
                                    "y": 1,
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
                                "y": 1,
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
                            {
                              "string": " hanimjoint DEF hanim_l_calcaneocuboid",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_l_transversetarsal",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_4",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_4",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_4",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_4",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_4",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_4",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                                "x": 0,
                                                "y": 1,
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
                                            "x": 0,
                                            "y": 1,
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
                                        "x": 0,
                                        "y": 1,
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
                                    {
                                      "string": " hanimjoint DEF hanim_l_tarsometatarsal_5",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_l_metatarsophalangeal_5",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_l_tarsal_proximal_interphalangeal_5",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_l_tarsal_distal_interphalangeal_5",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "l_tarsal_distal_interphalangeal_5",
                                                  "DEF": "hanim_l_tarsal_distal_interphalangeal_5",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                                "x": 0,
                                                "y": 1,
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
                                            "x": 0,
                                            "y": 1,
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
                                        "x": 0,
                                        "y": 1,
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
                                    "x": 0,
                                    "y": 1,
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
                                "x": 0,
                                "y": 1,
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
                          "center": {
                            "x": 0.1101,
                            "y": 0.0656,
                            "z": -0.0736
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
                      "name": "l_knee",
                      "DEF": "hanim_l_knee",
                      "center": {
                        "x": 0.104,
                        "y": 0.4867,
                        "z": 0.0308
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
                  "name": "l_hip",
                  "DEF": "hanim_l_hip",
                  "center": {
                    "x": 0.0961,
                    "y": 0.9124,
                    "z": -0.0001
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
                {
                  "string": " hanimjoint DEF hanim_r_hip",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF hanim_r_knee",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF hanim_r_talocrural",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF hanim_r_talocalcaneonavicular",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_r_cuneonavicular_1",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_1",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_1",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_interphalangeal_1",
                                              "nodeType": "hanimjoint",
                                              "children": [],
                                              "name": "r_tarsal_interphalangeal_1",
                                              "DEF": "hanim_r_tarsal_interphalangeal_1",
                                              "center": {
                                                "x": 0,
                                                "y": 1,
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
                                          "name": "r_metatarsophalangeal_1",
                                          "DEF": "hanim_r_metatarsophalangeal_1",
                                          "center": {
                                            "x": 0,
                                            "y": 1,
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
                                      "name": "r_tarsometatarsal_1",
                                      "DEF": "hanim_r_tarsometatarsal_1",
                                      "center": {
                                        "x": 0,
                                        "y": 1,
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
                                  "name": "r_cuneonavicular_1",
                                  "DEF": "hanim_r_cuneonavicular_1",
                                  "center": {
                                    "x": 0,
                                    "y": 1,
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
                                {
                                  "string": " hanimjoint DEF hanim_r_cuneonavicular_2",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_2",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_2",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_2",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_2",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_2",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_2",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                              "name": "r_tarsal_proximal_interphalangeal_2",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_2",
                                              "center": {
                                                "x": 0,
                                                "y": 1,
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
                                          "name": "r_metatarsophalangeal_2",
                                          "DEF": "hanim_r_metatarsophalangeal_2",
                                          "center": {
                                            "x": 0,
                                            "y": 1,
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
                                      "name": "r_tarsometatarsal_2",
                                      "DEF": "hanim_r_tarsometatarsal_2",
                                      "center": {
                                        "x": 0,
                                        "y": 1,
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
                                  "name": "r_cuneonavicular_2",
                                  "DEF": "hanim_r_cuneonavicular_2",
                                  "center": {
                                    "x": 0,
                                    "y": 1,
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
                                {
                                  "string": " hanimjoint DEF hanim_r_cuneonavicular_3",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_3",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_3",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_3",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_3",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_3",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_3",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                              "name": "r_tarsal_proximal_interphalangeal_3",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_3",
                                              "center": {
                                                "x": 0,
                                                "y": 1,
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
                                          "name": "r_metatarsophalangeal_3",
                                          "DEF": "hanim_r_metatarsophalangeal_3",
                                          "center": {
                                            "x": 0,
                                            "y": 1,
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
                                      "name": "r_tarsometatarsal_3",
                                      "DEF": "hanim_r_tarsometatarsal_3",
                                      "center": {
                                        "x": 0,
                                        "y": 1,
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
                                  "name": "r_cuneonavicular_3",
                                  "DEF": "hanim_r_cuneonavicular_3",
                                  "center": {
                                    "x": 0,
                                    "y": 1,
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
                              "name": "r_talocalcaneonavicular",
                              "DEF": "hanim_r_talocalcaneonavicular",
                              "center": {
                                "x": 0,
                                "y": 1,
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
                            {
                              "string": " hanimjoint DEF hanim_r_calcaneocuboid",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_r_transversetarsal",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_4",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_4",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_4",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_4",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_4",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_4",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                              "name": "r_tarsal_proximal_interphalangeal_4",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_4",
                                              "center": {
                                                "x": 0,
                                                "y": 1,
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
                                          "name": "r_metatarsophalangeal_4",
                                          "DEF": "hanim_r_metatarsophalangeal_4",
                                          "center": {
                                            "x": 0,
                                            "y": 1,
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
                                      "name": "r_tarsometatarsal_4",
                                      "DEF": "hanim_r_tarsometatarsal_4",
                                      "center": {
                                        "x": 0,
                                        "y": 1,
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
                                    {
                                      "string": " hanimjoint DEF hanim_r_tarsometatarsal_5",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_r_metatarsophalangeal_5",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_r_tarsal_proximal_interphalangeal_5",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_r_tarsal_distal_interphalangeal_5",
                                                  "nodeType": "hanimjoint",
                                                  "children": [],
                                                  "name": "r_tarsal_distal_interphalangeal_5",
                                                  "DEF": "hanim_r_tarsal_distal_interphalangeal_5",
                                                  "center": {
                                                    "x": 0,
                                                    "y": 1,
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
                                              "name": "r_tarsal_proximal_interphalangeal_5",
                                              "DEF": "hanim_r_tarsal_proximal_interphalangeal_5",
                                              "center": {
                                                "x": 0,
                                                "y": 1,
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
                                          "name": "r_metatarsophalangeal_5",
                                          "DEF": "hanim_r_metatarsophalangeal_5",
                                          "center": {
                                            "x": 0,
                                            "y": 1,
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
                                      "name": "r_tarsometatarsal_5",
                                      "DEF": "hanim_r_tarsometatarsal_5",
                                      "center": {
                                        "x": 0,
                                        "y": 1,
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
                                  "name": "r_transversetarsal",
                                  "DEF": "hanim_r_transversetarsal",
                                  "center": {
                                    "x": 0,
                                    "y": 1,
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
                              "name": "r_calcaneocuboid",
                              "DEF": "hanim_r_calcaneocuboid",
                              "center": {
                                "x": 0,
                                "y": 1,
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
                          "name": "r_talocrural",
                          "DEF": "hanim_r_talocrural",
                          "center": {
                            "x": -0.0801,
                            "y": 0.0712,
                            "z": -0.0766
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
                      "name": "r_knee",
                      "DEF": "hanim_r_knee",
                      "center": {
                        "x": -0.0867,
                        "y": 0.4913,
                        "z": 0.0318
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
                  "name": "r_hip",
                  "DEF": "hanim_r_hip",
                  "center": {
                    "x": -0.095,
                    "y": 0.9171,
                    "z": 0.0029
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
              "name": "sacroiliac",
              "DEF": "hanim_sacroiliac",
              "center": {
                "x": 0,
                "y": 0.9149,
                "z": 0.0016
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
            {
              "string": " hanimjoint DEF hanim_vl5",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimjoint DEF hanim_vl4",
                  "nodeType": "hanimjoint",
                  "children": [
                    {
                      "string": " hanimjoint DEF hanim_vl3",
                      "nodeType": "hanimjoint",
                      "children": [
                        {
                          "string": " hanimjoint DEF hanim_vl2",
                          "nodeType": "hanimjoint",
                          "children": [
                            {
                              "string": " hanimjoint DEF hanim_vl1",
                              "nodeType": "hanimjoint",
                              "children": [
                                {
                                  "string": " hanimjoint DEF hanim_vt12",
                                  "nodeType": "hanimjoint",
                                  "children": [
                                    {
                                      "string": " hanimjoint DEF hanim_vt11",
                                      "nodeType": "hanimjoint",
                                      "children": [
                                        {
                                          "string": " hanimjoint DEF hanim_vt10",
                                          "nodeType": "hanimjoint",
                                          "children": [
                                            {
                                              "string": " hanimjoint DEF hanim_vt9",
                                              "nodeType": "hanimjoint",
                                              "children": [
                                                {
                                                  "string": " hanimjoint DEF hanim_vt8",
                                                  "nodeType": "hanimjoint",
                                                  "children": [
                                                    {
                                                      "string": " hanimjoint DEF hanim_vt7",
                                                      "nodeType": "hanimjoint",
                                                      "children": [
                                                        {
                                                          "string": " hanimjoint DEF hanim_vt6",
                                                          "nodeType": "hanimjoint",
                                                          "children": [
                                                            {
                                                              "string": " hanimjoint DEF hanim_vt5",
                                                              "nodeType": "hanimjoint",
                                                              "children": [
                                                                {
                                                                  "string": " hanimjoint DEF hanim_vt4",
                                                                  "nodeType": "hanimjoint",
                                                                  "children": [
                                                                    {
                                                                      "string": " hanimjoint DEF hanim_vt3",
                                                                      "nodeType": "hanimjoint",
                                                                      "children": [
                                                                        {
                                                                          "string": " hanimjoint DEF hanim_vt2",
                                                                          "nodeType": "hanimjoint",
                                                                          "children": [
                                                                            {
                                                                              "string": " hanimjoint DEF hanim_vt1",
                                                                              "nodeType": "hanimjoint",
                                                                              "children": [
                                                                                {
                                                                                  "string": " hanimjoint DEF hanim_vc7",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF hanim_vc6",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF hanim_vc5",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF hanim_vc4",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF hanim_vc3",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_vc2",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_vc1",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_skullbase",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_eyelid_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_eyelid_joint",
                                                                                                                  "DEF": "hanim_l_eyelid_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_eyelid_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_eyelid_joint",
                                                                                                                  "DEF": "hanim_r_eyelid_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_eyeball_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_eyeball_joint",
                                                                                                                  "DEF": "hanim_l_eyeball_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_eyeball_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_eyeball_joint",
                                                                                                                  "DEF": "hanim_r_eyeball_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_eyebrow_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_eyebrow_joint",
                                                                                                                  "DEF": "hanim_l_eyebrow_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_eyebrow_joint",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_eyebrow_joint",
                                                                                                                  "DEF": "hanim_r_eyebrow_joint",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_temporomandibular",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "temporomandibular",
                                                                                                                  "DEF": "hanim_temporomandibular",
                                                                                                                  "center": {
                                                                                                                    "x": 0,
                                                                                                                    "y": 1,
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
                                                                                                              "name": "skullbase",
                                                                                                              "DEF": "hanim_skullbase",
                                                                                                              "center": {
                                                                                                                "x": 0.0044,
                                                                                                                "y": 1.6209,
                                                                                                                "z": 0.0236
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
                                                                                                          "name": "vc1",
                                                                                                          "DEF": "hanim_vc1",
                                                                                                          "center": {
                                                                                                            "x": 0.0066,
                                                                                                            "y": 1.6144,
                                                                                                            "z": -0.0034
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
                                                                                                      "name": "vc2",
                                                                                                      "DEF": "hanim_vc2",
                                                                                                      "center": {
                                                                                                        "x": 0.0066,
                                                                                                        "y": 1.5928,
                                                                                                        "z": -0.0103
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
                                                                                                  "name": "vc3",
                                                                                                  "DEF": "hanim_vc3",
                                                                                                  "center": {
                                                                                                    "x": 0.0066,
                                                                                                    "y": 1.58,
                                                                                                    "z": -0.0103
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
                                                                                              "name": "vc4",
                                                                                              "DEF": "hanim_vc4",
                                                                                              "center": {
                                                                                                "x": 0.0066,
                                                                                                "y": 1.5662,
                                                                                                "z": -0.0084
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
                                                                                          "name": "vc5",
                                                                                          "DEF": "hanim_vc5",
                                                                                          "center": {
                                                                                            "x": 0.0066,
                                                                                            "y": 1.552,
                                                                                            "z": -0.0082
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
                                                                                      "name": "vc6",
                                                                                      "DEF": "hanim_vc6",
                                                                                      "center": {
                                                                                        "x": 0.0066,
                                                                                        "y": 1.5357,
                                                                                        "z": -0.0143
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
                                                                                  "name": "vc7",
                                                                                  "DEF": "hanim_vc7",
                                                                                  "center": {
                                                                                    "x": 0.0066,
                                                                                    "y": 1.5132,
                                                                                    "z": -0.0301
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
                                                                                {
                                                                                  "string": " hanimjoint DEF hanim_l_sternoclavicular",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF hanim_l_acromioclavicular",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF hanim_l_shoulder",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF hanim_l_elbow",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF hanim_l_radiocarpal",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_1",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_1",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_interphalangeal_1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "l_carpal_interphalangeal_1",
                                                                                                                  "DEF": "hanim_l_carpal_interphalangeal_1",
                                                                                                                  "center": {
                                                                                                                    "x": 0.1955,
                                                                                                                    "y": 0.8159,
                                                                                                                    "z": 0.0464
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
                                                                                                                "x": 0.1951,
                                                                                                                "y": 0.8226,
                                                                                                                "z": 0.0246
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
                                                                                                            "x": 0.1924,
                                                                                                            "y": 0.8472,
                                                                                                            "z": -0.0534
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
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_2",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_2",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_2",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_2",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_2",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_2",
                                                                                                                      "center": {
                                                                                                                        "x": 0.2028,
                                                                                                                        "y": 0.7139,
                                                                                                                        "z": -0.0236
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
                                                                                                                    "x": 0.2017,
                                                                                                                    "y": 0.7363,
                                                                                                                    "z": -0.0248
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
                                                                                                                "x": 0.1983,
                                                                                                                "y": 0.7815,
                                                                                                                "z": -0.028
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
                                                                                                            "x": 0.1983,
                                                                                                            "y": 0.8024,
                                                                                                            "z": -0.028
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
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_3",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_3",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_3",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_3",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_3",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_3",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_3",
                                                                                                                      "center": {
                                                                                                                        "x": 0.2026,
                                                                                                                        "y": 0.7011,
                                                                                                                        "z": -0.0494
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
                                                                                                                    "x": 0.2013,
                                                                                                                    "y": 0.7273,
                                                                                                                    "z": -0.0503
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
                                                                                                                "x": 0.1987,
                                                                                                                "y": 0.7818,
                                                                                                                "z": -0.053
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
                                                                                                            "x": 0.1987,
                                                                                                            "y": 0.8029,
                                                                                                            "z": -0.053
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
                                                                                                        "y": 1,
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
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_l_midcarpal_4_5",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_4",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_4",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_4",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_4",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_4",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_4",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1983,
                                                                                                                        "y": 0.7045,
                                                                                                                        "z": -0.0767
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
                                                                                                                    "x": 0.1973,
                                                                                                                    "y": 0.7287,
                                                                                                                    "z": -0.0777
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
                                                                                                                "x": 0.1956,
                                                                                                                "y": 0.7815,
                                                                                                                "z": -0.0794
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
                                                                                                            "x": 0.1956,
                                                                                                            "y": 0.8019,
                                                                                                            "z": -0.0794
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
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_l_carpometacarpal_5",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_l_metacarpophalangeal_5",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_l_carpal_proximal_interphalangeal_5",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_l_carpal_distal_interphalangeal_5",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "l_carpal_distal_interphalangeal_5",
                                                                                                                      "DEF": "hanim_l_carpal_distal_interphalangeal_5",
                                                                                                                      "center": {
                                                                                                                        "x": 0.1948,
                                                                                                                        "y": 0.7277,
                                                                                                                        "z": -0.1017
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
                                                                                                                    "x": 0.1938,
                                                                                                                    "y": 0.7452,
                                                                                                                    "z": -0.1024
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
                                                                                                                "x": 0.1925,
                                                                                                                "y": 0.7866,
                                                                                                                "z": -0.1036
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
                                                                                                            "x": 0.1925,
                                                                                                            "y": 0.8066,
                                                                                                            "z": -0.1036
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
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                  "center": {
                                                                                                    "x": 0.1984,
                                                                                                    "y": 0.8663,
                                                                                                    "z": -0.0583
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
                                                                                              "name": "l_elbow",
                                                                                              "DEF": "hanim_l_elbow",
                                                                                              "center": {
                                                                                                "x": 0.2014,
                                                                                                "y": 1.1357,
                                                                                                "z": -0.0682
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
                                                                                          "name": "l_shoulder",
                                                                                          "DEF": "hanim_l_shoulder",
                                                                                          "center": {
                                                                                            "x": 0.2029,
                                                                                            "y": 1.4376,
                                                                                            "z": -0.0387
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
                                                                                      "name": "l_acromioclavicular",
                                                                                      "DEF": "hanim_l_acromioclavicular",
                                                                                      "center": {
                                                                                        "x": 0.0962,
                                                                                        "y": 1.4269,
                                                                                        "z": -0.0424
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
                                                                                  "name": "l_sternoclavicular",
                                                                                  "DEF": "hanim_l_sternoclavicular",
                                                                                  "center": {
                                                                                    "x": 0.082,
                                                                                    "y": 1.4488,
                                                                                    "z": -0.0353
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
                                                                                {
                                                                                  "string": " hanimjoint DEF hanim_r_sternoclavicular",
                                                                                  "nodeType": "hanimjoint",
                                                                                  "children": [
                                                                                    {
                                                                                      "string": " hanimjoint DEF hanim_r_acromioclavicular",
                                                                                      "nodeType": "hanimjoint",
                                                                                      "children": [
                                                                                        {
                                                                                          "string": " hanimjoint DEF hanim_r_shoulder",
                                                                                          "nodeType": "hanimjoint",
                                                                                          "children": [
                                                                                            {
                                                                                              "string": " hanimjoint DEF hanim_r_elbow",
                                                                                              "nodeType": "hanimjoint",
                                                                                              "children": [
                                                                                                {
                                                                                                  "string": " hanimjoint DEF hanim_r_radiocarpal",
                                                                                                  "nodeType": "hanimjoint",
                                                                                                  "children": [
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_1",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_1",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_1",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_interphalangeal_1",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [],
                                                                                                                  "name": "r_carpal_interphalangeal_1",
                                                                                                                  "DEF": "hanim_r_carpal_interphalangeal_1",
                                                                                                                  "center": {
                                                                                                                    "x": -0.1864,
                                                                                                                    "y": 0.819,
                                                                                                                    "z": 0.0506
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
                                                                                                              "name": "r_metacarpophalangeal_1",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_1",
                                                                                                              "center": {
                                                                                                                "x": -0.1874,
                                                                                                                "y": 0.8256,
                                                                                                                "z": 0.0306
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
                                                                                                          "name": "r_carpometacarpal_1",
                                                                                                          "DEF": "hanim_r_carpometacarpal_1",
                                                                                                          "center": {
                                                                                                            "x": -0.1899,
                                                                                                            "y": 0.8502,
                                                                                                            "z": -0.0473
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
                                                                                                      "name": "r_midcarpal_1",
                                                                                                      "DEF": "hanim_r_midcarpal_1",
                                                                                                      "center": {
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_2",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_2",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_2",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_2",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_2",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_2",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_2",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1945,
                                                                                                                        "y": 0.7169,
                                                                                                                        "z": -0.0173
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
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_2",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_2",
                                                                                                                  "center": {
                                                                                                                    "x": -0.1954,
                                                                                                                    "y": 0.7393,
                                                                                                                    "z": -0.0185
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
                                                                                                              "name": "r_metacarpophalangeal_2",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_2",
                                                                                                              "center": {
                                                                                                                "x": -0.1961,
                                                                                                                "y": 0.7846,
                                                                                                                "z": -0.0218
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
                                                                                                          "name": "r_carpometacarpal_2",
                                                                                                          "DEF": "hanim_r_carpometacarpal_2",
                                                                                                          "center": {
                                                                                                            "x": -0.1961,
                                                                                                            "y": 0.8055,
                                                                                                            "z": -0.0218
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
                                                                                                      "name": "r_midcarpal_2",
                                                                                                      "DEF": "hanim_r_midcarpal_2",
                                                                                                      "center": {
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_3",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_3",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_3",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_3",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_3",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_3",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_3",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1939,
                                                                                                                        "y": 0.7042,
                                                                                                                        "z": -0.0432
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
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_3",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_3",
                                                                                                                  "center": {
                                                                                                                    "x": -0.195,
                                                                                                                    "y": 0.7304,
                                                                                                                    "z": -0.0441
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
                                                                                                              "name": "r_metacarpophalangeal_3",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_3",
                                                                                                              "center": {
                                                                                                                "x": -0.1972,
                                                                                                                "y": 0.7849,
                                                                                                                "z": -0.0468
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
                                                                                                          "name": "r_carpometacarpal_3",
                                                                                                          "DEF": "hanim_r_carpometacarpal_3",
                                                                                                          "center": {
                                                                                                            "x": -0.1972,
                                                                                                            "y": 0.806,
                                                                                                            "z": -0.0468
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
                                                                                                      "name": "r_midcarpal_3",
                                                                                                      "DEF": "hanim_r_midcarpal_3",
                                                                                                      "center": {
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                    {
                                                                                                      "string": " hanimjoint DEF hanim_r_midcarpal_4_5",
                                                                                                      "nodeType": "hanimjoint",
                                                                                                      "children": [
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_4",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_4",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_4",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_4",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_4",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_4",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1908,
                                                                                                                        "y": 0.7077,
                                                                                                                        "z": -0.0706
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
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_4",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_4",
                                                                                                                  "center": {
                                                                                                                    "x": -0.192,
                                                                                                                    "y": 0.7318,
                                                                                                                    "z": -0.0716
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
                                                                                                              "name": "r_metacarpophalangeal_4",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_4",
                                                                                                              "center": {
                                                                                                                "x": -0.1951,
                                                                                                                "y": 0.7845,
                                                                                                                "z": -0.0732
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
                                                                                                          "name": "r_carpometacarpal_4",
                                                                                                          "DEF": "hanim_r_carpometacarpal_4",
                                                                                                          "center": {
                                                                                                            "x": -0.1951,
                                                                                                            "y": 0.8049,
                                                                                                            "z": -0.0732
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
                                                                                                        {
                                                                                                          "string": " hanimjoint DEF hanim_r_carpometacarpal_5",
                                                                                                          "nodeType": "hanimjoint",
                                                                                                          "children": [
                                                                                                            {
                                                                                                              "string": " hanimjoint DEF hanim_r_metacarpophalangeal_5",
                                                                                                              "nodeType": "hanimjoint",
                                                                                                              "children": [
                                                                                                                {
                                                                                                                  "string": " hanimjoint DEF hanim_r_carpal_proximal_interphalangeal_5",
                                                                                                                  "nodeType": "hanimjoint",
                                                                                                                  "children": [
                                                                                                                    {
                                                                                                                      "string": " hanimjoint DEF hanim_r_carpal_distal_interphalangeal_5",
                                                                                                                      "nodeType": "hanimjoint",
                                                                                                                      "children": [],
                                                                                                                      "name": "r_carpal_distal_interphalangeal_5",
                                                                                                                      "DEF": "hanim_r_carpal_distal_interphalangeal_5",
                                                                                                                      "center": {
                                                                                                                        "x": -0.1908,
                                                                                                                        "y": 0.754,
                                                                                                                        "z": -0.096
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
                                                                                                                  "name": "r_carpal_proximal_interphalangeal_5",
                                                                                                                  "DEF": "hanim_r_carpal_proximal_interphalangeal_5",
                                                                                                                  "center": {
                                                                                                                    "x": -0.1902,
                                                                                                                    "y": 0.7483,
                                                                                                                    "z": -0.0963
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
                                                                                                              "name": "r_metacarpophalangeal_5",
                                                                                                              "DEF": "hanim_r_metacarpophalangeal_5",
                                                                                                              "center": {
                                                                                                                "x": -0.1926,
                                                                                                                "y": 0.7896,
                                                                                                                "z": -0.0975
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
                                                                                                          "name": "r_carpometacarpal_5",
                                                                                                          "DEF": "hanim_r_carpometacarpal_5",
                                                                                                          "center": {
                                                                                                            "x": -0.1926,
                                                                                                            "y": 0.8096,
                                                                                                            "z": -0.0975
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
                                                                                                      "name": "r_midcarpal_4_5",
                                                                                                      "DEF": "hanim_r_midcarpal_4_5",
                                                                                                      "center": {
                                                                                                        "x": 0,
                                                                                                        "y": 1,
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
                                                                                                  "name": "r_radiocarpal",
                                                                                                  "DEF": "hanim_r_radiocarpal",
                                                                                                  "center": {
                                                                                                    "x": -0.1959,
                                                                                                    "y": 0.8694,
                                                                                                    "z": -0.0521
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
                                                                                              "name": "r_elbow",
                                                                                              "DEF": "hanim_r_elbow",
                                                                                              "center": {
                                                                                                "x": -0.1949,
                                                                                                "y": 1.1388,
                                                                                                "z": -0.062
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
                                                                                          "name": "r_shoulder",
                                                                                          "DEF": "hanim_r_shoulder",
                                                                                          "center": {
                                                                                            "x": -0.1907,
                                                                                            "y": 1.4407,
                                                                                            "z": -0.0325
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
                                                                                      "name": "r_acromioclavicular",
                                                                                      "DEF": "hanim_r_acromioclavicular",
                                                                                      "center": {
                                                                                        "x": -0.0836,
                                                                                        "y": 1.4281,
                                                                                        "z": -0.0401
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
                                                                                  "name": "r_sternoclavicular",
                                                                                  "DEF": "hanim_r_sternoclavicular",
                                                                                  "center": {
                                                                                    "x": -0.0694,
                                                                                    "y": 1.46,
                                                                                    "z": -0.033
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
                                                                              "name": "vt1",
                                                                              "DEF": "hanim_vt1",
                                                                              "center": {
                                                                                "x": 0.0065,
                                                                                "y": 1.4951,
                                                                                "z": -0.0387
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
                                                                          "name": "vt2",
                                                                          "DEF": "hanim_vt2",
                                                                          "center": {
                                                                            "x": 0.0063,
                                                                            "y": 1.4761,
                                                                            "z": -0.0484
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
                                                                      "name": "vt3",
                                                                      "DEF": "hanim_vt3",
                                                                      "center": {
                                                                        "x": 0.0062,
                                                                        "y": 1.4583,
                                                                        "z": -0.057
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
                                                                  "name": "vt4",
                                                                  "DEF": "hanim_vt4",
                                                                  "center": {
                                                                    "x": 0.0061,
                                                                    "y": 1.432,
                                                                    "z": -0.0675
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
                                                              "name": "vt5",
                                                              "DEF": "hanim_vt5",
                                                              "center": {
                                                                "x": 0.006,
                                                                "y": 1.4102,
                                                                "z": -0.0745
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
                                                          "name": "vt6",
                                                          "DEF": "hanim_vt6",
                                                          "center": {
                                                            "x": 0.0059,
                                                            "y": 1.3866,
                                                            "z": -0.08
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
                                                      "name": "vt7",
                                                      "DEF": "hanim_vt7",
                                                      "center": {
                                                        "x": 0.0058,
                                                        "y": 1.3625,
                                                        "z": -0.0833
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
                                                  "name": "vt8",
                                                  "DEF": "hanim_vt8",
                                                  "center": {
                                                    "x": 0.0057,
                                                    "y": 1.3382,
                                                    "z": -0.0845
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
                                              "name": "vt9",
                                              "DEF": "hanim_vt9",
                                              "center": {
                                                "x": 0.0057,
                                                "y": 1.3126,
                                                "z": -0.0838
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
                                          "name": "vt10",
                                          "DEF": "hanim_vt10",
                                          "center": {
                                            "x": 0.0056,
                                            "y": 1.2848,
                                            "z": -0.0822
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
                                      "name": "vt11",
                                      "DEF": "hanim_vt11",
                                      "center": {
                                        "x": 0.0053,
                                        "y": 1.2679,
                                        "z": -0.081
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
                                  "name": "vt12",
                                  "DEF": "hanim_vt12",
                                  "center": {
                                    "x": 0.0051,
                                    "y": 1.2278,
                                    "z": -0.0808
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
                              "name": "vl1",
                              "DEF": "hanim_vl1",
                              "center": {
                                "x": 0.0048,
                                "y": 1.1912,
                                "z": -0.0805
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
                          "name": "vl2",
                          "DEF": "hanim_vl2",
                          "center": {
                            "x": 0.0045,
                            "y": 1.1546,
                            "z": -0.08
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
                      "name": "vl3",
                      "DEF": "hanim_vl3",
                      "center": {
                        "x": 0.0041,
                        "y": 1.1276,
                        "z": -0.0796
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
                  "name": "vl4",
                  "DEF": "hanim_vl4",
                  "center": {
                    "x": 0.0035,
                    "y": 1.0925,
                    "z": -0.0787
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
              "name": "vl5",
              "DEF": "hanim_vl5",
              "center": {
                "x": 0.0028,
                "y": 1.0568,
                "z": -0.0776
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
          "name": "humanoid_root",
          "DEF": "hanim_humanoid_root",
          "center": {
            "x": 0,
            "y": 0.824,
            "z": 0.0277
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
          "string": "joints hanimjoint USE hanim_sacroiliac",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_sacroiliac",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_hip",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_hip",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_knee",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_knee",
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
          "string": "joints hanimjoint USE hanim_l_talocalcaneonavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_talocalcaneonavicular",
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
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_1",
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
          "string": "joints hanimjoint USE hanim_l_tarsal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_interphalangeal_1",
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
          "string": "joints hanimjoint USE hanim_l_tarsometatarsal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsometatarsal_2",
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
          "string": "joints hanimjoint USE hanim_l_tarsal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_proximal_interphalangeal_2",
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
          "string": "joints hanimjoint USE hanim_l_cuneonavicular_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_cuneonavicular_3",
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
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_3",
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
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_3",
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
          "string": "joints hanimjoint USE hanim_l_transversetarsal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_transversetarsal",
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
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_4",
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
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_4",
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
          "string": "joints hanimjoint USE hanim_l_metatarsophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metatarsophalangeal_5",
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
          "string": "joints hanimjoint USE hanim_l_tarsal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_tarsal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_hip",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_hip",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_knee",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_knee",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_talocrural",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_talocrural",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_talocalcaneonavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_talocalcaneonavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_cuneonavicular_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_cuneonavicular_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_cuneonavicular_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_cuneonavicular_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_cuneonavicular_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_cuneonavicular_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_calcaneocuboid",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_calcaneocuboid",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_transversetarsal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_transversetarsal",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsometatarsal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsometatarsal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metatarsophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metatarsophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_tarsal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_tarsal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vl1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vl1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt12",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt12",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt11",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt11",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt10",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt10",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt9",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt9",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt8",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt8",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt7",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt7",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt6",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt6",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vt1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vt1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc7",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc7",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc6",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc6",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_vc1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_vc1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_skullbase",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_skullbase",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_eyelid_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_eyelid_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_eyelid_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_eyelid_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_eyeball_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_eyeball_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_eyeball_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_eyeball_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_eyebrow_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_eyebrow_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_eyebrow_joint",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_eyebrow_joint",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_temporomandibular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_temporomandibular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_sternoclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_sternoclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_acromioclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_acromioclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_shoulder",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_shoulder",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_l_elbow",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_elbow",
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
          "string": "joints hanimjoint USE hanim_l_midcarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_1",
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
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_1",
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
          "string": "joints hanimjoint USE hanim_l_midcarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_2",
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
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_2",
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
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_2",
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
          "string": "joints hanimjoint USE hanim_l_carpometacarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpometacarpal_3",
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
          "string": "joints hanimjoint USE hanim_l_carpal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_proximal_interphalangeal_3",
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
          "string": "joints hanimjoint USE hanim_l_midcarpal_4_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_midcarpal_4_5",
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
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_4",
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
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_4",
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
          "string": "joints hanimjoint USE hanim_l_metacarpophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_metacarpophalangeal_5",
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
          "string": "joints hanimjoint USE hanim_l_carpal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_l_carpal_distal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_sternoclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_sternoclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_acromioclavicular",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_acromioclavicular",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_shoulder",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_shoulder",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_elbow",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_elbow",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_radiocarpal",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_radiocarpal",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_interphalangeal_1",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_interphalangeal_1",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_2",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_2",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_3",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_3",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_midcarpal_4_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_midcarpal_4_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_4",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_4",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpometacarpal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpometacarpal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_metacarpophalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_metacarpophalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_proximal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_proximal_interphalangeal_5",
          "containerField": "joints"
        },
        {
          "string": "joints hanimjoint USE hanim_r_carpal_distal_interphalangeal_5",
          "nodeType": "hanimjoint",
          "children": [],
          "USE": "hanim_r_carpal_distal_interphalangeal_5",
          "containerField": "joints"
        }
      ],
      "name": "HAnim",
      "DEF": "hanim_HAnim",
      "info": [
        "humanoidVersion=2.0"
      ],
      "version": "2.0"
    }
  ]
}