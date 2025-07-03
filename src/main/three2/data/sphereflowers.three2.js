{
  "string": "Scene",
  "children": [
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": []
    },
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
      "string": " group",
      "nodeType": "group",
      "children": [
        {
          "string": " externprotodeclare",
          "nodeType": "externprotodeclare",
          "children": [
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            }
          ],
          "name": "FlowerProto",
          "url": [
            "../data/flowerproto.x3d#FlowerProto",
            "https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"
          ]
        },
        {
          "string": " protodeclare",
          "nodeType": "protodeclare",
          "children": [
            {
              "string": " protobody",
              "nodeType": "protobody",
              "children": [
                {
                  "string": " group",
                  "nodeType": "group",
                  "children": [
                    {
                      "string": " protoinstance",
                      "nodeType": "protoinstance",
                      "children": [
                        {
                          "string": " fieldvalue",
                          "nodeType": "fieldvalue",
                          "children": []
                        }
                      ],
                      "name": "FlowerProto"
                    }
                  ]
                }
              ]
            }
          ],
          "name": "flower"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "flower"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "flower"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "flower"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "flower"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "flower"
        },
        {
          "string": " protoinstance",
          "nodeType": "protoinstance",
          "children": [],
          "name": "flower"
        },
        {
          "string": " timesensor DEF SongTime",
          "nodeType": "timesensor",
          "children": [],
          "DEF": "SongTime",
          "loop": true
        },
        {
          "string": " sound",
          "nodeType": "sound",
          "children": [
            {
              "string": "source audioclip DEF AudioClip",
              "nodeType": "audioclip",
              "children": [],
              "DEF": "AudioClip",
              "description": "Chandubabamusic #1",
              "url": [
                "../resources/chandubabamusic1.wav",
                "https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"
              ]
            }
          ],
          "maxBack": 100,
          "maxFront": 100,
          "minBack": 20,
          "minFront": 20,
          "location": {
            "x": 0,
            "y": 1,
            "z": 0
          }
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "cycleTime",
          "fromNode": "SongTime",
          "toField": "startTime",
          "toNode": "AudioClip"
        }
      ]
    }
  ]
}