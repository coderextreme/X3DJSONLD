{
  "string": "Scene",
  "children": [
    {
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                "/*left*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape DEF ShapeLeftDown",
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
                                "r": 0.7,
                                "g": 1,
                                "b": 0
                              }
                            }
                          ]
                        },
                        {
                          "string": "geometry extrusion",
                          "nodeType": "extrusion",
                          "children": [],
                          "spine": [
                            {
                              "x": -2.5,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": -1.5,
                              "y": 0,
                              "z": 0
                            }
                          ],
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
                            },
                            {
                              "x": -0.92,
                              "y": 0.38
                            },
                            {
                              "x": -0.71,
                              "y": 0.71
                            },
                            {
                              "x": -0.38,
                              "y": 0.92
                            },
                            {
                              "x": 0,
                              "y": 1
                            },
                            {
                              "x": 0.38,
                              "y": 0.92
                            },
                            {
                              "x": 0.71,
                              "y": 0.71
                            },
                            {
                              "x": 0.92,
                              "y": 0.38
                            },
                            {
                              "x": 1,
                              "y": 0
                            }
                          ]
                        }
                      ],
                      "DEF": "ShapeLeftDown"
                    }
                  ],
                  "scale": {
                    "x": 0.5,
                    "y": 0.5,
                    "z": 0.5
                  }
                },
                "/*right*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape DEF ShapeUpRight",
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
                                "r": 0,
                                "g": 0.7,
                                "b": 1
                              }
                            }
                          ]
                        },
                        {
                          "string": "geometry extrusion",
                          "nodeType": "extrusion",
                          "children": [],
                          "spine": [
                            {
                              "x": 1.5,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 2.5,
                              "y": 0,
                              "z": 0
                            }
                          ],
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
                            },
                            {
                              "x": -0.92,
                              "y": 0.38
                            },
                            {
                              "x": -0.71,
                              "y": 0.71
                            },
                            {
                              "x": -0.38,
                              "y": 0.92
                            },
                            {
                              "x": 0,
                              "y": 1
                            },
                            {
                              "x": 0.38,
                              "y": 0.92
                            },
                            {
                              "x": 0.71,
                              "y": 0.71
                            },
                            {
                              "x": 0.92,
                              "y": 0.38
                            },
                            {
                              "x": 1,
                              "y": 0
                            }
                          ]
                        }
                      ],
                      "DEF": "ShapeUpRight"
                    }
                  ],
                  "scale": {
                    "x": 0.5,
                    "y": 0.5,
                    "z": 0.5
                  }
                },
                "/*up*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape USE ShapeUpRight",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "ShapeUpRight"
                    }
                  ],
                  "scale": {
                    "x": 0.5,
                    "y": 0.5,
                    "z": 0.5
                  }
                },
                "/*down*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape USE ShapeLeftDown",
                      "nodeType": "shape",
                      "children": [],
                      "USE": "ShapeLeftDown"
                    }
                  ],
                  "scale": {
                    "x": 0.5,
                    "y": 0.5,
                    "z": 0.5
                  }
                }
              ]
            }
          ]
        }
      ],
      "name": "Process"
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "Process pipes",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -0.4
      },
      "position": {
        "x": 0,
        "y": 5,
        "z": 12
      }
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Process"
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
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Process"
        }
      ]
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "Process"
        }
      ],
      "translation": {
        "x": 0,
        "y": 2.5,
        "z": 0
      }
    }
  ]
}