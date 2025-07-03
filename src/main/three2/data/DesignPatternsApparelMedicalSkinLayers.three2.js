{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "HAnimHumanoid skin design patterns for apparel, medical"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 0,
          "g": 0.6,
          "b": 0.6
        }
      ]
    },
    {
      "string": " group DEF MultipleHumanoids",
      "nodeType": "group",
      "children": [
        {
          "string": "metadata metadatastring",
          "nodeType": "metadatastring",
          "children": [],
          "name": "HAnimArchitecture",
          "reference": "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile",
          "value": [
            "E.4 Multiple humanoids per file"
          ]
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF a_SimpleSkeleton",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [
                    {
                      "string": " shape DEF JointVisualization",
                      "nodeType": "shape",
                      "children": [],
                      "DEF": "JointVisualization"
                    },
                    {
                      "string": " shape DEF SegmentVisualization",
                      "nodeType": "shape",
                      "children": [],
                      "DEF": "SegmentVisualization"
                    },
                    {
                      "string": " hanimsite DEF a_feature01_tip",
                      "nodeType": "hanimsite",
                      "children": [
                        {
                          "string": " shape DEF SiteVisualization",
                          "nodeType": "shape",
                          "children": [],
                          "DEF": "SiteVisualization"
                        }
                      ],
                      "name": "feature01_tip",
                      "DEF": "a_feature01_tip"
                    }
                  ],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            }
          ],
          "name": "SimpleSkeleton",
          "DEF": "a_SimpleSkeleton",
          "version": "2.0"
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF b_SimpleSkeletonMesh",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry indexedfaceset DEF SegmentBoneMesh",
                          "nodeType": "indexedfaceset",
                          "children": [],
                          "DEF": "SegmentBoneMesh"
                        }
                      ]
                    }
                  ],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            }
          ],
          "name": "SimpleSkeletonMesh",
          "DEF": "b_SimpleSkeletonMesh",
          "version": "2.0"
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF c_SkinIndexedGeometry",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            },
            {
              "string": "skin indexedfaceset DEF SkinMeshIFS",
              "nodeType": "indexedfaceset",
              "children": [],
              "DEF": "SkinMeshIFS",
              "containerField": "skin"
            }
          ],
          "name": "SkinIndexedGeometry",
          "DEF": "c_SkinIndexedGeometry",
          "version": "2.0"
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF d_SkinShapeIndexedGeometry",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            },
            {
              "string": "skin shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry indexedfaceset USE SkinMeshIFS",
                  "nodeType": "indexedfaceset",
                  "children": [],
                  "USE": "SkinMeshIFS"
                }
              ],
              "containerField": "skin"
            }
          ],
          "name": "SkinShapeIndexedGeometry",
          "DEF": "d_SkinShapeIndexedGeometry",
          "version": "2.0"
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF e_SkinSwitchShapeIndexedGeometry",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            },
            "/*TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>*/",
            {
              "string": "skin shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry indexedfaceset DEF IndexedSkinMeshIFS",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "coord coordinate DEF SkinMeshCoordinate",
                      "nodeType": "coordinate",
                      "children": [],
                      "DEF": "SkinMeshCoordinate"
                    }
                  ],
                  "DEF": "IndexedSkinMeshIFS"
                }
              ],
              "containerField": "skin"
            }
          ],
          "name": "SkinSwitchShapeIndexedGeometry",
          "DEF": "e_SkinSwitchShapeIndexedGeometry",
          "version": "2.0"
        },
        "/*similarly for LOD*/",
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF f_SynthesizedSkinShapeIndexedTwoPartGeometry",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            },
            {
              "string": "skin shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry indexedfaceset DEF TwoPartIndexedSkinMesh",
                  "nodeType": "indexedfaceset",
                  "children": [
                    {
                      "string": "coord coordinate DEF TwoPartSkinMesh",
                      "nodeType": "coordinate",
                      "children": [],
                      "DEF": "TwoPartSkinMesh"
                    }
                  ],
                  "DEF": "TwoPartIndexedSkinMesh"
                }
              ],
              "containerField": "skin"
            }
          ],
          "name": "SynthesizedSkinShapeIndexedTwoPartGeometry",
          "DEF": "f_SynthesizedSkinShapeIndexedTwoPartGeometry",
          "version": "2.0"
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF g_ApparelSkinIndexedGeometryMultipleShapes",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            },
            {
              "string": "skin shape",
              "nodeType": "shape",
              "children": [],
              "containerField": "skin"
            },
            "/*allow multiple Shape nodes with containerField='apparel', one for each layer of clothing*/",
            "/*TODO proposed for X3D4.1 <Shape containerField='apparel'/>*/"
          ],
          "name": "ApparelSkinIndexedGeometryMultipleShapes",
          "DEF": "g_ApparelSkinIndexedGeometryMultipleShapes",
          "version": "2.0"
        },
        "/*==============================*/",
        {
          "string": " hanimhumanoid DEF h_AnatomySkinIndexedGeometryMultipleShapes",
          "nodeType": "hanimhumanoid",
          "children": [
            {
              "string": "skeleton hanimjoint",
              "nodeType": "hanimjoint",
              "children": [
                {
                  "string": " hanimsegment",
                  "nodeType": "hanimsegment",
                  "children": [],
                  "name": "sacrum"
                }
              ],
              "name": "humanoid_root",
              "ulimit": [
                0,
                0,
                0
              ],
              "llimit": [
                0,
                0,
                0
              ],
              "containerField": "skeleton"
            },
            "/*allow multiple Shape nodes with containerField='skin', one for each layer of skin*/",
            {
              "string": "skin shape",
              "nodeType": "shape",
              "children": [],
              "containerField": "skin"
            }
          ],
          "name": "AnatomySkinIndexedGeometryMultipleShapes",
          "DEF": "h_AnatomySkinIndexedGeometryMultipleShapes",
          "version": "2.0"
        },
        "/*==============================*/"
      ],
      "DEF": "MultipleHumanoids"
    },
    {
      "string": " viewpoint DEF ViewHelpText",
      "nodeType": "viewpoint",
      "children": [],
      "DEF": "ViewHelpText",
      "description": "Select text to see website",
      "position": {
        "x": 0,
        "y": 0,
        "z": 12
      }
    },
    "/*Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip*/",
    {
      "string": " anchor",
      "nodeType": "anchor",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            "/*TODO adjust Text string and Box size, then set Material transparency='1'*/",
            {
              "string": [
                "DesignPatternsApparelMedicalSkinLayers.x3d",
                "",
                "explores potential apparel approaches"
              ],
              "nodeType": "text",
              "children": [
                {
                  "string": "fontStyle fontstyle",
                  "nodeType": "fontstyle",
                  "children": [],
                  "family": [
                    "SANS"
                  ],
                  "justify": [
                    "MIDDLE",
                    "MIDDLE"
                  ],
                  "size": 0.6,
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
                    "r": 0.9,
                    "g": 0.9,
                    "b": 0.9
                  }
                }
              ]
            }
          ]
        },
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            "/*Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.*/",
            {
              "string": "geometry box",
              "nodeType": "box",
              "children": [],
              "size": {
                "x": 11,
                "y": 2,
                "z": 0.001
              }
            },
            {
              "string": "appearance",
              "nodeType": "appearance",
              "children": [
                {
                  "string": "appearance material",
                  "nodeType": "material",
                  "children": [],
                  "transparency": 1
                }
              ]
            }
          ]
        }
      ],
      "description": "DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches",
      "parameter": [
        "target=blank"
      ],
      "url": [
        "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"
      ]
    }
  ]
}