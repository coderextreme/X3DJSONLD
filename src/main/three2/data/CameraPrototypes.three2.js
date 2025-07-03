{
  "string": "Scene",
  "children": [
    "/*=============== Camera ==============*/",
    {
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protointerface",
          "nodeType": "protointerface",
          "children": [
            "/*Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields*/",
            {
              "string": " field",
              "nodeType": "field",
              "children": [
                "/*initialization nodes (if any) go here*/",
                "/*initialization node (if any) goes here*/"
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " viewpoint DEF CameraViewpoint",
              "nodeType": "viewpoint",
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
              "DEF": "CameraViewpoint"
            },
            "/*NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation*/",
            {
              "string": " navigationinfo DEF CameraNavInfo",
              "nodeType": "navigationinfo",
              "children": [
                {
                  "string": " is",
                  "nodeType": "is",
                  "children": [
                    {
                      "string": " connect",
                      "nodeType": "connect",
                      "children": []
                    },
                    "/*No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.*/"
                  ]
                }
              ],
              "DEF": "CameraNavInfo",
              "type": [
                "EXAMINE",
                "FLY",
                "ANY"
              ]
            },
            "/*this DirectionalLight replaces NavigationInfo headlight in order to add color capability*/",
            {
              "string": " directionallight DEF CameraDirectionalLight",
              "nodeType": "directionallight",
              "children": [
                "/*TODO confirm other default field values match NavigationInfo spec*/",
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
              "DEF": "CameraDirectionalLight",
              "global": true
            },
            {
              "string": " positioninterpolator DEF CameraPositionInterpolator",
              "nodeType": "positioninterpolator",
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
              "DEF": "CameraPositionInterpolator",
              "key": [
                0,
                1
              ],
              "keyValue": [
                {
                  "x": 0,
                  "y": 0,
                  "z": 0
                },
                {
                  "x": 0,
                  "y": 0,
                  "z": 0
                }
              ]
            },
            {
              "string": " orientationinterpolator DEF CameraOrientationInterpolator",
              "nodeType": "orientationinterpolator",
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
              "DEF": "CameraOrientationInterpolator",
              "key": [
                0,
                1
              ],
              "keyValue": [
                {
                  "x": 0,
                  "y": 1,
                  "z": 0,
                  "w": 0
                },
                {
                  "x": 0,
                  "y": 1,
                  "z": 0,
                  "w": 0
                }
              ]
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "value_changed",
              "fromNode": "CameraPositionInterpolator",
              "toField": "position",
              "toNode": "CameraViewpoint"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "value_changed",
              "fromNode": "CameraOrientationInterpolator",
              "toField": "orientation",
              "toNode": "CameraViewpoint"
            },
            {
              "string": " script DEF CameraScript",
              "nodeType": "script",
              "children": [
                "/*binding is controlled externally, all camera operations proceed the same regardless of whether bound or not*/",
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": [
                    "/*initialization nodes (if any) go here*/",
                    "/*initialization node (if any) goes here*/",
                    {
                      "string": " viewpoint USE CameraViewpoint",
                      "nodeType": "viewpoint",
                      "children": [],
                      "USE": "CameraViewpoint"
                    },
                    {
                      "string": " navigationinfo USE CameraNavInfo",
                      "nodeType": "navigationinfo",
                      "children": [],
                      "USE": "CameraNavInfo"
                    },
                    {
                      "string": " positioninterpolator USE CameraPositionInterpolator",
                      "nodeType": "positioninterpolator",
                      "children": [],
                      "USE": "CameraPositionInterpolator"
                    },
                    {
                      "string": " orientationinterpolator USE CameraOrientationInterpolator",
                      "nodeType": "orientationinterpolator",
                      "children": [],
                      "USE": "CameraOrientationInterpolator"
                    }
                  ]
                },
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
                },
                "<script>\r\n\r\necmascript:\r\nfunction initialize () // CameraScript\r\n{\r\n//  tracePrint ('initialize start...');\r\n\r\n    NavInfoNode.avatarSize[0]   = nearClipPlane;\r\n\r\n    // remaining setups deferred to invocation of checkShots() method\r\n    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\r\n    alwaysPrint ('initialize complete');\r\n}\r\n\r\nfunction checkShots (eventValue)\r\n{\r\n    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\r\n\r\n    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\r\n    totalDuration= 0;\r\n    shotCount  = shots.length;\r\n    movesCount = 0;\r\n    for (i = 0; i < shotCount; i++) // shots index\r\n    {\r\n       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\r\n       movesCount   += shots[i].moves.length;\r\n       totalDuration = totalDuration + shots[i].shotDuration;\r\n       if (shots[i].moves.length == 0)\r\n       {\r\n          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\r\n       }\r\n    }\r\n    // size checks before proceeding\r\n    if (shotCount == 0)\r\n    {\r\n       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\r\n       return;\r\n    }\r\n    else if (movesCount == 0)\r\n    {\r\n       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\r\n       return;\r\n    }\r\n    else if (totalDuration == 0)\r\n    {\r\n       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\r\n       return;\r\n    }\r\n    tracePrint ('number of contained CameraShot nodes=' + shotCount);\r\n    tracePrint ('number of contained CameraMove nodes=' + movesCount);\r\n    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\r\n\r\n    // compute interpolators\r\n    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\r\n    for (i = 0; i < shotCount; i++) // shots index\r\n    {\r\n        if (i==0) // initial entries\r\n        {\r\n           key[0]                   = 0.0; // no previous move\r\n           keyValuePosition[0]      = shots[i].initialPosition;\r\n           keyValueOrientation[0]   = shots[i].initialOrientation;\r\n        }\r\n        else     // new shot repositions, reorients camera as clean break from preceding shot/move\r\n        {\r\n           key[k+1]                 = key[k]; // start from end from previous move\r\n           keyValuePosition[k+1]    = shots[i].initialPosition;\r\n           keyValueOrientation[k+1] = shots[i].initialOrientation;\r\n           k++;\r\n        }\r\n        tracePrint (shots[i].description);\r\n        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\r\n\r\n        for (j = 0; j < shots[i].moves.length; j++) // moves index\r\n        {\r\n            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\r\n            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\r\n            //  tracePrint ('durationFloat=' + durationFloat);\r\n            key[k+1]               = key[k] + (durationFloat / totalDuration);\r\n            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\r\n            if (!animated)\r\n            {\r\n                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\r\n            }\r\n            else\r\n            {\r\n                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\r\n                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\r\n\r\n                // test if difference vector is zero, if so maintain previous rotation\r\n                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\r\n                if (shotVector.length() >= 0)\r\n                {\r\n                    // default view direction is along -Z axis\r\n                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\r\n                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\r\n                }\r\n                else // note (k > 0)\r\n                {\r\n                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\r\n                }\r\n\r\n                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\r\n                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\r\n                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\r\n                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\r\n                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\r\n                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\n');\r\n            }\r\n            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\r\n\r\n            // check animated parameter:  set true if any of moves are tracking moves\r\n            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\r\n         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\r\n\r\n            // intermediate trace\r\n            tracePrint ('                key=' + key);\r\n            tracePrint ('   keyValuePosition=' + keyValuePosition);\r\n            tracePrint ('keyValueOrientation=' + keyValueOrientation);\r\n            tracePrint ('- ' + shots[i].moves[j].description);\r\n        }\r\n    }\r\n    tracePrint ('                key=' + key);\r\n    tracePrint ('   keyValuePosition=' + keyValuePosition);\r\n    tracePrint ('keyValueOrientation=' + keyValueOrientation);\r\n    if (key.length != keyValuePosition.length)\r\n    {\r\n      alwaysPrint ('warning: internal error during array construction, ' +\r\n                  'key.length=' + key.length + ' must equal ' +\r\n                  'keyValuePosition.length=' + keyValuePosition.length);\r\n    }\r\n    if (key.length != keyValueOrientation.length)\r\n    {\r\n      alwaysPrint ('warning: internal error during array construction, ' +\r\n                  'key.length=' + key.length + ' must equal ' +\r\n                  'keyValueOrientation.length=' + keyValueOrientation.length);\r\n    }\r\n    if (key.length != (shotCount + movesCount))\r\n    {\r\n      alwaysPrint ('warning: internal error during array construction, ' +\r\n                  'key.length=' + key.length + ' must equal ' +\r\n                  '(shotCount + movesCount)=' + (shotCount + movesCount));\r\n    }\r\n    tracePrint ('           animated=' + animated);\r\n    // set node values\r\n    CameraPI.key      = key;\r\n    CameraOI.key      = key;\r\n    CameraPI.keyValue = keyValuePosition;\r\n    CameraOI.keyValue = keyValueOrientation;\r\n\r\n    if (!animated) // output results\r\n    {\r\n        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\r\n        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\r\n    }\r\n    tracePrint ('checkShots() complete');\r\n}\r\n\r\nfunction stripBrackets (fieldArray)\r\n{\r\n    // some browsers add brackets to array output strings, this function strips them\r\n    outputString = '';\r\n    for (i = 0; i < fieldArray.length; i++)\r\n    {\r\n       outputString += fieldArray[i].toString();\r\n       if (i < fieldArray.length - 1) outputString += ' ';\r\n    }\r\n    return outputString;\r\n}\r\n\r\nfunction set_fraction (eventValue, timestamp) // input event received for inputOnly field\r\n{\r\n   // traceEnabled = false;  // for testing purposes\r\n\r\n   // if Camera is being animated, immediately recompute interpolator settings\r\n   if (animated) checkShots (true);\r\n\r\n   // trace progress on console with reduced output frequency\r\n   if (frameCount == 0)\r\n   {\r\n      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\r\n      startTime      = timestamp;\r\n      priorTraceTime = timestamp;\r\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\r\n\r\n      if (animated) // output results\r\n      {\r\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\r\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\r\n        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\r\n      }\r\n   }\r\n   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\r\n   {\r\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\r\n      priorTraceTime = timestamp;\r\n\r\n      if (animated) // output results\r\n      {\r\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\r\n        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\r\n        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\r\n      }\r\n   }\r\n   if (eventValue == 0)\r\n   {\r\n      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\r\n      frameCount++;\r\n   }\r\n   else if (eventValue == 1)\r\n   {\r\n      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\r\n      if (animated) // output results\r\n      {\r\n        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\r\n      }\r\n      alwaysPrint ('Animation loop complete.');\r\n      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\r\n   }\r\n   else\r\n   {\r\n      frameCount++;\r\n   }\r\n}\r\n\r\nfunction set_bind (eventValue) // input event received for inputOnly field\r\n{\r\n   // need to ensure CameraShot nodes are properly initialized\r\n   if (initialized == false)\r\n   {\r\n      checkShots (true);\r\n      initialized = true;\r\n   }\r\n   if (eventValue)\r\n   {\r\n       tracePrint ('Camera has been bound');\r\n   }\r\n   else\r\n   {\r\n       tracePrint ('Camera has been unbound');\r\n   }\r\n}\r\n\r\nfunction set_description (eventValue) // input event received for inputOutput field\r\n{\r\n    description = eventValue;\r\n}\r\n\r\nfunction set_position (eventValue) // input event received for inputOutput field\r\n{\r\n    position = eventValue;\r\n}\r\n\r\nfunction set_orientation (eventValue) // input event received for inputOutput field\r\n{\r\n    orientation = eventValue;\r\n}\r\n\r\nfunction set_fieldOfView (eventValue) // input event received for inputOutput field\r\n{\r\n    fieldOfView = eventValue;\r\n}\r\n\r\nfunction set_nearClipPlane (eventValue) // input event received for inputOutput field\r\n{\r\n    nearClipPlane = eventValue;\r\n}\r\n\r\nfunction set_farClipPlane (eventValue) // input event received for inputOutput field\r\n{\r\n    farClipPlane = eventValue;\r\n}\r\n\r\nfunction set_shots (eventValue) // input event received for inputOutput field\r\n{\r\n    shots = eventValue;\r\n}\r\n\r\nfunction set_filterColor (eventValue) // input event received for inputOutput field\r\n{\r\n    filterColor = eventValue;\r\n}\r\n\r\nfunction set_filterTransparency (eventValue) // input event received for inputOutput field\r\n{\r\n    filterTransparency = eventValue;\r\n}\r\n\r\nfunction set_upVector (eventValue) // input event received for inputOutput field\r\n{\r\n    upVector = eventValue;\r\n}\r\n\r\nfunction set_fStop (eventValue) // input event received for inputOutput field\r\n{\r\n    fStop = eventValue;\r\n}\r\n\r\nfunction set_focusDistance (eventValue) // input event received for inputOutput field\r\n{\r\n    focusDistance = eventValue;\r\n}\r\n\r\nfunction set_offlineRender (eventValue) // input event received for inputOutput field\r\n{\r\n    offlineRender = eventValue;\r\n}\r\n\r\nfunction set_key (eventValue) // input event received for inputOutput field\r\n{\r\n    key = eventValue;\r\n}\r\n\r\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\r\n{\r\n    keyValuePosition = eventValue;\r\n}\r\n\r\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\r\n{\r\n    keyValueOrientation = eventValue;\r\n}\r\n\r\nfunction set_animated (eventValue) // input event received for inputOutput field\r\n{\r\n    animated = eventValue;\r\n}\r\n\r\nfunction tracePrint (outputValue)\r\n{\r\n\tif (traceEnabled) alwaysPrint (outputValue);\r\n}\r\nfunction alwaysPrint (outputValue)\r\n{\r\n    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\r\n    var outputString = outputValue.toString(); // utility function according to spec\r\n    if (outputString == null) outputString = outputValue; // direct cast\r\n\r\n    if  (description.length > 0)\r\n         Browser.print ('[Camera: ' + description + '] ' + outputString + '\n');\r\n    else\r\n         Browser.print ('[Camera] ' + outputString + '\n');\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "CameraScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "position",
              "fromNode": "CameraScript",
              "toField": "position",
              "toNode": "CameraViewpoint"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "orientation",
              "fromNode": "CameraScript",
              "toField": "orientation",
              "toNode": "CameraViewpoint"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "isActive",
              "fromNode": "CameraScript",
              "toField": "set_bind",
              "toNode": "CameraViewpoint"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "isActive",
              "fromNode": "CameraScript",
              "toField": "set_bind",
              "toNode": "CameraNavInfo"
            },
            {
              "string": " route",
              "nodeType": "route",
              "children": [],
              "fromField": "isActive",
              "fromNode": "CameraScript",
              "toField": "on",
              "toNode": "CameraDirectionalLight"
            }
          ]
        }
      ],
      "name": "Camera",
      "appinfo": "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."
    },
    "/*=============== CameraShot ==============*/",
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
                "/*initializing CameraMovement nodes are inserted here by scene author using ProtoInstance*/"
              ]
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            {
              "string": " script DEF CameraShotScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": [
                    "/*initialization nodes (if any) go here*/"
                  ]
                },
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
                },
                "<script>\r\n\r\necmascript:\r\nfunction initialize () // CameraShotScript\r\n{\r\n//  tracePrint ('initialize start...');\r\n\r\n    // compute shotDuration by summing durations from contained CameraMovement nodes\r\n    shotDuration = 0;\r\n    for (i = 0; i < moves.length; i++)\r\n    {\r\n        shotDuration = shotDuration + moves[i].duration;\r\n    }\r\n    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\r\n\r\n//  tracePrint ('... initialize() complete');\r\n}\r\n\r\nfunction set_description (eventValue) // input event received for inputOutput field\r\n{\r\n    description = eventValue;\r\n}\r\n\r\nfunction set_enabled (eventValue) // input event received for inputOutput field\r\n{\r\n    enabled = eventValue;\r\n}\r\n\r\nfunction set_moves (eventValue) // input event received for inputOutput field\r\n{\r\n    moves = eventValue;\r\n}\r\n\r\nfunction set_initialPosition (eventValue) // input event received for inputOutput field\r\n{\r\n    initialPosition = eventValue;\r\n}\r\n\r\nfunction set_initialOrientation (eventValue) // input event received for inputOutput field\r\n{\r\n    initialOrientation = eventValue;\r\n}\r\n\r\nfunction set_initialAimPoint (eventValue) // input event received for inputOutput field\r\n{\r\n    initialAimPoint = eventValue;\r\n}\r\n\r\nfunction set_initialFieldOfView (eventValue) // input event received for inputOutput field\r\n{\r\n    initialFieldOfView = eventValue;\r\n}\r\n\r\nfunction set_initialFStop (eventValue) // input event received for inputOutput field\r\n{\r\n    initialFStop = eventValue;\r\n}\r\n\r\nfunction set_initialFocusDistance (eventValue) // input event received for inputOutput field\r\n{\r\n    initialFocusDistance = eventValue;\r\n}\r\n\r\nfunction set_key (eventValue) // input event received for inputOutput field\r\n{\r\n    key = eventValue;\r\n}\r\n\r\nfunction set_keyValuePosition (eventValue) // input event received for inputOutput field\r\n{\r\n    keyValuePosition = eventValue;\r\n}\r\n\r\nfunction set_keyValueOrientation (eventValue) // input event received for inputOutput field\r\n{\r\n    keyValueOrientation = eventValue;\r\n}\r\n\r\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\r\n\r\nfunction tracePrint (outputValue)\r\n{\r\n\tif (traceEnabled) alwaysPrint (outputValue);\r\n}\r\nfunction alwaysPrint (outputValue)\r\n{\r\n\t// try to ensure outputValue is converted to string despite browser idiosyncracies\r\n    var outputString = outputValue.toString(); // utility function according to spec\r\n    if (outputString == null) outputString = outputValue; // direct cast\r\n\r\n    if  (description.length > 0)\r\n         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\n');\r\n    else\r\n         Browser.print ('[CameraShot] ' + outputString + '\n');\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "CameraShotScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            "/*Add any ROUTEs here, going from Script to other nodes within ProtoBody*/"
          ]
        }
      ],
      "name": "CameraShot",
      "appinfo": "CameraShot collects a specific set of CameraMovement animations that make up an individual shot."
    },
    "/*=============== CameraMovement ==============*/",
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
              "children": []
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            "/*First node determines node type of this prototype*/",
            "/*Subsequent nodes do not render, but still must be a valid X3D subgraph*/",
            "/*Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events*/",
            {
              "string": " script DEF CameraMovementScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
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
                },
                "<script>\r\n\r\necmascript:\r\nfunction initialize () // CameraMovementScript\r\n{\r\n//  tracePrint ('initialize start...');\r\n    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\r\n                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\r\n                           );\r\n    if (duration < 0)\r\n    {\r\n       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\r\n       duration = 0;\r\n    }\r\n    else if (duration == 0)\r\n    {\r\n       alwaysPrint ('warning: duration=0, nothing to do!');\r\n    }\r\n    tracePrint ('... initialize complete');\r\n}\r\n\r\nfunction set_goalAimPoint (eventValue) // input event received for inputOutput field\r\n{\r\n    goalAimPoint_changed = eventValue;\r\n    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\r\n\r\n    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\r\n}\r\n\r\nfunction set_description (eventValue) // input event received for inputOutput field\r\n{\r\n    description = eventValue;\r\n}\r\n\r\nfunction set_enabled (eventValue) // input event received for inputOutput field\r\n{\r\n    enabled = eventValue;\r\n}\r\n\r\nfunction set_duration (eventValue) // input event received for inputOutput field\r\n{\r\n    duration = eventValue;\r\n}\r\n\r\nfunction set_goalPosition (eventValue) // input event received for inputOutput field\r\n{\r\n    goalPosition = eventValue;\r\n}\r\n\r\nfunction set_goalOrientation (eventValue) // input event received for inputOutput field\r\n{\r\n    goalOrientation = eventValue;\r\n}\r\n\r\nfunction set_tracking (eventValue) // input event received for inputOutput field\r\n{\r\n    tracking = eventValue;\r\n}\r\n\r\nfunction set_goalFieldOfView (eventValue) // input event received for inputOutput field\r\n{\r\n    goalFieldOfView = eventValue;\r\n}\r\n\r\nfunction set_goalFStop (eventValue) // input event received for inputOutput field\r\n{\r\n    goalFStop = eventValue;\r\n}\r\n\r\nfunction set_goalFocusDistance (eventValue) // input event received for inputOutput field\r\n{\r\n    goalFocusDistance = eventValue;\r\n}\r\n\r\n// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\r\n\r\nfunction tracePrint (outputValue)\r\n{\r\n\tif (traceEnabled) alwaysPrint (outputValue);\r\n}\r\n\r\nfunction alwaysPrint (outputValue)\r\n{\r\n\t// try to ensure outputValue is converted to string despite browser idiosyncracies\r\n    var outputString = outputValue.toString(); // utility function according to spec\r\n    if (outputString == null) outputString = outputValue; // direct cast\r\n\r\n    if  (description.length > 0)\r\n         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\n');\r\n    else\r\n         Browser.print ('[CameraMovement] ' + outputString + '\n');\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "CameraMovementScript",
              "directOutput": true,
              "mustEvaluate": true
            },
            "/*Add any ROUTEs here, going from Script to other nodes within ProtoBody*/"
          ]
        }
      ],
      "name": "CameraMovement",
      "appinfo": "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."
    },
    "/*=============== OfflineRender ==============*/",
    {
      "string": " protodeclare",
      "nodeType": "protodeclare",
      "children": [
        {
          "string": " protointerface",
          "nodeType": "protointerface",
          "children": [
            "/*TODO non-photorealistic rendering (NPR) parameters*/",
            {
              "string": " field",
              "nodeType": "field",
              "children": []
            }
          ]
        },
        {
          "string": " protobody",
          "nodeType": "protobody",
          "children": [
            "/*First node determines node type of this prototype*/",
            "/*Subsequent nodes do not render, but still must be a valid X3D subgraph*/",
            {
              "string": " script DEF OfflineRenderScript",
              "nodeType": "script",
              "children": [
                {
                  "string": " field",
                  "nodeType": "field",
                  "children": []
                },
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
                },
                "<script>\r\n\r\necmascript:\r\nfunction initialize () // OfflineRenderScript\r\n{\r\n//  tracePrint ('initialize start...');\r\n\r\n    tracePrint ('... initialize complete');\r\n}\r\n\r\nfunction set_description (eventValue) // input event received for inputOutput field\r\n{\r\n    description = eventValue;\r\n}\r\n\r\nfunction set_enabled (eventValue) // input event received for inputOutput field\r\n{\r\n    enabled = eventValue;\r\n}\r\n\r\nfunction set_frameRate (eventValue) // input event received for inputOutput field\r\n{\r\n    frameRate = eventValue;\r\n}\r\n\r\nfunction set_frameSize (eventValue) // input event received for inputOutput field\r\n{\r\n    frameSize = eventValue;\r\n}\r\n\r\nfunction set_pixelAspectRatio (eventValue) // input event received for inputOutput field\r\n{\r\n    pixelAspectRatio = eventValue;\r\n}\r\n\r\nfunction set_startTime (eventValue) // input event received for inputOnly field\r\n{\r\n   // do something with input eventValue;\r\n}\r\n\r\nfunction tracePrint (outputValue)\r\n{\r\n\tif (traceEnabled) alwaysPrint (outputValue);\r\n}\r\n\r\nfunction alwaysPrint (outputValue)\r\n{\r\n\t// try to ensure outputValue is converted to string despite browser idiosyncracies\r\n    var outputString = outputValue.toString(); // utility function according to spec\r\n    if (outputString == null) outputString = outputValue; // direct cast\r\n\r\n    if  (description.length > 0)\r\n         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\n');\r\n    else\r\n         Browser.print ('[OfflineRender] ' + outputString + '\n');\r\n}\r\n\r\n</Script>"
              ],
              "DEF": "OfflineRenderScript",
              "mustEvaluate": true
            },
            "/*Add any ROUTEs here, going from Script to other nodes within ProtoBody*/"
          ]
        }
      ],
      "name": "OfflineRender",
      "appinfo": "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."
    },
    "/*=============== Launch Prototype Example ==============*/",
    {
      "string": " background",
      "nodeType": "background",
      "children": [],
      "skyColor": [
        {
          "r": 0.282353,
          "g": 0.380392,
          "b": 0.470588
        }
      ]
    },
    {
      "string": " anchor",
      "nodeType": "anchor",
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
                  "string": [
                    "CameraPrototypes.x3d",
                    "defines multiple prototype nodes",
                    "",
                    "Click on this text to see",
                    "CameraExamples.x3d scene"
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
                      "diffuseColor": {
                        "r": 1,
                        "g": 1,
                        "b": 0.2
                      }
                    }
                  ]
                }
              ]
            }
          ]
        }
      ],
      "description": "launch CameraExample scene",
      "url": [
        "CameraExamples.x3d",
        "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d",
        "CameraExamples.wrl",
        "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"
      ]
    }
  ]
}