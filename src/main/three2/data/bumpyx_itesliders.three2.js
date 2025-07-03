{
  "string": "Scene",
  "children": [
    "/*LayerSet with two layers, navigation happens in layer 1*/",
    {
      "string": " layerset",
      "nodeType": "layerset",
      "children": [
        "/*the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"*/",
        "/*the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)*/",
        {
          "string": "layers layer",
          "nodeType": "layer",
          "children": [
            "/*basic nodes, which might be present in any scene*/",
            {
              "string": " navigationinfo",
              "nodeType": "navigationinfo",
              "children": [],
              "type": [
                "EXAMINE"
              ]
            },
            {
              "string": " directionallight",
              "nodeType": "directionallight",
              "children": [],
              "ambientIntensity": 0.2,
              "direction": {
                "x": 0,
                "y": -1,
                "z": 0
              }
            },
            {
              "string": " directionallight",
              "nodeType": "directionallight",
              "children": [],
              "ambientIntensity": 0.2,
              "direction": {
                "x": -1,
                "y": -0.1,
                "z": -1
              }
            },
            {
              "string": " viewpoint",
              "nodeType": "viewpoint",
              "children": [],
              "description": "My Overview",
              "fieldOfView": 1.570796,
              "position": {
                "x": 0,
                "y": 1.75,
                "z": 60
              }
            },
            "/*this group contains the red/green/blue 3D crosshair*/",
            {
              "string": " group",
              "nodeType": "group",
              "children": [
                "/*Arrow X*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder DEF Shaft",
                          "nodeType": "cylinder",
                          "children": [],
                          "DEF": "Shaft",
                          "radius": 0.35,
                          "height": 50
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF RED",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "RED",
                              "diffuseColor": {
                                "r": 1,
                                "g": 0,
                                "b": 0
                              },
                              "emissiveColor": {
                                "r": 1,
                                "g": 0,
                                "b": 0
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 25,
                    "y": 0,
                    "z": 0
                  },
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": -1,
                    "w": 1.57
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
                          "string": "geometry cone DEF Tip",
                          "nodeType": "cone",
                          "children": [],
                          "DEF": "Tip",
                          "bottomRadius": 0.8,
                          "height": 3
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE RED",
                              "nodeType": "material",
                              "children": [],
                              "USE": "RED"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 50,
                    "y": 0,
                    "z": 0
                  },
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": -1,
                    "w": 1.57
                  }
                },
                "/*Arrow Y*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder USE Shaft",
                          "nodeType": "cylinder",
                          "children": [],
                          "USE": "Shaft"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF GREEN",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "GREEN",
                              "diffuseColor": {
                                "r": 0,
                                "g": 1,
                                "b": 0
                              },
                              "emissiveColor": {
                                "r": 0,
                                "g": 1,
                                "b": 0
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 25,
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
                          "string": "geometry cone USE Tip",
                          "nodeType": "cone",
                          "children": [],
                          "USE": "Tip"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE GREEN",
                              "nodeType": "material",
                              "children": [],
                              "USE": "GREEN"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 50,
                    "z": 0
                  }
                },
                "/*Arrow Z*/",
                {
                  "string": " transform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder USE Shaft",
                          "nodeType": "cylinder",
                          "children": [],
                          "USE": "Shaft"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material DEF BLUE",
                              "nodeType": "material",
                              "children": [],
                              "DEF": "BLUE",
                              "diffuseColor": {
                                "r": 0,
                                "g": 0,
                                "b": 1
                              },
                              "emissiveColor": {
                                "r": 0,
                                "g": 0,
                                "b": 1
                              }
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 25
                  },
                  "rotation": {
                    "x": 1,
                    "y": 0,
                    "z": 0,
                    "w": 1.57
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
                          "string": "geometry cone USE Tip",
                          "nodeType": "cone",
                          "children": [],
                          "USE": "Tip"
                        },
                        {
                          "string": "appearance",
                          "nodeType": "appearance",
                          "children": [
                            {
                              "string": "appearance material USE BLUE",
                              "nodeType": "material",
                              "children": [],
                              "USE": "BLUE"
                            }
                          ]
                        }
                      ]
                    }
                  ],
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 50
                  },
                  "rotation": {
                    "x": 1,
                    "y": 0,
                    "z": 0,
                    "w": 1.57
                  }
                }
              ]
            },
            "/*the model that is being reviewed by the users of this scene*/",
            {
              "string": " transform DEF FlowerTransform",
              "nodeType": "transform",
              "children": [
                "/*<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />*/",
                "/*Images courtesy of Paul Debevec's Light Probe Image Gallery*/",
                {
                  "string": " background",
                  "nodeType": "background",
                  "children": [],
                  "backUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_back.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"
                  ],
                  "bottomUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
                  ],
                  "frontUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_front.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"
                  ],
                  "leftUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_left.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"
                  ],
                  "rightUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_right.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"
                  ],
                  "topUrl": [
                    "../resources/images/all_probes/stpeters_cross/stpeters_top.png",
                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"
                  ]
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
                          "string": "geometry sphere",
                          "nodeType": "sphere",
                          "children": [],
                          "radius": 40
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
                                "r": 0.7,
                                "g": 0.7,
                                "b": 0.7
                              },
                              "specularColor": {
                                "r": 0.5,
                                "g": 0.5,
                                "b": 0.5
                              }
                            },
                            {
                              "string": "appearance composedcubemaptexture DEF texture",
                              "nodeType": "composedcubemaptexture",
                              "children": [
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_back.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_bottom.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_front.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_left.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_right.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"
                                  ]
                                },
                                {
                                  "string": "appearance imagetexture",
                                  "nodeType": "imagetexture",
                                  "children": [],
                                  "url": [
                                    "../resources/images/all_probes/stpeters_cross/stpeters_top.png",
                                    "https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"
                                  ]
                                }
                              ],
                              "DEF": "texture"
                            },
                            {
                              "string": "appearance composedshader DEF x_iteShader",
                              "nodeType": "composedshader",
                              "children": [
                                {
                                  "string": "appearance field",
                                  "nodeType": "field",
                                  "children": [
                                    {
                                      "string": " composedcubemaptexture USE texture",
                                      "nodeType": "composedcubemaptexture",
                                      "children": [],
                                      "USE": "texture"
                                    }
                                  ]
                                },
                                {
                                  "string": "appearance shaderpart",
                                  "nodeType": "shaderpart",
                                  "children": [],
                                  "url": [
                                    "../shaders/x_ite_flowers_chromatic.vs",
                                    "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"
                                  ],
                                  "type": "VERTEX"
                                },
                                {
                                  "string": "appearance shaderpart",
                                  "nodeType": "shaderpart",
                                  "children": [],
                                  "url": [
                                    "../shaders/x_ite.fs",
                                    "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"
                                  ],
                                  "type": "FRAGMENT"
                                },
                                "/*TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>*/"
                              ],
                              "DEF": "x_iteShader",
                              "language": "GLSL"
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ],
              "DEF": "FlowerTransform"
            },
            "/*DIS multiuser facilities*/",
            {
              "string": " disentitymanager DEF EntityManager",
              "nodeType": "disentitymanager",
              "children": [
                {
                  "string": " disentitytypemapping",
                  "nodeType": "disentitytypemapping",
                  "children": [],
                  "category": 77,
                  "specific": 1,
                  "url": [
                    "Leif8Final.x3d"
                  ]
                },
                {
                  "string": " disentitytypemapping",
                  "nodeType": "disentitytypemapping",
                  "children": [],
                  "category": 77,
                  "specific": 2,
                  "url": [
                    "Lily8Final.x3d"
                  ]
                }
              ],
              "DEF": "EntityManager",
              "networkMode": "networkReader"
            },
            {
              "string": " collision",
              "nodeType": "collision",
              "children": [
                {
                  "string": " group DEF AvatarHolder",
                  "nodeType": "group",
                  "children": [],
                  "DEF": "AvatarHolder"
                }
              ],
              "enabled": false
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "addedEntities",
              "fromNode": "EntityManager",
              "toField": "addChildren",
              "toNode": "AvatarHolder"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "removedEntities",
              "fromNode": "EntityManager",
              "toField": "removeChildren",
              "toNode": "AvatarHolder"
            }
          ],
          "pickable": true,
          "objectType": [
            "ALL"
          ]
        },
        {
          "string": "layers layoutlayer",
          "nodeType": "layoutlayer",
          "children": [
            "/*positioning the LayoutLayer*/",
            "/*clipping the LayoutLayer*/",
            "/*the content (children) of the LayoutLayer*/",
            "/*first, the slider for scaling the model*/",
            {
              "string": " transform",
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
                            "r": 0,
                            "g": 0,
                            "b": 0
                          },
                          "transparency": 0.7
                        }
                      ]
                    },
                    {
                      "string": "geometry box",
                      "nodeType": "box",
                      "children": [],
                      "size": {
                        "x": 100,
                        "y": 100,
                        "z": 0.02
                      }
                    }
                  ]
                }
              ],
              "translation": {
                "x": 0,
                "y": 0,
                "z": -3
              }
            },
            "/*the plane sensors*/",
            {
              "string": " transform DEF aSlider",
              "nodeType": "transform",
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform DEF aTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " planesensor DEF aSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "DEF": "aSensor",
                      "minPosition": {
                        "x": -20,
                        "y": 0
                      },
                      "maxPosition": {
                        "x": 20,
                        "y": 0
                      }
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " touchsensor DEF aTS",
                          "nodeType": "touchsensor",
                          "children": [],
                          "DEF": "aTS"
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
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
                                    "g": 0,
                                    "b": 0
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 0.3
                        },
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
                        }
                      ]
                    }
                  ],
                  "DEF": "aTransform",
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 0.1
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                }
              ],
              "DEF": "aSlider",
              "translation": {
                "x": 0,
                "y": 0.7,
                "z": 0
              }
            },
            {
              "string": " transform DEF bSlider",
              "nodeType": "transform",
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform DEF bTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " planesensor DEF bSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "DEF": "bSensor",
                      "minPosition": {
                        "x": -20,
                        "y": 0
                      },
                      "maxPosition": {
                        "x": 20,
                        "y": 0
                      }
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " touchsensor DEF bTS",
                          "nodeType": "touchsensor",
                          "children": [],
                          "DEF": "bTS"
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
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
                                    "g": 0,
                                    "b": 0
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 0.3
                        },
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
                        }
                      ]
                    }
                  ],
                  "DEF": "bTransform",
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 0.1
                  }
                }
              ],
              "DEF": "bSlider",
              "translation": {
                "x": 0,
                "y": 0.4,
                "z": 0
              }
            },
            {
              "string": " transform DEF cSlider",
              "nodeType": "transform",
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform DEF cTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " planesensor DEF cSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "DEF": "cSensor",
                      "minPosition": {
                        "x": -20,
                        "y": 0
                      },
                      "maxPosition": {
                        "x": 20,
                        "y": 0
                      }
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " touchsensor DEF cTS",
                          "nodeType": "touchsensor",
                          "children": [],
                          "DEF": "cTS"
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
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
                                    "g": 0,
                                    "b": 0
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 0.3
                        },
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
                        }
                      ]
                    }
                  ],
                  "DEF": "cTransform",
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 0.1
                  }
                }
              ],
              "DEF": "cSlider",
              "translation": {
                "x": 0,
                "y": 0.1,
                "z": 0
              }
            },
            {
              "string": " transform DEF dSlider",
              "nodeType": "transform",
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform DEF dTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " planesensor DEF dSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "DEF": "dSensor",
                      "minPosition": {
                        "x": -20,
                        "y": 0
                      },
                      "maxPosition": {
                        "x": 20,
                        "y": 0
                      }
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " touchsensor DEF dTS",
                          "nodeType": "touchsensor",
                          "children": [],
                          "DEF": "dTS"
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
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
                                    "g": 0,
                                    "b": 0
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 0.3
                        },
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
                        }
                      ]
                    }
                  ],
                  "DEF": "dTransform",
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 0.1
                  }
                }
              ],
              "DEF": "dSlider",
              "translation": {
                "x": 0,
                "y": -0.2,
                "z": 0
              }
            },
            {
              "string": " transform DEF pdeltaSlider",
              "nodeType": "transform",
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform DEF pdeltaTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " planesensor DEF pdeltaSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "DEF": "pdeltaSensor",
                      "minPosition": {
                        "x": -20,
                        "y": 0
                      },
                      "maxPosition": {
                        "x": 20,
                        "y": 0
                      }
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " touchsensor DEF pdeltaTS",
                          "nodeType": "touchsensor",
                          "children": [],
                          "DEF": "pdeltaTS"
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
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
                                    "g": 0,
                                    "b": 0
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 0.3
                        },
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
                        }
                      ]
                    }
                  ],
                  "DEF": "pdeltaTransform",
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 0.1
                  }
                }
              ],
              "DEF": "pdeltaSlider",
              "translation": {
                "x": 0,
                "y": -0.5,
                "z": 0
              }
            },
            {
              "string": " transform DEF tdeltaSlider",
              "nodeType": "transform",
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
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 2.5
                        }
                      ]
                    }
                  ],
                  "rotation": {
                    "x": 0,
                    "y": 0,
                    "z": 1,
                    "w": 1.57
                  }
                },
                {
                  "string": " transform DEF tdeltaTransform",
                  "nodeType": "transform",
                  "children": [
                    {
                      "string": " planesensor DEF tdeltaSensor",
                      "nodeType": "planesensor",
                      "children": [],
                      "DEF": "tdeltaSensor",
                      "minPosition": {
                        "x": -20,
                        "y": 0
                      },
                      "maxPosition": {
                        "x": 20,
                        "y": 0
                      }
                    },
                    {
                      "string": " transform",
                      "nodeType": "transform",
                      "children": [
                        {
                          "string": " touchsensor DEF tdeltaTS",
                          "nodeType": "touchsensor",
                          "children": [],
                          "DEF": "tdeltaTS"
                        },
                        {
                          "string": " shape",
                          "nodeType": "shape",
                          "children": [
                            {
                              "string": "geometry sphere",
                              "nodeType": "sphere",
                              "children": [],
                              "radius": 0.08
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
                                    "g": 0,
                                    "b": 0
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ],
                      "translation": {
                        "x": 0,
                        "y": 0,
                        "z": 0
                      }
                    },
                    {
                      "string": " shape",
                      "nodeType": "shape",
                      "children": [
                        {
                          "string": "geometry cylinder",
                          "nodeType": "cylinder",
                          "children": [],
                          "radius": 0.05,
                          "height": 0.3
                        },
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
                        }
                      ]
                    }
                  ],
                  "DEF": "tdeltaTransform",
                  "translation": {
                    "x": 0,
                    "y": 0,
                    "z": 0.1
                  }
                }
              ],
              "DEF": "tdeltaSlider",
              "translation": {
                "x": 0,
                "y": -0.8,
                "z": 0
              }
            },
            {
              "string": " script DEF aValueTransformerScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\t  ecmascript: function newTranslation(Value) { aValue_changed = Value.x * 30; }\r\n</Script>"
              ],
              "DEF": "aValueTransformerScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " script DEF bValueTransformerScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\t  ecmascript: function newTranslation(Value) { bValue_changed = Value.x * 30; }\r\n</Script>"
              ],
              "DEF": "bValueTransformerScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " script DEF cValueTransformerScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\t  ecmascript: function newTranslation(Value) { cValue_changed = Value.x * 5; }\r\n</Script>"
              ],
              "DEF": "cValueTransformerScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " script DEF dValueTransformerScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\t  ecmascript: function newTranslation(Value) { dValue_changed = Value.x * 5; }\r\n</Script>"
              ],
              "DEF": "dValueTransformerScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " script DEF pdeltaValueTransformerScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\t  ecmascript: function newTranslation(Value) { pdeltaValue_changed = Value.x; }\r\n</Script>"
              ],
              "DEF": "pdeltaValueTransformerScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " script DEF tdeltaValueTransformerScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
                "<script>\r\n\t  ecmascript: function newTranslation(Value) { tdeltaValue_changed = Value.x; }\r\n</Script>"
              ],
              "DEF": "tdeltaValueTransformerScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "aSensor",
              "toField": "set_translation",
              "toNode": "aTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "bSensor",
              "toField": "set_translation",
              "toNode": "bTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "cSensor",
              "toField": "set_translation",
              "toNode": "cTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "dSensor",
              "toField": "set_translation",
              "toNode": "dTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "pdeltaSensor",
              "toField": "set_translation",
              "toNode": "pdeltaTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "tdeltaSensor",
              "toField": "set_translation",
              "toNode": "tdeltaTransform"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "aSensor",
              "toField": "newTranslation",
              "toNode": "aValueTransformerScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "bSensor",
              "toField": "newTranslation",
              "toNode": "bValueTransformerScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "cSensor",
              "toField": "newTranslation",
              "toNode": "cValueTransformerScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "dSensor",
              "toField": "newTranslation",
              "toNode": "dValueTransformerScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "pdeltaSensor",
              "toField": "newTranslation",
              "toNode": "pdeltaValueTransformerScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "translation_changed",
              "fromNode": "tdeltaSensor",
              "toField": "newTranslation",
              "toNode": "tdeltaValueTransformerScript"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "aValue_changed",
              "fromNode": "aValueTransformerScript",
              "toField": "a",
              "toNode": "x_iteShader"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "bValue_changed",
              "fromNode": "bValueTransformerScript",
              "toField": "b",
              "toNode": "x_iteShader"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "cValue_changed",
              "fromNode": "cValueTransformerScript",
              "toField": "c",
              "toNode": "x_iteShader"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "dValue_changed",
              "fromNode": "dValueTransformerScript",
              "toField": "d",
              "toNode": "x_iteShader"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "pdeltaValue_changed",
              "fromNode": "pdeltaValueTransformerScript",
              "toField": "pdelta",
              "toNode": "x_iteShader"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "tdeltaValue_changed",
              "fromNode": "tdeltaValueTransformerScript",
              "toField": "tdelta",
              "toNode": "x_iteShader"
            },
            {
              "string": "layout",
              "nodeType": "layout",
              "children": [],
              "align": [
                "RIGHT",
                "BOTTOM"
              ],
              "offset": [
                0,
                0.2
              ],
              "offsetUnits": [
                "WORLD",
                "WORLD"
              ],
              "scaleMode": [
                "NONE",
                "NONE"
              ],
              "size": [
                0.4,
                0.6
              ],
              "sizeUnits": [
                "WORLD",
                "WORLD"
              ]
            },
            {
              "string": "viewport",
              "nodeType": "viewport",
              "children": [],
              "clipBoundary": [
                0,
                1,
                0,
                1
              ]
            }
          ],
          "pickable": true,
          "objectType": [
            "ALL"
          ]
        }
      ],
      "activeLayer": 1,
      "order": [
        1,
        2
      ]
    }
  ]
}