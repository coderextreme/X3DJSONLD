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
      "string": " transform DEF G1",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF DECLpoint_INSTANCE_node",
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
              "string": " positioninterpolator DEF DECLpoint_INSTANCE_PI1",
              "nodeType": "positioninterpolator",
              "children": [],
              "DEF": "DECLpoint_INSTANCE_PI1",
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
              "string": " script DEF DECLpoint_INSTANCE_MB1",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\n\r\necmascript:\r\n               function set_location(value) {\r\n                    old = translation;\r\n                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\r\n                    keyValue = new MFVec3f([old, translation]);\r\n               }\r\n\r\n\r\n</Script>"
              ],
              "DEF": "DECLpoint_INSTANCE_MB1"
            },
            {
              "string": " timesensor DEF DECLpoint_INSTANCE_CL1",
              "nodeType": "timesensor",
              "children": [],
              "DEF": "DECLpoint_INSTANCE_CL1",
              "cycleInterval": 3,
              "loop": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE_CL1",
              "fromField": "cycleTime",
              "toNode": "DECLpoint_INSTANCE_MB1",
              "toField": "set_location"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE_CL1",
              "fromField": "fraction_changed",
              "toNode": "DECLpoint_INSTANCE_PI1",
              "toField": "set_fraction"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE_MB1",
              "fromField": "keyValue",
              "toNode": "DECLpoint_INSTANCE_PI1",
              "toField": "keyValue"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE_PI1",
              "fromField": "value_changed",
              "toNode": "DECLpoint_INSTANCE_node",
              "toField": "set_translation"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE_MB1",
              "fromField": "translation_changed",
              "toNode": "DECLpoint_INSTANCE_node",
              "toField": "set_translation"
            }
          ],
          "DEF": "DECLpoint_INSTANCE_node"
        }
      ],
      "DEF": "G1"
    },
    {
      "string": " transform DEF G2",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF DECLpoint_INSTANCE1000_node",
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
              "string": " positioninterpolator DEF DECLpoint_INSTANCE1000_PI1",
              "nodeType": "positioninterpolator",
              "children": [],
              "DEF": "DECLpoint_INSTANCE1000_PI1",
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
              "string": " script DEF DECLpoint_INSTANCE1000_MB1",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\r\n\r\necmascript:\r\n               function set_location(value) {\r\n                    old = translation;\r\n                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\r\n                    keyValue = new MFVec3f([old, translation]);\r\n               }\r\n\r\n\r\n</Script>"
              ],
              "DEF": "DECLpoint_INSTANCE1000_MB1"
            },
            {
              "string": " timesensor DEF DECLpoint_INSTANCE1000_CL1",
              "nodeType": "timesensor",
              "children": [],
              "DEF": "DECLpoint_INSTANCE1000_CL1",
              "cycleInterval": 3,
              "loop": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE1000_CL1",
              "fromField": "cycleTime",
              "toNode": "DECLpoint_INSTANCE1000_MB1",
              "toField": "set_location"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE1000_CL1",
              "fromField": "fraction_changed",
              "toNode": "DECLpoint_INSTANCE1000_PI1",
              "toField": "set_fraction"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE1000_MB1",
              "fromField": "keyValue",
              "toNode": "DECLpoint_INSTANCE1000_PI1",
              "toField": "keyValue"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE1000_PI1",
              "fromField": "value_changed",
              "toNode": "DECLpoint_INSTANCE1000_node",
              "toField": "set_translation"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromNode": "DECLpoint_INSTANCE1000_MB1",
              "fromField": "translation_changed",
              "toNode": "DECLpoint_INSTANCE1000_node",
              "toField": "set_translation"
            }
          ],
          "DEF": "DECLpoint_INSTANCE1000_node"
        }
      ],
      "DEF": "G2"
    },
    {
      "string": " transform DEF transC1",
      "nodeType": "transform",
      "children": [
        {
          "string": " transform DEF rotscaleC1",
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
          "DEF": "rotscaleC1"
        }
      ],
      "DEF": "transC1"
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
              "string": " transform USE G1",
              "nodeType": "transform",
              "children": [],
              "USE": "G1"
            },
            {
              "string": " transform USE G2",
              "nodeType": "transform",
              "children": [],
              "USE": "G2"
            },
            {
              "string": " transform USE transC1",
              "nodeType": "transform",
              "children": [],
              "USE": "transC1"
            },
            {
              "string": " transform USE rotscaleC1",
              "nodeType": "transform",
              "children": [],
              "USE": "rotscaleC1"
            }
          ]
        },
        "<script>\r\n\r\n            ecmascript:\r\n        function recompute(startpoint,endpoint){\r\n\t    if (typeof endpoint === 'undefined') {\r\n\t\treturn;\r\n\t    }\r\n            var dif = endpoint.subtract(startpoint);\r\n            var dist = dif.length()*0.5;\r\n            var dif2 = dif.multiply(0.5);\r\n            var norm = dif.normalize();\r\n            var transl = startpoint.add(dif2);\r\n\t    if (typeof Quaternion !== 'undefined') {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\r\n\t\t    };\r\n\t    } else {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\r\n\t\t    };\r\n\t    }\r\n\t}\r\n\tfunction recompute_and_route(startpoint, endpoint) {\r\n\t      var trafo = recompute(startpoint, endpoint);\r\n\t      transC1.translation = trafo.translation;\r\n\t      rotscaleC1.rotation = trafo.rotation;\r\n\t      rotscaleC1.scale = trafo.scale;\r\n\t}\r\n        function initialize(){\r\n            recompute_and_route(startnode.translation,endnode.translation);\r\n        }\r\n        function set_startpoint(val,t){\r\n            recompute_and_route(val,endnode.translation);\r\n        }\r\n        function set_endpoint(val,t){\r\n            recompute_and_route(startnode.translation,val);\r\n        }\r\n\r\n\r\n</Script>"
      ],
      "DEF": "DECLx3dconnector_connector1_S1"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G1",
      "fromField": "translation_changed",
      "toNode": "DECLx3dconnector_connector1_S1",
      "toField": "set_startpoint"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "G2",
      "fromField": "translation_changed",
      "toNode": "DECLx3dconnector_connector1_S1",
      "toField": "set_endpoint"
    }
  ]
}