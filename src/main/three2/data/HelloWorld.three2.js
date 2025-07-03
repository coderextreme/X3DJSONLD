{
  "string": "Scene",
  "children": [
    "/*Example scene to illustrate X3D nodes and fields (XML elements and attributes)*/",
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "info": [
        "Example scene to illustrate a simple X3D model"
      ],
      "title": "Hello World!"
    },
    {
      "string": " group",
      "nodeType": "group",
      "children": [
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
                  "children": []
                },
                {
                  "string": "appearance",
                  "nodeType": "appearance",
                  "children": [
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
            }
          ],
          "rotation": {
            "x": 0,
            "y": 1,
            "z": 0,
            "w": 3
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
                  "string": "Hello,world! DEF TextMessage",
                  "nodeType": "text",
                  "children": [
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
                    {
                      "string": "appearance material USE MaterialLightBlue",
                      "nodeType": "material",
                      "children": [],
                      "USE": "MaterialLightBlue"
                    }
                  ]
                }
              ]
            }
          ],
          "translation": {
            "x": 0,
            "y": -2,
            "z": 0
          }
        }
      ]
    }
  ]
}