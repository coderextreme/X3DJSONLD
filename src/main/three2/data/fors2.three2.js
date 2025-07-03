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
              "string": " transform DEF transform",
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
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    "/*comment before Sphere*/",
                    "/*comment after Sphere*/",
                    "/*comment after Appearance*/",
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": []
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        "/*comment before Material*/",
                        "/*comment after Material*/",
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
                    }
                  ]
                }
              ],
              "DEF": "transform"
            },
            {
              "string": " positioninterpolator DEF NodePosition",
              "nodeType": "positioninterpolator",
              "children": [],
              "DEF": "NodePosition",
              "key": [
                0,
                1
              ],
              "keyValue": [
                {
                  "x": 0,
                  "y": 0,
                  "z": 0
                },
                {
                  "x": 0,
                  "y": 5,
                  "z": 0
                }
              ]
            },
            {
              "string": " script DEF MoveBall",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n ecmascript:\r\n\t\t\t\t\tfunction set_cycle(value) {\r\n                                                old = translation;\r\n\t\t\t\t\t\ttranslation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\r\n                                                keyValue = new MFVec3f([old, translation]);\r\n\t\t\t\t\t\t// Browser.println(translation);\r\n\t\t\t\t\t}\r\n</Script>"
              ],
              "DEF": "MoveBall"
            },
            {
              "string": " timesensor DEF nodeClock",
              "nodeType": "timesensor",
              "children": [],
              "DEF": "nodeClock",
              "cycleInterval": 3,
              "loop": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "nodeClock",
              "fromField": "cycleTime",
              "toNode": "MoveBall",
              "toField": "set_cycle"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "nodeClock",
              "fromField": "fraction_changed",
              "toNode": "NodePosition",
              "toField": "set_fraction"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "MoveBall",
              "fromField": "keyValue",
              "toNode": "NodePosition",
              "toField": "keyValue"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "NodePosition",
              "fromField": "value_changed",
              "toNode": "transform",
              "toField": "set_translation"
            }
          ]
        }
      ],
      "name": "node"
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
                  "string": "geometry extrusion DEF extrusion",
                  "nodeType": "extrusion",
                  "children": [],
                  "DEF": "extrusion",
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
                  ],
                  "spine": [
                    {
                      "x": 0,
                      "y": -50,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 50,
                      "z": 0
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
                        "r": 0,
                        "g": 1,
                        "b": 0
                      }
                    }
                  ]
                }
              ]
            },
            {
              "string": " script DEF MoveCylinder",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
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
                },
                "<script>\r\n ecmascript:\r\n\r\n                function set_endA(value) {\r\n\t\t    if (typeof spine === \"undefined\") {\r\n\t\t        spine = new MFVec3f([value, value]);\r\n\t\t    } else {\r\n\t\t        spine = new MFVec3f([value, spine[1]]);\r\n\t\t    }\r\n                }\r\n\r\n                function set_endB(value) {\r\n\t\t    if (typeof spine === \"undefined\") {\r\n\t\t        spine = new MFVec3f([value, value]);\r\n\t\t    } else {\r\n\t\t        spine = new MFVec3f([spine[0], value]);\r\n\t\t    }\r\n                }\r\n\r\n                function set_spine(value) {\r\n\t\t    Browser.print('\n'+'\"');\r\n                    spine = value;\r\n                }\r\n</Script>"
              ],
              "DEF": "MoveCylinder"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "MoveCylinder",
              "fromField": "spine",
              "toNode": "extrusion",
              "toField": "set_spine"
            }
          ]
        }
      ],
      "name": "cyl"
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " protoinstance DEF nodeA",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": []
            }
          ],
          "name": "node",
          "DEF": "nodeA"
        },
        {
          "string": " protoinstance DEF nodeB",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": []
            }
          ],
          "name": "node",
          "DEF": "nodeB"
        },
        {
          "string": " protoinstance DEF linkA",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": []
            }
          ],
          "name": "cyl",
          "DEF": "linkA"
        }
      ],
      "scale": {
        "x": 0.1,
        "y": 0.1,
        "z": 0.1
      }
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeA",
      "fromField": "position",
      "toNode": "linkA",
      "toField": "positionA"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeB",
      "fromField": "position",
      "toNode": "linkA",
      "toField": "positionB"
    }
  ]
}