{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "ViewFrustumExample.x3d"
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "ViewFrustum from above, looking down",
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": -1.57
      },
      "position": {
        "x": 0,
        "y": 40,
        "z": 0
      }
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "ViewFrustum from point of view"
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "ViewFrustum behind point of view",
      "position": {
        "x": 0,
        "y": 0,
        "z": 15
      }
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "ViewFrustum oblique side view",
      "orientation": {
        "x": 0.8005,
        "y": 0.5926,
        "z": 0.0898,
        "w": -0.3743
      },
      "position": {
        "x": -5,
        "y": 5,
        "z": 20
      }
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "type": [
        "EXAMINE",
        "FLY",
        "ANY"
      ]
    },
    {
      "string": " externprotodeclare",
      "nodeType": "externprotodeclare",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        }
      ],
      "name": "ViewFrustum",
      "appinfo": "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes",
      "url": [
        "ViewFrustumPrototype.x3d#ViewFrustum"
      ]
    },
    "/*Example use*/",
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            "/*prefer empty description to prevent entry in player's ViewpointList*/",
            {
              "string": " viewpoint",
              "nodeType": "viewpoint",
              "children": [],
              "description": "ViewFrustum ViewpointNode"
            },
            {
              "string": " navigationinfo",
              "nodeType": "navigationinfo",
              "children": [],
              "visibilityLimit": 15
            }
          ]
        }
      ],
      "name": "ViewFrustum"
    },
    "/*Visualization assists*/",
    {
      "string": " inline DEF GridXZ",
      "nodeType": "inline",
      "children": [],
      "DEF": "GridXZ",
      "url": [
        "GridXZ_20x20Fixed.x3d"
      ]
    },
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        {
          "string": " inline DEF CoordinateAxes",
          "nodeType": "inline",
          "children": [],
          "DEF": "CoordinateAxes",
          "url": [
            "CoordinateAxes.x3d"
          ]
        }
      ],
      "scale": {
        "x": 5,
        "y": 5,
        "z": 5
      }
    }
  ]
}