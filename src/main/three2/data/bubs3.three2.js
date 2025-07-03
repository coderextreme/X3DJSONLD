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
      "string": " transform DEF DECLBubble_bubbleA",
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
          "string": " script DEF DECLBubble_bubbleA_bounce",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\n\r\necmascript:\r\nfunction initialize() {\r\n    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r\n\r\n    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r\n}\r\n\r\nfunction set_fraction(value) {\r\n    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r\n    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r\n    // if you get to far away or too big, explode\r\n    if ( Math.abs(translation.x) > 256) {\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.y) > 256) {\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.z) > 256) {\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.x) > 20) {\r\n\tscale.x = scale.x/20;\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.y) > 20) {\r\n\tscale.y = scale.y/20;\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.z) > 20) {\r\n\tscale.z = scale.z/20;\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n}\r\n\r\n\t\t\t\r\n</Script>"
          ],
          "DEF": "DECLBubble_bubbleA_bounce"
        },
        {
          "string": " timesensor DEF DECLBubble_bubbleA_bubbleClock",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "DECLBubble_bubbleA_bubbleClock",
          "cycleInterval": 10,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleA_bounce",
          "fromField": "translation_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_translation"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleA_bounce",
          "fromField": "scale_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_scale"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleA_bubbleClock",
          "fromField": "fraction_changed",
          "toNode": "DECLBubble_bubbleA_bounce",
          "toField": "set_fraction"
        }
      ],
      "DEF": "DECLBubble_bubbleA"
    },
    {
      "string": " transform DEF DECLBubble_bubbleB",
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
          "string": " script DEF DECLBubble_bubbleB_bounce",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\n\r\necmascript:\r\nfunction initialize() {\r\n    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r\n\r\n    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r\n}\r\n\r\nfunction set_fraction(value) {\r\n    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r\n    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r\n    // if you get to far away or too big, explode\r\n    if ( Math.abs(translation.x) > 256) {\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.y) > 256) {\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.z) > 256) {\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.x) > 20) {\r\n\tscale.x = scale.x/20;\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.y) > 20) {\r\n\tscale.y = scale.y/20;\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.z) > 20) {\r\n\tscale.z = scale.z/20;\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n}\r\n\r\n\t\t\t\r\n</Script>"
          ],
          "DEF": "DECLBubble_bubbleB_bounce"
        },
        {
          "string": " timesensor DEF DECLBubble_bubbleB_bubbleClock",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "DECLBubble_bubbleB_bubbleClock",
          "cycleInterval": 10,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleB_bounce",
          "fromField": "translation_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_translation"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleB_bounce",
          "fromField": "scale_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_scale"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleB_bubbleClock",
          "fromField": "fraction_changed",
          "toNode": "DECLBubble_bubbleB_bounce",
          "toField": "set_fraction"
        }
      ],
      "DEF": "DECLBubble_bubbleB"
    },
    {
      "string": " transform DEF DECLBubble_bubbleC",
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
          "string": " script DEF DECLBubble_bubbleC_bounce",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\n\r\necmascript:\r\nfunction initialize() {\r\n    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r\n\r\n    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r\n}\r\n\r\nfunction set_fraction(value) {\r\n    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r\n    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r\n    // if you get to far away or too big, explode\r\n    if ( Math.abs(translation.x) > 256) {\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.y) > 256) {\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.z) > 256) {\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.x) > 20) {\r\n\tscale.x = scale.x/20;\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.y) > 20) {\r\n\tscale.y = scale.y/20;\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.z) > 20) {\r\n\tscale.z = scale.z/20;\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n}\r\n\r\n\t\t\t\r\n</Script>"
          ],
          "DEF": "DECLBubble_bubbleC_bounce"
        },
        {
          "string": " timesensor DEF DECLBubble_bubbleC_bubbleClock",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "DECLBubble_bubbleC_bubbleClock",
          "cycleInterval": 10,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleC_bounce",
          "fromField": "translation_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_translation"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleC_bounce",
          "fromField": "scale_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_scale"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleC_bubbleClock",
          "fromField": "fraction_changed",
          "toNode": "DECLBubble_bubbleC_bounce",
          "toField": "set_fraction"
        }
      ],
      "DEF": "DECLBubble_bubbleC"
    },
    {
      "string": " transform DEF DECLBubble_bubbleD",
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
          "string": " script DEF DECLBubble_bubbleD_bounce",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\n\r\necmascript:\r\nfunction initialize() {\r\n    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\r\n\r\n    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\r\n}\r\n\r\nfunction set_fraction(value) {\r\n    translation = new SFVec3f(\ttranslation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\r\n    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\r\n    // if you get to far away or too big, explode\r\n    if ( Math.abs(translation.x) > 256) {\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.y) > 256) {\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if ( Math.abs(translation.z) > 256) {\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.x) > 20) {\r\n\tscale.x = scale.x/20;\r\n\ttranslation.x = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.y) > 20) {\r\n\tscale.y = scale.y/20;\r\n\ttranslation.y = 0;\r\n\tinitialize();\r\n    }\r\n    if (Math.abs(scale.z) > 20) {\r\n\tscale.z = scale.z/20;\r\n\ttranslation.z = 0;\r\n\tinitialize();\r\n    }\r\n}\r\n\r\n\t\t\t\r\n</Script>"
          ],
          "DEF": "DECLBubble_bubbleD_bounce"
        },
        {
          "string": " timesensor DEF DECLBubble_bubbleD_bubbleClock",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "DECLBubble_bubbleD_bubbleClock",
          "cycleInterval": 10,
          "loop": true
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleD_bounce",
          "fromField": "translation_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_translation"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleD_bounce",
          "fromField": "scale_changed",
          "toNode": "DECLBubble_transform",
          "toField": "set_scale"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "DECLBubble_bubbleD_bubbleClock",
          "fromField": "fraction_changed",
          "toNode": "DECLBubble_bubbleD_bounce",
          "toField": "set_fraction"
        }
      ],
      "DEF": "DECLBubble_bubbleD"
    }
  ]
}