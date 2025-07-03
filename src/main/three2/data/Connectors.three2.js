{
  "string": "Scene",
  "children": [
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
              "string": " indexedfaceset DEF Geometry",
              "nodeType": "indexedfaceset",
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
                },
                {
                  "string": "coord coordinate",
                  "nodeType": "coordinate",
                  "children": []
                }
              ],
              "DEF": "Geometry"
            },
            {
              "string": " script DEF RoundedRectangle2D",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": [
                    {
                      "string": " indexedfaceset USE Geometry",
                      "nodeType": "indexedfaceset",
                      "children": [],
                      "USE": "Geometry"
                    }
                  ]
                },
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
                },
                "<script>\r\nvrmlscript:\r\n\r\nfunction initialize ()\r\n{\r\n\tvar point         = new SFVec3f (cornerRadius, 0, 0);\r\n\tvar startRotation = new SFRotation ();\r\n\tvar endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);\r\n\tvar corner        = new MFVec3f ();\r\n\tvar coordIndex    = new MFInt32 ();\r\n\tvar points        = new MFVec3f ();\r\n\r\n\tfor (var i = 0; i < cornerDimension * 4; ++ i)\r\n\t\tcoordIndex [coordIndex .length] = i;\r\n\r\n\tgeometry .coordIndex = coordIndex;\r\n\r\n\tfor (var i = 0; i < cornerDimension; ++i)\r\n\t\tcorner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);\r\n\r\n\tvar translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);\r\n\r\n\tfor (var i = 0; i < cornerDimension; ++ i)\r\n\t\tpoints [points .length] = corner [i] .add (translation);\r\n\r\n\tvar translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);\r\n\tvar rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);\r\n\r\n\tfor (var i = 0; i < cornerDimension; ++ i)\r\n\t\tpoints [points .length] = rotation .multVec (corner [i]) .add (translation);\r\n\r\n\tvar translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);\r\n\tvar rotation    = new SFRotation (0, 0, 1, Math .PI);\r\n\r\n\tfor (var i = 0; i < cornerDimension; ++ i)\r\n\t\tpoints [points .length] = rotation .multVec (corner [i]) .add (translation);\r\n\r\n\tvar translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);\r\n\tvar rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);\r\n\r\n\tfor (var i = 0; i < cornerDimension; ++ i)\r\n\t\tpoints [points .length] = rotation .multVec (corner [i]) .add (translation);\r\n\r\n\tgeometry .coord .point = points;\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "RoundedRectangle2D",
              "directOutput": true
            }
          ]
        }
      ],
      "name": "RoundedRectangle2D"
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
              "string": " transform DEF Shape",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
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
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [
                            {
                              "string": "appearance is",
                              "nodeType": "is",
                              "children": [
                                {
                                  "string": "appearance connect",
                                  "nodeType": "connect",
                                  "children": []
                                }
                              ]
                            }
                          ]
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
                      "string": " is",
                      "nodeType": "is",
                      "children": [
                        {
                          "string": " connect",
                          "nodeType": "connect",
                          "children": []
                        }
                      ]
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance fillproperties",
                          "nodeType": "fillproperties",
                          "children": [],
                          "filled": false,
                          "hatched": false
                        },
                        {
                          "string": "appearance lineproperties",
                          "nodeType": "lineproperties",
                          "children": [
                            {
                              "string": "appearance is",
                              "nodeType": "is",
                              "children": [
                                {
                                  "string": "appearance connect",
                                  "nodeType": "connect",
                                  "children": []
                                }
                              ]
                            }
                          ]
                        },
                        {
                          "string": "appearance material",
                          "nodeType": "material",
                          "children": [
                            {
                              "string": "appearance is",
                              "nodeType": "is",
                              "children": [
                                {
                                  "string": "appearance connect",
                                  "nodeType": "connect",
                                  "children": []
                                }
                              ]
                            }
                          ],
                          "diffuseColor": {
                            "r": 0,
                            "g": 0,
                            "b": 0
                          }
                        }
                      ]
                    }
                  ]
                }
              ],
              "DEF": "Shape"
            }
          ]
        }
      ],
      "name": "Widget"
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
                  "string": " planesensor DEF PlaneSensor",
                  "nodeType": "planesensor",
                  "children": [],
                  "DEF": "PlaneSensor"
                },
                {
                  "string": " transform DEF Node",
                  "nodeType": "transform",
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
                    },
                    {
                      "string": " protoinstance",
                      "nodeType": "protoinstance",
                      "children": [
                        {
                          "string": " fieldvalue",
                          "nodeType": "fieldvalue",
                          "children": [
                            {
                              "string": " protoinstance",
                              "nodeType": "protoinstance",
                              "children": [
                                {
                                  "string": " fieldvalue",
                                  "nodeType": "fieldvalue",
                                  "children": []
                                }
                              ],
                              "name": "RoundedRectangle2D"
                            }
                          ]
                        }
                      ],
                      "name": "Widget"
                    },
                    {
                      "string": " transform DEF Input",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " protoinstance",
                          "nodeType": "protoinstance",
                          "children": [
                            {
                              "string": " fieldvalue",
                              "nodeType": "fieldvalue",
                              "children": [
                                {
                                  "string": " disk2d DEF Connector",
                                  "nodeType": "disk2d",
                                  "children": [],
                                  "DEF": "Connector",
                                  "outerRadius": 0.2
                                }
                              ]
                            }
                          ],
                          "name": "Widget"
                        }
                      ],
                      "DEF": "Input",
                      "translation": {
                        "x": -1,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " transform DEF Output",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " protoinstance",
                          "nodeType": "protoinstance",
                          "children": [
                            {
                              "string": " fieldvalue",
                              "nodeType": "fieldvalue",
                              "children": [
                                {
                                  "string": " disk2d USE Connector",
                                  "nodeType": "disk2d",
                                  "children": [],
                                  "USE": "Connector"
                                }
                              ]
                            }
                          ],
                          "name": "Widget"
                        }
                      ],
                      "DEF": "Output",
                      "translation": {
                        "x": 1,
                        "y": 0,
                        "z": 0
                      }
                    }
                  ],
                  "DEF": "Node"
                }
              ]
            },
            {
              "string": " script",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": [
                    {
                      "string": " planesensor USE PlaneSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "USE": "PlaneSensor"
                    },
                    {
                      "string": " transform USE Node",
                      "nodeType": "transform",
                      "children": [],
                      "USE": "Node"
                    }
                  ]
                },
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
                },
                "<script>\r\nvrmlscript:\r\nfunction initialize ()\r\n{\r\n\tsensor .offset = translation;\r\n}\r\n\r\n</Script>"
              ],
              "directOutput": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "PlaneSensor",
              "fromField": "translation_changed",
              "toNode": "Node",
              "toField": "set_translation"
            }
          ]
        }
      ],
      "name": "Node"
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
              "string": " shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    {
                      "string": "appearance lineproperties",
                      "nodeType": "lineproperties",
                      "children": [
                        {
                          "string": "appearance is",
                          "nodeType": "is",
                          "children": [
                            {
                              "string": "appearance connect",
                              "nodeType": "connect",
                              "children": []
                            }
                          ]
                        }
                      ]
                    },
                    {
                      "string": "appearance material",
                      "nodeType": "material",
                      "children": [
                        {
                          "string": "appearance is",
                          "nodeType": "is",
                          "children": [
                            {
                              "string": "appearance connect",
                              "nodeType": "connect",
                              "children": []
                            }
                          ]
                        }
                      ],
                      "diffuseColor": {
                        "r": 0,
                        "g": 0,
                        "b": 0
                      }
                    }
                  ]
                },
                {
                  "string": "geometry lineset DEF Geometry_1",
                  "nodeType": "lineset",
                  "children": [
                    {
                      "string": "coord coordinate",
                      "nodeType": "coordinate",
                      "children": [],
                      "point": [
                        {
                          "x": -1,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0
                        }
                      ],
                      "points": [
                        {
                          "x": -1,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "DEF": "Geometry_1",
                  "vertexCount": [
                    2
                  ]
                }
              ]
            },
            {
              "string": " script DEF Route",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": [
                    {
                      "string": " lineset USE Geometry_1",
                      "nodeType": "lineset",
                      "children": [],
                      "USE": "Geometry_1"
                    },
                    {
                      "string": " script USE Route",
                      "nodeType": "script",
                      "children": [],
                      "USE": "Route"
                    }
                  ]
                },
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
                },
                "<script>\r\nvrmlscript:\r\nfunction initialize ()\r\n{\r\n\tBrowser .addRoute (output, 'translation_changed', self, 'set_translation');\r\n\tBrowser .addRoute (input,  'translation_changed', self, 'set_translation');\r\n\r\n\tset_translation ();\r\n}\r\n\r\nfunction set_translation ()\r\n{\r\n\tgeometry .vertexCount [0] = routeDimension;\r\n\r\n\tvar outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));\r\n\tvar inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));\r\n\r\n\tvar w = inPoint .x - outPoint .x;\r\n\tvar h = outPoint .y - inPoint .y;\r\n\r\n\tfor (var i = 0; i < routeDimension; ++ i)\r\n\t{\r\n\t\tvar t = i / (routeDimension - 1);\r\n\t\tvar y = h / 2 * (Math .cos (t * Math .PI) - 1);\r\n\r\n\t\tgeometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));\r\n\t}\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "Route",
              "directOutput": true
            }
          ]
        }
      ],
      "name": "Route"
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        ", ",
        "PLANE_create3000.deANY"
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
          "b": 0.2
        }
      ]
    },
    {
      "string": " orthoviewpoint",
      "nodeType": "orthoviewpoint",
      "children": [],
      "description": "OthoViewpoint",
      "position": {
        "x": -3.13496,
        "y": -4.19776,
        "z": 10
      },
      "centerOfRotation": {
        "x": -3.13496,
        "y": -4.19776,
        "z": 0
      },
      "fieldOfView": [
        0,
        0,
        10,
        10
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "Viewpoint"
    },
    {
      "string": " transform DEF Connectors",
      "nodeType": "transform",
      "children": [
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance DEF N1",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N1"
                },
                {
                  "string": " protoinstance DEF N2",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N2"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N1",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N1"
                },
                {
                  "string": " protoinstance DEF N3",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N3"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N1",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N1"
                },
                {
                  "string": " protoinstance DEF N4",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N4"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N1",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N1"
                },
                {
                  "string": " protoinstance DEF N5",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N5"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N2",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N2"
                },
                {
                  "string": " protoinstance DEF N6",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N6"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N3",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N3"
                },
                {
                  "string": " protoinstance USE N6",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N6"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N4",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N4"
                },
                {
                  "string": " protoinstance DEF N7",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N7"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N5",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N5"
                },
                {
                  "string": " protoinstance USE N7",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N7"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N6",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N6"
                },
                {
                  "string": " protoinstance DEF N8",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
                    }
                  ],
                  "name": "Node",
                  "DEF": "N8"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": [
                {
                  "string": " protoinstance USE N7",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N7"
                },
                {
                  "string": " protoinstance USE N8",
                  "nodeType": "protoinstance",
                  "children": [],
                  "name": "Node",
                  "USE": "N8"
                }
              ]
            }
          ],
          "name": "Route"
        },
        {
          "string": " protoinstance USE N1",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N1"
        },
        {
          "string": " protoinstance USE N2",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N2"
        },
        {
          "string": " protoinstance USE N3",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N3"
        },
        {
          "string": " protoinstance USE N4",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N4"
        },
        {
          "string": " protoinstance USE N5",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N5"
        },
        {
          "string": " protoinstance USE N6",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N6"
        },
        {
          "string": " protoinstance USE N7",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N7"
        },
        {
          "string": " protoinstance USE N8",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Node",
          "USE": "N8"
        }
      ],
      "DEF": "Connectors"
    }
  ]
}