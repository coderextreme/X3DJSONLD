{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
    {
      "string": " transform DEF transform",
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
                    "g": 0.7,
                    "b": 0.7
                  },
                  "specularColor": {
                    "r": 0.5,
                    "g": 0.5,
                    "b": 0.5
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
        }
      ],
      "DEF": "transform"
    },
    {
      "string": " script DEF Bounce2",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "<script>\r\necmascript:\r\n\t\t\tfunction newBubble() {\r\n\t\t\t    translation = new SFVec3f(0, 0, 0);\r\n\t\t\t    velocity = new SFVec3f(\r\n\t\t\t    \tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5,\r\n\t\t\t\tMath.random() - 0.5);\r\n\t\t\t}\r\n\t\t\tfunction set_fraction() {\r\n\t\t\t    translation = new SFVec3f(\r\n\t\t\t    \ttranslation.x + velocity.x,\r\n\t\t\t\ttranslation.y + velocity.y,\r\n\t\t\t\ttranslation.z + velocity.z);\r\n\t\t\t\tif (Math.abs(translation.x) > 10) {\r\n\t\t\t\t\tnewBubble();\r\n\t\t\t\t} else if (Math.abs(translation.y) > 10) {\r\n\t\t\t\t\tnewBubble();\r\n\t\t\t\t} else if (Math.abs(translation.z) > 10) {\r\n\t\t\t\t\tnewBubble();\r\n\t\t\t\t} else {\r\n\t\t\t\t\tvelocity = new SFVec3f(\r\n\t\t\t\t\t\tvelocity.x + Math.random() * 0.2 - 0.1,\r\n\t\t\t\t\t\tvelocity.y + Math.random() * 0.2 - 0.1,\r\n\t\t\t\t\t\tvelocity.z + Math.random() * 0.2 - 0.1\r\n\t\t\t\t\t);\r\n\t\t\t\t}\r\n\t\t\t}\r\n\r\n\t\t\tfunction initialize() {\r\n\t\t\t     newBubble();\r\n\t\t\t}\r\n\r\n\r\n</Script>"
      ],
      "DEF": "Bounce2"
    },
    {
      "string": " timesensor DEF TourTime",
      "nodeType": "timesensor",
      "children": [],
      "DEF": "TourTime",
      "cycleInterval": 0.15,
      "loop": true
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "TourTime",
      "fromField": "cycleTime",
      "toNode": "Bounce2",
      "toField": "set_fraction"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Bounce2",
      "fromField": "translation_changed",
      "toNode": "transform",
      "toField": "set_translation"
    }
  ]
}