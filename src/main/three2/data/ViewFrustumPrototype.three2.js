{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "ViewFrustumPrototype.x3d"
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
              "children": [
                "/*NULL node, ProtoInstance must provide*/",
                "/*NULL node, ProtoInstance must provide*/"
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " switch DEF VisibilitySwitch",
              "nodeType": "switch",
              "children": [
                {
                  "string": " transform DEF PositionTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " transform DEF OrientationTransform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry indexedlineset DEF FrustumLines",
                              "nodeType": "indexedlineset",
                              "children": [
                                {
                                  "string": "coord coordinate DEF FrustumCoordinate",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "DEF": "FrustumCoordinate",
                                  "point": [
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
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
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    },
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 0
                                    }
                                  ]
                                }
                              ],
                              "DEF": "FrustumLines",
                              "coordIndex": [
                                [
                                  0,
                                  1,
                                  2,
                                  3,
                                  0
                                ],
                                [
                                  4,
                                  5,
                                  6,
                                  7,
                                  4
                                ],
                                [
                                  0,
                                  4
                                ],
                                [
                                  1,
                                  5
                                ],
                                [
                                  2,
                                  6
                                ],
                                [
                                  3,
                                  7
                                ]
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
                              "string": "geometry extrusion DEF FrustumExtrusion",
                              "nodeType": "extrusion",
                              "children": [],
                              "DEF": "FrustumExtrusion"
                            },
                            {
                              "string": "appearance DEF FrustumAppearance",
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
                              ],
                              "DEF": "FrustumAppearance"
                            }
                          ]
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
                            },
                            {
                              "string": "appearance USE FrustumAppearance",
                              "nodeType": "appearance",
                              "children": [],
                              "USE": "FrustumAppearance"
                            }
                          ]
                        }
                      ],
                      "DEF": "OrientationTransform"
                    }
                  ],
                  "DEF": "PositionTransform",
                  "rotation": {
                    "x": 0,
                    "y": 1,
                    "z": 0,
                    "w": 3.14159
                  }
                }
              ],
              "DEF": "VisibilitySwitch",
              "whichChoice": -1
            },
            {
              "string": " script DEF GeometryComputationScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": [
                    "/*initialization node (if any) goes here*/",
                    "/*initialization node (if any) goes here*/",
                    {
                      "string": " coordinate USE FrustumCoordinate",
                      "nodeType": "coordinate",
                      "children": [],
                      "USE": "FrustumCoordinate"
                    },
                    {
                      "string": " extrusion USE FrustumExtrusion",
                      "nodeType": "extrusion",
                      "children": [],
                      "USE": "FrustumExtrusion"
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
                }
              ],
              "DEF": "GeometryComputationScript",
              "directOutput": true,
              "url": [
                "ViewFrustumPrototypeScript.js"
              ]
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "visibilitySwitchSelection",
              "fromNode": "GeometryComputationScript",
              "toField": "whichChoice",
              "toNode": "VisibilitySwitch"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "position_changed",
              "fromNode": "GeometryComputationScript",
              "toField": "translation",
              "toNode": "PositionTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "orientation_changed",
              "fromNode": "GeometryComputationScript",
              "toField": "rotation",
              "toNode": "OrientationTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "spine_changed",
              "fromNode": "GeometryComputationScript",
              "toField": "set_spine",
              "toNode": "FrustumExtrusion"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "scale_changed",
              "fromNode": "GeometryComputationScript",
              "toField": "set_scale",
              "toNode": "FrustumExtrusion"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "point_changed",
              "fromNode": "GeometryComputationScript",
              "toField": "point",
              "toNode": "FrustumCoordinate"
            }
          ]
        }
      ],
      "name": "ViewFrustum",
      "appinfo": "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"
    },
    "/*Example use is in separate scene*/",
    {
      "string": " anchor",
      "nodeType": "anchor",
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
                    "r": 0.8,
                    "g": 0.4,
                    "b": 0
                  }
                }
              ]
            },
            {
              "string": [
                "ViewFrustumPrototype.x3d",
                "is a Prototype declaration file.",
                "For an example scene using the prototype,",
                "click this text and view",
                "ViewFrustumExample.x3d"
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
            }
          ]
        }
      ],
      "description": "ViewFrustum Example",
      "url": [
        "ViewFrustumExample.x3d"
      ]
    }
  ]
}