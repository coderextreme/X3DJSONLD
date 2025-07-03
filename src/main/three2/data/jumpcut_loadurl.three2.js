{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "jumpcut_loadurl.x3d"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "groundAngle": [
        1.57
      ],
      "groundColor": [
        {
          "r": 0,
          "g": 0.5,
          "b": 0
        },
        {
          "r": 0,
          "g": 0.5,
          "b": 0
        }
      ],
      "skyColor": [
        {
          "r": 0,
          "g": 0,
          "b": 1
        }
      ]
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        "EXAMINE",
        "WALK",
        "FLY",
        "ANY"
      ]
    },
    {
      "string": " viewpoint DEF Front_View",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Front_View",
      "description": "Front View"
    },
    {
      "string": " viewpoint DEF Top_View",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "Top_View",
      "description": "Top View",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -1.57
      },
      "position": {
        "x": 0,
        "y": 10,
        "z": 0
      }
    },
    {
      "string": " touchsensor DEF STARTER",
      "nodeType": "touchsensor",
      "children": [],
      "DEF": "STARTER",
      "description": "touch to activate"
    },
    {
      "string": " transform DEF ROOT",
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
                  "children": []
                }
              ]
            },
            {
              "string": "geometry box",
              "nodeType": "box",
              "children": []
            }
          ]
        }
      ],
      "DEF": "ROOT"
    },
    {
      "string": " script DEF MYSCRIPT",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        }
      ],
      "DEF": "MYSCRIPT",
      "url": [
        "jumpcut_loadurl.js",
        "https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"
      ]
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromField": "isActive",
      "fromNode": "STARTER",
      "toField": "trigger_event",
      "toNode": "MYSCRIPT"
    }
  ]
}