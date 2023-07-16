// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('CameraExamples.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.')),

            meta(
              name_ : SFString('documentation'),
              content_ : SFString('Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman and Jeff Weekley')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('18 June 2009')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 January 2020')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('Schematron rules, backed up by initialize() checks')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BeyondViewpointCameraNodesWeb3D2009.pdf')),

            meta(
              name_ : SFString('MovingImage'),
              content_ : SFString('CameraExamplesDemo.mp4')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Camera nodes for Viewpoint navigation control')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('CameraPrototypes.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('CameraExamplesConsoleLog.txt')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          /*=============== Camera ==============*/
          children_ : [
            WorldInfo(
              title_ : SFString('CameraExamples.x3d')),

            ExternProtoDeclare(
              name_ : SFString('Camera'),
              appinfo_ : SFString('Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images'),
              url_ : MFString([SFString("CameraPrototypes.x3d#Camera"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera"), SFString("CameraPrototypes.wrl#Camera"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera")]),
              field_ : [
                field(
                  type_ : SFString("SFString"),
                  name_ : SFString('description'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Text description to be displayed for this Camera')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('position'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('orientation'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('fieldOfView'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('pi/4')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('set_fraction'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('input fraction drives interpolators')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('set_bind'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('input event binds or unbinds this Camera')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('bindTime'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('output event indicates when this Camera is bound')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('isBound'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('output event indicates whether this Camera is bound or unbound')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('nearClipPlane'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('farClipPlane'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit')),

                field(
                  type_ : SFString("MFNode"),
                  name_ : SFString('shots'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Array of CameraShot nodes which in turn contain CameraMovement nodes')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('headlight'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Whether camera headlight is on or off')),

                field(
                  type_ : SFString("SFColor"),
                  name_ : SFString('headlightColor'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Camera headlight color')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('headlightIntensity'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Camera headlight intensity')),

                field(
                  type_ : SFString("SFColor"),
                  name_ : SFString('filterColor'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Camera filter color that modifies virtual lens capture')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('filterTransparency'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Camera filter transparency that modifies virtual lens capture')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('upVector'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('upVector changes modify camera orientation (and possibly vice versa)')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('fStop'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Focal length divided effective aperture diameter indicating width of focal plane')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('focusDistance'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Distance to focal plane of sharpest focus')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('isActive'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Mark start/stop with true/false output respectively useful to trigger external animations')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('totalDuration'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Total duration of contained enabled CameraShot (and thus CameraMovement) move durations')),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('offlineRender'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('OfflineRender node')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('enable console output to trace script computations and prototype progress')),
              /*Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields*/]),
          /*=============== CameraShot ==============*/

            ExternProtoDeclare(
              name_ : SFString('CameraShot'),
              appinfo_ : SFString('CameraShot collects a specific set of CameraMovement animations that make up an individual shot'),
              url_ : MFString([SFString("CameraPrototypes.x3d#CameraShot"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot"), SFString("CameraPrototypes.wrl#CameraShot"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot")]),
              field_ : [
                field(
                  type_ : SFString("SFString"),
                  name_ : SFString('description'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Text description to be displayed for this CameraShot')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Whether this CameraShot can be activated')),

                field(
                  type_ : SFString("MFNode"),
                  name_ : SFString('moves'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Set of CameraMovement nodes'),
                  /*initializing CameraMovement nodes are inserted here by scene author using ProtoInstance*/),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('initialPosition'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Setup to reinitialize camera position for this shot')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('initialOrientation'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Setup to reinitialize camera rotation for this shot')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('initialAimPoint'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Setup to reinitialize aimpoint (relative location for camera direction) for this shot')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('initialFieldOfView'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('pi/4')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('initialFStop'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Focal length divided effective aperture diameter indicating width of focal plane')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('initialFocusDistance'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Distance to focal plane of sharpest focus')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('shotDuration'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Subtotal duration of contained CameraMovement move durations')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('isActive'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Mark start/stop with true/false output respectively useful to trigger external animations')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('enable console output to trace script computations and prototype progress'))]),
          /*=============== CameraMovement ==============*/

            ExternProtoDeclare(
              name_ : SFString('CameraMovement'),
              appinfo_ : SFString('CameraMovement defines a single camera movement animation'),
              url_ : MFString([SFString("CameraPrototypes.x3d#CameraMovement"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement"), SFString("CameraPrototypes.wrl#CameraMovement"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement")]),
              field_ : [
                field(
                  type_ : SFString("SFString"),
                  name_ : SFString('description'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Text description to be displayed for this CameraMovement')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Whether this CameraMovement can be activated')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('duration'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Duration in seconds for this move')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('goalPosition'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Goal camera position for this move')),

                field(
                  type_ : SFString("SFRotation"),
                  name_ : SFString('goalOrientation'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Goal camera rotation for this move')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('tracking'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Whether or not camera direction is tracking towards the aimPoint')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('goalAimPoint'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Goal aimPoint for this move, ignored if tracking=false')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('goalFieldOfView'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Goal fieldOfView for this move')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('goalFStop'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Focal length divided effective aperture diameter indicating width of focal plane')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('goalFocusDistance'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Distance to focal plane of sharpest focus')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('isActive'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Mark start/stop with true/false output respectively useful to trigger external animations')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('enable console output to trace script computations and prototype progress'))]),
          /*=============== OfflineRender ==============*/

            ExternProtoDeclare(
              name_ : SFString('OfflineRender'),
              appinfo_ : SFString('OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)'),
              url_ : MFString([SFString("CameraPrototypes.x3d#OfflineRender"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender"), SFString("CameraPrototypes.wrl#OfflineRender"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender")]),
              field_ : [
                field(
                  type_ : SFString("SFString"),
                  name_ : SFString('description'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Text description to be displayed for this OfflineRender')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Whether this OfflineRender can be activated')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('frameRate'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Frames per second recorded for this rendering')),

                field(
                  type_ : SFString("SFVec2f"),
                  name_ : SFString('frameSize'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Size of frame in number of pixels width and height')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('pixelAspectRatio'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('Relative dimensions of pixel height/width typically 1.33 or 1')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('set_startTime'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('Begin render operation')),

                field(
                  type_ : SFString("SFFloat"),
                  name_ : SFString('progress'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Progress performing render operation (0..1)')),

                field(
                  type_ : SFString("SFTime"),
                  name_ : SFString('renderCompleteTime'),
                  accessType_ : SFString("outputOnly"),
                  appinfo_ : SFString('Render operation complete')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('movieFormat'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('Format of rendered output movie (mpeg mp4 etc.), use first supported format')),

                field(
                  type_ : SFString("MFString"),
                  name_ : SFString('imageFormat'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('Format of rendered output images (png jpeg gif tiff etc.) use first supported format')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('traceEnabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('enable console output to trace script computations and prototype progress')),
              /*TODO non-photorealistic rendering (NPR) parameters*/]),
          /*=============== Lights, camera, action! ==============*/

            DirectionalLight(
              direction_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)]),
              global_ : true,
              intensity_ : 0.8),

            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("ANY")])),

            Viewpoint(
              description_ : SFString('Camera test scene entry view'),
              position_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(12)])),

            Viewpoint(
              description_ : SFString('Camera test scene from above'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(150), SFDouble(0)])),
          /*Keep prototype instances in same file while developing, then move later*/
          /*We will create examples matching those in the paper*/
          /*=============== Camera.SimpleShotsTest ==============*/

            ProtoInstance(
              name_ : SFString('Camera'),
              DEF_ : SFString('Camera.SimpleShotsTest'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt')),

                fieldValue(
                  name_ : SFString('headlight'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('position'),
                  value_ : SFString('-4 4 10')),

                fieldValue(
                  name_ : SFString('shots'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('CameraShot'),
                      DEF_ : SFString('Zoom'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('Simple shot of Camera Zoom')),

                        fieldValue(
                          name_ : SFString('initialPosition'),
                          value_ : SFString('-50 1 -10')),

                        fieldValue(
                          name_ : SFString('initialOrientation'),
                          value_ : SFString('0 1 0 0')),

                        fieldValue(
                          name_ : SFString('moves'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Zoom In')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-50 1 -15')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Zoom Out')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-50 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('1')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-50 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))])])]),

                    ProtoInstance(
                      name_ : SFString('CameraShot'),
                      DEF_ : SFString('Dolly'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('Simple shot of Camera Dolly')),

                        fieldValue(
                          name_ : SFString('initialPosition'),
                          value_ : SFString('-40 1 -10')),

                        fieldValue(
                          name_ : SFString('initialOrientation'),
                          value_ : SFString('0 1 0 0')),

                        fieldValue(
                          name_ : SFString('moves'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('DollyMove1'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Dolly from Right to Left')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-45 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Dolly from Left to Right')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-40 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('1')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-40 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))])])]),

                    ProtoInstance(
                      name_ : SFString('CameraShot'),
                      DEF_ : SFString('Pan'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('Simple shot of Camera Pan left right and back to center')),

                        fieldValue(
                          name_ : SFString('initialPosition'),
                          value_ : SFString('-30 1 -10')),

                        fieldValue(
                          name_ : SFString('initialOrientation'),
                          value_ : SFString('0 1 0 0')),

                        fieldValue(
                          name_ : SFString('moves'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('PanLeft'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Pan Left')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('2')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-30 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0.4'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('PanRight'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Pan Right')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-30 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 -0.4'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Pan back to Center')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('2')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-30 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('2')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-30 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))])])]),

                    ProtoInstance(
                      name_ : SFString('CameraShot'),
                      DEF_ : SFString('CameraBoom'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('Camera Boom')),

                        fieldValue(
                          name_ : SFString('initialPosition'),
                          value_ : SFString('-20 1 -10')),

                        fieldValue(
                          name_ : SFString('initialOrientation'),
                          value_ : SFString('0 1 0 0')),

                        fieldValue(
                          name_ : SFString('moves'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('CameraBoomUp'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Boom Up')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-20 5 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('BoomDown'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Boom Down')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-20 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('BoomPause'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('2')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-20 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0'))])])]),

                    ProtoInstance(
                      name_ : SFString('CameraShot'),
                      DEF_ : SFString('CameraTilt'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('Camera Tilt')),

                        fieldValue(
                          name_ : SFString('initialPosition'),
                          value_ : SFString('-10 1 -10')),

                        fieldValue(
                          name_ : SFString('initialOrientation'),
                          value_ : SFString('0 0 1 0')),

                        fieldValue(
                          name_ : SFString('traceEnabled'),
                          value_ : SFString('true')),

                        fieldValue(
                          name_ : SFString('moves'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Tilt Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('1')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-10 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('TiltDown'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Tilt Left')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-10 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 0.785'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('TiltPause'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Tilt Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('1')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-10 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 0.785'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Tilt Right')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-10 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 -0.785'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Tilt Pause')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('1')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-10 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 -0.785'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('TiltReset'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Camera Tilt Reset')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('1')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('-10 1 -10')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 0'))]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('TiltUp'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('Return to home')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('2')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('0 2 12')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 0 1 0'))])])])])]),

            Group(
              DEF_ : SFString('AnimationGroup.SimpleShots'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('CameraTimer.SimpleShots')),
              /*initialize clock to match totalDuration of combined Shot Moves*/

                ROUTE(
                  fromField_ : SFString('totalDuration'),
                  fromNode_ : SFString('Camera.SimpleShotsTest'),
                  toField_ : SFString('cycleInterval'),
                  toNode_ : SFString('CameraTimer.SimpleShots')),
              /*TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator*/

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('CameraTimer.SimpleShots'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Camera.SimpleShotsTest')),

                Transform(
                  DEF_ : SFString('Trigger.SimpleShots'),
                  translation_ : SFVec3f([SFDouble(-4), SFDouble(4), SFDouble(0)]),
                  children_ : [
                    BooleanFilter(
                      DEF_ : SFString('TextTouchActive.SimpleShotsFilter')),

                    TouchSensor(
                      DEF_ : SFString('TextTouch.SimpleShots'),
                      description_ : SFString('touch to animate Camera SimpleShotsTest')),

                    ROUTE(
                      fromField_ : SFString('inputTrue'),
                      fromNode_ : SFString('TextTouchActive.SimpleShotsFilter'),
                      toField_ : SFString('set_bind'),
                      toNode_ : SFString('Camera.SimpleShotsTest')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('TextTouch.SimpleShots'),
                      toField_ : SFString('set_boolean'),
                      toNode_ : SFString('TextTouchActive.SimpleShotsFilter')),

                    ROUTE(
                      fromField_ : SFString('touchTime'),
                      fromNode_ : SFString('TextTouch.SimpleShots'),
                      toField_ : SFString('startTime'),
                      toNode_ : SFString('CameraTimer.SimpleShots')),

                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Click to animate"), SFString("SimpleShotsTest")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('ArtDeco5'),
                              ambientIntensity_ : 0.24,
                              diffuseColor_ : SFColor([SFDouble(0.945455), SFDouble(0.318988), SFDouble(0.321717)]),
                              shininess_ : 0.01,
                              specularColor_ : SFColor([SFDouble(0.072727), SFDouble(0.021705), SFDouble(0.010732)]),
                              /*Universal Media Library: ArtDeco 5*/))),
                  /*Simplify intersection test for user selecting text*/

                    Shape(
                      DEF_ : SFString('TransparentBox'),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              transparency_ : 1)),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(6), SFDouble(2), SFDouble(0.0001)])))])]),

            Group(
              DEF_ : SFString('SimpleShotsTargets'),
              children_ : [
                Transform(
                  DEF_ : SFString('TargetBoxZoom'),
                  translation_ : SFVec3f([SFDouble(-50), SFDouble(1), SFDouble(-20)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/CameraMoveZoom.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png")])))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Zoom in, out")]),
                              fontStyle_ : 
                                FontStyle(
                                  justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material()))])]),

                Transform(
                  DEF_ : SFString('TargetBoxDolly'),
                  translation_ : SFVec3f([SFDouble(-40), SFDouble(1), SFDouble(-20)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/CameraMoveDolly.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png")])))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Dolly left, right")]),
                              fontStyle_ : 
                                FontStyle(
                                  justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material()))])]),

                Transform(
                  DEF_ : SFString('TargetBoxPan'),
                  translation_ : SFVec3f([SFDouble(-30), SFDouble(1), SFDouble(-20)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/CameraMovePan.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png")])))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Pan left, right")]),
                              fontStyle_ : 
                                FontStyle(
                                  justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material()))])]),

                Transform(
                  DEF_ : SFString('TargetBoxBoom'),
                  translation_ : SFVec3f([SFDouble(-20), SFDouble(1), SFDouble(-20)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/CameraMoveBoom.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png")])))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Boom up, down")]),
                              fontStyle_ : 
                                FontStyle(
                                  justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material()))])]),

                Transform(
                  DEF_ : SFString('TargetBoxTilt'),
                  translation_ : SFVec3f([SFDouble(-10), SFDouble(1), SFDouble(-20)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Box(),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(),
                          texture_ : 
                            ImageTexture(
                              url_ : MFString([SFString("images/CameraMoveTilt.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png")])))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Tilt left, right")]),
                              fontStyle_ : 
                                FontStyle(
                                  justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material()))])])]),
          /*=============== Camera.AimPointTest ==============*/

            ProtoInstance(
              name_ : SFString('Camera'),
              DEF_ : SFString('Camera.AimPointTest'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('description'),
                  value_ : SFString('AimPointTest for moving camera tracking moving target')),

                fieldValue(
                  name_ : SFString('position'),
                  value_ : SFString('4 4 10')),

                fieldValue(
                  name_ : SFString('shots'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('CameraShot'),
                      DEF_ : SFString('Shot5'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('description'),
                          value_ : SFString('#3 Tracking shot')),

                        fieldValue(
                          name_ : SFString('initialPosition'),
                          value_ : SFString('6 6 10')),

                        fieldValue(
                          name_ : SFString('initialOrientation'),
                          value_ : SFString('0 1 0 0')),

                        fieldValue(
                          name_ : SFString('moves'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('MoveAimPoint3.1'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('AimPoint 3.1 moving BoxPath')),

                                fieldValue(
                                  name_ : SFString('tracking'),
                                  value_ : SFString('true')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('8')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('6 6 10')),
                              /*goalAimPoint modified by ROUTE to match moving Box*/]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('MoveAimPoint3.2'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('AimPoint 3.2 pan right while tracking')),

                                fieldValue(
                                  name_ : SFString('tracking'),
                                  value_ : SFString('true')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('8')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('40 6 12')),
                              /*goalAimPoint modified by ROUTE to match moving Box*/]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('MoveAimPoint3.3'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('AimPoint 3.3 boom up while tracking')),

                                fieldValue(
                                  name_ : SFString('tracking'),
                                  value_ : SFString('true')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('3')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('40 20 13')),
                              /*goalAimPoint modified by ROUTE to match moving Box*/]),

                            ProtoInstance(
                              name_ : SFString('CameraMovement'),
                              DEF_ : SFString('MoveAimPoint3.4'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('description'),
                                  value_ : SFString('AimPoint 3.4 restore camera back to home')),

                                fieldValue(
                                  name_ : SFString('tracking'),
                                  value_ : SFString('true')),

                                fieldValue(
                                  name_ : SFString('duration'),
                                  value_ : SFString('5')),

                                fieldValue(
                                  name_ : SFString('goalPosition'),
                                  value_ : SFString('4 4 10')),

                                fieldValue(
                                  name_ : SFString('goalAimPoint'),
                                  value_ : SFString('4 4 0')),

                                fieldValue(
                                  name_ : SFString('goalOrientation'),
                                  value_ : SFString('0 1 0 0')),
                              /*can test tracking or not using these values*/])])])])]),

            Group(
              DEF_ : SFString('AnimationGroup.AimPointTest'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('CameraTimer.AimPointTest')),
              /*initialize clock to match totalDuration of combined Shot Moves*/

                ROUTE(
                  fromField_ : SFString('totalDuration'),
                  fromNode_ : SFString('Camera.AimPointTest'),
                  toField_ : SFString('cycleInterval'),
                  toNode_ : SFString('CameraTimer.AimPointTest')),
              /*TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator*/

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('CameraTimer.AimPointTest'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('Camera.AimPointTest')),

                Transform(
                  DEF_ : SFString('Trigger.AimPointTest'),
                  translation_ : SFVec3f([SFDouble(4), SFDouble(4), SFDouble(0)]),
                  children_ : [
                    BooleanFilter(
                      DEF_ : SFString('TextTouchActive.AimPointFilter')),

                    TouchSensor(
                      DEF_ : SFString('TextTouch.AimPointTest'),
                      description_ : SFString('touch to animate Camera AimPointTest')),

                    ROUTE(
                      fromField_ : SFString('inputTrue'),
                      fromNode_ : SFString('TextTouchActive.AimPointFilter'),
                      toField_ : SFString('set_bind'),
                      toNode_ : SFString('Camera.AimPointTest')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('TextTouch.AimPointTest'),
                      toField_ : SFString('set_boolean'),
                      toNode_ : SFString('TextTouchActive.AimPointFilter')),

                    ROUTE(
                      fromField_ : SFString('touchTime'),
                      fromNode_ : SFString('TextTouch.AimPointTest'),
                      toField_ : SFString('startTime'),
                      toNode_ : SFString('CameraTimer.AimPointTest')),

                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Click to animate"), SFString("AimPointTest")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              USE_ : SFString('ArtDeco5')))),

                    Shape(
                      USE_ : SFString('TransparentBox'))])]),
          /*TODO build a test once implemented*/

            ProtoInstance(
              name_ : SFString('OfflineRender')),
          /*=============== animate a camera shape to visualize view changes ==============*/

            Transform(
              DEF_ : SFString('CameraShapeTransform'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(0.5), SFDouble(0)]),
              /*move CameraShape using active Camera*/
              children_ : [
                ROUTE(
                  fromField_ : SFString('position_changed'),
                  fromNode_ : SFString('Camera.SimpleShotsTest'),
                  toField_ : SFString('translation'),
                  toNode_ : SFString('CameraShapeTransform')),

                ROUTE(
                  fromField_ : SFString('orientation_changed'),
                  fromNode_ : SFString('Camera.SimpleShotsTest'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('CameraShapeTransform')),

                ROUTE(
                  fromField_ : SFString('position'),
                  fromNode_ : SFString('Camera.AimPointTest'),
                  toField_ : SFString('translation'),
                  toNode_ : SFString('CameraShapeTransform')),

                ROUTE(
                  fromField_ : SFString('orientation_changed'),
                  fromNode_ : SFString('Camera.AimPointTest'),
                  toField_ : SFString('rotation'),
                  toNode_ : SFString('CameraShapeTransform')),

                Transform(
                  DEF_ : SFString('CameraOffsetTransform'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.25)]),
                  children_ : [
                    TouchSensor(
                      DEF_ : SFString('CameraShapeTouched')),

                    Inline(
                      DEF_ : SFString('CameraShape'),
                      url_ : MFString([SFString("CameraShape.x3d"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d")])),

                    Shape(
                      DEF_ : SFString('SightLine'),
                      geometry_ : 
                        IndexedLineSet(
                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,-100])]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              emissiveColor_ : SFColor([SFDouble(0.8), SFDouble(0.8), SFDouble(0.4)]))))]),
              /*Display frustum to show camera view within the scene, toggled by user selecting CameraShape*/

                ExternProtoDeclare(
                  name_ : SFString('ViewFrustum'),
                  appinfo_ : SFString('Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes'),
                  url_ : MFString([SFString("../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum"), SFString("../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum")]),
                  field_ : [
                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('ViewpointNode'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('required: insert Viewpoint DEF or USE node for view of interest')),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('NavigationInfoNode'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('required: insert NavigationInfo DEF or USE node of interest')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('visible'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('whether or not frustum geometry is rendered')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('lineColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('RGB color of ViewFrustum outline, default value 0.9 0.9 0.9')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('frustumColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('transparency'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('transparency of ViewFrustum hull geometry, default value 0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('aspectRatio'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('assumed ratio height/width, default value 0.75')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('trace'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('debug support, default false'))]),

                ProtoInstance(
                  name_ : SFString('ViewFrustum'),
                  DEF_ : SFString('ViewFrustumNode'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('ViewpointNode'),
                      children_ : [
                        Viewpoint(
                          DEF_ : SFString('FrustumViewpoint'),
                          description_ : SFString('viewpoint for ViewFrustum'),
                          position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),

                    fieldValue(
                      name_ : SFString('NavigationInfoNode'),
                      children_ : [
                        NavigationInfo(
                          DEF_ : SFString('TestNavigationInfo'),
                          transitionType_ : MFString([SFString("ANIMATE")]),
                          visibilityLimit_ : 100)]),

                    fieldValue(
                      name_ : SFString('visible'),
                      value_ : SFString('false')),

                    fieldValue(
                      name_ : SFString('lineColor'),
                      value_ : SFString('0.9 0.9 0.9')),

                    fieldValue(
                      name_ : SFString('frustumColor'),
                      value_ : SFString('0.8 0.8 0.8')),

                    fieldValue(
                      name_ : SFString('transparency'),
                      value_ : SFString('0.95'))]),

                BooleanToggle(
                  DEF_ : SFString('ViewFrustumToggle')),

                ROUTE(
                  fromField_ : SFString('isActive'),
                  fromNode_ : SFString('CameraShapeTouched'),
                  toField_ : SFString('set_boolean'),
                  toNode_ : SFString('ViewFrustumToggle')),

                ROUTE(
                  fromField_ : SFString('toggle'),
                  fromNode_ : SFString('ViewFrustumToggle'),
                  toField_ : SFString('set_visible'),
                  toNode_ : SFString('ViewFrustumNode'))]),
          /*=============== add checkerboard, axes and other things to look at while animating ==============*/

            Background(
              skyColor_ : MFColor([SFColor(0.282353), SFColor(0.380392), SFColor(0.470588)])),

            Transform(
              rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]),
              scale_ : SFVec3f([SFDouble(10), SFDouble(10), SFDouble(10)]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          ambientIntensity_ : 0.01,
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                          shininess_ : 0.05)),
                  geometry_ : 
                    IndexedFaceSet(
                      colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0), SFInt32(1), SFInt32(0)]),
                      colorPerVertex_ : false,
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(8), SFInt32(9), SFInt32(1), SFInt32(-1), SFInt32(1), SFInt32(9), SFInt32(10), SFInt32(2), SFInt32(-1), SFInt32(2), SFInt32(10), SFInt32(11), SFInt32(3), SFInt32(-1), SFInt32(3), SFInt32(11), SFInt32(12), SFInt32(4), SFInt32(-1), SFInt32(4), SFInt32(12), SFInt32(13), SFInt32(5), SFInt32(-1), SFInt32(5), SFInt32(13), SFInt32(14), SFInt32(6), SFInt32(-1), SFInt32(6), SFInt32(14), SFInt32(15), SFInt32(7), SFInt32(-1), SFInt32(8), SFInt32(16), SFInt32(17), SFInt32(9), SFInt32(-1), SFInt32(9), SFInt32(17), SFInt32(18), SFInt32(10), SFInt32(-1), SFInt32(10), SFInt32(18), SFInt32(19), SFInt32(11), SFInt32(-1), SFInt32(11), SFInt32(19), SFInt32(20), SFInt32(12), SFInt32(-1), SFInt32(12), SFInt32(20), SFInt32(21), SFInt32(13), SFInt32(-1), SFInt32(13), SFInt32(21), SFInt32(22), SFInt32(14), SFInt32(-1), SFInt32(14), SFInt32(22), SFInt32(23), SFInt32(15), SFInt32(-1), SFInt32(16), SFInt32(24), SFInt32(25), SFInt32(17), SFInt32(-1), SFInt32(17), SFInt32(25), SFInt32(26), SFInt32(18), SFInt32(-1), SFInt32(18), SFInt32(26), SFInt32(27), SFInt32(19), SFInt32(-1), SFInt32(19), SFInt32(27), SFInt32(28), SFInt32(20), SFInt32(-1), SFInt32(20), SFInt32(28), SFInt32(29), SFInt32(21), SFInt32(-1), SFInt32(21), SFInt32(29), SFInt32(30), SFInt32(22), SFInt32(-1), SFInt32(22), SFInt32(30), SFInt32(31), SFInt32(23), SFInt32(-1), SFInt32(24), SFInt32(32), SFInt32(33), SFInt32(25), SFInt32(-1), SFInt32(25), SFInt32(33), SFInt32(34), SFInt32(26), SFInt32(-1), SFInt32(26), SFInt32(34), SFInt32(35), SFInt32(27), SFInt32(-1), SFInt32(27), SFInt32(35), SFInt32(36), SFInt32(28), SFInt32(-1), SFInt32(28), SFInt32(36), SFInt32(37), SFInt32(29), SFInt32(-1), SFInt32(29), SFInt32(37), SFInt32(38), SFInt32(30), SFInt32(-1), SFInt32(30), SFInt32(38), SFInt32(39), SFInt32(31), SFInt32(-1), SFInt32(32), SFInt32(40), SFInt32(41), SFInt32(33), SFInt32(-1), SFInt32(33), SFInt32(41), SFInt32(42), SFInt32(34), SFInt32(-1), SFInt32(34), SFInt32(42), SFInt32(43), SFInt32(35), SFInt32(-1), SFInt32(35), SFInt32(43), SFInt32(44), SFInt32(36), SFInt32(-1), SFInt32(36), SFInt32(44), SFInt32(45), SFInt32(37), SFInt32(-1), SFInt32(37), SFInt32(45), SFInt32(46), SFInt32(38), SFInt32(-1), SFInt32(38), SFInt32(46), SFInt32(47), SFInt32(39), SFInt32(-1), SFInt32(40), SFInt32(48), SFInt32(49), SFInt32(41), SFInt32(-1), SFInt32(41), SFInt32(49), SFInt32(50), SFInt32(42), SFInt32(-1), SFInt32(42), SFInt32(50), SFInt32(51), SFInt32(43), SFInt32(-1), SFInt32(43), SFInt32(51), SFInt32(52), SFInt32(44), SFInt32(-1), SFInt32(44), SFInt32(52), SFInt32(53), SFInt32(45), SFInt32(-1), SFInt32(45), SFInt32(53), SFInt32(54), SFInt32(46), SFInt32(-1), SFInt32(46), SFInt32(54), SFInt32(55), SFInt32(47), SFInt32(-1), SFInt32(48), SFInt32(56), SFInt32(57), SFInt32(49), SFInt32(-1), SFInt32(49), SFInt32(57), SFInt32(58), SFInt32(50), SFInt32(-1), SFInt32(50), SFInt32(58), SFInt32(59), SFInt32(51), SFInt32(-1), SFInt32(51), SFInt32(59), SFInt32(60), SFInt32(52), SFInt32(-1), SFInt32(52), SFInt32(60), SFInt32(61), SFInt32(53), SFInt32(-1), SFInt32(53), SFInt32(61), SFInt32(62), SFInt32(54), SFInt32(-1), SFInt32(54), SFInt32(62), SFInt32(63), SFInt32(55), SFInt32(-1)]),
                      normalPerVertex_ : false,
                      solid_ : false,
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([-5.25,5.25,0]),SFVec3f([-3.75,5.25,0]),SFVec3f([-2.25,5.25,0]),SFVec3f([-0.75,5.25,0]),SFVec3f([0.75,5.25,0]),SFVec3f([2.25,5.25,0]),SFVec3f([3.75,5.25,0]),SFVec3f([5.25,5.25,0]),SFVec3f([-5.25,3.75,0]),SFVec3f([-3.75,3.75,0]),SFVec3f([-2.25,3.75,0]),SFVec3f([-0.75,3.75,0]),SFVec3f([0.75,3.75,0]),SFVec3f([2.25,3.75,0]),SFVec3f([3.75,3.75,0]),SFVec3f([5.25,3.75,0]),SFVec3f([-5.25,2.25,0]),SFVec3f([-3.75,2.25,0]),SFVec3f([-2.25,2.25,0]),SFVec3f([-0.75,2.25,0]),SFVec3f([0.75,2.25,0]),SFVec3f([2.25,2.25,0]),SFVec3f([3.75,2.25,0]),SFVec3f([5.25,2.25,0]),SFVec3f([-5.25,0.75,0]),SFVec3f([-3.75,0.75,0]),SFVec3f([-2.25,0.75,0]),SFVec3f([-0.75,0.75,0]),SFVec3f([0.75,0.75,0]),SFVec3f([2.25,0.75,0]),SFVec3f([3.75,0.75,0]),SFVec3f([5.25,0.75,0]),SFVec3f([-5.25,-0.75,0]),SFVec3f([-3.75,-0.75,0]),SFVec3f([-2.25,-0.75,0]),SFVec3f([-0.75,-0.75,0]),SFVec3f([0.75,-0.75,0]),SFVec3f([2.25,-0.75,0]),SFVec3f([3.75,-0.75,0]),SFVec3f([5.25,-0.75,0]),SFVec3f([-5.25,-2.25,0]),SFVec3f([-3.75,-2.25,0]),SFVec3f([-2.25,-2.25,0]),SFVec3f([-0.75,-2.25,0]),SFVec3f([0.75,-2.25,0]),SFVec3f([2.25,-2.25,0]),SFVec3f([3.75,-2.25,0]),SFVec3f([5.25,-2.25,0]),SFVec3f([-5.25,-3.75,0]),SFVec3f([-3.75,-3.75,0]),SFVec3f([-2.25,-3.75,0]),SFVec3f([-0.75,-3.75,0]),SFVec3f([0.75,-3.75,0]),SFVec3f([2.25,-3.75,0]),SFVec3f([3.75,-3.75,0]),SFVec3f([5.25,-3.75,0]),SFVec3f([-5.25,-5.25,0]),SFVec3f([-3.75,-5.25,0]),SFVec3f([-2.25,-5.25,0]),SFVec3f([-0.75,-5.25,0]),SFVec3f([0.75,-5.25,0]),SFVec3f([2.25,-5.25,0]),SFVec3f([3.75,-5.25,0]),SFVec3f([5.25,-5.25,0])])),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(0.435294), SFColor(0.741176), SFColor(0), SFColor(0), SFColor(0.560784), SFColor(0.580392)]))))]),

            Transform(
              scale_ : SFVec3f([SFDouble(3), SFDouble(3), SFDouble(3)]),
              translation_ : SFVec3f([SFDouble(0), SFDouble(0.25), SFDouble(0)]),
              children_ : [
                Inline(
                  DEF_ : SFString('CoordinateAxes'),
                  url_ : MFString([SFString("../data/CoordinateAxes.x3d"), SFString("../../Savage/Tools/Authoring/CoordinateAxes.x3d"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), SFString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), SFString("../../Savage/Tools/Authoring/CoordinateAxes.wrl"), SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), SFString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")]))]),

            Transform(
              DEF_ : SFString('MovingBoxTransform'),
              children_ : [
                PositionInterpolator(
                  DEF_ : SFString('BoxPath'),
                  key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([-5,1,5]),SFVec3f([45,1,5]),SFVec3f([45,1,-45]),SFVec3f([-5,1,-45]),SFVec3f([-5,1,5])])),

                TimeSensor(
                  DEF_ : SFString('BoxTimer'),
                  cycleInterval_ : 10,
                  loop_ : true),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('BoxPath'),
                  toField_ : SFString('translation'),
                  toNode_ : SFString('MovingBoxTransform')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('BoxPath'),
                  toField_ : SFString('goalAimPoint'),
                  toNode_ : SFString('MoveAimPoint3.1')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('BoxPath'),
                  toField_ : SFString('goalAimPoint'),
                  toNode_ : SFString('MoveAimPoint3.2')),

                ROUTE(
                  fromField_ : SFString('value_changed'),
                  fromNode_ : SFString('BoxPath'),
                  toField_ : SFString('goalAimPoint'),
                  toNode_ : SFString('MoveAimPoint3.3')),

                ROUTE(
                  fromField_ : SFString('fraction_changed'),
                  fromNode_ : SFString('BoxTimer'),
                  toField_ : SFString('set_fraction'),
                  toNode_ : SFString('BoxPath')),

                Shape(
                  geometry_ : 
                    Box(),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(),
                      texture_ : 
                        ImageTexture(
                          url_ : MFString([SFString("../earth-topo.png"), SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png")]))))]),
          /*================ CrossHair visualization for center of screen ================*/

            ExternProtoDeclare(
              name_ : SFString('CrossHair'),
              appinfo_ : SFString('CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point'),
              url_ : MFString([SFString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair"), SFString("../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"), SFString("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair")]),
              field_ : [
                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('enabled'),
                  accessType_ : SFString("initializeOnly"),
                  appinfo_ : SFString('whether CrissHair orititype is enabled or not')),

                field(
                  type_ : SFString("SFBool"),
                  name_ : SFString('set_enabled'),
                  accessType_ : SFString("inputOnly"),
                  appinfo_ : SFString('control whether enabled/disabled')),

                field(
                  type_ : SFString("SFColor"),
                  name_ : SFString('markerColor'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('color of CrossHair marker')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('scale'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('size of CrossHair in meters')),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('positionOffsetFromCamera'),
                  accessType_ : SFString("inputOutput"),
                  appinfo_ : SFString('distance in front of HUD viewpoint'))]),

            ProtoInstance(
              name_ : SFString('CrossHair'),
              DEF_ : SFString('CrossHairInstance'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('enabled'),
                  value_ : SFString('true')),

                fieldValue(
                  name_ : SFString('markerColor'),
                  value_ : SFString('1 0.5 0')),

                fieldValue(
                  name_ : SFString('scale'),
                  value_ : SFString('1 1 1')),

                fieldValue(
                  name_ : SFString('positionOffsetFromCamera'),
                  value_ : SFString('0 0 -6'))]),
          /*turn on CrossHairInstance when animated camera viewpoints are bound*/

            ROUTE(
              fromField_ : SFString('isBound'),
              fromNode_ : SFString('Camera.SimpleShotsTest'),
              toField_ : SFString('set_enabled'),
              toNode_ : SFString('CrossHairInstance')),

            ROUTE(
              fromField_ : SFString('isBound'),
              fromNode_ : SFString('Camera.AimPointTest'),
              toField_ : SFString('set_enabled'),
              toNode_ : SFString('CrossHairInstance')),
          /*turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>*/
          /*=============== TODO Launch Prototype Example ==============*/

            Anchor(
              description_ : SFString('launch CameraExample scene'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("CameraExample.x3d"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d"), SFString("CameraExample.wrl"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl")]),
              children_ : [
                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(-3), SFDouble(0)]),
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("CameraPrototype"), SFString("defines a prototype"), SFString(""), SFString("Click on this text to see"), SFString("CameraExample scene")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                              size_ : 0.5)),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0.2)]))))])])]));
void main() { exit(0); }
