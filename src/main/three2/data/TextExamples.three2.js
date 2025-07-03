{
  "string": "Scene",
  "children": [
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": [
                "Compare special character escaping"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle DEF testFontStyle",
                  "nodeType": "fontstyle",
                  "children": [],
                  "DEF": "testFontStyle",
                  "justify": [
                    "MIDDLE",
                    "MIDDLE"
                  ],
                  "size": 0.8
                }
              ]
            },
            {
              "string": "appearance DEF LightBlueAppearance",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "diffuseColor": {
                    "r": 0.1,
                    "g": 0.7,
                    "b": 0.7
                  }
                }
              ],
              "DEF": "LightBlueAppearance"
            }
          ]
        }
      ],
      "translation": {
        "x": 0,
        "y": 2,
        "z": 0
      }
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
              "string": [
                "I don't think so",
                "",
                "he said \"Hi\""
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle USE testFontStyle",
                  "nodeType": "fontstyle",
                  "children": [],
                  "USE": "testFontStyle"
                }
              ]
            },
            {
              "string": "appearance USE LightBlueAppearance",
              "nodeType": "appearance",
              "children": [],
              "USE": "LightBlueAppearance"
            }
          ]
        }
      ],
      "translation": {
        "x": -3,
        "y": 0,
        "z": 0
      }
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
              "string": [
                "I don't think so",
                "",
                "he said \"Hi\""
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle USE testFontStyle",
                  "nodeType": "fontstyle",
                  "children": [],
                  "USE": "testFontStyle"
                }
              ]
            },
            {
              "string": "appearance USE LightBlueAppearance",
              "nodeType": "appearance",
              "children": [],
              "USE": "LightBlueAppearance"
            }
          ]
        }
      ],
      "translation": {
        "x": 3,
        "y": 0,
        "z": 0
      }
    }
  ]
}