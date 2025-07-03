{
  "string": "Scene",
  "children": [
    {
      "string": " transform",
      "nodeType": "transform",
      "children": [
        "/*DEF for markerfor XYZ axes*/",
        {
          "string": " shape DEF AxisLinesShape",
          "nodeType": "shape",
          "children": [
            "/*RGB lines showing XYZ axes*/",
            {
              "string": "geometry indexedlineset",
              "nodeType": "indexedlineset",
              "children": [
                {
                  "string": "coord coordinate",
                  "nodeType": "coordinate",
                  "children": [],
                  "point": [
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0.1,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0.1
                    }
                  ],
                  "points": [
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0.1,
                      "y": 0,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0.1,
                      "z": 0
                    },
                    {
                      "x": 0,
                      "y": 0,
                      "z": 0.1
                    }
                  ]
                },
                {
                  "string": "color",
                  "nodeType": "color",
                  "children": [],
                  "color": [
                    {
                      "r": 1,
                      "g": 0,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0.6,
                      "b": 0
                    },
                    {
                      "r": 0,
                      "g": 0,
                      "b": 1
                    }
                  ]
                }
              ],
              "colorIndex": [],
              "colorPerVertex": false,
              "coordIndex": [
                [
                  0,
                  1
                ],
                [
                  0,
                  2
                ],
                [
                  0,
                  3
                ]
              ]
            }
          ],
          "DEF": "AxisLinesShape"
        }
      ]
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        "/*DEFS for markers of skeleton joints, segments, and sites*/",
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            "/*<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/",
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimJointShape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": [],
                      "radius": 0.02
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material DEF HAnimJointMaterial",
                          "nodeType": "material",
                          "children": [],
                          "DEF": "HAnimJointMaterial",
                          "diffuseColor": {
                            "r": 0,
                            "g": 0,
                            "b": 0.8
                          },
                          "transparency": 0.3
                        }
                      ]
                    }
                  ],
                  "DEF": "HAnimJointShape"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.1,
                "z": 0
              }
            },
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF HAnimSegmentLine",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry lineset",
                      "nodeType": "lineset",
                      "children": [
                        {
                          "string": "color colorrgba DEF HAnimSegmentLineColorRGBA",
                          "nodeType": "colorrgba",
                          "children": [],
                          "DEF": "HAnimSegmentLineColorRGBA",
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
                              "x": -0.05,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.05,
                              "y": 0,
                              "z": 0
                            }
                          ],
                          "points": [
                            {
                              "x": -0.05,
                              "y": 0,
                              "z": 0
                            },
                            {
                              "x": 0.05,
                              "y": 0,
                              "z": 0
                            }
                          ]
                        }
                      ],
                      "vertexCount": [
                        2
                      ]
                    }
                  ],
                  "DEF": "HAnimSegmentLine"
                }
              ],
              "translation": {
                "x": 0,
                "y": 2.05,
                "z": 0
              }
            },
            "/*<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/"
          ]
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