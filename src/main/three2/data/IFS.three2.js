{
  "string": "Scene",
  "children": [
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        "/*DEFS for markers of skeleton joints, segments, and sites*/",
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            {
              "string": " shape DEF HAnimSiteShape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry indexedfaceset DEF DiamondIFS",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "color colorrgba DEF HAnimSiteColorRGBA",
                      "nodeType": "colorrgba",
                      "children": [],
                      "DEF": "HAnimSiteColorRGBA",
                      "color": [
                        {
                          "r": 1,
                          "g": 1,
                          "b": 0,
                          "a": 1
                        },
                        {
                          "r": 1,
                          "g": 1,
                          "b": 0,
                          "a": 0.1
                        }
                      ]
                    },
                    {
                      "string": "coord coordinate",
                      "nodeType": "coordinate",
                      "children": [],
                      "point": [
                        {
                          "x": 0,
                          "y": 0.01,
                          "z": 0
                        },
                        {
                          "x": -0.01,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 0.01
                        },
                        {
                          "x": 0.01,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -0.01
                        },
                        {
                          "x": 0,
                          "y": -0.01,
                          "z": 0
                        }
                      ],
                      "points": [
                        {
                          "x": 0,
                          "y": 0.01,
                          "z": 0
                        },
                        {
                          "x": -0.01,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": 0.01
                        },
                        {
                          "x": 0.01,
                          "y": 0,
                          "z": 0
                        },
                        {
                          "x": 0,
                          "y": 0,
                          "z": -0.01
                        },
                        {
                          "x": 0,
                          "y": -0.01,
                          "z": 0
                        }
                      ]
                    }
                  ],
                  "DEF": "DiamondIFS",
                  "creaseAngle": 0.5,
                  "solid": false,
                  "coordIndex": [
                    [
                      0,
                      1,
                      2
                    ],
                    [
                      0,
                      2,
                      3
                    ],
                    [
                      0,
                      3,
                      4
                    ],
                    [
                      0,
                      4,
                      1
                    ],
                    [
                      5,
                      2,
                      1
                    ],
                    [
                      5,
                      3,
                      2
                    ],
                    [
                      5,
                      4,
                      3
                    ],
                    [
                      5,
                      1,
                      4
                    ]
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
                        "r": 1,
                        "g": 1,
                        "b": 0
                      },
                      "transparency": 0.3
                    }
                  ]
                }
              ],
              "DEF": "HAnimSiteShape"
            }
          ],
          "translation": {
            "x": 0,
            "y": 2.1,
            "z": 0
          }
        }
      ]
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "speed": 1.5
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "default"
    }
  ]
}