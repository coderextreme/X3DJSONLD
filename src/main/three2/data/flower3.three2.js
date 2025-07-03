{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
    {
      "string": " directionallight",
      "nodeType": "directionallight",
      "children": [],
      "direction": {
        "x": 0,
        "y": -0.8,
        "z": -0.2
      },
      "intensity": 0.5
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 1,
          "g": 1,
          "b": 1
        }
      ]
    },
    {
      "string": " viewpoint",
      "nodeType": "viewpoint",
      "children": [],
      "description": "One mathematical orbital",
      "position": {
        "x": 0,
        "y": 0,
        "z": 50
      }
    },
    {
      "string": " transform DEF OrbitTransform",
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
                    "g": 0.5,
                    "b": 1
                  },
                  "specularColor": {
                    "r": 0,
                    "g": 0.5,
                    "b": 1
                  }
                }
              ]
            },
            {
              "string": "geometry indexedfaceset DEF Orbit",
              "nodeType": "indexedfaceset",
              "children": [
                {
                  "string": "coord coordinate DEF OrbitCoordinates",
                  "nodeType": "coordinate",
                  "children": [],
                  "DEF": "OrbitCoordinates"
                }
              ],
              "convex": false,
              "DEF": "Orbit"
            }
          ]
        }
      ],
      "DEF": "OrbitTransform",
      "translation": {
        "x": 8,
        "y": 0,
        "z": 0
      }
    },
    {
      "string": " script DEF OrbitScript",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "/*<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>*/",
        "<script>\r\necmascript:\r\n\r\nvar e = 5;\r\nvar f = 5;\r\nvar g = 5;\r\nvar h = 5;\r\nvar resolution = 100;\r\nvar t = 0;\r\nvar p = 0;\r\n\r\nfunction initialize() {\r\n     generateCoordinates(resolution);\r\n     var localci = new MFInt32();\r\n     var arrIndex = 0;\r\n     for (var i = 0; i < resolution-1; i++) {\r\n     \tfor (var j = 0; j < resolution-1; j++) {\r\n\t     localci[arrIndex++] = i*resolution+j;\r\n\t     localci[arrIndex++] = i*resolution+j+1;\r\n\t     localci[arrIndex++] = (i+1)*resolution+j+1;\r\n\t     localci[arrIndex++] = (i+1)*resolution+j;\r\n\t     localci[arrIndex++] = -1;\r\n\t}\r\n    }\r\n    coordIndexes = localci;\r\n}\r\n\r\nfunction generateCoordinates(resolution) {\r\n     var theta = 0.0;\r\n     var phi = 0.0;\r\n     var delta = (2 * 3.141592653) / (resolution-1);\r\n     var localc = new MFVec3f();\r\n     var arrIndex = 0;\r\n     for (var  i = 0; i < resolution; i++) {\r\n     \tfor (var  j = 0; j < resolution; j++) {\r\n\t\tvar rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\r\n\t\tlocalc[arrIndex++] = new SFVec3f(\r\n\t\t\trho * Math.cos(phi) * Math.cos(theta),\r\n\t\t\trho * Math.cos(phi) * Math.sin(theta),\r\n\t\t\trho * Math.sin(phi)\r\n\t\t);\r\n\t\ttheta += delta;\r\n\t}\r\n\tphi += delta;\r\n     }\r\n     coordinates = localc;\r\n}\r\n\r\nfunction set_fraction(fraction, eventTime) {\r\n\tt += 0.5;\r\n\tp += 0.5;\r\n\tvar choice = Math.floor(Math.random() * 4);\r\n\tswitch (choice) {\r\n\tcase 0:\r\n\t\te += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 1:\r\n\t\tf += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 2:\r\n\t\tg += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\tcase 3:\r\n\t\th += Math.floor(Math.random() * 2) * 2 - 1;\r\n\t\tbreak;\r\n\t}\r\n\tif (f < 1) {\r\n\t\tf = 10;\r\n\t}\r\n\tif (g < 1) {\r\n\t\tg = 4;\r\n\t}\r\n\tif (h < 1) {\r\n\t\th = 4;\r\n\t}\r\n\tgenerateCoordinates(resolution);\r\n}\r\n</Script>"
      ],
      "DEF": "OrbitScript"
    },
    {
      "string": " timesensor DEF Clock",
      "nodeType": "timesensor",
      "children": [],
      "DEF": "Clock",
      "cycleInterval": 16,
      "loop": true
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "OrbitScript",
      "fromField": "coordIndexes",
      "toNode": "Orbit",
      "toField": "set_coordIndex"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "OrbitScript",
      "fromField": "coordinates",
      "toNode": "OrbitCoordinates",
      "toField": "point"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "Clock",
      "fromField": "fraction_changed",
      "toNode": "OrbitScript",
      "toField": "set_fraction"
    }
  ]
}