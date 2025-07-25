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
              "string": " group",
              "nodeType": "group",
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
                          "string": "geometry sphere",
                          "nodeType": "sphere",
                          "children": []
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
                                    "b": 1
                                  }
                                }
                              ]
                            },
                            {
                              "string": [
                                "Node"
                              ],
                              "nodeType": "text",
                              "children": [
                                {
                                  "string": "fontStyle fontstyle",
                                  "nodeType": "fontstyle",
                                  "children": [],
                                  "size": 5,
                                  "justify": [
                                    "MIDDLE",
                                    "MIDDLE"
                                  ]
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 1,
                        "y": 0,
                        "z": 0
                      }
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
                    "<script>\r\n\r\necmascript:\r\n\t\t\t\t\tfunction set_cycle(value) {\r\n                                                old = translation;\r\n\t\t\t\t\t\ttranslation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\r\n\t\t    \t\t\t\t/*\r\n                                                var tmpkeyValue = new MFVec3f();\r\n\t\t\t    \t\t\ttmpkeyValue[0] = old;\r\n\t\t\t    \t\t\ttmpkeyValue[1] = translation;\r\n                                                keyValue = tmpkeyValue;\r\n\t\t    \t\t\t\t*/\r\n                                                keyValue = new MFVec3f([old, translation]);\r\n\t\t\t    \t\t\r\n\t\t\t\t\t\t// Browser.println(translation);\r\n\t\t\t\t\t}\r\n\r\n</Script>"
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
                }
              ]
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
              "toField": "set_keyValue"
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
              "string": " group",
              "nodeType": "group",
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
                            "r": 0,
                            "g": 1,
                            "b": 0
                          }
                        }
                      ]
                    },
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
                          "y": 50,
                          "z": 0
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
                    "<script>\r\n\r\necmascript:\r\n\r\n                function set_endA(value) {\r\n\t\t    if (typeof spine === 'undefined') {\r\n\t\t    \t/*\r\n\t\t        var tmpspine = new MFVec3f();\r\n\t\t\ttmpspine[0] = value;\r\n\t\t\ttmpspine[1] = value;\r\n\t\t\tspine = tmpspine;\r\n\t\t    \t*/\r\n\t\t        spine = new MFVec3f([value, value]);\r\n\t\t    } else {\r\n\t\t    \t/*\r\n\t\t        var tmpspine = new MFVec3f();\r\n\t\t\ttmpspine[0] = value;\r\n\t\t\ttmpspine[1] = spine[1];\r\n\t\t\tspine = tmpspine;\r\n\t\t        */\r\n\t\t        spine = new MFVec3f([value, spine[1]]);\r\n\t\t    }\r\n                }\r\n\r\n                function set_endB(value) {\r\n\t\t    if (typeof spine === 'undefined') {\r\n\t\t    \t/*\r\n\t\t        var tmpspine = new MFVec3f();\r\n\t\t\ttmpspine[0] = value;\r\n\t\t\ttmpspine[1] = value;\r\n\t\t\tspine = tmpspine;\r\n\t\t        */\r\n\t\t        spine = new MFVec3f([value, value]);\r\n\t\t    } else {\r\n\t\t    \t/*\r\n\t\t        var tmpspine = new MFVec3f();\r\n\t\t\ttmpspine[0] = spine[0];\r\n\t\t\ttmpspine[1] = value;\r\n\t\t\tspine = tmpspine;\r\n\t\t    \t*/\r\n\t\t        spine = new MFVec3f([spine[0], value]);\r\n\t\t    }\r\n                }\r\n\r\n                function set_spine(value) {\r\n                    spine = value;\r\n                }\r\n\r\n</Script>"
                  ],
                  "DEF": "MoveCylinder"
                }
              ]
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "MoveCylinder",
              "fromField": "spine_changed",
              "toNode": "extrusion",
              "toField": "set_spine"
            }
          ]
        }
      ],
      "name": "cyl"
    },
    {
      "string": " transform DEF HoldsContent",
      "nodeType": "transform",
      "children": [
        {
          "string": " planesensor DEF clickGenerator",
          "nodeType": "planesensor",
          "children": [],
          "DEF": "clickGenerator",
          "description": "click on background to add nodes, click on nodes to add links",
          "minPosition": {
            "x": -50,
            "y": -50
          },
          "maxPosition": {
            "x": 50,
            "y": 50
          }
        },
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
          "string": " protoinstance DEF nodeC",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": []
            }
          ],
          "name": "node",
          "DEF": "nodeC"
        },
        {
          "string": " protoinstance DEF nodeD",
          "nodeType": "protoinstance",
          "children": [
            {
              "string": " fieldvalue",
              "nodeType": "fieldvalue",
              "children": []
            }
          ],
          "name": "node",
          "DEF": "nodeD"
        },
        {
          "string": " protoinstance DEF linkA",
          "nodeType": "protoinstance",
          "children": [],
          "name": "cyl",
          "DEF": "linkA"
        },
        {
          "string": " protoinstance DEF linkB",
          "nodeType": "protoinstance",
          "children": [],
          "name": "cyl",
          "DEF": "linkB"
        },
        {
          "string": " protoinstance DEF linkC",
          "nodeType": "protoinstance",
          "children": [],
          "name": "cyl",
          "DEF": "linkC"
        }
      ],
      "DEF": "HoldsContent",
      "scale": {
        "x": 0.1,
        "y": 0.1,
        "z": 0.1
      }
    },
    {
      "string": " script DEF clickHandler",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "<script>\r\n\r\necmascript:\r\n\tfunction add_node(value) {\r\n                // Browser.print('hey ', counter);\r\n                counter = counter++;\r\n\t\tBrowser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\r\n\t\t\t{ \"ProtoInstance\":\r\n\t\t\t\t{ \"@name\":\"node\",\r\n\t\t\t\t  \"@DEF\":\"node'+counter+'\",\r\n\t\t\t\t  \"fieldValue\": [\r\n\t\t\t\t\t{\r\n\t\t\t\t\t\t \"@name\":\"position\",\r\n\t\t\t\t\t\t \"@value\":[0.0,0.0,0.0]\r\n\t\t\t\t\t}\r\n\t\t\t\t  ]\r\n\t\t\t\t}\r\n\t\t\t});\r\n\r\n        }\r\n\t\r\n</Script>"
      ],
      "DEF": "clickHandler"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "clickGenerator",
      "fromField": "isActive",
      "toNode": "clickHandler",
      "toField": "add_node"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeA",
      "fromField": "position_changed",
      "toNode": "linkA",
      "toField": "set_positionA"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeB",
      "fromField": "position_changed",
      "toNode": "linkA",
      "toField": "set_positionB"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeA",
      "fromField": "position_changed",
      "toNode": "linkB",
      "toField": "set_positionA"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeC",
      "fromField": "position_changed",
      "toNode": "linkB",
      "toField": "set_positionB"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeA",
      "fromField": "position_changed",
      "toNode": "linkC",
      "toField": "set_positionA"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "nodeD",
      "fromField": "position_changed",
      "toNode": "linkC",
      "toField": "set_positionB"
    }
  ]
}