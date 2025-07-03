const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "CameraPrototypes.x3d");
scene.addMetaData("description", "Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.");
scene.addMetaData("creator", "Don Brutzman and Jeff Weekley");
scene.addMetaData("created", "16 March 2009");
scene.addMetaData("modified", "25 October 2016");
scene.addMetaData("TODO", "Schematron rules, backed up by initialize() checks");
scene.addMetaData("reference", "BeyondViewpointCameraNodesWeb3D2009.pdf");
scene.addMetaData("reference", "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html");
scene.addMetaData("subject", "Camera nodes for Viewpoint navigation control");
scene.addMetaData("reference", "CameraExamples.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d");
scene.addMetaData("reference", "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
//=============== Camera ==============
let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Camera" appinfo="Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images." ><ProtoInterface><!--Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this Camera" type="SFString"></field>
<field name="position" accessType="inputOutput" appinfo="Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated" type="SFVec3f" value="0 0 10"></field>
<field name="orientation" accessType="inputOutput" appinfo="Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated" type="SFRotation" value="0 0 1 0"></field>
<field name="fieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat" value="0.7854"></field>
<field name="set_fraction" accessType="inputOnly" appinfo="input fraction drives interpolators" type="SFFloat"></field>
<field name="set_bind" accessType="inputOnly" appinfo="input event binds or unbinds this Camera" type="SFBool"></field>
<field name="bindTime" accessType="outputOnly" appinfo="output event indicates when this Camera is bound" type="SFTime"></field>
<field name="isBound" accessType="outputOnly" appinfo="output event indicates whether this Camera is bound or unbound" type="SFBool"></field>
<field name="nearClipPlane" accessType="inputOutput" appinfo="Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]" type="SFFloat" value="0.25"></field>
<field name="farClipPlane" accessType="inputOutput" appinfo="Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit" type="SFFloat" value="0"></field>
<field name="shots" accessType="inputOutput" appinfo="Array of CameraShot nodes which in turn contain CameraMovement nodes" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="headlight" accessType="inputOutput" appinfo="Whether camera headlight is on or off" type="SFBool" value="true"></field>
<field name="headlightColor" accessType="inputOutput" appinfo="Camera headlight color" type="SFColor" value="1 1 1"></field>
<field name="headlightIntensity" accessType="inputOutput" appinfo="Camera headlight intensity" type="SFFloat" value="1"></field>
<field name="filterColor" accessType="inputOutput" appinfo="Camera filter color that modifies virtual lens capture" type="SFColor" value="1 1 1"></field>
<field name="filterTransparency" accessType="inputOutput" appinfo="Camera filter transparency that modifies virtual lens capture" type="SFFloat" value="1"></field>
<field name="upVector" accessType="inputOutput" appinfo="upVector changes modify camera orientation (and possibly vice versa)" type="SFVec3f" value="0 1 0"></field>
<field name="fStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat" value="5.6"></field>
<field name="focusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat" value="10"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="totalDuration" accessType="outputOnly" appinfo="Total duration of contained enabled CameraShot (and thus CameraMovement) move durations" type="SFTime"></field>
<field name="offlineRender" accessType="inputOutput" appinfo="OfflineRender node" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Viewpoint DEF="CameraViewpoint"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="position" protoField="position"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="fieldOfView" protoField="fieldOfView"></connect>
<connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="bindTime" protoField="bindTime"></connect>
<connect nodeField="isBound" protoField="isBound"></connect>
</IS>
</Viewpoint>
<!--NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation--><NavigationInfo DEF="CameraNavInfo" type="&quot;EXAMINE&quot; &quot;FLY&quot; &quot;ANY&quot;"><IS><connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="headlight" protoField="headlight"></connect>
<connect nodeField="visibilityLimit" protoField="farClipPlane"></connect>
<!--No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.--></IS>
</NavigationInfo>
<!--this DirectionalLight replaces NavigationInfo headlight in order to add color capability--><DirectionalLight DEF="CameraDirectionalLight" global="true"><!--TODO confirm other default field values match NavigationInfo spec--><IS><connect nodeField="on" protoField="headlight"></connect>
<connect nodeField="color" protoField="headlightColor"></connect>
<connect nodeField="intensity" protoField="headlightIntensity"></connect>
</IS>
</DirectionalLight>
<PositionInterpolator DEF="CameraPositionInterpolator" key="0 1" keyValue="0 0 0 0 0 0"><IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="CameraOrientationInterpolator" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="set_fraction" protoField="set_fraction"></connect>
</IS>
</OrientationInterpolator>
<ROUTE fromField="value_changed" fromNode="CameraPositionInterpolator" toField="position" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="value_changed" fromNode="CameraOrientationInterpolator" toField="orientation" toNode="CameraViewpoint"></ROUTE>
<Script DEF="CameraScript" directOutput="true" mustEvaluate="true"><!--binding is controlled externally, all camera operations proceed the same regardless of whether bound or not--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this Camera" type="SFString"></field>
<field name="position" accessType="inputOutput" appinfo="Camera position in local transformation frame" type="SFVec3f"></field>
<field name="orientation" accessType="inputOutput" appinfo="Camera rotation in local transformation frame" type="SFRotation"></field>
<field name="set_fraction" accessType="inputOnly" appinfo="input fraction drives interpolators" type="SFFloat"></field>
<field name="set_bind" accessType="inputOnly" appinfo="input event binds or unbinds this Camera" type="SFBool"></field>
<field name="fieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat"></field>
<field name="nearClipPlane" accessType="inputOutput" appinfo="Vector distance to near clipping plane" type="SFFloat"></field>
<field name="farClipPlane" accessType="inputOutput" appinfo="Vector distance to far clipping plane" type="SFFloat"></field>
<field name="shots" accessType="inputOutput" appinfo="Array of CameraShot nodes which in turn contain CameraMovement nodes" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="filterColor" accessType="inputOutput" appinfo="Camera filter color that modifies virtual lens capture" type="SFColor"></field>
<field name="filterTransparency" accessType="inputOutput" appinfo="Camera filter transparency that modifies virtual lens capture" type="SFFloat"></field>
<field name="upVector" accessType="inputOutput" appinfo="upVector changes modify camera orientation (and possibly vice versa)" type="SFVec3f"></field>
<field name="fStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat"></field>
<field name="focusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="totalDuration" accessType="outputOnly" appinfo="Total duration of contained enabled CameraShot (and thus CameraMovement) move durations" type="SFTime"></field>
<field name="offlineRender" accessType="inputOutput" appinfo="OfflineRender node" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="ViewpointNode" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><Viewpoint USE="CameraViewpoint"></Viewpoint>
</field>
<field name="NavInfoNode" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><NavigationInfo USE="CameraNavInfo"></NavigationInfo>
</field>
<field name="CameraPI" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><PositionInterpolator USE="CameraPositionInterpolator"></PositionInterpolator>
</field>
<field name="CameraOI" accessType="initializeOnly" appinfo="node reference to permit getting setting fields from within Script" type="SFNode"><OrientationInterpolator USE="CameraOrientationInterpolator"></OrientationInterpolator>
</field>
<field name="key" accessType="inputOutput" appinfo="key array for interpolators" type="MFFloat"></field>
<field name="keyValuePosition" accessType="inputOutput" appinfo="keyValue array for PositionInterpolator" type="MFVec3f"></field>
<field name="keyValueOrientation" accessType="inputOutput" appinfo="keyValue array for OrientationInterpolator" type="MFRotation"></field>
<field name="animated" accessType="inputOutput" appinfo="whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events" type="SFBool" value="false"></field>
<field name="initialized" accessType="initializeOnly" appinfo="perform checkShots() function once immediately after initialization" type="SFBool" value="false"></field>
<field name="shotCount" accessType="initializeOnly" appinfo="how many CameraShot nodes are contained in shots array" type="SFInt32" value="0"></field>
<field name="movesCount" accessType="initializeOnly" appinfo="how many CameraMove nodes are contained in moves array" type="SFInt32" value="0"></field>
<field name="frameCount" accessType="initializeOnly" appinfo="how many frames were created in current loop" type="SFFloat" value="0"></field>
<field name="startTime" accessType="initializeOnly" appinfo="holding variable" type="SFTime" value="0"></field>
<field name="priorTraceTime" accessType="initializeOnly" appinfo="holding variable" type="SFTime" value="0"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="position" protoField="position"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="set_fraction" protoField="set_fraction"></connect>
<connect nodeField="set_bind" protoField="set_bind"></connect>
<connect nodeField="fieldOfView" protoField="fieldOfView"></connect>
<connect nodeField="nearClipPlane" protoField="nearClipPlane"></connect>
<connect nodeField="farClipPlane" protoField="farClipPlane"></connect>
<connect nodeField="shots" protoField="shots"></connect>
<connect nodeField="filterColor" protoField="filterColor"></connect>
<connect nodeField="filterTransparency" protoField="filterTransparency"></connect>
<connect nodeField="upVector" protoField="upVector"></connect>
<connect nodeField="fStop" protoField="fStop"></connect>
<connect nodeField="focusDistance" protoField="focusDistance"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="totalDuration" protoField="totalDuration"></connect>
<connect nodeField="offlineRender" protoField="offlineRender"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<![CDATA[ecmascript:
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
                // see X3D ECMAScript binding Table 7.18 &#8212; SFRotation instance creation functions

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
        tracePrint ('<PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'></PositionInterpolator>');
        tracePrint ('<OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'></OrientationInterpolator>');
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
        tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'></PositionInterpolator>');
        tracePrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'></OrientationInterpolator>');
      }
   }
   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval
   {
      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());
      priorTraceTime = timestamp;

      if (animated) // output results
      {
        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());
        tracePrint ('  <PositionInterpolator    DEF=\'CameraPositionInterpolator\'    key=\'' + stripBrackets(CameraPI.key) + '\' keyValue=\'' + stripBrackets(CameraPI.keyValue) + '\'></PositionInterpolator>');
        alwaysPrint ('  <OrientationInterpolator DEF=\'CameraOrientationInterpolator\' key=\'' + stripBrackets(CameraOI.key) + '\' keyValue=\'' + stripBrackets(CameraOI.keyValue) + '\'></OrientationInterpolator>');
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
}]]></Script>
<ROUTE fromField="position" fromNode="CameraScript" toField="position" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="orientation" fromNode="CameraScript" toField="orientation" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="set_bind" toNode="CameraViewpoint"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="set_bind" toNode="CameraNavInfo"></ROUTE>
<ROUTE fromField="isActive" fromNode="CameraScript" toField="on" toNode="CameraDirectionalLight"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "Camera";
ProtoDeclare17.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.";
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
ProtoInterface19.getField("description")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface20.getField("position").setValue("0 0 10");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface21.getField("orientation").setValue("0 0 1 0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface22.getField("fieldOfView").setValue("0.7854");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface23.getField("set_fraction")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface24.getField("set_bind")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface25.getField("bindTime")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface26.getField("isBound")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface27.getField("nearClipPlane").setValue("0.25");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface28.getField("farClipPlane").setValue("0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface29.getField("shots")//initialization nodes (if any) go here
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface30.getField("headlight").setValue("true");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface31.getField("headlightColor").setValue("1 1 1");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface32.getField("headlightIntensity").setValue("1");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface33.getField("filterColor").setValue("1 1 1");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface34.getField("filterTransparency").setValue("1");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface35.getField("upVector").setValue("0 1 0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface36.getField("fStop").setValue("5.6");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface37.getField("focusDistance").setValue("10");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface38.getField("isActive")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface39.getField("totalDuration")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface40.getField("offlineRender")//initialization node (if any) goes here
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface41.getField("traceEnabled").setValue("false");
ProtoInterface18YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface18;

let ProtoBody42 = browser.currentScene.createNode("ProtoBody");
let Viewpoint43 = browser.currentScene.createNode("Viewpoint");
Viewpoint43.DEF = "CameraViewpoint";
let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "description";
connect45.protoField = "description";
IS44YYY.connect = new X3D.MFNode();

IS44ZZZ.connect[0] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "position";
connect46.protoField = "position";
IS44ZZZ.connect[1] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "orientation";
connect47.protoField = "orientation";
IS44ZZZ.connect[2] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "fieldOfView";
connect48.protoField = "fieldOfView";
IS44ZZZ.connect[3] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "set_bind";
connect49.protoField = "set_bind";
IS44ZZZ.connect[4] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "bindTime";
connect50.protoField = "bindTime";
IS44ZZZ.connect[5] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "isBound";
connect51.protoField = "isBound";
IS44ZZZ.connect[6] = connect51;

iS = IS44;

ProtoBody42YYY.children = new X3D.MFNode();

ProtoBody42ZZZ.children[0] = Viewpoint43;

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
let NavigationInfo52 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo52.DEF = "CameraNavInfo";
NavigationInfo52.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "set_bind";
connect54.protoField = "set_bind";
IS53YYY.connect = new X3D.MFNode();

IS53ZZZ.connect[0] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "headlight";
connect55.protoField = "headlight";
IS53ZZZ.connect[1] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "visibilityLimit";
connect56.protoField = "farClipPlane";
IS53ZZZ.connect[2] = connect56;

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
iS = IS53;

ProtoBody42ZZZ.children[1] = NavigationInfo52;

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
let DirectionalLight57 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight57.DEF = "CameraDirectionalLight";
DirectionalLight57.global = True;
//TODO confirm other default field values match NavigationInfo spec
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "on";
connect59.protoField = "headlight";
IS58YYY.connect = new X3D.MFNode();

IS58ZZZ.connect[0] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "color";
connect60.protoField = "headlightColor";
IS58ZZZ.connect[1] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "intensity";
connect61.protoField = "headlightIntensity";
IS58ZZZ.connect[2] = connect61;

iS = IS58;

ProtoBody42ZZZ.children[2] = DirectionalLight57;

let PositionInterpolator62 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator62.DEF = "CameraPositionInterpolator";
PositionInterpolator62.key = new X3D.MFFloat([0,1]);
PositionInterpolator62.keyValue = new X3D.MFVec3f([0,0,0,0,0,0]);
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "set_fraction";
connect64.protoField = "set_fraction";
IS63YYY.connect = new X3D.MFNode();

IS63ZZZ.connect[0] = connect64;

iS = IS63;

ProtoBody42ZZZ.children[3] = PositionInterpolator62;

let OrientationInterpolator65 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "CameraOrientationInterpolator";
OrientationInterpolator65.key = new X3D.MFFloat([0,1]);
OrientationInterpolator65.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0]);
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "set_fraction";
connect67.protoField = "set_fraction";
IS66YYY.connect = new X3D.MFNode();

IS66ZZZ.connect[0] = connect67;

iS = IS66;

ProtoBody42ZZZ.children[4] = OrientationInterpolator65;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "value_changed";
ROUTE68.fromNode = "CameraPositionInterpolator";
ROUTE68.toField = "position";
ROUTE68.toNode = "CameraViewpoint";
ProtoBody42ZZZ.children[5] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "CameraOrientationInterpolator";
ROUTE69.toField = "orientation";
ROUTE69.toNode = "CameraViewpoint";
ProtoBody42ZZZ.children[6] = ROUTE69;

let Script70 = browser.currentScene.createNode("Script");
Script70.DEF = "CameraScript";
Script70.directOutput = True;
Script70.mustEvaluate = True;
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
Script71.getField("description")Script70YYY.field = new X3D.MFNode();

Script72.getField("position")Script70YYY.field = new X3D.MFNode();

Script73.getField("orientation")Script70YYY.field = new X3D.MFNode();

Script74.getField("set_fraction")Script70YYY.field = new X3D.MFNode();

Script75.getField("set_bind")Script70YYY.field = new X3D.MFNode();

Script76.getField("fieldOfView")Script70YYY.field = new X3D.MFNode();

Script77.getField("nearClipPlane")Script70YYY.field = new X3D.MFNode();

Script78.getField("farClipPlane")Script70YYY.field = new X3D.MFNode();

Script79.getField("shots")//initialization nodes (if any) go here
Script70YYY.field = new X3D.MFNode();

Script80.getField("filterColor")Script70YYY.field = new X3D.MFNode();

Script81.getField("filterTransparency")Script70YYY.field = new X3D.MFNode();

Script82.getField("upVector")Script70YYY.field = new X3D.MFNode();

Script83.getField("fStop")Script70YYY.field = new X3D.MFNode();

Script84.getField("focusDistance")Script70YYY.field = new X3D.MFNode();

Script85.getField("isActive")Script70YYY.field = new X3D.MFNode();

Script86.getField("totalDuration")Script70YYY.field = new X3D.MFNode();

Script87.getField("offlineRender")//initialization node (if any) goes here
Script70YYY.field = new X3D.MFNode();

Script88.getField("ViewpointNode")let Viewpoint89 = browser.currentScene.createNode("Viewpoint");
Viewpoint89.USE = "CameraViewpoint";
field88YYY.children = new X3D.MFNode();

field88ZZZ.children[0] = Viewpoint89;

Script70YYY.field = new X3D.MFNode();

Script90.getField("NavInfoNode")let NavigationInfo91 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo91.USE = "CameraNavInfo";
field90YYY.children = new X3D.MFNode();

field90ZZZ.children[0] = NavigationInfo91;

Script70YYY.field = new X3D.MFNode();

Script92.getField("CameraPI")let PositionInterpolator93 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator93.USE = "CameraPositionInterpolator";
field92YYY.children = new X3D.MFNode();

field92ZZZ.children[0] = PositionInterpolator93;

Script70YYY.field = new X3D.MFNode();

Script94.getField("CameraOI")let OrientationInterpolator95 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator95.USE = "CameraOrientationInterpolator";
field94YYY.children = new X3D.MFNode();

field94ZZZ.children[0] = OrientationInterpolator95;

Script70YYY.field = new X3D.MFNode();

Script96.getField("key")Script70YYY.field = new X3D.MFNode();

Script97.getField("keyValuePosition")Script70YYY.field = new X3D.MFNode();

Script98.getField("keyValueOrientation")Script70YYY.field = new X3D.MFNode();

Script99.getField("animated").setValue("false");
Script70YYY.field = new X3D.MFNode();

Script100.getField("initialized").setValue("false");
Script70YYY.field = new X3D.MFNode();

Script101.getField("shotCount").setValue("0");
Script70YYY.field = new X3D.MFNode();

Script102.getField("movesCount").setValue("0");
Script70YYY.field = new X3D.MFNode();

Script103.getField("frameCount").setValue("0");
Script70YYY.field = new X3D.MFNode();

Script104.getField("startTime").setValue("0");
Script70YYY.field = new X3D.MFNode();

Script105.getField("priorTraceTime").setValue("0");
Script70YYY.field = new X3D.MFNode();

Script106.getField("traceEnabled")Script70YYY.field = new X3D.MFNode();

let IS107 = browser.currentScene.createNode("IS");
let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "description";
connect108.protoField = "description";
IS107YYY.connect = new X3D.MFNode();

IS107ZZZ.connect[0] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "position";
connect109.protoField = "position";
IS107ZZZ.connect[1] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "orientation";
connect110.protoField = "orientation";
IS107ZZZ.connect[2] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "set_fraction";
connect111.protoField = "set_fraction";
IS107ZZZ.connect[3] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "set_bind";
connect112.protoField = "set_bind";
IS107ZZZ.connect[4] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "fieldOfView";
connect113.protoField = "fieldOfView";
IS107ZZZ.connect[5] = connect113;

let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "nearClipPlane";
connect114.protoField = "nearClipPlane";
IS107ZZZ.connect[6] = connect114;

let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "farClipPlane";
connect115.protoField = "farClipPlane";
IS107ZZZ.connect[7] = connect115;

let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "shots";
connect116.protoField = "shots";
IS107ZZZ.connect[8] = connect116;

let connect117 = browser.currentScene.createNode("connect");
connect117.nodeField = "filterColor";
connect117.protoField = "filterColor";
IS107ZZZ.connect[9] = connect117;

let connect118 = browser.currentScene.createNode("connect");
connect118.nodeField = "filterTransparency";
connect118.protoField = "filterTransparency";
IS107ZZZ.connect[10] = connect118;

let connect119 = browser.currentScene.createNode("connect");
connect119.nodeField = "upVector";
connect119.protoField = "upVector";
IS107ZZZ.connect[11] = connect119;

let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "fStop";
connect120.protoField = "fStop";
IS107ZZZ.connect[12] = connect120;

let connect121 = browser.currentScene.createNode("connect");
connect121.nodeField = "focusDistance";
connect121.protoField = "focusDistance";
IS107ZZZ.connect[13] = connect121;

let connect122 = browser.currentScene.createNode("connect");
connect122.nodeField = "isActive";
connect122.protoField = "isActive";
IS107ZZZ.connect[14] = connect122;

let connect123 = browser.currentScene.createNode("connect");
connect123.nodeField = "totalDuration";
connect123.protoField = "totalDuration";
IS107ZZZ.connect[15] = connect123;

let connect124 = browser.currentScene.createNode("connect");
connect124.nodeField = "offlineRender";
connect124.protoField = "offlineRender";
IS107ZZZ.connect[16] = connect124;

let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "traceEnabled";
connect125.protoField = "traceEnabled";
IS107ZZZ.connect[17] = connect125;

iS = IS107;


Script70.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"    alwaysPrint ('initialize complete');\n"+
"}\n"+
"\n"+
"function checkShots (eventValue)\n"+
"{\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"    totalDuration= 0;\n"+
"    shotCount  = shots.length;\n"+
"    movesCount = 0;\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"       movesCount   += shots[i].moves.length;\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"       if (shots[i].moves.length == 0)\n"+
"       {\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"       }\n"+
"    }\n"+
"    // size checks before proceeding\n"+
"    if (shotCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (movesCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (totalDuration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"    // compute interpolators\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"        if (i==0) // initial entries\n"+
"        {\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"        }\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"        {\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"           k++;\n"+
"        }\n"+
"        tracePrint (shots[i].description);\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"        {\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"            if (!animated)\n"+
"            {\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"            }\n"+
"            else\n"+
"            {\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"                if (shotVector.length() >= 0)\n"+
"                {\n"+
"                    // default view direction is along -Z axis\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"                }\n"+
"                else // note (k > 0)\n"+
"                {\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"                }\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"            }\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"            // intermediate trace\n"+
"            tracePrint ('                key=' + key);\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"        }\n"+
"    }\n"+
"    tracePrint ('                key=' + key);\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"    if (key.length != keyValuePosition.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"    }\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"    }\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"    }\n"+
"    tracePrint ('           animated=' + animated);\n"+
"    // set node values\n"+
"    CameraPI.key      = key;\n"+
"    CameraOI.key      = key;\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"    if (!animated) // output results\n"+
"    {\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"    }\n"+
"    tracePrint ('checkShots() complete');\n"+
"}\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"{\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"    outputString = '';\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"    {\n"+
"       outputString += fieldArray[i].toString();\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"    }\n"+
"    return outputString;\n"+
"}\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"{\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"   if (frameCount == 0)\n"+
"   {\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"      startTime      = timestamp;\n"+
"      priorTraceTime = timestamp;\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   if (eventValue == 0)\n"+
"   {\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"      frameCount++;\n"+
"   }\n"+
"   else if (eventValue == 1)\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"      }\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"      frameCount++;\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"   if (initialized == false)\n"+
"   {\n"+
"      checkShots (true);\n"+
"      initialized = true;\n"+
"   }\n"+
"   if (eventValue)\n"+
"   {\n"+
"       tracePrint ('Camera has been bound');\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"       tracePrint ('Camera has been unbound');\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    position = eventValue;\n"+
"}\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    orientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    nearClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    farClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    shots = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterColor = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterTransparency = eventValue;\n"+
"}\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    upVector = eventValue;\n"+
"}\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    focusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    offlineRender = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    animated = eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}`)
ProtoBody42ZZZ.children[7] = Script70;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromField = "position";
ROUTE126.fromNode = "CameraScript";
ROUTE126.toField = "position";
ROUTE126.toNode = "CameraViewpoint";
ProtoBody42ZZZ.children[8] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "orientation";
ROUTE127.fromNode = "CameraScript";
ROUTE127.toField = "orientation";
ROUTE127.toNode = "CameraViewpoint";
ProtoBody42ZZZ.children[9] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromField = "isActive";
ROUTE128.fromNode = "CameraScript";
ROUTE128.toField = "set_bind";
ROUTE128.toNode = "CameraViewpoint";
ProtoBody42ZZZ.children[10] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromField = "isActive";
ROUTE129.fromNode = "CameraScript";
ROUTE129.toField = "set_bind";
ROUTE129.toNode = "CameraNavInfo";
ProtoBody42ZZZ.children[11] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromField = "isActive";
ROUTE130.fromNode = "CameraScript";
ROUTE130.toField = "on";
ROUTE130.toNode = "CameraDirectionalLight";
ProtoBody42ZZZ.children[12] = ROUTE130;

protoBody = ProtoBody42;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare17;

//=============== CameraShot ==============
let ProtoDeclare131 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CameraShot" appinfo="CameraShot collects a specific set of CameraMovement animations that make up an individual shot." ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraShot can be activated" type="SFBool" value="true"></field>
<field name="moves" accessType="inputOutput" appinfo="Set of CameraMovement nodes" type="MFNode"><!--initializing CameraMovement nodes are inserted here by scene author using ProtoInstance--></field>
<field name="initialPosition" accessType="inputOutput" appinfo="Setup to reinitialize camera position for this shot" type="SFVec3f" value="0 0 10"></field>
<field name="initialOrientation" accessType="inputOutput" appinfo="Setup to reinitialize camera rotation for this shot" type="SFRotation" value="0 0 1 0"></field>
<field name="initialAimPoint" accessType="inputOutput" appinfo="Setup to reinitialize aimpoint (relative location for camera direction) for this shot" type="SFVec3f" value="0 0 0"></field>
<field name="initialFieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat" value="0.7854"></field>
<field name="initialFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat" value="5.6"></field>
<field name="initialFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat" value="10"></field>
<field name="shotDuration" accessType="outputOnly" appinfo="Subtotal duration of contained CameraMovement move durations" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Script DEF="CameraShotScript" directOutput="true" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraShot" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraShot can be activated" type="SFBool"></field>
<field name="moves" accessType="inputOutput" appinfo="Set of CameraMovement nodes" type="MFNode"><!--initialization nodes (if any) go here--></field>
<field name="initialPosition" accessType="inputOutput" appinfo="Setup to reinitialize camera position for this shot" type="SFVec3f"></field>
<field name="initialOrientation" accessType="inputOutput" appinfo="Setup to reinitialize camera rotation for this shot" type="SFRotation"></field>
<field name="initialAimPoint" accessType="inputOutput" appinfo="Setup to reinitialize aimpoint (relative location for camera direction) for this shot" type="SFVec3f"></field>
<field name="initialFieldOfView" accessType="inputOutput" appinfo="pi/4" type="SFFloat"></field>
<field name="initialFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat"></field>
<field name="initialFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat"></field>
<field name="shotDuration" accessType="outputOnly" appinfo="Subtotal duration of contained CameraMovement move durations" type="SFTime"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<field name="key" accessType="inputOutput" appinfo="key array for interpolators" type="MFFloat"></field>
<field name="keyValuePosition" accessType="inputOutput" appinfo="keyValue array for PositionInterpolator" type="MFVec3f"></field>
<field name="keyValueOrientation" accessType="inputOutput" appinfo="keyValue array for OrientationInterpolator" type="MFRotation"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="moves" protoField="moves"></connect>
<connect nodeField="initialPosition" protoField="initialPosition"></connect>
<connect nodeField="initialOrientation" protoField="initialOrientation"></connect>
<connect nodeField="initialAimPoint" protoField="initialAimPoint"></connect>
<connect nodeField="initialFieldOfView" protoField="initialFieldOfView"></connect>
<connect nodeField="initialFStop" protoField="initialFStop"></connect>
<connect nodeField="initialFocusDistance" protoField="initialFocusDistance"></connect>
<connect nodeField="shotDuration" protoField="shotDuration"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<![CDATA[ecmascript:
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
}]]></Script>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare131.name = "CameraShot";
ProtoDeclare131.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.";
ProtoInterface133.getField("description")ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface134.getField("enabled").setValue("true");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface135.getField("moves")//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface136.getField("initialPosition").setValue("0 0 10");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface137.getField("initialOrientation").setValue("0 0 1 0");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface138.getField("initialAimPoint").setValue("0 0 0");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface139.getField("initialFieldOfView").setValue("0.7854");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface140.getField("initialFStop").setValue("5.6");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface141.getField("initialFocusDistance").setValue("10");
ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface142.getField("shotDuration")ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface143.getField("isActive")ProtoInterface132YYY.field = new X3D.MFNode();

ProtoInterface144.getField("traceEnabled").setValue("false");
ProtoInterface132YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface132;

let ProtoBody145 = browser.currentScene.createNode("ProtoBody");
let Script146 = browser.currentScene.createNode("Script");
Script146.DEF = "CameraShotScript";
Script146.directOutput = True;
Script146.mustEvaluate = True;
Script147.getField("description")Script146YYY.field = new X3D.MFNode();

Script148.getField("enabled")Script146YYY.field = new X3D.MFNode();

Script149.getField("moves")//initialization nodes (if any) go here
Script146YYY.field = new X3D.MFNode();

Script150.getField("initialPosition")Script146YYY.field = new X3D.MFNode();

Script151.getField("initialOrientation")Script146YYY.field = new X3D.MFNode();

Script152.getField("initialAimPoint")Script146YYY.field = new X3D.MFNode();

Script153.getField("initialFieldOfView")Script146YYY.field = new X3D.MFNode();

Script154.getField("initialFStop")Script146YYY.field = new X3D.MFNode();

Script155.getField("initialFocusDistance")Script146YYY.field = new X3D.MFNode();

Script156.getField("shotDuration")Script146YYY.field = new X3D.MFNode();

Script157.getField("isActive")Script146YYY.field = new X3D.MFNode();

Script158.getField("traceEnabled")Script146YYY.field = new X3D.MFNode();

Script159.getField("key")Script146YYY.field = new X3D.MFNode();

Script160.getField("keyValuePosition")Script146YYY.field = new X3D.MFNode();

Script161.getField("keyValueOrientation")Script146YYY.field = new X3D.MFNode();

let IS162 = browser.currentScene.createNode("IS");
let connect163 = browser.currentScene.createNode("connect");
connect163.nodeField = "description";
connect163.protoField = "description";
IS162YYY.connect = new X3D.MFNode();

IS162ZZZ.connect[0] = connect163;

let connect164 = browser.currentScene.createNode("connect");
connect164.nodeField = "enabled";
connect164.protoField = "enabled";
IS162ZZZ.connect[1] = connect164;

let connect165 = browser.currentScene.createNode("connect");
connect165.nodeField = "moves";
connect165.protoField = "moves";
IS162ZZZ.connect[2] = connect165;

let connect166 = browser.currentScene.createNode("connect");
connect166.nodeField = "initialPosition";
connect166.protoField = "initialPosition";
IS162ZZZ.connect[3] = connect166;

let connect167 = browser.currentScene.createNode("connect");
connect167.nodeField = "initialOrientation";
connect167.protoField = "initialOrientation";
IS162ZZZ.connect[4] = connect167;

let connect168 = browser.currentScene.createNode("connect");
connect168.nodeField = "initialAimPoint";
connect168.protoField = "initialAimPoint";
IS162ZZZ.connect[5] = connect168;

let connect169 = browser.currentScene.createNode("connect");
connect169.nodeField = "initialFieldOfView";
connect169.protoField = "initialFieldOfView";
IS162ZZZ.connect[6] = connect169;

let connect170 = browser.currentScene.createNode("connect");
connect170.nodeField = "initialFStop";
connect170.protoField = "initialFStop";
IS162ZZZ.connect[7] = connect170;

let connect171 = browser.currentScene.createNode("connect");
connect171.nodeField = "initialFocusDistance";
connect171.protoField = "initialFocusDistance";
IS162ZZZ.connect[8] = connect171;

let connect172 = browser.currentScene.createNode("connect");
connect172.nodeField = "shotDuration";
connect172.protoField = "shotDuration";
IS162ZZZ.connect[9] = connect172;

let connect173 = browser.currentScene.createNode("connect");
connect173.nodeField = "isActive";
connect173.protoField = "isActive";
IS162ZZZ.connect[10] = connect173;

let connect174 = browser.currentScene.createNode("connect");
connect174.nodeField = "traceEnabled";
connect174.protoField = "traceEnabled";
IS162ZZZ.connect[11] = connect174;

iS = IS162;


Script146.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"    shotDuration = 0;\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"    {\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"    }\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    moves = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialAimPoint = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}`)
ProtoBody145YYY.children = new X3D.MFNode();

ProtoBody145ZZZ.children[0] = Script146;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
protoBody = ProtoBody145;

browser.currentScene.children[1] = ProtoDeclare131;

//=============== CameraMovement ==============
let ProtoDeclare175 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CameraMovement" appinfo="CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView." ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraMovement can be activated" type="SFBool" value="true"></field>
<field name="duration" accessType="inputOutput" appinfo="Duration in seconds for this move" type="SFFloat" value="0"></field>
<field name="goalPosition" accessType="inputOutput" appinfo="Goal camera position for this move" type="SFVec3f" value="0 0 10"></field>
<field name="goalOrientation" accessType="inputOutput" appinfo="Goal camera rotation for this move" type="SFRotation" value="0 0 1 0"></field>
<field name="tracking" accessType="inputOutput" appinfo="Whether or not camera direction is tracking towards the aimPoint" type="SFBool" value="false"></field>
<field name="goalAimPoint" accessType="inputOutput" appinfo="Goal aimPoint for this move, ignored if tracking=false" type="SFVec3f" value="0 0 0"></field>
<field name="goalFieldOfView" accessType="inputOutput" appinfo="Goal fieldOfView for this move" type="SFFloat" value="0.7854"></field>
<field name="goalFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat" value="5.6"></field>
<field name="goalFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat" value="10"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of this prototype--><!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><!--Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events--><Script DEF="CameraMovementScript" directOutput="true" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this CameraMovement" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this CameraMovement can be activated" type="SFBool"></field>
<field name="duration" accessType="inputOutput" appinfo="Duration in seconds for this move" type="SFFloat"></field>
<field name="goalPosition" accessType="inputOutput" appinfo="Goal camera position for this move" type="SFVec3f"></field>
<field name="goalOrientation" accessType="inputOutput" appinfo="Goal camera rotation for this move" type="SFRotation"></field>
<field name="tracking" accessType="inputOutput" appinfo="Whether or not camera direction is tracking towards the aimPoint" type="SFBool"></field>
<field name="goalAimPoint" accessType="inputOutput" appinfo="Goal aimPoint for this move, ignored if tracking=false" type="SFVec3f"></field>
<field name="goalFieldOfView" accessType="inputOutput" appinfo="Goal fieldOfView for this move" type="SFFloat"></field>
<field name="goalFStop" accessType="inputOutput" appinfo="Focal length divided effective aperture diameter indicating width of focal plane" type="SFFloat"></field>
<field name="goalFocusDistance" accessType="inputOutput" appinfo="Distance to focal plane of sharpest focus" type="SFFloat"></field>
<field name="isActive" accessType="outputOnly" appinfo="Mark start/stop with true/false output respectively useful to trigger external animations" type="SFBool"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="duration" protoField="duration"></connect>
<connect nodeField="goalPosition" protoField="goalPosition"></connect>
<connect nodeField="goalOrientation" protoField="goalOrientation"></connect>
<connect nodeField="tracking" protoField="tracking"></connect>
<connect nodeField="goalAimPoint" protoField="goalAimPoint"></connect>
<connect nodeField="goalFieldOfView" protoField="goalFieldOfView"></connect>
<connect nodeField="goalFStop" protoField="goalFStop"></connect>
<connect nodeField="goalFocusDistance" protoField="goalFocusDistance"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<![CDATA[ecmascript:
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
}]]></Script>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare175.name = "CameraMovement";
ProtoDeclare175.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.";
ProtoInterface177.getField("description")ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface178.getField("enabled").setValue("true");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface179.getField("duration").setValue("0");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface180.getField("goalPosition").setValue("0 0 10");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface181.getField("goalOrientation").setValue("0 0 1 0");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface182.getField("tracking").setValue("false");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface183.getField("goalAimPoint").setValue("0 0 0");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface184.getField("goalFieldOfView").setValue("0.7854");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface185.getField("goalFStop").setValue("5.6");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface186.getField("goalFocusDistance").setValue("10");
ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface187.getField("isActive")ProtoInterface176YYY.field = new X3D.MFNode();

ProtoInterface188.getField("traceEnabled").setValue("false");
ProtoInterface176YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface176;

let ProtoBody189 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
let Script190 = browser.currentScene.createNode("Script");
Script190.DEF = "CameraMovementScript";
Script190.directOutput = True;
Script190.mustEvaluate = True;
Script191.getField("description")Script190YYY.field = new X3D.MFNode();

Script192.getField("enabled")Script190YYY.field = new X3D.MFNode();

Script193.getField("duration")Script190YYY.field = new X3D.MFNode();

Script194.getField("goalPosition")Script190YYY.field = new X3D.MFNode();

Script195.getField("goalOrientation")Script190YYY.field = new X3D.MFNode();

Script196.getField("tracking")Script190YYY.field = new X3D.MFNode();

Script197.getField("goalAimPoint")Script190YYY.field = new X3D.MFNode();

Script198.getField("goalFieldOfView")Script190YYY.field = new X3D.MFNode();

Script199.getField("goalFStop")Script190YYY.field = new X3D.MFNode();

Script200.getField("goalFocusDistance")Script190YYY.field = new X3D.MFNode();

Script201.getField("isActive")Script190YYY.field = new X3D.MFNode();

Script202.getField("traceEnabled")Script190YYY.field = new X3D.MFNode();

let IS203 = browser.currentScene.createNode("IS");
let connect204 = browser.currentScene.createNode("connect");
connect204.nodeField = "description";
connect204.protoField = "description";
IS203YYY.connect = new X3D.MFNode();

IS203ZZZ.connect[0] = connect204;

let connect205 = browser.currentScene.createNode("connect");
connect205.nodeField = "enabled";
connect205.protoField = "enabled";
IS203ZZZ.connect[1] = connect205;

let connect206 = browser.currentScene.createNode("connect");
connect206.nodeField = "duration";
connect206.protoField = "duration";
IS203ZZZ.connect[2] = connect206;

let connect207 = browser.currentScene.createNode("connect");
connect207.nodeField = "goalPosition";
connect207.protoField = "goalPosition";
IS203ZZZ.connect[3] = connect207;

let connect208 = browser.currentScene.createNode("connect");
connect208.nodeField = "goalOrientation";
connect208.protoField = "goalOrientation";
IS203ZZZ.connect[4] = connect208;

let connect209 = browser.currentScene.createNode("connect");
connect209.nodeField = "tracking";
connect209.protoField = "tracking";
IS203ZZZ.connect[5] = connect209;

let connect210 = browser.currentScene.createNode("connect");
connect210.nodeField = "goalAimPoint";
connect210.protoField = "goalAimPoint";
IS203ZZZ.connect[6] = connect210;

let connect211 = browser.currentScene.createNode("connect");
connect211.nodeField = "goalFieldOfView";
connect211.protoField = "goalFieldOfView";
IS203ZZZ.connect[7] = connect211;

let connect212 = browser.currentScene.createNode("connect");
connect212.nodeField = "goalFStop";
connect212.protoField = "goalFStop";
IS203ZZZ.connect[8] = connect212;

let connect213 = browser.currentScene.createNode("connect");
connect213.nodeField = "goalFocusDistance";
connect213.protoField = "goalFocusDistance";
IS203ZZZ.connect[9] = connect213;

let connect214 = browser.currentScene.createNode("connect");
connect214.nodeField = "isActive";
connect214.protoField = "isActive";
IS203ZZZ.connect[10] = connect214;

let connect215 = browser.currentScene.createNode("connect");
connect215.nodeField = "traceEnabled";
connect215.protoField = "traceEnabled";
IS203ZZZ.connect[11] = connect215;

iS = IS203;


Script190.setSourceCode(`ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"                           );\n"+
"    if (duration < 0)\n"+
"    {\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"       duration = 0;\n"+
"    }\n"+
"    else if (duration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"    }\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalAimPoint_changed = eventValue;\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    duration = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    tracking = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}`)
ProtoBody189YYY.children = new X3D.MFNode();

ProtoBody189ZZZ.children[0] = Script190;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
protoBody = ProtoBody189;

browser.currentScene.children[2] = ProtoDeclare175;

//=============== OfflineRender ==============
let ProtoDeclare216 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="OfflineRender" appinfo="OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)." ><ProtoInterface><!--TODO non-photorealistic rendering (NPR) parameters--><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this OfflineRender can be activated" type="SFBool" value="true"></field>
<field name="frameRate" accessType="inputOutput" appinfo="Frames per second recorded for this rendering" type="SFFloat" value="30"></field>
<field name="frameSize" accessType="inputOutput" appinfo="Size of frame in number of pixels width and height" type="SFVec2f" value="640 480"></field>
<field name="pixelAspectRatio" accessType="inputOutput" appinfo="Relative dimensions of pixel height/width typically 1.33 or 1" type="SFFloat" value="1.33"></field>
<field name="set_startTime" accessType="inputOnly" appinfo="Begin render operation" type="SFTime"></field>
<field name="progress" accessType="outputOnly" appinfo="Progress performing render operation (0..1)" type="SFFloat"></field>
<field name="renderCompleteTime" accessType="outputOnly" appinfo="Render operation complete" type="SFTime"></field>
<field name="movieFormat" accessType="initializeOnly" appinfo="Format of rendered output movie (mpeg mp4 etc.), use first supported format" type="MFString" value="&quot;mpeg&quot;"></field>
<field name="imageFormat" accessType="initializeOnly" appinfo="Format of rendered output images (png jpeg gif tiff etc.) use first supported format" type="MFString" value="&quot;png&quot;"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><!--First node determines node type of this prototype--><!--Subsequent nodes do not render, but still must be a valid X3D subgraph--><Script DEF="OfflineRenderScript" mustEvaluate="true"><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" type="SFString"></field>
<field name="enabled" accessType="inputOutput" appinfo="Whether this OfflineRender can be activated" type="SFBool"></field>
<field name="frameRate" accessType="inputOutput" appinfo="Frames per second recorded for this rendering" type="SFFloat"></field>
<field name="frameSize" accessType="inputOutput" appinfo="Size of frame in number of pixels width and height" type="SFVec2f"></field>
<field name="pixelAspectRatio" accessType="inputOutput" appinfo="Relative dimensions of pixel height/width typically 1.33 or 1" type="SFFloat"></field>
<field name="set_startTime" accessType="inputOnly" appinfo="Begin render operation" type="SFTime"></field>
<field name="progress" accessType="outputOnly" appinfo="Progress performing render operation (0..1)" type="SFFloat"></field>
<field name="renderCompleteTime" accessType="outputOnly" appinfo="Render operation complete" type="SFTime"></field>
<field name="movieFormat" accessType="initializeOnly" appinfo="Format of rendered output movie (mpeg mp4 etc.)" type="MFString"></field>
<field name="imageFormat" accessType="initializeOnly" appinfo="Format of rendered output images (png jpeg gif tiff etc.)" type="MFString"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="enable console output to trace script computations and prototype progress" type="SFBool"></field>
<IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="frameRate" protoField="frameRate"></connect>
<connect nodeField="frameSize" protoField="frameSize"></connect>
<connect nodeField="pixelAspectRatio" protoField="pixelAspectRatio"></connect>
<connect nodeField="set_startTime" protoField="set_startTime"></connect>
<connect nodeField="progress" protoField="progress"></connect>
<connect nodeField="renderCompleteTime" protoField="renderCompleteTime"></connect>
<connect nodeField="movieFormat" protoField="movieFormat"></connect>
<connect nodeField="imageFormat" protoField="imageFormat"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
<![CDATA[ecmascript:
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
}]]></Script>
<!--Add any ROUTEs here, going from Script to other nodes within ProtoBody--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare216.name = "OfflineRender";
ProtoDeclare216.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).";
//TODO non-photorealistic rendering (NPR) parameters
ProtoInterface218.getField("description")ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface219.getField("enabled").setValue("true");
ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface220.getField("frameRate").setValue("30");
ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface221.getField("frameSize").setValue("640 480");
ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface222.getField("pixelAspectRatio").setValue("1.33");
ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface223.getField("set_startTime")ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface224.getField("progress")ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface225.getField("renderCompleteTime")ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface226.getField("movieFormat").setValue("\"mpeg\"");
ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface227.getField("imageFormat").setValue("\"png\"");
ProtoInterface217YYY.field = new X3D.MFNode();

ProtoInterface228.getField("traceEnabled").setValue("false");
ProtoInterface217YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface217;

let ProtoBody229 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
let Script230 = browser.currentScene.createNode("Script");
Script230.DEF = "OfflineRenderScript";
Script230.mustEvaluate = True;
Script231.getField("description")Script230YYY.field = new X3D.MFNode();

Script232.getField("enabled")Script230YYY.field = new X3D.MFNode();

Script233.getField("frameRate")Script230YYY.field = new X3D.MFNode();

Script234.getField("frameSize")Script230YYY.field = new X3D.MFNode();

Script235.getField("pixelAspectRatio")Script230YYY.field = new X3D.MFNode();

Script236.getField("set_startTime")Script230YYY.field = new X3D.MFNode();

Script237.getField("progress")Script230YYY.field = new X3D.MFNode();

Script238.getField("renderCompleteTime")Script230YYY.field = new X3D.MFNode();

Script239.getField("movieFormat")Script230YYY.field = new X3D.MFNode();

Script240.getField("imageFormat")Script230YYY.field = new X3D.MFNode();

Script241.getField("traceEnabled")Script230YYY.field = new X3D.MFNode();

let IS242 = browser.currentScene.createNode("IS");
let connect243 = browser.currentScene.createNode("connect");
connect243.nodeField = "description";
connect243.protoField = "description";
IS242YYY.connect = new X3D.MFNode();

IS242ZZZ.connect[0] = connect243;

let connect244 = browser.currentScene.createNode("connect");
connect244.nodeField = "enabled";
connect244.protoField = "enabled";
IS242ZZZ.connect[1] = connect244;

let connect245 = browser.currentScene.createNode("connect");
connect245.nodeField = "frameRate";
connect245.protoField = "frameRate";
IS242ZZZ.connect[2] = connect245;

let connect246 = browser.currentScene.createNode("connect");
connect246.nodeField = "frameSize";
connect246.protoField = "frameSize";
IS242ZZZ.connect[3] = connect246;

let connect247 = browser.currentScene.createNode("connect");
connect247.nodeField = "pixelAspectRatio";
connect247.protoField = "pixelAspectRatio";
IS242ZZZ.connect[4] = connect247;

let connect248 = browser.currentScene.createNode("connect");
connect248.nodeField = "set_startTime";
connect248.protoField = "set_startTime";
IS242ZZZ.connect[5] = connect248;

let connect249 = browser.currentScene.createNode("connect");
connect249.nodeField = "progress";
connect249.protoField = "progress";
IS242ZZZ.connect[6] = connect249;

let connect250 = browser.currentScene.createNode("connect");
connect250.nodeField = "renderCompleteTime";
connect250.protoField = "renderCompleteTime";
IS242ZZZ.connect[7] = connect250;

let connect251 = browser.currentScene.createNode("connect");
connect251.nodeField = "movieFormat";
connect251.protoField = "movieFormat";
IS242ZZZ.connect[8] = connect251;

let connect252 = browser.currentScene.createNode("connect");
connect252.nodeField = "imageFormat";
connect252.protoField = "imageFormat";
IS242ZZZ.connect[9] = connect252;

let connect253 = browser.currentScene.createNode("connect");
connect253.nodeField = "traceEnabled";
connect253.protoField = "traceEnabled";
IS242ZZZ.connect[10] = connect253;

iS = IS242;


Script230.setSourceCode(`ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameRate = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameSize = eventValue;\n"+
"}\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    pixelAspectRatio = eventValue;\n"+
"}\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // do something with input eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}`)
ProtoBody229YYY.children = new X3D.MFNode();

ProtoBody229ZZZ.children[0] = Script230;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
protoBody = ProtoBody229;

browser.currentScene.children[3] = ProtoDeclare216;

//=============== Launch Prototype Example ==============
let Background254 = browser.currentScene.createNode("Background");
Background254.skyColor = new X3D.MFColor([0.282353,0.380392,0.470588]);
browser.currentScene.children[4] = Background254;

let Anchor255 = browser.currentScene.createNode("Anchor");
Anchor255.description = "launch CameraExample scene";
Anchor255.url = new X3D.MFString([new X3D.SFString("CameraExamples.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"), new X3D.SFString("CameraExamples.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl")]);
let Transform256 = browser.currentScene.createNode("Transform");
let Shape257 = browser.currentScene.createNode("Shape");
let Text258 = browser.currentScene.createNode("Text");
Text258.string = new X3D.MFString([new X3D.SFString("CameraPrototypes.x3d"), new X3D.SFString("defines multiple prototype nodes"), new X3D.SFString(""), new X3D.SFString("Click on this text to see"), new X3D.SFString("CameraExamples.x3d scene")]);
let FontStyle259 = browser.currentScene.createNode("FontStyle");
FontStyle259.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle259;

geometry = Text258;

let Appearance260 = browser.currentScene.createNode("Appearance");
let Material261 = browser.currentScene.createNode("Material");
Material261.diffuseColor = new X3D.SFColor([1,1,0.2]);
material = Material261;

appearance = Appearance260;

Transform256YYY.child = new X3D.undefined();

Transform256ZZZ.child[0] = Shape257;

Anchor255YYY.children = new X3D.MFNode();

Anchor255ZZZ.children[0] = Transform256;

browser.currentScene.children[5] = Anchor255;

}
main ();
