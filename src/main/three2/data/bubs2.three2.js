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
      "description": "Bubbles in action"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "backUrl": [
        "../resources/images/BK.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"
      ],
      "bottomUrl": [
        "../resources/images/BT.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"
      ],
      "frontUrl": [
        "../resources/images/FR.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"
      ],
      "leftUrl": [
        "../resources/images/LF.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"
      ],
      "rightUrl": [
        "../resources/images/RT.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"
      ],
      "topUrl": [
        "../resources/images/TP.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"
      ]
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
              "string": " transform DEF body_trans",
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
                    "<script>\r\necmascript:\r\nfunction initialize() {\r\n    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r\n\r\n    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r\n}\r\n\r\nfunction set_fraction(value) {\r\n    if (typeof translation === 'undefined') {\r\n\t\ttranslation = new SFVec3f(0, 0, 0);\r\n    }\r\n    if (typeof velocity === 'undefined') {\r\n\t\tvelocity = new SFVec3f(0, 0, 0);\r\n    }\r\n    if (typeof scalvel === 'undefined') {\r\n\t\tscalvel = new SFVec3f(0, 0, 0);\r\n    }\r\n    if (typeof scale === 'undefined') {\r\n\t\tscale = new SFVec3f(1, 1, 1);\r\n    }\r\n    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r\n    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r\n    // if you get to far away or too big, explode\r\n    if ( Math.abs(translation.x) > 256) {\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.y) > 256) {\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.z) > 256) {\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.x) > 20) {\r\n\tscale.x = scale.x/20;\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.y) > 20) {\r\n\tscale.y = scale.y/20;\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.z) > 20) {\r\n\tscale.z = scale.z/20;\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n}</Script>"
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
                  "toNode": "body_trans",
                  "toField": "set_translation"
                },
                {
                  "string": " route",
                  "nodeType": "route",
                  "children": [],
                  "fromNode": "bounce",
                  "fromField": "scale_changed",
                  "toNode": "body_trans",
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
              "DEF": "body_trans"
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
    },
    {
      "string": " protoinstance DEF bubbleB",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble",
      "DEF": "bubbleB"
    },
    {
      "string": " protoinstance DEF bubbleC",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble",
      "DEF": "bubbleC"
    },
    {
      "string": " protoinstance DEF bubbleD",
      "nodeType": "protoinstance",
      "children": [],
      "name": "Bubble",
      "DEF": "bubbleD"
    }
  ]
}