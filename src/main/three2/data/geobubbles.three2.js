{
  "string": "Scene",
  "children": [
    "/*Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/*/",
    "/*PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/*/",
    {
      "string": " geoviewpoint DEF Tour",
      "nodeType": "geoviewpoint",
      "children": [],
      "DEF": "Tour",
      "position": {
        "x": 0,
        "y": 0,
        "z": 4
      },
      "orientation": {
        "x": 1,
        "y": 0,
        "z": 0,
        "w": 0
      },
      "description": "Tour Views"
    },
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "backUrl": [
        "../resources/images/BK.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"
      ],
      "bottomUrl": [
        "../resources/images/BT.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"
      ],
      "frontUrl": [
        "../resources/images/FR.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"
      ],
      "leftUrl": [
        "../resources/images/LF.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"
      ],
      "rightUrl": [
        "../resources/images/RT.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"
      ],
      "topUrl": [
        "../resources/images/TP.png",
        "https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"
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
              "children": []
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
                }
              ]
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
      "cycleInterval": 5,
      "loop": true
    },
    {
      "string": " geopositioninterpolator DEF TourPosition",
      "nodeType": "geopositioninterpolator",
      "children": [],
      "DEF": "TourPosition",
      "key": [
        0,
        1
      ],
      "keyValue": [
        {
          "x": 0.0015708,
          "y": 0,
          "z": 4
        },
        {
          "x": 0,
          "y": 0.0015708,
          "z": 4
        }
      ]
    },
    {
      "string": " script DEF RandomTourTime",
      "nodeType": "script",
      "children": [
        {
          "string": " field",
          "nodeType": "field",
          "children": []
        },
        "<script>ecmascript:\r\n\r\n               function set_cycle(value) {\r\n                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo\r\n                        var ov = val;\r\n\t\t\t// Browser.print('old '+ov);\r\n                        do {\r\n                                val = Math.floor(Math.random()*2);\r\n                                var vc = val;\r\n                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);\r\n                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);\r\n\t\t\t// Browser.println(positions[ov]);\r\n\t\t\t// Browser.println(positions[vc]);\r\n                        position = new MFVec3d();\r\n                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);\r\n                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);\r\n               }</Script>"
      ],
      "DEF": "RandomTourTime"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "TourTime",
      "fromField": "cycleTime",
      "toNode": "RandomTourTime",
      "toField": "set_cycle"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "RandomTourTime",
      "fromField": "position",
      "toNode": "TourPosition",
      "toField": "keyValue"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "TourTime",
      "fromField": "fraction_changed",
      "toNode": "TourPosition",
      "toField": "set_fraction"
    },
    {
      "string": " route",
      "nodeType": "route",
      "children": [],
      "fromNode": "TourPosition",
      "fromField": "geovalue_changed",
      "toNode": "Tour",
      "toField": "set_position"
    }
  ]
}