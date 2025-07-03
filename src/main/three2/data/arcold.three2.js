{
  "string": "Scene",
  "children": [
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "position": {
        "x": 0,
        "y": 0,
        "z": 5
      },
      "description": "a moving graph"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 0.4,
          "g": 0.4,
          "b": 0.4
        }
      ]
    },
    {
      "string": " transform DEF trans1",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF rotscale1",
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
                        "r": 0.2,
                        "g": 0.7,
                        "b": 0.7
                      }
                    }
                  ]
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "radius": 0.1
                }
              ]
            }
          ],
          "DEF": "rotscale1"
        }
      ],
      "DEF": "trans1"
    },
    {
      "string": " transform DEF trans2",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF rotscale2",
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
                        "r": 0.2,
                        "g": 0.7,
                        "b": 0.7
                      }
                    }
                  ]
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "radius": 0.1
                }
              ]
            }
          ],
          "DEF": "rotscale2"
        }
      ],
      "DEF": "trans2"
    },
    {
      "string": " transform DEF trans3",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF rotscale3",
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
                        "r": 0.2,
                        "g": 0.7,
                        "b": 0.7
                      }
                    }
                  ]
                },
                {
                  "string": "geometry cylinder",
                  "nodeType": "cylinder",
                  "children": [],
                  "radius": 0.1
                }
              ]
            }
          ],
          "DEF": "rotscale3"
        }
      ],
      "DEF": "trans3"
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
              "string": " transform DEF node",
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
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": [],
                      "radius": 0.1
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
                            "g": 0,
                            "b": 0
                          }
                        }
                      ]
                    }
                  ]
                },
                {
                  "string": " positioninterpolator DEF PI1",
                  "nodeType": "positioninterpolator",
                  "children": [],
                  "DEF": "PI1",
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
                  "string": " script DEF MB1",
                  "nodeType": "script",
                  "children": [
                    {
                      "string": " field",
                      "nodeType": "field",
                      "children": []
                    },
                    "<script>\r\n\r\necmascript:\r\n\t\tfunction set_location(value) {\r\n                    old = translation;\r\n\t\t    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\r\n                    keyValue = new MFVec3f([old, translation]);\r\n\t\t    // Browser.println(translation);\r\n\t\t}\r\n\r\n</Script>"
                  ],
                  "DEF": "MB1"
                },
                {
                  "string": " timesensor DEF CL1",
                  "nodeType": "timesensor",
                  "children": [],
                  "DEF": "CL1",
                  "cycleInterval": 3,
                  "loop": true
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "CL1",
                  "fromField": "cycleTime",
                  "toNode": "MB1",
                  "toField": "set_location"
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "CL1",
                  "fromField": "fraction_changed",
                  "toNode": "PI1",
                  "toField": "set_fraction"
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "MB1",
                  "fromField": "keyValue",
                  "toNode": "PI1",
                  "toField": "keyValue"
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "PI1",
                  "fromField": "value_changed",
                  "toNode": "node",
                  "toField": "set_translation"
                }
              ],
              "DEF": "node"
            }
          ]
        }
      ],
      "name": "point"
    },
    "/*from doug sanden*/",
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
              "string": " script DEF S1",
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
                "<script>\r\n            ecmascript:\r\n        function recompute(startpoint,endpoint){\r\n\t    if (typeof endpoint === 'undefined') {\r\n\t\treturn;\r\n\t    }\r\n            var dif = endpoint.subtract(startpoint);\r\n            var dist = dif.length()*0.5;\r\n            var dif2 = dif.multiply(0.5);\r\n            var norm = dif.normalize();\r\n            var transl = startpoint.add(dif2);\r\n\t    if (typeof Quaternion !== 'undefined') {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\r\n\t\t    };\r\n\t    } else {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\r\n\t\t    };\r\n\t    }\r\n\t}\r\n\tfunction recompute_and_route(startpoint, endpoint) {\r\n\t\tvar trafo = recompute(startpoint, endpoint);\r\n\t\tif (typeof trafo !== 'undefined') {\r\n\t\t\ttransnode.translation = trafo.translation;\r\n\t\t\trotscalenode.rotation = trafo.rotation;\r\n\t\t\trotscalenode.scale = trafo.scale;\r\n\t\t} else {\r\n\t\t\tBrowser.print(\"recompute returned undefined\");\r\n\t\t}\r\n\t}\r\n        function initialize(){\r\n            recompute_and_route(startnode.translation,endnode.translation);\r\n        }\r\n        function set_startpoint(val,t){\r\n            recompute_and_route(val || startnode.translation,endnode.translation);\r\n        }\r\n        function set_endpoint(val,t){\r\n            recompute_and_route(startnode.translation,val || endnode.translation);\r\n        }\r\n\r\n</Script>"
              ],
              "DEF": "S1"
            }
          ]
        }
      ],
      "name": "x3dconnector"
    },
    {
      "string": " protoinstance DEF G1",
      "nodeType": "protoinstance",
      "children": [],
      "name": "point",
      "DEF": "G1"
    },
    {
      "string": " protoinstance DEF G2",
      "nodeType": "protoinstance",
      "children": [],
      "name": "point",
      "DEF": "G2"
    },
    {
      "string": " protoinstance DEF G3",
      "nodeType": "protoinstance",
      "children": [],
      "name": "point",
      "DEF": "G3"
    },
    {
      "string": " protoinstance DEF G4",
      "nodeType": "protoinstance",
      "children": [],
      "name": "point",
      "DEF": "G4"
    },
    {
      "string": " protoinstance DEF connector1",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            {
              "string": " protoinstance USE G1",
              "nodeType": "protoinstance",
              "children": [],
              "USE": "G1"
            },
            {
              "string": " protoinstance USE G2",
              "nodeType": "protoinstance",
              "children": [],
              "USE": "G2"
            },
            {
              "string": " transform USE trans1",
              "nodeType": "transform",
              "children": [],
              "USE": "trans1"
            },
            {
              "string": " transform USE rotscale1",
              "nodeType": "transform",
              "children": [],
              "USE": "rotscale1"
            }
          ]
        }
      ],
      "name": "x3dconnector",
      "DEF": "connector1"
    },
    {
      "string": " protoinstance DEF connector2",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            {
              "string": " protoinstance USE G1",
              "nodeType": "protoinstance",
              "children": [],
              "USE": "G1"
            },
            {
              "string": " protoinstance USE G3",
              "nodeType": "protoinstance",
              "children": [],
              "USE": "G3"
            },
            {
              "string": " transform USE trans2",
              "nodeType": "transform",
              "children": [],
              "USE": "trans2"
            },
            {
              "string": " transform USE rotscale2",
              "nodeType": "transform",
              "children": [],
              "USE": "rotscale2"
            }
          ]
        }
      ],
      "name": "x3dconnector",
      "DEF": "connector2"
    },
    {
      "string": " protoinstance DEF connector3",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            {
              "string": " protoinstance USE G1",
              "nodeType": "protoinstance",
              "children": [],
              "USE": "G1"
            },
            {
              "string": " protoinstance USE G4",
              "nodeType": "protoinstance",
              "children": [],
              "USE": "G4"
            },
            {
              "string": " transform USE trans3",
              "nodeType": "transform",
              "children": [],
              "USE": "trans3"
            },
            {
              "string": " transform USE rotscale3",
              "nodeType": "transform",
              "children": [],
              "USE": "rotscale3"
            }
          ]
        }
      ],
      "name": "x3dconnector",
      "DEF": "connector3"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G1",
      "fromField": "translation_changed",
      "toNode": "connector1",
      "toField": "set_startpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G2",
      "fromField": "translation_changed",
      "toNode": "connector1",
      "toField": "set_endpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G1",
      "fromField": "translation_changed",
      "toNode": "connector2",
      "toField": "set_startpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G3",
      "fromField": "translation_changed",
      "toNode": "connector2",
      "toField": "set_endpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G1",
      "fromField": "translation_changed",
      "toNode": "connector3",
      "toField": "set_startpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G4",
      "fromField": "translation_changed",
      "toNode": "connector3",
      "toField": "set_endpoint"
    }
  ]
}