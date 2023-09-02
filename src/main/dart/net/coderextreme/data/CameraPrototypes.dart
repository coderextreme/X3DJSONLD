// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.2'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('CameraPrototypes.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman and Jeff Weekley')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('16 March 2009')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('25 October 2016')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('Schematron rules, backed up by initialize() checks')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BeyondViewpointCameraNodesWeb3D2009.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Camera nodes for Viewpoint navigation control')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('CameraExamples.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d')),

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
            ProtoDeclare(
              name_ : SFString('Camera'),
              appinfo_ : SFString('Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.'),
              ProtoInterface_ : 
                ProtoInterface(
                  /*Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields*/
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
                      appinfo_ : SFString('Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated'),
                      value_ : SFString('0 0 10')),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('orientation'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated'),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('fieldOfView'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('pi/4'),
                      value_ : SFString('0.7854')),

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
                      appinfo_ : SFString('Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]'),
                      value_ : SFString('0.25')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('farClipPlane'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('shots'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Array of CameraShot nodes which in turn contain CameraMovement nodes'),
                      /*initialization nodes (if any) go here*/),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('headlight'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Whether camera headlight is on or off'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('headlightColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Camera headlight color'),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('headlightIntensity'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Camera headlight intensity'),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('filterColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Camera filter color that modifies virtual lens capture'),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('filterTransparency'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Camera filter transparency that modifies virtual lens capture'),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('upVector'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('upVector changes modify camera orientation (and possibly vice versa)'),
                      value_ : SFString('0 1 0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('fStop'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Focal length divided effective aperture diameter indicating width of focal plane'),
                      value_ : SFString('5.6')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('focusDistance'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Distance to focal plane of sharpest focus'),
                      value_ : SFString('10')),

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
                      appinfo_ : SFString('OfflineRender node'),
                      /*initialization node (if any) goes here*/),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('traceEnabled'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('enable console output to trace script computations and prototype progress'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('CameraViewpoint'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('position'),
                              protoField_ : SFString('position')),

                            connect(
                              nodeField_ : SFString('orientation'),
                              protoField_ : SFString('orientation')),

                            connect(
                              nodeField_ : SFString('fieldOfView'),
                              protoField_ : SFString('fieldOfView')),

                            connect(
                              nodeField_ : SFString('set_bind'),
                              protoField_ : SFString('set_bind')),

                            connect(
                              nodeField_ : SFString('bindTime'),
                              protoField_ : SFString('bindTime')),

                            connect(
                              nodeField_ : SFString('isBound'),
                              protoField_ : SFString('isBound'))])),
                  /*NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation*/

                    NavigationInfo(
                      type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("ANY")]),
                      DEF_ : SFString('CameraNavInfo'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('set_bind'),
                              protoField_ : SFString('set_bind')),

                            connect(
                              nodeField_ : SFString('headlight'),
                              protoField_ : SFString('headlight')),

                            connect(
                              nodeField_ : SFString('visibilityLimit'),
                              protoField_ : SFString('farClipPlane')),
                          /*No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.*/])),
                  /*this DirectionalLight replaces NavigationInfo headlight in order to add color capability*/

                    DirectionalLight(
                      DEF_ : SFString('CameraDirectionalLight'),
                      global_ : true,
                      /*TODO confirm other default field values match NavigationInfo spec*/
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('on'),
                              protoField_ : SFString('headlight')),

                            connect(
                              nodeField_ : SFString('color'),
                              protoField_ : SFString('headlightColor')),

                            connect(
                              nodeField_ : SFString('intensity'),
                              protoField_ : SFString('headlightIntensity'))])),

                    PositionInterpolator(
                      DEF_ : SFString('CameraPositionInterpolator'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])]),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('set_fraction'),
                              protoField_ : SFString('set_fraction'))])),

                    OrientationInterpolator(
                      DEF_ : SFString('CameraOrientationInterpolator'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)]),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('set_fraction'),
                              protoField_ : SFString('set_fraction'))])),

                    ROUTE(
                      fromField_ : SFString('value_changed'),
                      fromNode_ : SFString('CameraPositionInterpolator'),
                      toField_ : SFString('position'),
                      toNode_ : SFString('CameraViewpoint')),

                    ROUTE(
                      fromField_ : SFString('value_changed'),
                      fromNode_ : SFString('CameraOrientationInterpolator'),
                      toField_ : SFString('orientation'),
                      toNode_ : SFString('CameraViewpoint')),

                    Script(
                      DEF_ : SFString('CameraScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
                      /*binding is controlled externally, all camera operations proceed the same regardless of whether bound or not*/
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
                          appinfo_ : SFString('Camera position in local transformation frame')),

                        field(
                          type_ : SFString("SFRotation"),
                          name_ : SFString('orientation'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('Camera rotation in local transformation frame')),

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
                          type_ : SFString("SFFloat"),
                          name_ : SFString('fieldOfView'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('pi/4')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('nearClipPlane'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('Vector distance to near clipping plane')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('farClipPlane'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('Vector distance to far clipping plane')),

                        field(
                          type_ : SFString("MFNode"),
                          name_ : SFString('shots'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('Array of CameraShot nodes which in turn contain CameraMovement nodes'),
                          /*initialization nodes (if any) go here*/),

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
                          appinfo_ : SFString('OfflineRender node'),
                          /*initialization node (if any) goes here*/),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('ViewpointNode'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('node reference to permit getting setting fields from within Script'),
                          children_ : [
                            Viewpoint(
                              USE_ : SFString('CameraViewpoint'))]),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('NavInfoNode'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('node reference to permit getting setting fields from within Script'),
                          children_ : [
                            NavigationInfo(
                              USE_ : SFString('CameraNavInfo'))]),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('CameraPI'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('node reference to permit getting setting fields from within Script'),
                          children_ : [
                            PositionInterpolator(
                              USE_ : SFString('CameraPositionInterpolator'))]),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('CameraOI'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('node reference to permit getting setting fields from within Script'),
                          children_ : [
                            OrientationInterpolator(
                              USE_ : SFString('CameraOrientationInterpolator'))]),

                        field(
                          type_ : SFString("MFFloat"),
                          name_ : SFString('key'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('key array for interpolators')),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('keyValuePosition'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('keyValue array for PositionInterpolator')),

                        field(
                          type_ : SFString("MFRotation"),
                          name_ : SFString('keyValueOrientation'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('keyValue array for OrientationInterpolator')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('animated'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events'),
                          value_ : SFString('false')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('initialized'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('perform checkShots() function once immediately after initialization'),
                          value_ : SFString('false')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('shotCount'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('how many CameraShot nodes are contained in shots array'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('movesCount'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('how many CameraMove nodes are contained in moves array'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('frameCount'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('how many frames were created in current loop'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('startTime'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('holding variable'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('priorTraceTime'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('holding variable'),
                          value_ : SFString('0')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('traceEnabled'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('enable console output to trace script computations and prototype progress'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('position'),
                              protoField_ : SFString('position')),

                            connect(
                              nodeField_ : SFString('orientation'),
                              protoField_ : SFString('orientation')),

                            connect(
                              nodeField_ : SFString('set_fraction'),
                              protoField_ : SFString('set_fraction')),

                            connect(
                              nodeField_ : SFString('set_bind'),
                              protoField_ : SFString('set_bind')),

                            connect(
                              nodeField_ : SFString('fieldOfView'),
                              protoField_ : SFString('fieldOfView')),

                            connect(
                              nodeField_ : SFString('nearClipPlane'),
                              protoField_ : SFString('nearClipPlane')),

                            connect(
                              nodeField_ : SFString('farClipPlane'),
                              protoField_ : SFString('farClipPlane')),

                            connect(
                              nodeField_ : SFString('shots'),
                              protoField_ : SFString('shots')),

                            connect(
                              nodeField_ : SFString('filterColor'),
                              protoField_ : SFString('filterColor')),

                            connect(
                              nodeField_ : SFString('filterTransparency'),
                              protoField_ : SFString('filterTransparency')),

                            connect(
                              nodeField_ : SFString('upVector'),
                              protoField_ : SFString('upVector')),

                            connect(
                              nodeField_ : SFString('fStop'),
                              protoField_ : SFString('fStop')),

                            connect(
                              nodeField_ : SFString('focusDistance'),
                              protoField_ : SFString('focusDistance')),

                            connect(
                              nodeField_ : SFString('isActive'),
                              protoField_ : SFString('isActive')),

                            connect(
                              nodeField_ : SFString('totalDuration'),
                              protoField_ : SFString('totalDuration')),

                            connect(
                              nodeField_ : SFString('offlineRender'),
                              protoField_ : SFString('offlineRender')),

                            connect(
                              nodeField_ : SFString('traceEnabled'),
                              protoField_ : SFString('traceEnabled'))]),
                      ,
ecmascript:eval (0
, function initialize () // CameraScript
{
//  tracePrint ('initialize start...');

    NavInfoNode.avatarSize[0]   = nearClipPlane;

    // remaining setups deferred to invocation of checkShots() method
    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to , function initialization
    alwaysPrint ('initialize complete');
}

, function checkShots (eventValue)
{
    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');

    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes
    totalDuration= 0;
    shotCount  = shots.length;
    movesCount = 0;
    for (i = 0; i < shotCount; i++) // shots index
    {
       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);
       movesCount   += shots[i].moves.length;
       totalDuration = totalDuration + shots[i].shotDuration;
       if (shots[i].moves.length == 0)
       {
          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');
       }
    }
    // size checks before proceeding
    if (shotCount == 0)
    {
       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');
       return;
    }
    else if (movesCount == 0)
    {
       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');
       return;
    }
    else if (totalDuration == 0)
    {
       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');
       return;
    }
    tracePrint ('number of contained CameraShot nodes=' + shotCount);
    tracePrint ('number of contained CameraMove nodes=' + movesCount);
    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');

    // compute interpolators
    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation
    for (i = 0; i < shotCount; i++) // shots index
    {
        if (i==0) // initial entries
        {
           key[0]                   = 0.0; // no previous move
           keyValuePosition[0]      = shots[i].initialPosition;
           keyValueOrientation[0]   = shots[i].initialOrientation;
        }
        else     // new shot repositions, reorients camera as clean break from preceding shot/move
        {
           key[k+1]                 = key[k]; // start from end from previous move
           keyValuePosition[k+1]    = shots[i].initialPosition;
           keyValueOrientation[k+1] = shots[i].initialOrientation;
           k++;
        }
        tracePrint (shots[i].description);
        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);

        for (j = 0; j < shots[i].moves.length; j++) // moves index
        {
            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime
            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime
            //  tracePrint ('durationFloat=' + durationFloat);
            key[k+1]               = key[k] + (durationFloat / totalDuration);
            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;
            if (!animated)
            {
                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;
            }
            else
            {
                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)
                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation , functions

                // test if difference vector is zero, if so maintain previous rotation
                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();
                if (shotVector.length() >= 0)
                {
                    // default view direction is along -Z axis
                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);
                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;
                }
                else // note (k > 0)
                {
                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change
                }

                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());
                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());
                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());
                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());
                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());
                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\n');
            }
            k++; // update index to match latest key, keyValuePosition, keyValueOrientation

            // check animated parameter:  set true if any of moves are tracking moves
            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true
         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);

            // intermediate trace
            tracePrint ('                key=' + key);
            tracePrint ('   keyValuePosition=' + keyValuePosition);
            tracePrint ('keyValueOrientation=' + keyValueOrientation);
            tracePrint ('- ' + shots[i].moves[j].description);
        }
    }
    tracePrint ('                key=' + key);
    tracePrint ('   keyValuePosition=' + keyValuePosition);
    tracePrint ('keyValueOrientation=' + keyValueOrientation);
    if (key.length != keyValuePosition.length)
    {
      alwaysPrint ('warning: internal error during array construction, ' +
                  'key.length=' + key.length + ' must equal ' +
                  'keyValuePosition.length=' + keyValuePosition.length);
    }
    if (key.length != keyValueOrientation.length)
    {
      alwaysPrint ('warning: internal error during array construction, ' +
                  'key.length=' + key.length + ' must equal ' +
                  'keyValueOrientation.length=' + keyValueOrientation.length);
    }
    if (key.length != (shotCount + movesCount))
    {
      alwaysPrint ('warning: internal error during array construction, ' +
                  'key.length=' + key.length + ' must equal ' +
                  '(shotCount + movesCount)=' + (shotCount + movesCount));
    }
    tracePrint ('           animated=' + animated);
    // set node values
    CameraPI.key      = key;
    CameraOI.key      = key;
    CameraPI.keyValue = keyValuePosition;
    CameraOI.keyValue = keyValueOrientation;

    if (!animated) // output results
    {
        tracePrint ('<PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'/>');
        tracePrint ('<OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'/>');
    }
    tracePrint ('checkShots() complete');
}

, function stripBrackets (fieldArray)
{
    // some browsers add brackets to array output strings, this , function strips them
    outputString = '';
    for (i = 0; i < fieldArray.length; i++)
    {
       outputString += fieldArray[i].toString();
       if (i < fieldArray.length - 1) outputString += ' ';
    }
    return outputString;
}

, function set_fraction (eventValue, timestamp) // input event received for inputOnly field
{
   // traceEnabled = false;  // for testing purposes

   // if Camera is being animated, immediately recompute interpolator settings
   if (animated) checkShots (true);

   // trace progress on console with reduced output frequency
   if (frameCount == 0)
   {
      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);
      startTime      = timestamp;
      priorTraceTime = timestamp;
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());

      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
        tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'/>');
        tracePrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'/>');
      }
   }
   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval
   {
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
      priorTraceTime = timestamp;

      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
        tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'/>');
        alwaysPrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'/>');
      }
   }
   if (eventValue == 0)
   {
      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored
      frameCount++;
   }
   else if (eventValue == 1)
   {
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
      }
      alwaysPrint ('Animation loop complete.');
      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally
   }
   else
   {
      frameCount++;
   }
}

, function set_bind (eventValue) // input event received for inputOnly field
{
   // need to ensure CameraShot nodes are properly initialized
   if (initialized == false)
   {
      checkShots (true);
      initialized = true;
   }
   if (eventValue)
   {
       tracePrint ('Camera has been bound');
   }
   else
   {
       tracePrint ('Camera has been unbound');
   }
}

, function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

, function set_position (eventValue) // input event received for inputOutput field
{
    position = eventValue;
}

, function set_orientation (eventValue) // input event received for inputOutput field
{
    orientation = eventValue;
}

, function set_fieldOfView (eventValue) // input event received for inputOutput field
{
    fieldOfView = eventValue;
}

, function set_nearClipPlane (eventValue) // input event received for inputOutput field
{
    nearClipPlane = eventValue;
}

, function set_farClipPlane (eventValue) // input event received for inputOutput field
{
    farClipPlane = eventValue;
}

, function set_shots (eventValue) // input event received for inputOutput field
{
    shots = eventValue;
}

, function set_filterColor (eventValue) // input event received for inputOutput field
{
    filterColor = eventValue;
}

, function set_filterTransparency (eventValue) // input event received for inputOutput field
{
    filterTransparency = eventValue;
}

, function set_upVector (eventValue) // input event received for inputOutput field
{
    upVector = eventValue;
}

, function set_fStop (eventValue) // input event received for inputOutput field
{
    fStop = eventValue;
}

, function set_focusDistance (eventValue) // input event received for inputOutput field
{
    focusDistance = eventValue;
}

, function set_offlineRender (eventValue) // input event received for inputOutput field
{
    offlineRender = eventValue;
}

, function set_key (eventValue) // input event received for inputOutput field
{
    key = eventValue;
}

, function set_keyValuePosition (eventValue) // input event received for inputOutput field
{
    keyValuePosition = eventValue;
}

, function set_keyValueOrientation (eventValue) // input event received for inputOutput field
{
    keyValueOrientation = eventValue;
}

, function set_animated (eventValue) // input event received for inputOutput field
{
    animated = eventValue;
}

, function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}
, function alwaysPrint (outputValue)
{
    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies
    var outputString = outputValue.toString(); // utility , function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[Camera: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[Camera] ' + outputString + '\n');
})),

                    ROUTE(
                      fromField_ : SFString('position'),
                      fromNode_ : SFString('CameraScript'),
                      toField_ : SFString('position'),
                      toNode_ : SFString('CameraViewpoint')),

                    ROUTE(
                      fromField_ : SFString('orientation'),
                      fromNode_ : SFString('CameraScript'),
                      toField_ : SFString('orientation'),
                      toNode_ : SFString('CameraViewpoint')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('CameraScript'),
                      toField_ : SFString('set_bind'),
                      toNode_ : SFString('CameraViewpoint')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('CameraScript'),
                      toField_ : SFString('set_bind'),
                      toNode_ : SFString('CameraNavInfo')),

                    ROUTE(
                      fromField_ : SFString('isActive'),
                      fromNode_ : SFString('CameraScript'),
                      toField_ : SFString('on'),
                      toNode_ : SFString('CameraDirectionalLight'))])),
          /*=============== CameraShot ==============*/

            ProtoDeclare(
              name_ : SFString('CameraShot'),
              appinfo_ : SFString('CameraShot collects a specific set of CameraMovement animations that make up an individual shot.'),
              ProtoInterface_ : 
                ProtoInterface(
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
                      appinfo_ : SFString('Whether this CameraShot can be activated'),
                      value_ : SFString('true')),

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
                      appinfo_ : SFString('Setup to reinitialize camera position for this shot'),
                      value_ : SFString('0 0 10')),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('initialOrientation'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Setup to reinitialize camera rotation for this shot'),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('initialAimPoint'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Setup to reinitialize aimpoint (relative location for camera direction) for this shot'),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('initialFieldOfView'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('pi/4'),
                      value_ : SFString('0.7854')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('initialFStop'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Focal length divided effective aperture diameter indicating width of focal plane'),
                      value_ : SFString('5.6')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('initialFocusDistance'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Distance to focal plane of sharpest focus'),
                      value_ : SFString('10')),

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
                      appinfo_ : SFString('enable console output to trace script computations and prototype progress'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Script(
                      DEF_ : SFString('CameraShotScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
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
                          /*initialization nodes (if any) go here*/),

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
                          appinfo_ : SFString('enable console output to trace script computations and prototype progress')),

                        field(
                          type_ : SFString("MFFloat"),
                          name_ : SFString('key'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('key array for interpolators')),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('keyValuePosition'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('keyValue array for PositionInterpolator')),

                        field(
                          type_ : SFString("MFRotation"),
                          name_ : SFString('keyValueOrientation'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('keyValue array for OrientationInterpolator'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('moves'),
                              protoField_ : SFString('moves')),

                            connect(
                              nodeField_ : SFString('initialPosition'),
                              protoField_ : SFString('initialPosition')),

                            connect(
                              nodeField_ : SFString('initialOrientation'),
                              protoField_ : SFString('initialOrientation')),

                            connect(
                              nodeField_ : SFString('initialAimPoint'),
                              protoField_ : SFString('initialAimPoint')),

                            connect(
                              nodeField_ : SFString('initialFieldOfView'),
                              protoField_ : SFString('initialFieldOfView')),

                            connect(
                              nodeField_ : SFString('initialFStop'),
                              protoField_ : SFString('initialFStop')),

                            connect(
                              nodeField_ : SFString('initialFocusDistance'),
                              protoField_ : SFString('initialFocusDistance')),

                            connect(
                              nodeField_ : SFString('shotDuration'),
                              protoField_ : SFString('shotDuration')),

                            connect(
                              nodeField_ : SFString('isActive'),
                              protoField_ : SFString('isActive')),

                            connect(
                              nodeField_ : SFString('traceEnabled'),
                              protoField_ : SFString('traceEnabled'))]),
                      ,
ecmascript:eval (0
, function initialize () // CameraShotScript
{
//  tracePrint ('initialize start...');

    // compute shotDuration by summing durations from contained CameraMovement nodes
    shotDuration = 0;
    for (i = 0; i < moves.length; i++)
    {
        shotDuration = shotDuration + moves[i].duration;
    }
    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');

//  tracePrint ('... initialize() complete');
}

, function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

, function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

, function set_moves (eventValue) // input event received for inputOutput field
{
    moves = eventValue;
}

, function set_initialPosition (eventValue) // input event received for inputOutput field
{
    initialPosition = eventValue;
}

, function set_initialOrientation (eventValue) // input event received for inputOutput field
{
    initialOrientation = eventValue;
}

, function set_initialAimPoint (eventValue) // input event received for inputOutput field
{
    initialAimPoint = eventValue;
}

, function set_initialFieldOfView (eventValue) // input event received for inputOutput field
{
    initialFieldOfView = eventValue;
}

, function set_initialFStop (eventValue) // input event received for inputOutput field
{
    initialFStop = eventValue;
}

, function set_initialFocusDistance (eventValue) // input event received for inputOutput field
{
    initialFocusDistance = eventValue;
}

, function set_key (eventValue) // input event received for inputOutput field
{
    key = eventValue;
}

, function set_keyValuePosition (eventValue) // input event received for inputOutput field
{
    keyValuePosition = eventValue;
}

, function set_keyValueOrientation (eventValue) // input event received for inputOutput field
{
    keyValueOrientation = eventValue;
}

// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive

, function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}
, function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility , function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[CameraShot] ' + outputString + '\n');
})),
                  /*Add any ROUTEs here, going from Script to other nodes within ProtoBody*/])),
          /*=============== CameraMovement ==============*/

            ProtoDeclare(
              name_ : SFString('CameraMovement'),
              appinfo_ : SFString('CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.'),
              ProtoInterface_ : 
                ProtoInterface(
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
                      appinfo_ : SFString('Whether this CameraMovement can be activated'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('duration'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Duration in seconds for this move'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('goalPosition'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Goal camera position for this move'),
                      value_ : SFString('0 0 10')),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('goalOrientation'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Goal camera rotation for this move'),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('tracking'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Whether or not camera direction is tracking towards the aimPoint'),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('goalAimPoint'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Goal aimPoint for this move, ignored if tracking=false'),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('goalFieldOfView'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Goal fieldOfView for this move'),
                      value_ : SFString('0.7854')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('goalFStop'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Focal length divided effective aperture diameter indicating width of focal plane'),
                      value_ : SFString('5.6')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('goalFocusDistance'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Distance to focal plane of sharpest focus'),
                      value_ : SFString('10')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('isActive'),
                      accessType_ : SFString("outputOnly"),
                      appinfo_ : SFString('Mark start/stop with true/false output respectively useful to trigger external animations')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('traceEnabled'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('enable console output to trace script computations and prototype progress'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  /*First node determines node type of this prototype*/
                  /*Subsequent nodes do not render, but still must be a valid X3D subgraph*/
                  /*Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events*/
                  children_ : [
                    Script(
                      DEF_ : SFString('CameraMovementScript'),
                      directOutput_ : true,
                      mustEvaluate_ : true,
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
                          appinfo_ : SFString('enable console output to trace script computations and prototype progress'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('duration'),
                              protoField_ : SFString('duration')),

                            connect(
                              nodeField_ : SFString('goalPosition'),
                              protoField_ : SFString('goalPosition')),

                            connect(
                              nodeField_ : SFString('goalOrientation'),
                              protoField_ : SFString('goalOrientation')),

                            connect(
                              nodeField_ : SFString('tracking'),
                              protoField_ : SFString('tracking')),

                            connect(
                              nodeField_ : SFString('goalAimPoint'),
                              protoField_ : SFString('goalAimPoint')),

                            connect(
                              nodeField_ : SFString('goalFieldOfView'),
                              protoField_ : SFString('goalFieldOfView')),

                            connect(
                              nodeField_ : SFString('goalFStop'),
                              protoField_ : SFString('goalFStop')),

                            connect(
                              nodeField_ : SFString('goalFocusDistance'),
                              protoField_ : SFString('goalFocusDistance')),

                            connect(
                              nodeField_ : SFString('isActive'),
                              protoField_ : SFString('isActive')),

                            connect(
                              nodeField_ : SFString('traceEnabled'),
                              protoField_ : SFString('traceEnabled'))]),
                      ,
ecmascript:eval (0
, function initialize () // CameraMovementScript
{
//  tracePrint ('initialize start...');
    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +
                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()
                           );
    if (duration < 0)
    {
       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');
       duration = 0;
    }
    else if (duration == 0)
    {
       alwaysPrint ('warning: duration=0, nothing to do!');
    }
    tracePrint ('... initialize complete');
}

, function set_goalAimPoint (eventValue) // input event received for inputOutput field
{
    goalAimPoint_changed = eventValue;
    tracePrint ('goalAimPoint=' + goalAimPoint.toString());

    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator
}

, function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

, function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

, function set_duration (eventValue) // input event received for inputOutput field
{
    duration = eventValue;
}

, function set_goalPosition (eventValue) // input event received for inputOutput field
{
    goalPosition = eventValue;
}

, function set_goalOrientation (eventValue) // input event received for inputOutput field
{
    goalOrientation = eventValue;
}

, function set_tracking (eventValue) // input event received for inputOutput field
{
    tracking = eventValue;
}

, function set_goalFieldOfView (eventValue) // input event received for inputOutput field
{
    goalFieldOfView = eventValue;
}

, function set_goalFStop (eventValue) // input event received for inputOutput field
{
    goalFStop = eventValue;
}

, function set_goalFocusDistance (eventValue) // input event received for inputOutput field
{
    goalFocusDistance = eventValue;
}

// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive

, function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}

, function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility , function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[CameraMovement] ' + outputString + '\n');
})),
                  /*Add any ROUTEs here, going from Script to other nodes within ProtoBody*/])),
          /*=============== OfflineRender ==============*/

            ProtoDeclare(
              name_ : SFString('OfflineRender'),
              appinfo_ : SFString('OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).'),
              ProtoInterface_ : 
                ProtoInterface(
                  /*TODO non-photorealistic rendering (NPR) parameters*/
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
                      appinfo_ : SFString('Whether this OfflineRender can be activated'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('frameRate'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Frames per second recorded for this rendering'),
                      value_ : SFString('30')),

                    field(
                      type_ : SFString("SFVec2f"),
                      name_ : SFString('frameSize'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Size of frame in number of pixels width and height'),
                      value_ : SFString('640 480')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('pixelAspectRatio'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('Relative dimensions of pixel height/width typically 1.33 or 1'),
                      value_ : SFString('1.33')),

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
                      appinfo_ : SFString('Format of rendered output movie (mpeg mp4 etc.), use first supported format'),
                      value_ : SFString('\"mpeg\"')),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('imageFormat'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('Format of rendered output images (png jpeg gif tiff etc.) use first supported format'),
                      value_ : SFString('\"png\"')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('traceEnabled'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('enable console output to trace script computations and prototype progress'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  /*First node determines node type of this prototype*/
                  /*Subsequent nodes do not render, but still must be a valid X3D subgraph*/
                  children_ : [
                    Script(
                      DEF_ : SFString('OfflineRenderScript'),
                      mustEvaluate_ : true,
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
                          appinfo_ : SFString('Format of rendered output movie (mpeg mp4 etc.)')),

                        field(
                          type_ : SFString("MFString"),
                          name_ : SFString('imageFormat'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('Format of rendered output images (png jpeg gif tiff etc.)')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('traceEnabled'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('enable console output to trace script computations and prototype progress'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('description'),
                              protoField_ : SFString('description')),

                            connect(
                              nodeField_ : SFString('enabled'),
                              protoField_ : SFString('enabled')),

                            connect(
                              nodeField_ : SFString('frameRate'),
                              protoField_ : SFString('frameRate')),

                            connect(
                              nodeField_ : SFString('frameSize'),
                              protoField_ : SFString('frameSize')),

                            connect(
                              nodeField_ : SFString('pixelAspectRatio'),
                              protoField_ : SFString('pixelAspectRatio')),

                            connect(
                              nodeField_ : SFString('set_startTime'),
                              protoField_ : SFString('set_startTime')),

                            connect(
                              nodeField_ : SFString('progress'),
                              protoField_ : SFString('progress')),

                            connect(
                              nodeField_ : SFString('renderCompleteTime'),
                              protoField_ : SFString('renderCompleteTime')),

                            connect(
                              nodeField_ : SFString('movieFormat'),
                              protoField_ : SFString('movieFormat')),

                            connect(
                              nodeField_ : SFString('imageFormat'),
                              protoField_ : SFString('imageFormat')),

                            connect(
                              nodeField_ : SFString('traceEnabled'),
                              protoField_ : SFString('traceEnabled'))]),
                      ,
ecmascript:eval (0
, function initialize () // OfflineRenderScript
{
//  tracePrint ('initialize start...');

    tracePrint ('... initialize complete');
}

, function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

, function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

, function set_frameRate (eventValue) // input event received for inputOutput field
{
    frameRate = eventValue;
}

, function set_frameSize (eventValue) // input event received for inputOutput field
{
    frameSize = eventValue;
}

, function set_pixelAspectRatio (eventValue) // input event received for inputOutput field
{
    pixelAspectRatio = eventValue;
}

, function set_startTime (eventValue) // input event received for inputOnly field
{
   // do something with input eventValue;
}

, function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}

, function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility , function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[OfflineRender] ' + outputString + '\n');
})),
                  /*Add any ROUTEs here, going from Script to other nodes within ProtoBody*/])),
          /*=============== Launch Prototype Example ==============*/

            Background(
              skyColor_ : MFColor([SFColor(0.282353), SFColor(0.380392), SFColor(0.470588)])),

            Anchor(
              description_ : SFString('launch CameraExample scene'),
              url_ : MFString([SFString("CameraExamples.x3d"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"), SFString("CameraExamples.wrl"), SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl")]),
              children_ : [
                Transform(
                  child_ : 
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("CameraPrototypes.x3d"), SFString("defines multiple prototype nodes"), SFString(""), SFString("Click on this text to see"), SFString("CameraExamples.x3d scene")]),
                          fontStyle_ : 
                            FontStyle(
                              justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0.2)])))))])]));
void main() { exit(0); }
