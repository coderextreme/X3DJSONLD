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
      "position": {
        "x": 0,
        "y": 0,
        "z": 4
      },
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": 0
      },
      "description": "Bubble in action"
    },
    {
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform DEF transform",
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
                      "radius": 0.25
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
                          },
                          "transparency": 0.2
                        }
                      ]
                    }
                  ]
                },
                {
                  "string": " script DEF bounce",
                  "nodeType": "script",
                  "children": [
                    {
                      "string": " field",
                      "nodeType": "field",
                      "children": []
                    },
                    "<script>\r\necmascript:\r\nfunction initialize() {\r\n    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r\n\r\n    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r\n}\r\n\r\nfunction set_fraction(value) {\r\n\ttranslation = new SFVec3f(\r\n\t\ttranslation.x + velocity.x,\r\n\t\ttranslation.y + velocity.y,\r\n\t\ttranslation.z + velocity.z);\r\n\tscale = new SFVec3f(\r\n\t\tscale.x + scalvel.x,\r\n\t\tscale.y + scalvel.y,\r\n\t\tscale.z + scalvel.z);\r\n        // if you get to far away or too big, explode\r\n        if ( Math.abs(translation.x) > 256) {\r\n\t\ttranslation.x = 0;\r\n\t\tinitialize();\r\n\t}\r\n        if ( Math.abs(translation.y) > 256) {\r\n\t\ttranslation.y = 0;\r\n\t\tinitialize();\r\n\t}\r\n        if ( Math.abs(translation.z) > 256) {\r\n\t\ttranslation.z = 0;\r\n\t\tinitialize();\r\n\t}\r\n\tif (Math.abs(scale.x) > 20) {\r\n\t\tscale.x = scale.x/2;\r\n\t\ttranslation.x = 0;\r\n\t\tinitialize();\r\n\t}\r\n\tif (Math.abs(scale.y) > 20) {\r\n\t\tscale.y = scale.y/2;\r\n\t\ttranslation.y = 0;\r\n\t\tinitialize();\r\n\t}\r\n\tif (Math.abs(scale.z) > 20) {\r\n\t\tscale.z = scale.z/2;\r\n\t\ttranslation.z = 0;\r\n\t\tinitialize();\r\n\t}\r\n}\r\n</Script>"
                  ],
                  "DEF": "bounce"
                },
                {
                  "string": " timesensor DEF bubbleClock",
                  "nodeType": "timesensor",
                  "children": [],
                  "DEF": "bubbleClock",
                  "cycleInterval": 10,
                  "loop": true
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "bounce",
                  "fromField": "translation_changed",
                  "toNode": "transform",
                  "toField": "set_translation"
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "bounce",
                  "fromField": "scale_changed",
                  "toNode": "transform",
                  "toField": "set_scale"
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "bubbleClock",
                  "fromField": "fraction_changed",
                  "toNode": "bounce",
                  "toField": "set_fraction"
                }
              ],
              "DEF": "transform"
            }
          ]
        }
      ],
      "name": "Bubble"
    },
    {
      "string": " protoinstance DEF bubbleA",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble",
      "DEF": "bubbleA"
    }
  ]
}