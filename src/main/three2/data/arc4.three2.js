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
      "description": "Only Viewpoint"
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
      "string": " transform DEF DECLpoint_G1_node",
      "nodeType": "transform",
      "children": [
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
          "string": " positioninterpolator DEF DECLpoint_G1_PI1",
          "nodeType": "positioninterpolator",
          "children": [],
          "DEF": "DECLpoint_G1_PI1",
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
          "string": " script DEF DECLpoint_G1_MB1",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\necmascript:\r\n\t\tfunction set_location(value) {\r\n                    old = translation;\r\n\t\t    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\r\n                    keyValue = new MFVec3f([old, translation]);\r\n\t\t    // Browser.println(keyValue);\r\n\t\t}\r\n\r\n\r\n</Script>"
          ],
          "DEF": "DECLpoint_G1_MB1"
        },
        {
          "string": " timesensor DEF DECLpoint_G1_CL1",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "DECLpoint_G1_CL1",
          "cycleInterval": 3,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G1_CL1",
          "fromField": "cycleTime",
          "toNode": "DECLpoint_G1_MB1",
          "toField": "set_location"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G1_CL1",
          "fromField": "fraction_changed",
          "toNode": "DECLpoint_G1_PI1",
          "toField": "set_fraction"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G1_MB1",
          "fromField": "keyValue",
          "toNode": "DECLpoint_G1_PI1",
          "toField": "keyValue"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G1_PI1",
          "fromField": "value_changed",
          "toNode": "DECLpoint_G1_node",
          "toField": "set_translation"
        }
      ],
      "DEF": "DECLpoint_G1_node"
    },
    {
      "string": " transform DEF DECLpoint_G2_node",
      "nodeType": "transform",
      "children": [
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
          "string": " positioninterpolator DEF DECLpoint_G2_PI1",
          "nodeType": "positioninterpolator",
          "children": [],
          "DEF": "DECLpoint_G2_PI1",
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
          "string": " script DEF DECLpoint_G2_MB1",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\necmascript:\r\n\t\tfunction set_location(value) {\r\n                    old = translation;\r\n\t\t    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\r\n                    keyValue = new MFVec3f([old, translation]);\r\n\t\t    // Browser.println(keyValue);\r\n\t\t}\r\n\r\n\r\n</Script>"
          ],
          "DEF": "DECLpoint_G2_MB1"
        },
        {
          "string": " timesensor DEF DECLpoint_G2_CL1",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "DECLpoint_G2_CL1",
          "cycleInterval": 3,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G2_CL1",
          "fromField": "cycleTime",
          "toNode": "DECLpoint_G2_MB1",
          "toField": "set_location"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G2_CL1",
          "fromField": "fraction_changed",
          "toNode": "DECLpoint_G2_PI1",
          "toField": "set_fraction"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G2_MB1",
          "fromField": "keyValue",
          "toNode": "DECLpoint_G2_PI1",
          "toField": "keyValue"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLpoint_G2_PI1",
          "fromField": "value_changed",
          "toNode": "DECLpoint_G2_node",
          "toField": "set_translation"
        }
      ],
      "DEF": "DECLpoint_G2_node"
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " transform DEF DECLx3dconnector_connector1_trans",
          "nodeType": "transform",
          "children": [
            {
              "string": " transform DEF DECLx3dconnector_connector1_rotscale",
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
                          },
                          "transparency": 0.5
                        }
                      ]
                    },
                    {
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": [],
                      "radius": 0.05
                    }
                  ]
                }
              ],
              "DEF": "DECLx3dconnector_connector1_rotscale"
            }
          ],
          "DEF": "DECLx3dconnector_connector1_trans"
        },
        {
          "string": " script DEF DECLx3dconnector_connector1_S1",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": [
                {
                  "string": " transform USE DECLx3dconnector_connector1_trans",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "DECLx3dconnector_connector1_trans"
                },
                {
                  "string": " transform USE DECLx3dconnector_connector1_rotscale",
                  "nodeType": "transform",
                  "children": [],
                  "USE": "DECLx3dconnector_connector1_rotscale"
                }
              ]
            },
            "<script>\r\necmascript:\r\n        function recompute(startpoint,endpoint){\r\n\t    if (typeof endpoint === 'undefined') {\r\n\t\t    if (typeof Quaternion !== 'undefined') {\r\n\t\t\t    return {\r\n\t\t\t\t    scale : new SFVec3f(1.0,1.0,1.0),\r\n\t\t\t\t    translation : new SFVec3f(1.0,1.0,1.0),\r\n\t\t\t    \t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)\r\n\t\t\t    };\r\n\t    \t    } else if (typeof SFRotation !== 'undefined') {\r\n\t\t\t    return {\r\n\t\t\t\t    scale : new SFVec3f(1.0,1.0,1.0),\r\n\t\t\t\t    translation : new SFVec3f(1.0,1.0,1.0),\r\n\t\t\t    \t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)\r\n\t\t\t    };\r\n\t    \t    } else {\r\n\t\t\t    return {\r\n\t\t\t\t    scale : new SFVec3f(1.0,1.0,1.0),\r\n\t\t\t\t    translation : new SFVec3f(1.0,1.0,1.0)\r\n\t\t\t    };\r\n\t\t    }\r\n\t    }\r\n            var dif = endpoint.subtract(startpoint);\r\n            var dist = dif.length()*0.5;\r\n            var dif2 = dif.multiply(0.5);\r\n            var norm = dif.normalize();\r\n            var transl = startpoint.add(dif2);\r\n\t    if (typeof Quaternion !== 'undefined') {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\r\n\t\t    };\r\n\t    } else if (typeof SFRotation !== 'undefined') {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\r\n\t\t    };\r\n\t    } else {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl\r\n\t\t    };\r\n\t    }\r\n\t}\r\n\tfunction recompute_and_route(startpoint, endpoint) {\r\n\t      var trafo = recompute(startpoint, endpoint);\r\n\t      position.translation = trafo.translation;\r\n\t      rotscale.rotation = trafo.rotation;\r\n\t      rotscale.scale = trafo.scale;\r\n\t}\r\n        function initialize(){\r\n            recompute_and_route(startnode.translation,endnode.translation);\r\n        }\r\n        function set_startpoint(val,t){\r\n            recompute_and_route(val,endnode.translation);\r\n        }\r\n        function set_endpoint(val,t){\r\n            recompute_and_route(startnode.translation,val);\r\n        }\r\n</Script>"
          ],
          "DEF": "DECLx3dconnector_connector1_S1"
        }
      ]
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "DECLpoint_G1_node",
      "fromField": "translation_changed",
      "toNode": "DECLx3dconnector_connector1_S1",
      "toField": "set_startpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "DECLpoint_G2_node",
      "fromField": "translation_changed",
      "toNode": "DECLx3dconnector_connector1_S1",
      "toField": "set_endpoint"
    }
  ]
}