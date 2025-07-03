{
  "string": "Scene",
  "children": [
    {
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " shape",
          "nodeType": "shape",
          "children": [
            {
              "string": "geometry extrusion DEF myextrusion",
              "nodeType": "extrusion",
              "children": [],
              "DEF": "myextrusion",
              "spine": [
                {
                  "x": -50,
                  "y": -50,
                  "z": 0
                },
                {
                  "x": 50,
                  "y": 50,
                  "z": 0
                }
              ],
              "creaseAngle": 0.785,
              "crossSection": [
                {
                  "x": 1,
                  "y": 0
                },
                {
                  "x": 0.92,
                  "y": -0.38
                },
                {
                  "x": 0.71,
                  "y": -0.71
                },
                {
                  "x": 0.38,
                  "y": -0.92
                },
                {
                  "x": 0,
                  "y": -1
                },
                {
                  "x": -0.38,
                  "y": -0.92
                },
                {
                  "x": -0.71,
                  "y": -0.71
                },
                {
                  "x": -0.92,
                  "y": -0.38
                },
                {
                  "x": -1,
                  "y": 0
                },
                {
                  "x": -0.92,
                  "y": 0.38
                },
                {
                  "x": -0.71,
                  "y": 0.71
                },
                {
                  "x": -0.38,
                  "y": 0.92
                },
                {
                  "x": 0,
                  "y": 1
                },
                {
                  "x": 0.38,
                  "y": 0.92
                },
                {
                  "x": 0.71,
                  "y": 0.71
                },
                {
                  "x": 0.92,
                  "y": 0.38
                },
                {
                  "x": 1,
                  "y": 0
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
                    "r": 0,
                    "g": 1,
                    "b": 0
                  }
                }
              ]
            }
          ]
        },
        {
          "string": " timesensor DEF TourTime",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "TourTime",
          "loop": true
        },
        {
          "string": " script DEF MoveCylinder",
          "nodeType": "script",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            },
            "<script>\r\n\r\necmascript:\r\n\r\n                function set_cycle(value) {\r\n                        Browser.print(value);\r\n                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\r\n                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\r\n                        var tmpspine = new MFVec3f();\r\n\t\t\ttmpspine[0] = endA;\r\n\t\t\ttmpspine[1] = endB;\r\n                        spine = tmpspine;\r\n                }\r\n\r\n</Script>"
          ],
          "DEF": "MoveCylinder"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "TourTime",
          "fromField": "cycleTime",
          "toNode": "MoveCylinder",
          "toField": "set_cycle"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromNode": "MoveCylinder",
          "fromField": "spine_changed",
          "toNode": "myextrusion",
          "toField": "set_spine"
        }
      ]
    }
  ]
}