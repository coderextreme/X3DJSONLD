####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python CameraPrototypes.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='CameraPrototypes.x3d',name='title'),
    meta(content='Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.',name='description'),
    meta(content='Don Brutzman and Jeff Weekley',name='creator'),
    meta(content='16 March 2009',name='created'),
    meta(content='25 October 2016',name='modified'),
    meta(content='Schematron rules, backed up by initialize() checks',name='TODO'),
    meta(content='BeyondViewpointCameraNodesWeb3D2009.pdf',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html',name='reference'),
    meta(content='Camera nodes for Viewpoint navigation control',name='subject'),
    meta(content='CameraExamples.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d',name='identifier'),
    meta(content='http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  =============== Camera ============== 
    children=[
    ProtoDeclare(name='Camera',appinfo='Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.',
      ProtoInterface=ProtoInterface(
        #  Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields 
        field=[
        field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this Camera',type='SFString'),
        field(name='position',accessType='inputOutput',appinfo='Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated',type='SFVec3f',value=(0,0,10)),
        field(name='orientation',accessType='inputOutput',appinfo='Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated',type='SFRotation',value=(0,0,1,0)),
        field(name='fieldOfView',accessType='inputOutput',appinfo='pi/4',type='SFFloat',value=0.7854),
        field(name='set_fraction',accessType='inputOnly',appinfo='input fraction drives interpolators',type='SFFloat'),
        field(name='set_bind',accessType='inputOnly',appinfo='input event binds or unbinds this Camera',type='SFBool'),
        field(name='bindTime',accessType='outputOnly',appinfo='output event indicates when this Camera is bound',type='SFTime'),
        field(name='isBound',accessType='outputOnly',appinfo='output event indicates whether this Camera is bound or unbound',type='SFBool'),
        field(name='nearClipPlane',accessType='inputOutput',appinfo='Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]',type='SFFloat',value=0.25),
        field(name='farClipPlane',accessType='inputOutput',appinfo='Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit',type='SFFloat',value=0.0),
        field(name='shots',accessType='inputOutput',appinfo='Array of CameraShot nodes which in turn contain CameraMovement nodes',type='MFNode',
          #  initialization nodes (if any) go here 
          ),
        field(name='headlight',accessType='inputOutput',appinfo='Whether camera headlight is on or off',type='SFBool',value=True),
        field(name='headlightColor',accessType='inputOutput',appinfo='Camera headlight color',type='SFColor',value=(1,1,1)),
        field(name='headlightIntensity',accessType='inputOutput',appinfo='Camera headlight intensity',type='SFFloat',value=1.0),
        field(name='filterColor',accessType='inputOutput',appinfo='Camera filter color that modifies virtual lens capture',type='SFColor',value=(1,1,1)),
        field(name='filterTransparency',accessType='inputOutput',appinfo='Camera filter transparency that modifies virtual lens capture',type='SFFloat',value=1.0),
        field(name='upVector',accessType='inputOutput',appinfo='upVector changes modify camera orientation (and possibly vice versa)',type='SFVec3f',value=(0,1,0)),
        field(name='fStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat',value=5.6),
        field(name='focusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat',value=10.0),
        field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
        field(name='totalDuration',accessType='outputOnly',appinfo='Total duration of contained enabled CameraShot (and thus CameraMovement) move durations',type='SFTime'),
        field(name='offlineRender',accessType='inputOutput',appinfo='OfflineRender node',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Viewpoint(DEF='CameraViewpoint',
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='position',protoField='position'),
            connect(nodeField='orientation',protoField='orientation'),
            connect(nodeField='fieldOfView',protoField='fieldOfView'),
            connect(nodeField='set_bind',protoField='set_bind'),
            connect(nodeField='bindTime',protoField='bindTime'),
            connect(nodeField='isBound',protoField='isBound')])),
        #  NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation 
        NavigationInfo(DEF='CameraNavInfo',type='"EXAMINE" "FLY" "ANY"',
          IS=IS(
            #  No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. 
            connect=[
            connect(nodeField='set_bind',protoField='set_bind'),
            connect(nodeField='headlight',protoField='headlight'),
            connect(nodeField='visibilityLimit',protoField='farClipPlane')])),
        #  this DirectionalLight replaces NavigationInfo headlight in order to add color capability 
        DirectionalLight(DEF='CameraDirectionalLight',global_=True,
          #  TODO confirm other default field values match NavigationInfo spec 
          IS=IS(
            connect=[
            connect(nodeField='on',protoField='headlight'),
            connect(nodeField='color',protoField='headlightColor'),
            connect(nodeField='intensity',protoField='headlightIntensity')])),
        PositionInterpolator(DEF='CameraPositionInterpolator',key=[0,1],keyValue=[(0,0,0),(0,0,0)],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction')])),
        OrientationInterpolator(DEF='CameraOrientationInterpolator',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,0)],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction')])),
        ROUTE(fromField='value_changed',fromNode='CameraPositionInterpolator',toField='position',toNode='CameraViewpoint'),
        ROUTE(fromField='value_changed',fromNode='CameraOrientationInterpolator',toField='orientation',toNode='CameraViewpoint'),
        Script(DEF='CameraScript',directOutput=True,mustEvaluate=True,
          #  binding is controlled externally, all camera operations proceed the same regardless of whether bound or not 
          field=[
          field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this Camera',type='SFString'),
          field(name='position',accessType='inputOutput',appinfo='Camera position in local transformation frame',type='SFVec3f'),
          field(name='orientation',accessType='inputOutput',appinfo='Camera rotation in local transformation frame',type='SFRotation'),
          field(name='set_fraction',accessType='inputOnly',appinfo='input fraction drives interpolators',type='SFFloat'),
          field(name='set_bind',accessType='inputOnly',appinfo='input event binds or unbinds this Camera',type='SFBool'),
          field(name='fieldOfView',accessType='inputOutput',appinfo='pi/4',type='SFFloat'),
          field(name='nearClipPlane',accessType='inputOutput',appinfo='Vector distance to near clipping plane',type='SFFloat'),
          field(name='farClipPlane',accessType='inputOutput',appinfo='Vector distance to far clipping plane',type='SFFloat'),
          field(name='shots',accessType='inputOutput',appinfo='Array of CameraShot nodes which in turn contain CameraMovement nodes',type='MFNode',
            #  initialization nodes (if any) go here 
            ),
          field(name='filterColor',accessType='inputOutput',appinfo='Camera filter color that modifies virtual lens capture',type='SFColor'),
          field(name='filterTransparency',accessType='inputOutput',appinfo='Camera filter transparency that modifies virtual lens capture',type='SFFloat'),
          field(name='upVector',accessType='inputOutput',appinfo='upVector changes modify camera orientation (and possibly vice versa)',type='SFVec3f'),
          field(name='fStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat'),
          field(name='focusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat'),
          field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
          field(name='totalDuration',accessType='outputOnly',appinfo='Total duration of contained enabled CameraShot (and thus CameraMovement) move durations',type='SFTime'),
          field(name='offlineRender',accessType='inputOutput',appinfo='OfflineRender node',type='SFNode',
            #  initialization node (if any) goes here 
            ),
          field(name='ViewpointNode',accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',type='SFNode',
            children=[
            Viewpoint(USE='CameraViewpoint')]),
          field(name='NavInfoNode',accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',type='SFNode',
            children=[
            NavigationInfo(USE='CameraNavInfo')]),
          field(name='CameraPI',accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',type='SFNode',
            children=[
            PositionInterpolator(USE='CameraPositionInterpolator')]),
          field(name='CameraOI',accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',type='SFNode',
            children=[
            OrientationInterpolator(USE='CameraOrientationInterpolator')]),
          field(name='key',accessType='inputOutput',appinfo='key array for interpolators',type='MFFloat'),
          field(name='keyValuePosition',accessType='inputOutput',appinfo='keyValue array for PositionInterpolator',type='MFVec3f'),
          field(name='keyValueOrientation',accessType='inputOutput',appinfo='keyValue array for OrientationInterpolator',type='MFRotation'),
          field(name='animated',accessType='inputOutput',appinfo='whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events',type='SFBool',value=False),
          field(name='initialized',accessType='initializeOnly',appinfo='perform checkShots() function once immediately after initialization',type='SFBool',value=False),
          field(name='shotCount',accessType='initializeOnly',appinfo='how many CameraShot nodes are contained in shots array',type='SFInt32',value=0),
          field(name='movesCount',accessType='initializeOnly',appinfo='how many CameraMove nodes are contained in moves array',type='SFInt32',value=0),
          field(name='frameCount',accessType='initializeOnly',appinfo='how many frames were created in current loop',type='SFFloat',value=0.0),
          field(name='startTime',accessType='initializeOnly',appinfo='holding variable',type='SFTime'),
          field(name='priorTraceTime',accessType='initializeOnly',appinfo='holding variable',type='SFTime'),
          field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='position',protoField='position'),
            connect(nodeField='orientation',protoField='orientation'),
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='set_bind',protoField='set_bind'),
            connect(nodeField='fieldOfView',protoField='fieldOfView'),
            connect(nodeField='nearClipPlane',protoField='nearClipPlane'),
            connect(nodeField='farClipPlane',protoField='farClipPlane'),
            connect(nodeField='shots',protoField='shots'),
            connect(nodeField='filterColor',protoField='filterColor'),
            connect(nodeField='filterTransparency',protoField='filterTransparency'),
            connect(nodeField='upVector',protoField='upVector'),
            connect(nodeField='fStop',protoField='fStop'),
            connect(nodeField='focusDistance',protoField='focusDistance'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='totalDuration',protoField='totalDuration'),
            connect(nodeField='offlineRender',protoField='offlineRender'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]),

        sourceCode="""
ecmascript:
function initialize () // CameraScript
{
//  tracePrint ('initialize start...');

    NavInfoNode.avatarSize[0]   = nearClipPlane;

    // remaining setups deferred to invocation of checkShots() method
    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization
    alwaysPrint ('initialize complete');
}

function checkShots (eventValue)
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
                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions

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

function stripBrackets (fieldArray)
{
    // some browsers add brackets to array output strings, this function strips them
    outputString = '';
    for (i = 0; i < fieldArray.length; i++)
    {
       outputString += fieldArray[i].toString();
       if (i < fieldArray.length - 1) outputString += ' ';
    }
    return outputString;
}

function set_fraction (eventValue, timestamp) // input event received for inputOnly field
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

function set_bind (eventValue) // input event received for inputOnly field
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

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_position (eventValue) // input event received for inputOutput field
{
    position = eventValue;
}

function set_orientation (eventValue) // input event received for inputOutput field
{
    orientation = eventValue;
}

function set_fieldOfView (eventValue) // input event received for inputOutput field
{
    fieldOfView = eventValue;
}

function set_nearClipPlane (eventValue) // input event received for inputOutput field
{
    nearClipPlane = eventValue;
}

function set_farClipPlane (eventValue) // input event received for inputOutput field
{
    farClipPlane = eventValue;
}

function set_shots (eventValue) // input event received for inputOutput field
{
    shots = eventValue;
}

function set_filterColor (eventValue) // input event received for inputOutput field
{
    filterColor = eventValue;
}

function set_filterTransparency (eventValue) // input event received for inputOutput field
{
    filterTransparency = eventValue;
}

function set_upVector (eventValue) // input event received for inputOutput field
{
    upVector = eventValue;
}

function set_fStop (eventValue) // input event received for inputOutput field
{
    fStop = eventValue;
}

function set_focusDistance (eventValue) // input event received for inputOutput field
{
    focusDistance = eventValue;
}

function set_offlineRender (eventValue) // input event received for inputOutput field
{
    offlineRender = eventValue;
}

function set_key (eventValue) // input event received for inputOutput field
{
    key = eventValue;
}

function set_keyValuePosition (eventValue) // input event received for inputOutput field
{
    keyValuePosition = eventValue;
}

function set_keyValueOrientation (eventValue) // input event received for inputOutput field
{
    keyValueOrientation = eventValue;
}

function set_animated (eventValue) // input event received for inputOutput field
{
    animated = eventValue;
}

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}
function alwaysPrint (outputValue)
{
    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[Camera: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[Camera] ' + outputString + '\n');
}
"""),
        ROUTE(fromField='position',fromNode='CameraScript',toField='position',toNode='CameraViewpoint'),
        ROUTE(fromField='orientation',fromNode='CameraScript',toField='orientation',toNode='CameraViewpoint'),
        ROUTE(fromField='isActive',fromNode='CameraScript',toField='set_bind',toNode='CameraViewpoint'),
        ROUTE(fromField='isActive',fromNode='CameraScript',toField='set_bind',toNode='CameraNavInfo'),
        ROUTE(fromField='isActive',fromNode='CameraScript',toField='on',toNode='CameraDirectionalLight')])),
    #  =============== CameraShot ============== 
    ProtoDeclare(name='CameraShot',appinfo='CameraShot collects a specific set of CameraMovement animations that make up an individual shot.',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this CameraShot',type='SFString'),
        field(name='enabled',accessType='inputOutput',appinfo='Whether this CameraShot can be activated',type='SFBool',value=True),
        field(name='moves',accessType='inputOutput',appinfo='Set of CameraMovement nodes',type='MFNode',
          #  initializing CameraMovement nodes are inserted here by scene author using ProtoInstance 
          ),
        field(name='initialPosition',accessType='inputOutput',appinfo='Setup to reinitialize camera position for this shot',type='SFVec3f',value=(0,0,10)),
        field(name='initialOrientation',accessType='inputOutput',appinfo='Setup to reinitialize camera rotation for this shot',type='SFRotation',value=(0,0,1,0)),
        field(name='initialAimPoint',accessType='inputOutput',appinfo='Setup to reinitialize aimpoint (relative location for camera direction) for this shot',type='SFVec3f',value=(0,0,0)),
        field(name='initialFieldOfView',accessType='inputOutput',appinfo='pi/4',type='SFFloat',value=0.7854),
        field(name='initialFStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat',value=5.6),
        field(name='initialFocusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat',value=10.0),
        field(name='shotDuration',accessType='outputOnly',appinfo='Subtotal duration of contained CameraMovement move durations',type='SFTime'),
        field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
        field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='CameraShotScript',directOutput=True,mustEvaluate=True,
          field=[
          field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this CameraShot',type='SFString'),
          field(name='enabled',accessType='inputOutput',appinfo='Whether this CameraShot can be activated',type='SFBool'),
          field(name='moves',accessType='inputOutput',appinfo='Set of CameraMovement nodes',type='MFNode',
            #  initialization nodes (if any) go here 
            ),
          field(name='initialPosition',accessType='inputOutput',appinfo='Setup to reinitialize camera position for this shot',type='SFVec3f'),
          field(name='initialOrientation',accessType='inputOutput',appinfo='Setup to reinitialize camera rotation for this shot',type='SFRotation'),
          field(name='initialAimPoint',accessType='inputOutput',appinfo='Setup to reinitialize aimpoint (relative location for camera direction) for this shot',type='SFVec3f'),
          field(name='initialFieldOfView',accessType='inputOutput',appinfo='pi/4',type='SFFloat'),
          field(name='initialFStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat'),
          field(name='initialFocusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat'),
          field(name='shotDuration',accessType='outputOnly',appinfo='Subtotal duration of contained CameraMovement move durations',type='SFTime'),
          field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
          field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool'),
          field(name='key',accessType='inputOutput',appinfo='key array for interpolators',type='MFFloat'),
          field(name='keyValuePosition',accessType='inputOutput',appinfo='keyValue array for PositionInterpolator',type='MFVec3f'),
          field(name='keyValueOrientation',accessType='inputOutput',appinfo='keyValue array for OrientationInterpolator',type='MFRotation')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='moves',protoField='moves'),
            connect(nodeField='initialPosition',protoField='initialPosition'),
            connect(nodeField='initialOrientation',protoField='initialOrientation'),
            connect(nodeField='initialAimPoint',protoField='initialAimPoint'),
            connect(nodeField='initialFieldOfView',protoField='initialFieldOfView'),
            connect(nodeField='initialFStop',protoField='initialFStop'),
            connect(nodeField='initialFocusDistance',protoField='initialFocusDistance'),
            connect(nodeField='shotDuration',protoField='shotDuration'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]),

        sourceCode="""
ecmascript:
function initialize () // CameraShotScript
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

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

function set_moves (eventValue) // input event received for inputOutput field
{
    moves = eventValue;
}

function set_initialPosition (eventValue) // input event received for inputOutput field
{
    initialPosition = eventValue;
}

function set_initialOrientation (eventValue) // input event received for inputOutput field
{
    initialOrientation = eventValue;
}

function set_initialAimPoint (eventValue) // input event received for inputOutput field
{
    initialAimPoint = eventValue;
}

function set_initialFieldOfView (eventValue) // input event received for inputOutput field
{
    initialFieldOfView = eventValue;
}

function set_initialFStop (eventValue) // input event received for inputOutput field
{
    initialFStop = eventValue;
}

function set_initialFocusDistance (eventValue) // input event received for inputOutput field
{
    initialFocusDistance = eventValue;
}

function set_key (eventValue) // input event received for inputOutput field
{
    key = eventValue;
}

function set_keyValuePosition (eventValue) // input event received for inputOutput field
{
    keyValuePosition = eventValue;
}

function set_keyValueOrientation (eventValue) // input event received for inputOutput field
{
    keyValueOrientation = eventValue;
}

// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}
function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[CameraShot] ' + outputString + '\n');
}
""")]
        #  Add any ROUTEs here, going from Script to other nodes within ProtoBody 
        )),
    #  =============== CameraMovement ============== 
    ProtoDeclare(name='CameraMovement',appinfo='CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this CameraMovement',type='SFString'),
        field(name='enabled',accessType='inputOutput',appinfo='Whether this CameraMovement can be activated',type='SFBool',value=True),
        field(name='duration',accessType='inputOutput',appinfo='Duration in seconds for this move',type='SFFloat',value=0.0),
        field(name='goalPosition',accessType='inputOutput',appinfo='Goal camera position for this move',type='SFVec3f',value=(0,0,10)),
        field(name='goalOrientation',accessType='inputOutput',appinfo='Goal camera rotation for this move',type='SFRotation',value=(0,0,1,0)),
        field(name='tracking',accessType='inputOutput',appinfo='Whether or not camera direction is tracking towards the aimPoint',type='SFBool',value=False),
        field(name='goalAimPoint',accessType='inputOutput',appinfo='Goal aimPoint for this move, ignored if tracking=false',type='SFVec3f',value=(0,0,0)),
        field(name='goalFieldOfView',accessType='inputOutput',appinfo='Goal fieldOfView for this move',type='SFFloat',value=0.7854),
        field(name='goalFStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat',value=5.6),
        field(name='goalFocusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat',value=10.0),
        field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
        field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        #  Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events 
        children=[
        Script(DEF='CameraMovementScript',directOutput=True,mustEvaluate=True,
          field=[
          field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this CameraMovement',type='SFString'),
          field(name='enabled',accessType='inputOutput',appinfo='Whether this CameraMovement can be activated',type='SFBool'),
          field(name='duration',accessType='inputOutput',appinfo='Duration in seconds for this move',type='SFFloat'),
          field(name='goalPosition',accessType='inputOutput',appinfo='Goal camera position for this move',type='SFVec3f'),
          field(name='goalOrientation',accessType='inputOutput',appinfo='Goal camera rotation for this move',type='SFRotation'),
          field(name='tracking',accessType='inputOutput',appinfo='Whether or not camera direction is tracking towards the aimPoint',type='SFBool'),
          field(name='goalAimPoint',accessType='inputOutput',appinfo='Goal aimPoint for this move, ignored if tracking=false',type='SFVec3f'),
          field(name='goalFieldOfView',accessType='inputOutput',appinfo='Goal fieldOfView for this move',type='SFFloat'),
          field(name='goalFStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat'),
          field(name='goalFocusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat'),
          field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
          field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='duration',protoField='duration'),
            connect(nodeField='goalPosition',protoField='goalPosition'),
            connect(nodeField='goalOrientation',protoField='goalOrientation'),
            connect(nodeField='tracking',protoField='tracking'),
            connect(nodeField='goalAimPoint',protoField='goalAimPoint'),
            connect(nodeField='goalFieldOfView',protoField='goalFieldOfView'),
            connect(nodeField='goalFStop',protoField='goalFStop'),
            connect(nodeField='goalFocusDistance',protoField='goalFocusDistance'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]),

        sourceCode="""
ecmascript:
function initialize () // CameraMovementScript
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

function set_goalAimPoint (eventValue) // input event received for inputOutput field
{
    goalAimPoint_changed = eventValue;
    tracePrint ('goalAimPoint=' + goalAimPoint.toString());

    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator
}

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

function set_duration (eventValue) // input event received for inputOutput field
{
    duration = eventValue;
}

function set_goalPosition (eventValue) // input event received for inputOutput field
{
    goalPosition = eventValue;
}

function set_goalOrientation (eventValue) // input event received for inputOutput field
{
    goalOrientation = eventValue;
}

function set_tracking (eventValue) // input event received for inputOutput field
{
    tracking = eventValue;
}

function set_goalFieldOfView (eventValue) // input event received for inputOutput field
{
    goalFieldOfView = eventValue;
}

function set_goalFStop (eventValue) // input event received for inputOutput field
{
    goalFStop = eventValue;
}

function set_goalFocusDistance (eventValue) // input event received for inputOutput field
{
    goalFocusDistance = eventValue;
}

// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}

function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[CameraMovement] ' + outputString + '\n');
}
""")]
        #  Add any ROUTEs here, going from Script to other nodes within ProtoBody 
        )),
    #  =============== OfflineRender ============== 
    ProtoDeclare(name='OfflineRender',appinfo='OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).',
      ProtoInterface=ProtoInterface(
        #  TODO non-photorealistic rendering (NPR) parameters 
        field=[
        field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this OfflineRender',type='SFString'),
        field(name='enabled',accessType='inputOutput',appinfo='Whether this OfflineRender can be activated',type='SFBool',value=True),
        field(name='frameRate',accessType='inputOutput',appinfo='Frames per second recorded for this rendering',type='SFFloat',value=30.0),
        field(name='frameSize',accessType='inputOutput',appinfo='Size of frame in number of pixels width and height',type='SFVec2f',value=(640,480)),
        field(name='pixelAspectRatio',accessType='inputOutput',appinfo='Relative dimensions of pixel height/width typically 1.33 or 1',type='SFFloat',value=1.33),
        field(name='set_startTime',accessType='inputOnly',appinfo='Begin render operation',type='SFTime'),
        field(name='progress',accessType='outputOnly',appinfo='Progress performing render operation (0..1)',type='SFFloat'),
        field(name='renderCompleteTime',accessType='outputOnly',appinfo='Render operation complete',type='SFTime'),
        field(name='movieFormat',accessType='initializeOnly',appinfo='Format of rendered output movie (mpeg mp4 etc.), use first supported format',type='MFString',value=["mpeg"]),
        field(name='imageFormat',accessType='initializeOnly',appinfo='Format of rendered output images (png jpeg gif tiff etc.) use first supported format',type='MFString',value=["png"]),
        field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        children=[
        Script(DEF='OfflineRenderScript',mustEvaluate=True,
          field=[
          field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this OfflineRender',type='SFString'),
          field(name='enabled',accessType='inputOutput',appinfo='Whether this OfflineRender can be activated',type='SFBool'),
          field(name='frameRate',accessType='inputOutput',appinfo='Frames per second recorded for this rendering',type='SFFloat'),
          field(name='frameSize',accessType='inputOutput',appinfo='Size of frame in number of pixels width and height',type='SFVec2f'),
          field(name='pixelAspectRatio',accessType='inputOutput',appinfo='Relative dimensions of pixel height/width typically 1.33 or 1',type='SFFloat'),
          field(name='set_startTime',accessType='inputOnly',appinfo='Begin render operation',type='SFTime'),
          field(name='progress',accessType='outputOnly',appinfo='Progress performing render operation (0..1)',type='SFFloat'),
          field(name='renderCompleteTime',accessType='outputOnly',appinfo='Render operation complete',type='SFTime'),
          field(name='movieFormat',accessType='initializeOnly',appinfo='Format of rendered output movie (mpeg mp4 etc.)',type='MFString'),
          field(name='imageFormat',accessType='initializeOnly',appinfo='Format of rendered output images (png jpeg gif tiff etc.)',type='MFString'),
          field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='frameRate',protoField='frameRate'),
            connect(nodeField='frameSize',protoField='frameSize'),
            connect(nodeField='pixelAspectRatio',protoField='pixelAspectRatio'),
            connect(nodeField='set_startTime',protoField='set_startTime'),
            connect(nodeField='progress',protoField='progress'),
            connect(nodeField='renderCompleteTime',protoField='renderCompleteTime'),
            connect(nodeField='movieFormat',protoField='movieFormat'),
            connect(nodeField='imageFormat',protoField='imageFormat'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]),

        sourceCode="""
ecmascript:
function initialize () // OfflineRenderScript
{
//  tracePrint ('initialize start...');

    tracePrint ('... initialize complete');
}

function set_description (eventValue) // input event received for inputOutput field
{
    description = eventValue;
}

function set_enabled (eventValue) // input event received for inputOutput field
{
    enabled = eventValue;
}

function set_frameRate (eventValue) // input event received for inputOutput field
{
    frameRate = eventValue;
}

function set_frameSize (eventValue) // input event received for inputOutput field
{
    frameSize = eventValue;
}

function set_pixelAspectRatio (eventValue) // input event received for inputOutput field
{
    pixelAspectRatio = eventValue;
}

function set_startTime (eventValue) // input event received for inputOnly field
{
   // do something with input eventValue;
}

function tracePrint (outputValue)
{
	if (traceEnabled) alwaysPrint (outputValue);
}

function alwaysPrint (outputValue)
{
	// try to ensure outputValue is converted to string despite browser idiosyncracies
    var outputString = outputValue.toString(); // utility function according to spec
    if (outputString == null) outputString = outputValue; // direct cast

    if  (description.length > 0)
         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\n');
    else
         Browser.print ('[OfflineRender] ' + outputString + '\n');
}
""")]
        #  Add any ROUTEs here, going from Script to other nodes within ProtoBody 
        )),
    #  =============== Launch Prototype Example ============== 
    Background(skyColor=[(0.282353,0.380392,0.470588)]),
    Anchor(description='launch CameraExample scene',url=["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"],
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0.2))),
          geometry=Text(string=["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for CameraPrototypes.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python CameraPrototypes.py load and self-test diagnostics complete.")