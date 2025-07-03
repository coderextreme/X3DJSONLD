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
                    "r": 0.7,
                    "g": 0.2,
                    "b": 0.2
                  }
                }
              ]
            },
            {
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 0.1
            }
          ]
        },
        {
          "string": " planesensor DEF PS1",
          "nodeType": "planesensor",
          "children": [],
          "description": "Grab to move",
          "DEF": "PS1"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "PS1",
          "fromField": "translation_changed",
          "toNode": "G1",
          "toField": "set_translation"
        }
      ],
      "DEF": "G1"
    },
    {
      "string": " transform DEF G2",
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
                    "b": 0.2
                  }
                }
              ]
            },
            {
              "string": "geometry sphere",
              "nodeType": "sphere",
              "children": [],
              "radius": 0.1
            }
          ]
        },
        {
          "string": " planesensor DEF PS2",
          "nodeType": "planesensor",
          "children": [],
          "description": "Grab to move",
          "offset": {
            "x": 1,
            "y": -1,
            "z": 0.01
          },
          "DEF": "PS2"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "PS2",
          "fromField": "translation_changed",
          "toNode": "G2",
          "toField": "set_translation"
        }
      ],
      "DEF": "G2",
      "translation": {
        "x": 1,
        "y": -1,
        "z": 0.01
      }
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
                "<script>\r\n            ecmascript:\r\n        function recompute(startpoint,endpoint){\r\n\t    if (typeof endpoint === 'undefined') {\r\n\t\treturn;\r\n\t    }\r\n            var dif = endpoint.subtract(startpoint);\r\n            var dist = dif.length()*0.5;\r\n            var dif2 = dif.multiply(0.5);\r\n            var norm = dif.normalize();\r\n            var transl = startpoint.add(dif2);\r\n\t    if (typeof Quaternion !== 'undefined') {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\r\n\t\t    };\r\n\t    } else {\r\n\t\t    return {\r\n\t\t\t    scale : new SFVec3f(1.0,dist,1.0),\r\n\t\t\t    translation : transl,\r\n\t\t\t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\r\n\t\t    };\r\n\t    }\r\n\t}\r\n\tfunction recompute_and_route(startpoint, endpoint) {\r\n\t      var trafo = recompute(startpoint, endpoint);\r\n\t      if (trafo) {\r\n\t\t      transnode.translation = trafo.translation;\r\n\t\t      rotscalenode.rotation = trafo.rotation;\r\n\t\t      rotscalenode.scale = trafo.scale;\r\n\t      }\r\n\t}\r\n        function initialize(){\r\n            recompute_and_route(startnode.translation,endnode.translation);\r\n        }\r\n        function set_startpoint(val,t){\r\n            recompute_and_route(val,endnode.translation);\r\n        }\r\n        function set_endpoint(val,t){\r\n            recompute_and_route(startnode.translation,val);\r\n        }\r\n\r\n</Script>"
              ],
              "DEF": "S1"
            }
          ]
        }
      ],
      "name": "x3dconnector"
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
        }
      ],
      "name": "x3dconnector",
      "DEF": "connector1"
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
    }
  ]
}