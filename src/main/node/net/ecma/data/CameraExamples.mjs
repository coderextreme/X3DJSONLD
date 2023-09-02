'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var BooleanFilter = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var BooleanToggle = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CameraExamples.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")}),

            new meta({
              name : new SFString("documentation"),
              content : new SFString("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman and Jeff Weekley")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("18 June 2009")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 January 2020")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("Schematron rules, backed up by initialize() checks")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BeyondViewpointCameraNodesWeb3D2009.pdf")}),

            new meta({
              name : new SFString("MovingImage"),
              content : new SFString("CameraExamplesDemo.mp4")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("Camera nodes for Viewpoint navigation control")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("CameraPrototypes.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("CameraExamplesConsoleLog.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          /*=============== Camera ==============*/
          children : new MFNode([
            new WorldInfo({
              title : new SFString("CameraExamples.x3d")}),

            new ExternProtoDeclare({
              name : new SFString("Camera"),
              appinfo : new SFString("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images"),
              url : new MFString(["CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("description"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Text description to be displayed for this Camera")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("orientation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fieldOfView"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("pi/4")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("set_fraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("input fraction drives interpolators")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_bind"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("input event binds or unbinds this Camera")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("bindTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("output event indicates when this Camera is bound")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isBound"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("output event indicates whether this Camera is bound or unbound")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("nearClipPlane"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("farClipPlane"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit")}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("shots"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Array of CameraShot nodes which in turn contain CameraMovement nodes")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("headlight"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Whether camera headlight is on or off")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("headlightColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Camera headlight color")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("headlightIntensity"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Camera headlight intensity")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("filterColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Camera filter color that modifies virtual lens capture")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("filterTransparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Camera filter transparency that modifies virtual lens capture")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("upVector"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("upVector changes modify camera orientation (and possibly vice versa)")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fStop"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("focusDistance"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Distance to focal plane of sharpest focus")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("totalDuration"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("offlineRender"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("OfflineRender node")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("enable console output to trace script computations and prototype progress")}),
              /*Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields*/])}),
          /*=============== CameraShot ==============*/

            new ExternProtoDeclare({
              name : new SFString("CameraShot"),
              appinfo : new SFString("CameraShot collects a specific set of CameraMovement animations that make up an individual shot"),
              url : new MFString(["CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("description"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Text description to be displayed for this CameraShot")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Whether this CameraShot can be activated")}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("moves"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Set of CameraMovement nodes"),
                  /*initializing CameraMovement nodes are inserted here by scene author using ProtoInstance*/}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("initialPosition"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Setup to reinitialize camera position for this shot")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("initialOrientation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Setup to reinitialize camera rotation for this shot")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("initialAimPoint"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("initialFieldOfView"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("pi/4")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("initialFStop"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("initialFocusDistance"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Distance to focal plane of sharpest focus")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("shotDuration"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Subtotal duration of contained CameraMovement move durations")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("enable console output to trace script computations and prototype progress")})])}),
          /*=============== CameraMovement ==============*/

            new ExternProtoDeclare({
              name : new SFString("CameraMovement"),
              appinfo : new SFString("CameraMovement defines a single camera movement animation"),
              url : new MFString(["CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("description"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Text description to be displayed for this CameraMovement")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Whether this CameraMovement can be activated")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("duration"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Duration in seconds for this move")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("goalPosition"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Goal camera position for this move")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("goalOrientation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Goal camera rotation for this move")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("tracking"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Whether or not camera direction is tracking towards the aimPoint")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("goalAimPoint"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Goal aimPoint for this move, ignored if tracking=false")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("goalFieldOfView"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Goal fieldOfView for this move")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("goalFStop"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("goalFocusDistance"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Distance to focal plane of sharpest focus")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("enable console output to trace script computations and prototype progress")})])}),
          /*=============== OfflineRender ==============*/

            new ExternProtoDeclare({
              name : new SFString("OfflineRender"),
              appinfo : new SFString("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)"),
              url : new MFString(["CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFSTRING,
                  name : new SFString("description"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Text description to be displayed for this OfflineRender")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Whether this OfflineRender can be activated")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("frameRate"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Frames per second recorded for this rendering")}),

                new field({
                  type : field.TYPE_SFVEC2F,
                  name : new SFString("frameSize"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Size of frame in number of pixels width and height")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("pixelAspectRatio"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("Relative dimensions of pixel height/width typically 1.33 or 1")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("Begin render operation")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("progress"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Progress performing render operation (0..1)")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("renderCompleteTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                  appinfo : new SFString("Render operation complete")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("movieFormat"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("Format of rendered output movie (mpeg mp4 etc.), use first supported format")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("imageFormat"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("Format of rendered output images (png jpeg gif tiff etc.) use first supported format")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("enable console output to trace script computations and prototype progress")}),
              /*TODO non-photorealistic rendering (NPR) parameters*/])}),
          /*=============== Lights, camera, action! ==============*/

            new DirectionalLight({
              direction : new SFVec3f([0,-1,0]),
              global : new SFBool(true),
              intensity : new SFFloat(0.8)}),

            new NavigationInfo({
              type : ["EXAMINE","FLY","ANY"]}),

            new Viewpoint({
              description : new SFString("Camera test scene entry view"),
              position : new SFVec3f([0,2,12])}),

            new Viewpoint({
              description : new SFString("Camera test scene from above"),
              orientation : new SFRotation([1,0,0,-1.57079]),
              position : new SFVec3f([0,150,0])}),
          /*Keep prototype instances in same file while developing, then move later*/
          /*We will create examples matching those in the paper*/
          /*=============== Camera.SimpleShotsTest ==============*/

            new ProtoInstance({
              name : new SFString("Camera"),
              DEF : new SFString("Camera.SimpleShotsTest"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt")}),

                new fieldValue({
                  name : new SFString("headlight"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("position"),
                  value : new SFString("-4 4 10")}),

                new fieldValue({
                  name : new SFString("shots"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("CameraShot"),
                      DEF : new SFString("Zoom"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("Simple shot of Camera Zoom")}),

                        new fieldValue({
                          name : new SFString("initialPosition"),
                          value : new SFString("-50 1 -10")}),

                        new fieldValue({
                          name : new SFString("initialOrientation"),
                          value : new SFString("0 1 0 0")}),

                        new fieldValue({
                          name : new SFString("moves"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Zoom In")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-50 1 -15")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Zoom Out")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-50 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("1")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-50 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("CameraShot"),
                      DEF : new SFString("Dolly"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("Simple shot of Camera Dolly")}),

                        new fieldValue({
                          name : new SFString("initialPosition"),
                          value : new SFString("-40 1 -10")}),

                        new fieldValue({
                          name : new SFString("initialOrientation"),
                          value : new SFString("0 1 0 0")}),

                        new fieldValue({
                          name : new SFString("moves"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("DollyMove1"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Dolly from Right to Left")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-45 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Dolly from Left to Right")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-40 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("1")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-40 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("CameraShot"),
                      DEF : new SFString("Pan"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("Simple shot of Camera Pan left right and back to center")}),

                        new fieldValue({
                          name : new SFString("initialPosition"),
                          value : new SFString("-30 1 -10")}),

                        new fieldValue({
                          name : new SFString("initialOrientation"),
                          value : new SFString("0 1 0 0")}),

                        new fieldValue({
                          name : new SFString("moves"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("PanLeft"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Pan Left")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("2")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-30 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0.4")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("PanRight"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Pan Right")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-30 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 -0.4")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Pan back to Center")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("2")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-30 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("2")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-30 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("CameraShot"),
                      DEF : new SFString("CameraBoom"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("Camera Boom")}),

                        new fieldValue({
                          name : new SFString("initialPosition"),
                          value : new SFString("-20 1 -10")}),

                        new fieldValue({
                          name : new SFString("initialOrientation"),
                          value : new SFString("0 1 0 0")}),

                        new fieldValue({
                          name : new SFString("moves"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("CameraBoomUp"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Boom Up")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-20 5 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("BoomDown"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Boom Down")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-20 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("BoomPause"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("2")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-20 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("CameraShot"),
                      DEF : new SFString("CameraTilt"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("Camera Tilt")}),

                        new fieldValue({
                          name : new SFString("initialPosition"),
                          value : new SFString("-10 1 -10")}),

                        new fieldValue({
                          name : new SFString("initialOrientation"),
                          value : new SFString("0 0 1 0")}),

                        new fieldValue({
                          name : new SFString("traceEnabled"),
                          value : new SFString("true")}),

                        new fieldValue({
                          name : new SFString("moves"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Tilt Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("1")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-10 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("TiltDown"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Tilt Left")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-10 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 0.785")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("TiltPause"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Tilt Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("1")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-10 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 0.785")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Tilt Right")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-10 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 -0.785")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Tilt Pause")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("1")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-10 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 -0.785")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("TiltReset"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Camera Tilt Reset")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("1")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("-10 1 -10")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 0")})])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("TiltUp"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("Return to home")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("2")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("0 2 12")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 0 1 0")})])})])})])})])})])}),

            new Group({
              DEF : new SFString("AnimationGroup.SimpleShots"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("CameraTimer.SimpleShots")}),
              /*initialize clock to match totalDuration of combined Shot Moves*/

                new ROUTE({
                  fromField : new SFString("totalDuration"),
                  fromNode : new SFString("Camera.SimpleShotsTest"),
                  toField : new SFString("cycleInterval"),
                  toNode : new SFString("CameraTimer.SimpleShots")}),
              /*TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator*/

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("CameraTimer.SimpleShots"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Camera.SimpleShotsTest")}),

                new Transform({
                  DEF : new SFString("Trigger.SimpleShots"),
                  translation : new SFVec3f([-4,4,0]),
                  children : new MFNode([
                    new BooleanFilter({
                      DEF : new SFString("TextTouchActive.SimpleShotsFilter")}),

                    new TouchSensor({
                      DEF : new SFString("TextTouch.SimpleShots"),
                      description : new SFString("touch to animate Camera SimpleShotsTest")}),

                    new ROUTE({
                      fromField : new SFString("inputTrue"),
                      fromNode : new SFString("TextTouchActive.SimpleShotsFilter"),
                      toField : new SFString("set_bind"),
                      toNode : new SFString("Camera.SimpleShotsTest")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("TextTouch.SimpleShots"),
                      toField : new SFString("set_boolean"),
                      toNode : new SFString("TextTouchActive.SimpleShotsFilter")}),

                    new ROUTE({
                      fromField : new SFString("touchTime"),
                      fromNode : new SFString("TextTouch.SimpleShots"),
                      toField : new SFString("startTime"),
                      toNode : new SFString("CameraTimer.SimpleShots")}),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Click to animate","SimpleShotsTest"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("ArtDeco5"),
                              ambientIntensity : new SFFloat(0.24),
                              diffuseColor : new SFColor([0.945455,0.318988,0.321717]),
                              shininess : new SFFloat(0.01),
                              specularColor : new SFColor([0.072727,0.021705,0.010732]),
                              /*Universal Media Library: ArtDeco 5*/}))}))})]),
                  /*Simplify intersection test for user selecting text*/
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("TransparentBox"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(1)}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([6,2,0.0001])}))}))})])}),

            new Group({
              DEF : new SFString("SimpleShotsTargets"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("TargetBoxZoom"),
                  translation : new SFVec3f([-50,1,-20]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"])}))}))})),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Zoom in, out"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))}))}))})])}),

                new Transform({
                  DEF : new SFString("TargetBoxDolly"),
                  translation : new SFVec3f([-40,1,-20]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"])}))}))})),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Dolly left, right"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))}))}))})])}),

                new Transform({
                  DEF : new SFString("TargetBoxPan"),
                  translation : new SFVec3f([-30,1,-20]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"])}))}))})),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Pan left, right"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))}))}))})])}),

                new Transform({
                  DEF : new SFString("TargetBoxBoom"),
                  translation : new SFVec3f([-20,1,-20]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"])}))}))})),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Boom up, down"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))}))}))})])}),

                new Transform({
                  DEF : new SFString("TargetBoxTilt"),
                  translation : new SFVec3f([-10,1,-20]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"])}))}))})),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Tilt left, right"]),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))}))}))})])})])}),
          /*=============== Camera.AimPointTest ==============*/

            new ProtoInstance({
              name : new SFString("Camera"),
              DEF : new SFString("Camera.AimPointTest"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("description"),
                  value : new SFString("AimPointTest for moving camera tracking moving target")}),

                new fieldValue({
                  name : new SFString("position"),
                  value : new SFString("4 4 10")}),

                new fieldValue({
                  name : new SFString("shots"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("CameraShot"),
                      DEF : new SFString("Shot5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("description"),
                          value : new SFString("#3 Tracking shot")}),

                        new fieldValue({
                          name : new SFString("initialPosition"),
                          value : new SFString("6 6 10")}),

                        new fieldValue({
                          name : new SFString("initialOrientation"),
                          value : new SFString("0 1 0 0")}),

                        new fieldValue({
                          name : new SFString("moves"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("MoveAimPoint3.1"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("AimPoint 3.1 moving BoxPath")}),

                                new fieldValue({
                                  name : new SFString("tracking"),
                                  value : new SFString("true")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("8")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("6 6 10")}),
                              /*goalAimPoint modified by ROUTE to match moving Box*/])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("MoveAimPoint3.2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("AimPoint 3.2 pan right while tracking")}),

                                new fieldValue({
                                  name : new SFString("tracking"),
                                  value : new SFString("true")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("8")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("40 6 12")}),
                              /*goalAimPoint modified by ROUTE to match moving Box*/])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("MoveAimPoint3.3"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("AimPoint 3.3 boom up while tracking")}),

                                new fieldValue({
                                  name : new SFString("tracking"),
                                  value : new SFString("true")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("3")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("40 20 13")}),
                              /*goalAimPoint modified by ROUTE to match moving Box*/])}),

                            new ProtoInstance({
                              name : new SFString("CameraMovement"),
                              DEF : new SFString("MoveAimPoint3.4"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("description"),
                                  value : new SFString("AimPoint 3.4 restore camera back to home")}),

                                new fieldValue({
                                  name : new SFString("tracking"),
                                  value : new SFString("true")}),

                                new fieldValue({
                                  name : new SFString("duration"),
                                  value : new SFString("5")}),

                                new fieldValue({
                                  name : new SFString("goalPosition"),
                                  value : new SFString("4 4 10")}),

                                new fieldValue({
                                  name : new SFString("goalAimPoint"),
                                  value : new SFString("4 4 0")}),

                                new fieldValue({
                                  name : new SFString("goalOrientation"),
                                  value : new SFString("0 1 0 0")}),
                              /*can test tracking or not using these values*/])})])})])})])})])}),

            new Group({
              DEF : new SFString("AnimationGroup.AimPointTest"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("CameraTimer.AimPointTest")}),
              /*initialize clock to match totalDuration of combined Shot Moves*/

                new ROUTE({
                  fromField : new SFString("totalDuration"),
                  fromNode : new SFString("Camera.AimPointTest"),
                  toField : new SFString("cycleInterval"),
                  toNode : new SFString("CameraTimer.AimPointTest")}),
              /*TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator*/

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("CameraTimer.AimPointTest"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Camera.AimPointTest")}),

                new Transform({
                  DEF : new SFString("Trigger.AimPointTest"),
                  translation : new SFVec3f([4,4,0]),
                  children : new MFNode([
                    new BooleanFilter({
                      DEF : new SFString("TextTouchActive.AimPointFilter")}),

                    new TouchSensor({
                      DEF : new SFString("TextTouch.AimPointTest"),
                      description : new SFString("touch to animate Camera AimPointTest")}),

                    new ROUTE({
                      fromField : new SFString("inputTrue"),
                      fromNode : new SFString("TextTouchActive.AimPointFilter"),
                      toField : new SFString("set_bind"),
                      toNode : new SFString("Camera.AimPointTest")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("TextTouch.AimPointTest"),
                      toField : new SFString("set_boolean"),
                      toNode : new SFString("TextTouchActive.AimPointFilter")}),

                    new ROUTE({
                      fromField : new SFString("touchTime"),
                      fromNode : new SFString("TextTouch.AimPointTest"),
                      toField : new SFString("startTime"),
                      toNode : new SFString("CameraTimer.AimPointTest")}),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["Click to animate","AimPointTest"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("ArtDeco5")}))}))})]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("TransparentBox")}))})])}),
          /*TODO build a test once implemented*/

            new ProtoInstance({
              name : new SFString("OfflineRender")}),
          /*=============== animate a camera shape to visualize view changes ==============*/

            new Transform({
              DEF : new SFString("CameraShapeTransform"),
              translation : new SFVec3f([0,0.5,0]),
              /*move CameraShape using active Camera*/
              children : new MFNode([
                new ROUTE({
                  fromField : new SFString("position_changed"),
                  fromNode : new SFString("Camera.SimpleShotsTest"),
                  toField : new SFString("translation"),
                  toNode : new SFString("CameraShapeTransform")}),

                new ROUTE({
                  fromField : new SFString("orientation_changed"),
                  fromNode : new SFString("Camera.SimpleShotsTest"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("CameraShapeTransform")}),

                new ROUTE({
                  fromField : new SFString("position"),
                  fromNode : new SFString("Camera.AimPointTest"),
                  toField : new SFString("translation"),
                  toNode : new SFString("CameraShapeTransform")}),

                new ROUTE({
                  fromField : new SFString("orientation_changed"),
                  fromNode : new SFString("Camera.AimPointTest"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("CameraShapeTransform")}),

                new Transform({
                  DEF : new SFString("CameraOffsetTransform"),
                  translation : new SFVec3f([0,0,0.25]),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("CameraShapeTouched")}),

                    new Inline({
                      DEF : new SFString("CameraShape"),
                      url : new MFString(["CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"])}),
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("SightLine"),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          coordIndex : new MFInt32([0,1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0,0,0,0,-100])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              emissiveColor : new SFColor([0.8,0.8,0.4])}))}))})])}),
              /*Display frustum to show camera view within the scene, toggled by user selecting CameraShape*/

                new ExternProtoDeclare({
                  name : new SFString("ViewFrustum"),
                  appinfo : new SFString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"),
                  url : new MFString(["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"]),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("ViewpointNode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("required: insert Viewpoint DEF or USE node for view of interest")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("NavigationInfoNode"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("required: insert NavigationInfo DEF or USE node of interest")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("visible"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("whether or not frustum geometry is rendered")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("lineColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("frustumColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("transparency of ViewFrustum hull geometry, default value 0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("aspectRatio"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("assumed ratio height/width, default value 0.75")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("trace"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("debug support, default false")})])}),

                new ProtoInstance({
                  name : new SFString("ViewFrustum"),
                  DEF : new SFString("ViewFrustumNode"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("ViewpointNode"),
                      children : new MFNode([
                        new Viewpoint({
                          DEF : new SFString("FrustumViewpoint"),
                          description : new SFString("viewpoint for ViewFrustum"),
                          position : new SFVec3f([0,0,0])})])}),

                    new fieldValue({
                      name : new SFString("NavigationInfoNode"),
                      children : new MFNode([
                        new NavigationInfo({
                          DEF : new SFString("TestNavigationInfo"),
                          transitionType : new MFString(["ANIMATE"]),
                          visibilityLimit : new SFFloat(100)})])}),

                    new fieldValue({
                      name : new SFString("visible"),
                      value : new SFString("false")}),

                    new fieldValue({
                      name : new SFString("lineColor"),
                      value : new SFString("0.9 0.9 0.9")}),

                    new fieldValue({
                      name : new SFString("frustumColor"),
                      value : new SFString("0.8 0.8 0.8")}),

                    new fieldValue({
                      name : new SFString("transparency"),
                      value : new SFString("0.95")})])}),

                new BooleanToggle({
                  DEF : new SFString("ViewFrustumToggle")}),

                new ROUTE({
                  fromField : new SFString("isActive"),
                  fromNode : new SFString("CameraShapeTouched"),
                  toField : new SFString("set_boolean"),
                  toNode : new SFString("ViewFrustumToggle")}),

                new ROUTE({
                  fromField : new SFString("toggle"),
                  fromNode : new SFString("ViewFrustumToggle"),
                  toField : new SFString("set_visible"),
                  toNode : new SFString("ViewFrustumNode")})])}),
          /*=============== add checkerboard, axes and other things to look at while animating ==============*/

            new Background({
              skyColor : new MFColor([0.282353,0.380392,0.470588])}),

            new Transform({
              rotation : new SFRotation([1,0,0,-1.57079]),
              scale : new SFVec3f([10,10,10]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          ambientIntensity : new SFFloat(0.01),
                          diffuseColor : new SFColor([1,1,1]),
                          shininess : new SFFloat(0.05)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      colorIndex : new MFInt32([0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0]),
                      colorPerVertex : new SFBool(false),
                      coordIndex : new MFInt32([0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]),
                      normalPerVertex : new SFBool(false),
                      solid : new SFBool(false),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0])})),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0.435294,0.741176,0,0,0.560784,0.580392])}))}))}))}),

            new Transform({
              scale : new SFVec3f([3,3,3]),
              translation : new SFVec3f([0,0.25,0]),
              children : new MFNode([
                new Inline({
                  DEF : new SFString("CoordinateAxes"),
                  url : new MFString(["../data/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])})])}),

            new Transform({
              DEF : new SFString("MovingBoxTransform"),
              children : new MFNode([
                new PositionInterpolator({
                  DEF : new SFString("BoxPath"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFVec3f([-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5])}),

                new TimeSensor({
                  DEF : new SFString("BoxTimer"),
                  cycleInterval : new SFTime(10),
                  loop : new SFBool(true)}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("BoxPath"),
                  toField : new SFString("translation"),
                  toNode : new SFString("MovingBoxTransform")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("BoxPath"),
                  toField : new SFString("goalAimPoint"),
                  toNode : new SFString("MoveAimPoint3.1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("BoxPath"),
                  toField : new SFString("goalAimPoint"),
                  toNode : new SFString("MoveAimPoint3.2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("BoxPath"),
                  toField : new SFString("goalAimPoint"),
                  toNode : new SFString("MoveAimPoint3.3")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("BoxTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("BoxPath")}),
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Box({})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"])}))}))})])}),
          /*================ CrossHair visualization for center of screen ================*/

            new ExternProtoDeclare({
              name : new SFString("CrossHair"),
              appinfo : new SFString("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point"),
              url : new MFString(["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  appinfo : new SFString("whether CrissHair orititype is enabled or not")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                  appinfo : new SFString("control whether enabled/disabled")}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("markerColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("color of CrossHair marker")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("scale"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("size of CrossHair in meters")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("positionOffsetFromCamera"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  appinfo : new SFString("distance in front of HUD viewpoint")})])}),

            new ProtoInstance({
              name : new SFString("CrossHair"),
              DEF : new SFString("CrossHairInstance"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")}),

                new fieldValue({
                  name : new SFString("markerColor"),
                  value : new SFString("1 0.5 0")}),

                new fieldValue({
                  name : new SFString("scale"),
                  value : new SFString("1 1 1")}),

                new fieldValue({
                  name : new SFString("positionOffsetFromCamera"),
                  value : new SFString("0 0 -6")})])}),
          /*turn on CrossHairInstance when animated camera viewpoints are bound*/

            new ROUTE({
              fromField : new SFString("isBound"),
              fromNode : new SFString("Camera.SimpleShotsTest"),
              toField : new SFString("set_enabled"),
              toNode : new SFString("CrossHairInstance")}),

            new ROUTE({
              fromField : new SFString("isBound"),
              fromNode : new SFString("Camera.AimPointTest"),
              toField : new SFString("set_enabled"),
              toNode : new SFString("CrossHairInstance")}),
          /*turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>*/
          /*=============== TODO Launch Prototype Example ==============*/

            new Anchor({
              description : new SFString("launch CameraExample scene"),
              parameter : new MFString(["target=_blank"]),
              url : new MFString(["CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0,-3,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"]),
                              size : new SFFloat(0.5)}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,0.2])}))}))}))})])})])}))});
console.log(X3D0.toXMLNode());
