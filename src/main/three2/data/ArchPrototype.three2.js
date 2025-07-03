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
            "/*COLOR OF ARCH*/",
            "/*INPUT PARAMETERS*/",
            "/*General parameters: measures in meters*/",
            "/*Parameters to create to create shapes related to arch: put true to apply*/",
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
            "/*First node determines node type of this prototype*/",
            "/*IndexedFaceset creates arch*/",
            {
              "string": " transform DEF ArchTransform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " shape DEF Arch",
                  "nodeType": "shape",
                  "children": [
                    "/*note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly*/",
                    {
                      "string": "geometry indexedfaceset DEF ArchIndex",
                      "nodeType": "indexedfaceset",
                      "children": [
                        {
                          "string": "coord coordinate DEF ArchChord",
                          "nodeType": "coordinate",
                          "children": [],
                          "DEF": "ArchChord"
                        }
                      ],
                      "DEF": "ArchIndex",
                      "convex": false,
                      "solid": false
                    },
                    {
                      "string": "appearance",
                      "nodeType": "appearance",
                      "children": [
                        {
                          "string": "appearance material DEF MaterialNode",
                          "nodeType": "material",
                          "children": [
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
                            }
                          ],
                          "DEF": "MaterialNode"
                        }
                      ]
                    }
                  ],
                  "DEF": "Arch"
                }
              ],
              "DEF": "ArchTransform"
            },
            "/*Subsequent nodes do not render, but still must be a valid X3D subgraph*/",
            "/*This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs*/",
            {
              "string": " script DEF ArchPrototypeScript",
              "nodeType": "script",
              "children": [
                "/*INPUT PARAMETERS*/",
                "/*General parameters*/",
                "/*Parameters to create to create shapes related to arch: put true to apply*/",
                "/*OUTPUT PARAMETERS*/",
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                {
                  "string": " is",
                  "nodeType": "is",
                  "children": [
                    {
                      "string": " connect",
                      "nodeType": "connect",
                      "children": []
                    }
                  ]
                }
              ],
              "DEF": "ArchPrototypeScript",
              "url": [
                "../node/ArchPrototypeScript.js",
                "https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"
              ]
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "computedScale",
              "fromNode": "ArchPrototypeScript",
              "toField": "scale",
              "toNode": "ArchTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "pointOut",
              "fromNode": "ArchPrototypeScript",
              "toField": "point",
              "toNode": "ArchChord"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "indexOut",
              "fromNode": "ArchPrototypeScript",
              "toField": "set_coordIndex",
              "toNode": "ArchIndex"
            }
          ]
        }
      ],
      "name": "ArchPrototype",
      "appinfo": "Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."
    },
    {
      "string": " protoinstance DEF ArchInstance",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": []
        }
      ],
      "name": "ArchPrototype",
      "DEF": "ArchInstance"
    },
    "/*Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)*/",
    {
      "string": " inline DEF CoordinateAxes",
      "nodeType": "inline",
      "children": [],
      "DEF": "CoordinateAxes",
      "url": [
        "../data/CoordinateAxes.x3d"
      ]
    }
  ]
}