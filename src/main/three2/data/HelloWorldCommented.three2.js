{
  "string": "Scene",
  "children": [
    "/*Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)*/",
    "/*WorldInfo begin*/",
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "Hello world!"
    },
    "/*WorldInfo complete, Group begin*/",
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        "/*Viewpoint begin*/",
        {
          "string": " viewpoint DEF ViewUpClose",
          "nodeType": "viewpoint",
          "children": [],
          "DEF": "ViewUpClose",
          "centerOfRotation": {
            "x": 0,
            "y": -1,
            "z": 0
          },
          "description": "Hello world!",
          "position": {
            "x": 0,
            "y": -1,
            "z": 7
          }
        },
        "/*Viewpoint complete, Transform begin*/",
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            "/*Shape begin*/",
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                "/*Sphere begin*/",
                "/*Sphere complete, Appearance begin*/",
                "/*Appearance complete*/",
                {
                  "string": "geometry sphere",
                  "nodeType": "sphere",
                  "children": []
                },
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    "/*Material begin*/",
                    "/*Material complete, ImageTexture begin*/",
                    "/*ImageTexture complete*/",
                    {
                      "string": "appearance material DEF MaterialLightBlue",
                      "nodeType": "material",
                      "children": [],
                      "DEF": "MaterialLightBlue",
                      "diffuseColor": {
                        "r": 0.1,
                        "g": 0.5,
                        "b": 1
                      }
                    },
                    {
                      "string": "appearance imagetexture DEF ImageCloudlessEarth",
                      "nodeType": "imagetexture",
                      "children": [],
                      "DEF": "ImageCloudlessEarth",
                      "url": [
                        "earth-topo.png",
                        "earth-topo.jpg",
                        "earth-topo-small.gif",
                        "https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png",
                        "https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg",
                        "https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"
                      ]
                    }
                  ]
                }
              ]
            },
            "/*Shape complete*/"
          ],
          "rotation": {
            "x": 0,
            "y": 1,
            "z": 0,
            "w": 3
          }
        },
        "/*Transform complete, Transform begin*/",
        {
          "string": " transform",
          "nodeType": "transform",
          "children": [
            "/*Shape begin*/",
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                "/*Text begin*/",
                "/*Text complete, Appearance begin*/",
                "/*Appearance complete*/",
                {
                  "string": "Hello,world! DEF TextMessage",
                  "nodeType": "text",
                  "children": [
                    "/*FontStyle begin*/",
                    "/*FontStyle complete*/",
                    {
                      "string": "fontStyle fontstyle",
                      "nodeType": "fontstyle",
                      "children": [],
                      "justify": [
                        "MIDDLE",
                        "MIDDLE"
                      ]
                    }
                  ],
                  "DEF": "TextMessage"
                },
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
                    "/*Material begin*/",
                    "/*Material complete*/",
                    {
                      "string": "appearance material USE MaterialLightBlue",
                      "nodeType": "material",
                      "children": [],
                      "USE": "MaterialLightBlue"
                    }
                  ]
                }
              ]
            },
            "/*Shape complete*/"
          ],
          "translation": {
            "x": 0,
            "y": -2,
            "z": 0
          }
        },
        "/*Transform complete*/"
      ]
    },
    "/*Group complete*/"
  ]
}