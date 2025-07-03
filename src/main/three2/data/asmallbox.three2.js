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
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry sphere",
                      "nodeType": "sphere",
                      "children": []
                    }
                  ]
                }
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
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
              ]
            }
          ]
        }
      ],
      "name": "anyShape"
    },
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
              "children": [
                {
                  "string": " shape",
                  "nodeType": "shape",
                  "children": [
                    {
                      "string": "geometry cylinder",
                      "nodeType": "cylinder",
                      "children": []
                    }
                  ]
                }
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " transform",
              "nodeType": "transform",
              "children": [
                {
                  "string": " protoinstance",
                  "nodeType": "protoinstance",
                  "children": [
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
                  "name": "anyShape"
                }
              ]
            }
          ]
        }
      ],
      "name": "one"
    },
    {
      "string": " protoinstance",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": "geometry box",
                  "nodeType": "box",
                  "children": []
                }
              ]
            }
          ]
        }
      ],
      "name": "one"
    }
  ]
}