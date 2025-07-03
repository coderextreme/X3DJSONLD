{
  "string": "Scene",
  "children": [
    {
      "string": " worldinfo",
      "nodeType": "worldinfo",
      "children": [],
      "title": "CaliforniaCampuses.x3d"
    },
    {
      "string": " switch DEF SwitchGlobes",
      "nodeType": "switch",
      "children": [
        "/*Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching.*/",
        {
          "string": " inline",
          "nodeType": "inline",
          "children": [],
          "url": [
            "http://x3d-earth.nps.edu/osmdemo.x3d"
          ]
        },
        "/*<Inline load='false' url='\"http://mmog.ern.nps.edu/California/California.x3d\"'/>*/",
        "/*<Inline load='false' url='\"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d\"'/>*/",
        "/*<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d\"'/>*/",
        "/*<Inline load='false' url='\"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d\"'/>*/"
      ],
      "DEF": "SwitchGlobes",
      "whichChoice": 0
    },
    {
      "string": " navigationinfo",
      "nodeType": "navigationinfo",
      "children": [],
      "transitionType": [
        "ANIMATE"
      ]
    },
    {
      "string": " group DEF PlacemarkGroup",
      "nodeType": "group",
      "children": [
        {
          "string": " geoviewpoint DEF View01",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View01",
          "description": "Naval Postgraduate School",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 36.595599,
            "y": -121.877148,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View02",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View02",
          "description": "University of California Davis",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 38.53650615157984,
            "y": -121.7489628616831,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View03",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View03",
          "description": "University of California Berkeley",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.86963434512325,
            "y": -122.2593873127355,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View04",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View04",
          "description": "University of California San Francisco",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.76340647188392,
            "y": -122.4582475377715,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View05",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View05",
          "description": "University of California Santa Cruz",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 36.99628443046043,
            "y": -122.0534325473795,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View06",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View06",
          "description": "University of California Merced",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.365508575977,
            "y": -120.4252597059142,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View07",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View07",
          "description": "University of California Santa Barbara",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.41124450961521,
            "y": -119.8479940053906,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View08",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View08",
          "description": "University of California Los Angeles",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.07224474392262,
            "y": -118.4408472225642,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View09",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View09",
          "description": "University of California Irvine",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.64623283675919,
            "y": -117.8427064139082,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View10",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View10",
          "description": "University of California Riverside",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.97350567066717,
            "y": -117.3281649569839,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View11",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View11",
          "description": "University of California San Diego",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 32.87612136607509,
            "y": -117.2367298240259,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View12",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View12",
          "description": "Humboldt State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 40.87630235623448,
            "y": -124.0785789217266,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View13",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View13",
          "description": "California State University, Chico",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 39.73031527724385,
            "y": -121.8453722745223,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View14",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View14",
          "description": "California State University Sacramento",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 38.5626517618963,
            "y": -121.4244636520556,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View15",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View15",
          "description": "Sonoma State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 38.33922929793606,
            "y": -122.6744333530031,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View16",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View16",
          "description": "California Maritime Academy",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 38.06907065059484,
            "y": -122.2309147135222,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View17",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View17",
          "description": "San Francisco State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.722876,
            "y": -122.4781512190666,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View18",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View18",
          "description": "California State University, East Bay",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.65707914139907,
            "y": -122.0569190659761,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View19",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View19",
          "description": "California State University Stanislaus",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.52552478005697,
            "y": -120.8563508560606,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View20",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View20",
          "description": "San Jose State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 37.33580940527095,
            "y": -121.8815343755784,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View21",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View21",
          "description": "California State University, Monterey Bay",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 36.6538071781493,
            "y": -121.7984465276711,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View22",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View22",
          "description": "Fresno State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 36.812166,
            "y": -119.7451552005852,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View23",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View23",
          "description": "California State University, Bakersfield",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 35.350804,
            "y": -119.1043226128032,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View24",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View24",
          "description": "California Polytechnic State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 35.30115692599171,
            "y": -120.6595761796351,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View25",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View25",
          "description": "California State University, Channel Islands",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.1624126428852,
            "y": -119.0425264841287,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View26",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View26",
          "description": "California State University, Northridge",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.23959265263849,
            "y": -118.5284272400904,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View27",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View27",
          "description": "California State University, Los Angeles",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.06645996626264,
            "y": -118.1682050902557,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View28",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View28",
          "description": "California State Polytechnic University, Pomona",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.05727150000314,
            "y": -117.8215320234812,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View29",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View29",
          "description": "California State University, San Bernardino",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 34.18180116432101,
            "y": -117.3243676664719,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View30",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View30",
          "description": "California State University, Fullerton",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.882522,
            "y": -117.8868367869023,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View31",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View31",
          "description": "California State University Dominguez Hills",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.86463396857103,
            "y": -118.2553596272055,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View32",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View32",
          "description": "California State University, Long Beach",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.78196696470824,
            "y": -118.112678253688,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View33",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View33",
          "description": "California State University, San Marcos",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.12837619265174,
            "y": -117.1600194071002,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View34",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View34",
          "description": "San Diego State University",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 32.77593126586385,
            "y": -117.0722876242553,
            "z": 250000
          }
        },
        {
          "string": " geoviewpoint DEF View35",
          "nodeType": "geoviewpoint",
          "children": [],
          "DEF": "View35",
          "description": "CENIC",
          "orientation": {
            "x": 1,
            "y": 0,
            "z": 0,
            "w": -1.57
          },
          "position": {
            "x": 33.879947,
            "y": -118.027903,
            "z": 250000
          }
        }
      ],
      "DEF": "PlacemarkGroup"
    },
    "/*====================*/",
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
      "name": "CrossHair",
      "appinfo": "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point",
      "url": [
        "../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair",
        "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair",
        "../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair",
        "https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"
      ]
    },
    {
      "string": " protoinstance DEF CrossHairInstance",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": []
        }
      ],
      "name": "CrossHair",
      "DEF": "CrossHairInstance"
    },
    "/*====================*/",
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
      "name": "HeadsUpDisplay",
      "appinfo": "Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location",
      "url": [
        "../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay",
        "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay",
        "../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay",
        "https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"
      ]
    },
    "/*====================*/",
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
      "name": "ViewpointSequencer",
      "appinfo": "Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene",
      "url": [
        "../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer",
        "https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer",
        "../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer",
        "https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"
      ]
    },
    {
      "string": " protoinstance DEF ViewpointTour",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": [
            {
              "string": " geoviewpoint USE View01",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View01"
            },
            {
              "string": " geoviewpoint USE View02",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View02"
            },
            {
              "string": " geoviewpoint USE View03",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View03"
            },
            {
              "string": " geoviewpoint USE View04",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View04"
            },
            {
              "string": " geoviewpoint USE View05",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View05"
            },
            {
              "string": " geoviewpoint USE View06",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View06"
            },
            {
              "string": " geoviewpoint USE View07",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View07"
            },
            {
              "string": " geoviewpoint USE View08",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View08"
            },
            {
              "string": " geoviewpoint USE View09",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View09"
            },
            {
              "string": " geoviewpoint USE View10",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View10"
            },
            {
              "string": " geoviewpoint USE View11",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View11"
            },
            {
              "string": " geoviewpoint USE View12",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View12"
            },
            {
              "string": " geoviewpoint USE View13",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View13"
            },
            {
              "string": " geoviewpoint USE View14",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View14"
            },
            {
              "string": " geoviewpoint USE View15",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View15"
            },
            {
              "string": " geoviewpoint USE View16",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View16"
            },
            {
              "string": " geoviewpoint USE View17",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View17"
            },
            {
              "string": " geoviewpoint USE View18",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View18"
            },
            {
              "string": " geoviewpoint USE View19",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View19"
            },
            {
              "string": " geoviewpoint USE View20",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View20"
            },
            {
              "string": " geoviewpoint USE View21",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View21"
            },
            {
              "string": " geoviewpoint USE View22",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View22"
            },
            {
              "string": " geoviewpoint USE View23",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View23"
            },
            {
              "string": " geoviewpoint USE View24",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View24"
            },
            {
              "string": " geoviewpoint USE View25",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View25"
            },
            {
              "string": " geoviewpoint USE View26",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View26"
            },
            {
              "string": " geoviewpoint USE View27",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View27"
            },
            {
              "string": " geoviewpoint USE View28",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View28"
            },
            {
              "string": " geoviewpoint USE View29",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View29"
            },
            {
              "string": " geoviewpoint USE View30",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View30"
            },
            {
              "string": " geoviewpoint USE View31",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View31"
            },
            {
              "string": " geoviewpoint USE View32",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View32"
            },
            {
              "string": " geoviewpoint USE View33",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View33"
            },
            {
              "string": " geoviewpoint USE View34",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View34"
            },
            {
              "string": " geoviewpoint USE View35",
              "nodeType": "geoviewpoint",
              "children": [],
              "USE": "View35"
            },
            {
              "string": " viewpoint DEF View4",
              "nodeType": "viewpoint",
              "children": [],
              "DEF": "View4",
              "description": "View four (-X axis)",
              "orientation": {
                "x": 0,
                "y": 1,
                "z": 0,
                "w": -1.57
              },
              "position": {
                "x": -10,
                "y": 0,
                "z": 0
              }
            }
          ]
        },
        "/*initially enabled is off, scene provides selectable text to activate*/"
      ],
      "name": "ViewpointSequencer",
      "DEF": "ViewpointTour"
    },
    "/*====================*/",
    {
      "string": " geolocation",
      "nodeType": "geolocation",
      "children": [
        {
          "string": " billboard",
          "nodeType": "billboard",
          "children": [
            {
              "string": " shape",
              "nodeType": "shape",
              "children": [
                {
                  "string": [
                    "ViewpointSequencer tour"
                  ],
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
                      "ambientIntensity": 0.25,
                      "diffuseColor": {
                        "r": 0.795918,
                        "g": 0.505869,
                        "b": 0.093315
                      },
                      "shininess": 0.39,
                      "specularColor": {
                        "r": 0.923469,
                        "g": 0.428866,
                        "b": 0.006369
                      }
                    }
                  ]
                }
              ]
            }
          ],
          "axisOfRotation": {
            "x": 0,
            "y": 0,
            "z": 0
          }
        },
        {
          "string": " touchsensor DEF TourTouch",
          "nodeType": "touchsensor",
          "children": [],
          "DEF": "TourTouch",
          "description": "Touch text to turn tour on/off"
        },
        {
          "string": " booleantoggle DEF TourToggle",
          "nodeType": "booleantoggle",
          "children": [],
          "DEF": "TourToggle"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "isActive",
          "fromNode": "TourTouch",
          "toField": "set_boolean",
          "toNode": "TourToggle"
        },
        {
          "string": " route",
          "nodeType": "route",
          "children": [],
          "fromField": "toggle",
          "fromNode": "TourToggle",
          "toField": "set_enabled",
          "toNode": "ViewpointTour"
        }
      ],
      "geoCoords": {
        "x": 36.595599,
        "y": -121.877148,
        "z": 624990
      }
    },
    "/*====================*/",
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
      "name": "ViewPositionOrientation",
      "appinfo": "ViewPositionOrientation provides provides console output of local position and orientation as user navigates",
      "url": [
        "../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation",
        "https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation",
        "../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation",
        "https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"
      ]
    },
    {
      "string": " protoinstance DEF ExampleViewPositionOrientation",
      "nodeType": "protoinstance",
      "children": [
        {
          "string": " fieldvalue",
          "nodeType": "fieldvalue",
          "children": []
        }
      ],
      "name": "ViewPositionOrientation",
      "DEF": "ExampleViewPositionOrientation"
    },
    "/*====================*/"
  ]
}