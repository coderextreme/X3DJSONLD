{
  "string": "Scene",
  "children": [
    {
      "string": " viewpoint DEF EntryView",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "EntryView",
      "description": "Hello MFString syntax"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 0.6,
          "g": 1,
          "b": 0.8
        }
      ]
    },
    {
      "string": " shape",
      "nodeType": "shape",
      "children": [
        {
          "string": [
            "One, Two, Three",
            "",
            "He said, \"Immel did it!\""
          ],
          "nodeType": "text",
          "children": [
            "/*alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'*/",
            "/*alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})*/",
            {
              "string": "fontStyle fontstyle",
              "nodeType": "fontstyle",
              "children": [],
              "justify": [
                "MIDDLE",
                "MIDDLE"
              ],
              "style": "BOLD"
            }
          ]
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
                "r": 0.6,
                "g": 0.4,
                "b": 0.2
              }
            }
          ]
        }
      ]
    }
  ]
}