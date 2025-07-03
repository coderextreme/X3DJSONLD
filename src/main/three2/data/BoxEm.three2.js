{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        "EXAMINE"
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "Cubes on Fire",
      "position": {
        "x": 0,
        "y": 0,
        "z": 12
      }
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
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": []
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
                }
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform",
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
                }
              ]
            }
          ]
        }
      ],
      "name": "anyShape"
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
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": []
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
                }
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform",
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
                      "children": []
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
                  "name": "anyShape"
                },
                {
                  "string": " protoinstance",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
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
                  "name": "anyShape"
                },
                {
                  "string": " protoinstance",
                  "nodeType": "protoinstance",
                  "children": [
                    {
                      "string": " fieldvalue",
                      "nodeType": "fieldvalue",
                      "children": []
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
                  "name": "anyShape"
                }
              ]
            }
          ]
        }
      ],
      "name": "three"
    },
    {
      "string": " protoinstance DEF threepi",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            {
              "string": " shape DEF box",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": [],
                  "size": {
                    "x": 1,
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
                      "diffuseColor": {
                        "r": 0,
                        "g": 1,
                        "b": 0
                      }
                    }
                  ]
                }
              ],
              "DEF": "box"
            }
          ]
        }
      ],
      "name": "three",
      "DEF": "threepi"
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape USE box",
          "nodeType": "shape",
          "children": [],
          "USE": "box"
        }
      ],
      "translation": {
        "x": 0,
        "y": 2,
        "z": 0
      }
    }
  ]
}