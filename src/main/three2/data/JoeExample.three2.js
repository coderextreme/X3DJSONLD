{
  "string": "Scene",
  "children": [
    {
      "string": " script DEF OpenVault",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "<script>\r\n\r\n\r\n\r\n      ecmascript:\r\n\r\n      function combinationEntered (value) {\r\n\r\n        unlocked = value;\r\n\r\n      }\r\n\r\n      function openVault(value) {\r\n\r\n      if (unlocked) vaultUnlocked = value;\r\n\r\n      }\r\n\r\n\r\n\r\n</Script>"
      ],
      "DEF": "OpenVault"
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
              "children": [],
              "diffuseColor": {
                "r": 1,
                "g": 0,
                "b": 0
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
    },
    {
      "string": " sound",
      "nodeType": "sound",
      "children": [
        {
          "string": "source audioclip DEF Click",
          "nodeType": "audioclip",
          "children": [],
          "DEF": "Click",
          "stopTime": 1,
          "description": "clicking sound",
          "url": [
            "../resources/chandubabamusic1.wav"
          ]
        }
      ],
      "maxBack": 1000,
      "maxFront": 1000,
      "minBack": 1000,
      "minFront": 1000
    },
    {
      "string": " touchsensor DEF TS",
      "nodeType": "touchsensor",
      "children": [],
      "DEF": "TS"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "TS",
      "fromField": "isOver",
      "toNode": "OpenVault",
      "toField": "combinationEntered"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "TS",
      "fromField": "touchTime",
      "toNode": "OpenVault",
      "toField": "openVault"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "OpenVault",
      "fromField": "vaultUnlocked",
      "toNode": "Click",
      "toField": "startTime"
    }
  ]
}