{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "Two mathematical orbitals",
      "position": {
        "x": 0,
        "y": 0,
        "z": 50
      }
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " directionallight",
          "nodeType": "directionallight",
          "children": [],
          "direction": {
            "x": 1,
            "y": 1,
            "z": 1
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
                      "string": " timesensor DEF Clock",
                      "nodeType": "timesensor",
                      "children": [],
                      "DEF": "Clock",
                      "cycleInterval": 16,
                      "loop": true
                    },
                    {
                      "string": " orientationinterpolator DEF OrbitPath",
                      "nodeType": "orientationinterpolator",
                      "children": [],
                      "DEF": "OrbitPath",
                      "key": [
                        0,
                        0.5,
                        1
                      ],
                      "keyValue": [
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0,
                          "w": 0
                        },
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0,
                          "w": 3.14
                        },
                        {
                          "x": 1,
                          "y": 0,
                          "z": 0,
                          "w": 6.28
                        }
                      ]
                    },
                    {
                      "string": " transform DEF OrbitTransform",
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
                            },
                            "/*<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>*/",
                            {
                              "string": "geometry indexedfaceset DEF Orbit",
                              "nodeType": "indexedfaceset",
                              "children": [
                                {
                                  "string": "coord coordinate DEF OrbitCoordinates",
                                  "nodeType": "coordinate",
                                  "children": [],
                                  "DEF": "OrbitCoordinates",
                                  "point": [
                                    {
                                      "x": 0,
                                      "y": 0,
                                      "z": 1
                                    },
                                    {
                                      "x": 0,
                                      "y": 1,
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
                                      "x": 0,
                                      "y": 0,
                                      "z": 1
                                    },
                                    {
                                      "x": 0,
                                      "y": 1,
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
                              "ccw": false,
                              "convex": false,
                              "coordIndex": [
                                [
                                  0,
                                  1,
                                  2
                                ]
                              ],
                              "DEF": "Orbit"
                            }
                          ]
                        }
                      ],
                      "DEF": "OrbitTransform"
                    },
                    {
                      "string": " script DEF OrbitScript",
                      "nodeType": "script",
                      "children": [
                        {
                          "string": " field",
                          "nodeType": "field",
                          "children": []
                        },
                        "<script>\r\n\t\t\t\r\n\t\t\tecmascript:\r\n\r\n\t\t\tfunction initialize() {\r\n\t\t\t     generateCoordinates();\r\n\t\t\t     var arrIndex = 0;\r\n\t\t\t     for (var i = 0; i < resolution-1; i++) {\r\n\t\t\t\tfor (var j = 0; j < resolution-1; j++) {\r\n\t\t\t\t     coordIndexes[arrIndex++] = i*resolution+j;\r\n\t\t\t\t     coordIndexes[arrIndex++] = i*resolution+j+1;\r\n\t\t\t\t     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\r\n\t\t\t\t     coordIndexes[arrIndex++] = (i+1)*resolution+j;\r\n\t\t\t\t     coordIndexes[arrIndex++] = -1;\r\n\t\t\t\t}\r\n\t\t\t    }\r\n\t\t\t}\r\n\r\n\t\t\tfunction generateCoordinates() {\r\n\t\t\t     var theta = 0.0;\r\n\t\t\t     var phi = 0.0;\r\n\t\t\t     var delta = (2 * 3.141592653) / (resolution-1);\r\n\t\t\t     var arrIndex = 0;\r\n\t\t\t     for (var i = 0; i < resolution; i++) {\r\n\t\t\t\tfor (var j = 0; j < resolution; j++) {\r\n\t\t\t\t\tvar rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\r\n\t\t\t\t\tcoordinates[arrIndex++] = new SFVec3f(\r\n\t\t\t\t\t\trho * Math.cos(phi) * Math.cos(theta),\r\n\t\t\t\t\t\trho * Math.cos(phi) * Math.sin(theta),\r\n\t\t\t\t\t\trho * Math.sin(phi)\r\n\t\t\t\t\t);\r\n\t\t\t\t\ttheta += delta;\r\n\t\t\t\t}\r\n\t\t\t\tphi += delta;\r\n\t\t\t     }\r\n\t\t\t}\r\n\r\n\t\t\tfunction set_fraction(fraction, eventTime) {\r\n\t\t\t\tvar choice = Math.floor(Math.random() * 4);\r\n\t\t\t\tswitch (choice) {\r\n\t\t\t\tcase 0:\r\n\t\t\t\t\te += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 1:\r\n\t\t\t\t\tf += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 2:\r\n\t\t\t\t\tg += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\tcase 3:\r\n\t\t\t\t\th += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\t\t\t\tbreak;\r\n\t\t\t\t}\r\n\t\t\t\tif (e < 1) {\r\n\t\t\t\t\tf = 10;\r\n\t\t\t\t}\r\n\t\t\t\tif (f < 1) {\r\n\t\t\t\t\tf = 10;\r\n\t\t\t\t}\r\n\t\t\t\tif (g < 1) {\r\n\t\t\t\t\tg = 4;\r\n\t\t\t\t}\r\n\t\t\t\tif (h < 1) {\r\n\t\t\t\t\th = 4;\r\n\t\t\t\t}\r\n\t\t\t\tgenerateCoordinates();\r\n\t\t\t}\r\n\t\t\t      </Script>"
                      ],
                      "DEF": "OrbitScript"
                    },
                    {
                      "string": " route",
                      "nodeType": "route",
                      "children": [],
                      "fromNode": "OrbitScript",
                      "fromField": "coordIndexes",
                      "toNode": "Orbit",
                      "toField": "set_coordIndex"
                    },
                    {
                      "string": " route",
                      "nodeType": "route",
                      "children": [],
                      "fromNode": "OrbitScript",
                      "fromField": "coordinates",
                      "toNode": "OrbitCoordinates",
                      "toField": "point"
                    },
                    {
                      "string": " route",
                      "nodeType": "route",
                      "children": [],
                      "fromNode": "Clock",
                      "fromField": "fraction_changed",
                      "toNode": "OrbitScript",
                      "toField": "set_fraction"
                    },
                    {
                      "string": " route",
                      "nodeType": "route",
                      "children": [],
                      "fromNode": "OrbitPath",
                      "fromField": "value_changed",
                      "toNode": "OrbitTransform",
                      "toField": "rotation"
                    },
                    {
                      "string": " route",
                      "nodeType": "route",
                      "children": [],
                      "fromNode": "Clock",
                      "fromField": "fraction_changed",
                      "toNode": "OrbitPath",
                      "toField": "set_fraction"
                    }
                  ]
                }
              ]
            }
          ],
          "name": "orbit"
        },
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
          "name": "orbit"
        },
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
          "name": "orbit"
        }
      ]
    }
  ]
}