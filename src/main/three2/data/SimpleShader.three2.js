{
  "string": "Scene",
  "children": [
    {
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protointerface",
          "nodeType": "protointerface",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform DEF TR",
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
                            "r": 0.5,
                            "g": 0.5,
                            "b": 0.9
                          }
                        },
                        {
                          "string": "appearance composedshader",
                          "nodeType": "composedshader",
                          "children": [
                            {
                              "string": "appearance field",
                              "nodeType": "field",
                              "children": []
                            },
                            {
                              "string": "appearance is",
                              "nodeType": "is",
                              "children": [
                                {
                                  "string": "appearance connect",
                                  "nodeType": "connect",
                                  "children": []
                                }
                              ]
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "type": "VERTEX"
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "type": "FRAGMENT"
                            }
                          ],
                          "language": "GLSL"
                        },
                        {
                          "string": "appearance composedshader DEF Cobweb",
                          "nodeType": "composedshader",
                          "children": [
                            {
                              "string": "appearance field",
                              "nodeType": "field",
                              "children": []
                            },
                            {
                              "string": "appearance shaderpart",
                              "nodeType": "shaderpart",
                              "children": [],
                              "type": "VERTEX"
                            },
                            {
                              "string": "appearance shaderpart DEF _1",
                              "nodeType": "shaderpart",
                              "children": [],
                              "DEF": "_1",
                              "type": "FRAGMENT"
                            }
                          ],
                          "DEF": "Cobweb",
                          "language": "GLSL"
                        }
                      ]
                    },
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": [],
                      "radius": 1.75
                    }
                  ]
                }
              ],
              "DEF": "TR"
            }
          ]
        }
      ],
      "name": "myPrototype"
    },
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [
        {
          "string": "metadata metadataset DEF Titania",
          "nodeType": "metadataset",
          "children": [
            {
              "string": "value metadataset DEF Selection",
              "nodeType": "metadataset",
              "children": [
                {
                  "string": "value metadataset DEF nodes",
                  "nodeType": "metadataset",
                  "children": [
                    "/*NULL*/"
                  ],
                  "name": "nodes",
                  "DEF": "nodes",
                  "reference": "http://titania.create3000.de",
                  "containerField": "value"
                }
              ],
              "name": "Selection",
              "DEF": "Selection",
              "reference": "http://titania.create3000.de",
              "containerField": "value"
            },
            {
              "string": "value metadataset DEF NavigationInfo",
              "nodeType": "metadataset",
              "children": [
                {
                  "string": "value metadatastring DEF type",
                  "nodeType": "metadatastring",
                  "children": [],
                  "name": "type",
                  "DEF": "type",
                  "reference": "http://titania.create3000.de",
                  "value": [
                    "EXAMINE"
                  ],
                  "containerField": "value"
                }
              ],
              "name": "NavigationInfo",
              "DEF": "NavigationInfo",
              "reference": "http://titania.create3000.de",
              "containerField": "value"
            },
            {
              "string": "value metadataset DEF Viewpoint",
              "nodeType": "metadataset",
              "children": [
                {
                  "string": "value metadatadouble DEF position",
                  "nodeType": "metadatadouble",
                  "children": [],
                  "name": "position",
                  "DEF": "position",
                  "reference": "http://titania.create3000.de",
                  "value": [
                    6.24067728185014,
                    0.00250837343276661,
                    2.92117542307615
                  ],
                  "containerField": "value"
                },
                {
                  "string": "value metadatadouble DEF orientation",
                  "nodeType": "metadatadouble",
                  "children": [],
                  "name": "orientation",
                  "DEF": "orientation",
                  "reference": "http://titania.create3000.de",
                  "value": [
                    -0.110173424710488,
                    0.990158061907379,
                    -0.0863065984000336,
                    1.21146676119191
                  ],
                  "containerField": "value"
                },
                {
                  "string": "value metadatadouble DEF centerOfRotation",
                  "nodeType": "metadatadouble",
                  "children": [],
                  "name": "centerOfRotation",
                  "DEF": "centerOfRotation",
                  "reference": "http://titania.create3000.de",
                  "value": [
                    -0.808320198626341,
                    -0.358072370409949,
                    0.22817191560906
                  ],
                  "containerField": "value"
                }
              ],
              "name": "Viewpoint",
              "DEF": "Viewpoint",
              "reference": "http://titania.create3000.de",
              "containerField": "value"
            }
          ],
          "name": "Titania",
          "DEF": "Titania",
          "reference": "http://titania.create3000.de"
        }
      ],
      "title": "SimpleShader"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [],
      "name": "myPrototype"
    }
  ]
}