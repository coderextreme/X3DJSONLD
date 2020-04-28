let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
//=============== Camera ==============
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CameraPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Camera" appinfo="Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images." ><!--Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields--><ProtoInterface><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this Camera" type="SFString"></field>
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
<!--this DirectionalLight replaces NavigationInfo headlight in order to add color capability--><DirectionalLight DEF="CameraDirectionalLight" global="true"><IS><connect nodeField="on" protoField="headlight"></connect>
<connect nodeField="color" protoField="headlightColor"></connect>
<connect nodeField="intensity" protoField="headlightIntensity"></connect>
</IS>
<!--TODO confirm other default field values match NavigationInfo spec--></DirectionalLight>
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
ProtoDeclare3.name = "Camera";
ProtoDeclare3.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.";
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "description";
field5.accessType = "inputOutput";
field5.appinfo = "Text description to be displayed for this Camera";
field5.type = "SFString";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "position";
field6.accessType = "inputOutput";
field6.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field6.type = "SFVec3f";
field6.value = "0 0 10";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "orientation";
field7.accessType = "inputOutput";
field7.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field7.type = "SFRotation";
field7.value = "0 0 1 0";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "fieldOfView";
field8.accessType = "inputOutput";
field8.appinfo = "pi/4";
field8.type = "SFFloat";
field8.value = "0.7854";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "set_fraction";
field9.accessType = "inputOnly";
field9.appinfo = "input fraction drives interpolators";
field9.type = "SFFloat";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "set_bind";
field10.accessType = "inputOnly";
field10.appinfo = "input event binds or unbinds this Camera";
field10.type = "SFBool";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "bindTime";
field11.accessType = "outputOnly";
field11.appinfo = "output event indicates when this Camera is bound";
field11.type = "SFTime";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "isBound";
field12.accessType = "outputOnly";
field12.appinfo = "output event indicates whether this Camera is bound or unbound";
field12.type = "SFBool";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "nearClipPlane";
field13.accessType = "inputOutput";
field13.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field13.type = "SFFloat";
field13.value = "0.25";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "farClipPlane";
field14.accessType = "inputOutput";
field14.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field14.type = "SFFloat";
field14.value = "0";
ProtoInterface4.field[9] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "shots";
field15.accessType = "inputOutput";
field15.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field15.type = "MFNode";
//initialization nodes (if any) go here
ProtoInterface4.field[10] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "headlight";
field16.accessType = "inputOutput";
field16.appinfo = "Whether camera headlight is on or off";
field16.type = "SFBool";
field16.value = "true";
ProtoInterface4.field[11] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "headlightColor";
field17.accessType = "inputOutput";
field17.appinfo = "Camera headlight color";
field17.type = "SFColor";
field17.value = "1 1 1";
ProtoInterface4.field[12] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "headlightIntensity";
field18.accessType = "inputOutput";
field18.appinfo = "Camera headlight intensity";
field18.type = "SFFloat";
field18.value = "1";
ProtoInterface4.field[13] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "filterColor";
field19.accessType = "inputOutput";
field19.appinfo = "Camera filter color that modifies virtual lens capture";
field19.type = "SFColor";
field19.value = "1 1 1";
ProtoInterface4.field[14] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "filterTransparency";
field20.accessType = "inputOutput";
field20.appinfo = "Camera filter transparency that modifies virtual lens capture";
field20.type = "SFFloat";
field20.value = "1";
ProtoInterface4.field[15] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "upVector";
field21.accessType = "inputOutput";
field21.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field21.type = "SFVec3f";
field21.value = "0 1 0";
ProtoInterface4.field[16] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "fStop";
field22.accessType = "inputOutput";
field22.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field22.type = "SFFloat";
field22.value = "5.6";
ProtoInterface4.field[17] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "focusDistance";
field23.accessType = "inputOutput";
field23.appinfo = "Distance to focal plane of sharpest focus";
field23.type = "SFFloat";
field23.value = "10";
ProtoInterface4.field[18] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "isActive";
field24.accessType = "outputOnly";
field24.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field24.type = "SFBool";
ProtoInterface4.field[19] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "totalDuration";
field25.accessType = "outputOnly";
field25.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field25.type = "SFTime";
ProtoInterface4.field[20] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "offlineRender";
field26.accessType = "inputOutput";
field26.appinfo = "OfflineRender node";
field26.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface4.field[21] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "traceEnabled";
field27.accessType = "initializeOnly";
field27.appinfo = "enable console output to trace script computations and prototype progress";
field27.type = "SFBool";
field27.value = "false";
ProtoInterface4.field[22] = field27;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.DEF = "CameraViewpoint";
let IS30 = browser.currentScene.createNode("IS");
let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "description";
connect31.protoField = "description";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

let connect32 = browser.currentScene.createNode("connect");
connect32.nodeField = "position";
connect32.protoField = "position";
IS30.connect[1] = connect32;

let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "orientation";
connect33.protoField = "orientation";
IS30.connect[2] = connect33;

let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "fieldOfView";
connect34.protoField = "fieldOfView";
IS30.connect[3] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "set_bind";
connect35.protoField = "set_bind";
IS30.connect[4] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "bindTime";
connect36.protoField = "bindTime";
IS30.connect[5] = connect36;

let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "isBound";
connect37.protoField = "isBound";
IS30.connect[6] = connect37;

Viewpoint29.iS = IS30;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Viewpoint29;

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
let NavigationInfo38 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo38.DEF = "CameraNavInfo";
NavigationInfo38.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "set_bind";
connect40.protoField = "set_bind";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "headlight";
connect41.protoField = "headlight";
IS39.connect[1] = connect41;

let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "visibilityLimit";
connect42.protoField = "farClipPlane";
IS39.connect[2] = connect42;

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
NavigationInfo38.iS = IS39;

ProtoBody28.children[1] = NavigationInfo38;

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
let DirectionalLight43 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight43.DEF = "CameraDirectionalLight";
DirectionalLight43.global = True;
let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "on";
connect45.protoField = "headlight";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "color";
connect46.protoField = "headlightColor";
IS44.connect[1] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "intensity";
connect47.protoField = "headlightIntensity";
IS44.connect[2] = connect47;

DirectionalLight43.iS = IS44;

//TODO confirm other default field values match NavigationInfo spec
ProtoBody28.children[2] = DirectionalLight43;

let PositionInterpolator48 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator48.DEF = "CameraPositionInterpolator";
PositionInterpolator48.key = new MFFloat(new float[0,1]);
PositionInterpolator48.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "set_fraction";
connect50.protoField = "set_fraction";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

PositionInterpolator48.iS = IS49;

ProtoBody28.children[3] = PositionInterpolator48;

let OrientationInterpolator51 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator51.DEF = "CameraOrientationInterpolator";
OrientationInterpolator51.key = new MFFloat(new float[0,1]);
OrientationInterpolator51.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "set_fraction";
connect53.protoField = "set_fraction";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

OrientationInterpolator51.iS = IS52;

ProtoBody28.children[4] = OrientationInterpolator51;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "value_changed";
ROUTE54.fromNode = "CameraPositionInterpolator";
ROUTE54.toField = "position";
ROUTE54.toNode = "CameraViewpoint";
ProtoBody28.children[5] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "value_changed";
ROUTE55.fromNode = "CameraOrientationInterpolator";
ROUTE55.toField = "orientation";
ROUTE55.toNode = "CameraViewpoint";
ProtoBody28.children[6] = ROUTE55;

let Script56 = browser.currentScene.createNode("Script");
Script56.DEF = "CameraScript";
Script56.directOutput = True;
Script56.mustEvaluate = True;
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
let field57 = browser.currentScene.createNode("field");
field57.name = "description";
field57.accessType = "inputOutput";
field57.appinfo = "Text description to be displayed for this Camera";
field57.type = "SFString";
Script56.field = new MFNode();

Script56.field[0] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "position";
field58.accessType = "inputOutput";
field58.appinfo = "Camera position in local transformation frame";
field58.type = "SFVec3f";
Script56.field[1] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "orientation";
field59.accessType = "inputOutput";
field59.appinfo = "Camera rotation in local transformation frame";
field59.type = "SFRotation";
Script56.field[2] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "set_fraction";
field60.accessType = "inputOnly";
field60.appinfo = "input fraction drives interpolators";
field60.type = "SFFloat";
Script56.field[3] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "set_bind";
field61.accessType = "inputOnly";
field61.appinfo = "input event binds or unbinds this Camera";
field61.type = "SFBool";
Script56.field[4] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "fieldOfView";
field62.accessType = "inputOutput";
field62.appinfo = "pi/4";
field62.type = "SFFloat";
Script56.field[5] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "nearClipPlane";
field63.accessType = "inputOutput";
field63.appinfo = "Vector distance to near clipping plane";
field63.type = "SFFloat";
Script56.field[6] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "farClipPlane";
field64.accessType = "inputOutput";
field64.appinfo = "Vector distance to far clipping plane";
field64.type = "SFFloat";
Script56.field[7] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "shots";
field65.accessType = "inputOutput";
field65.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field65.type = "MFNode";
//initialization nodes (if any) go here
Script56.field[8] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "filterColor";
field66.accessType = "inputOutput";
field66.appinfo = "Camera filter color that modifies virtual lens capture";
field66.type = "SFColor";
Script56.field[9] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "filterTransparency";
field67.accessType = "inputOutput";
field67.appinfo = "Camera filter transparency that modifies virtual lens capture";
field67.type = "SFFloat";
Script56.field[10] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "upVector";
field68.accessType = "inputOutput";
field68.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field68.type = "SFVec3f";
Script56.field[11] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "fStop";
field69.accessType = "inputOutput";
field69.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field69.type = "SFFloat";
Script56.field[12] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "focusDistance";
field70.accessType = "inputOutput";
field70.appinfo = "Distance to focal plane of sharpest focus";
field70.type = "SFFloat";
Script56.field[13] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "isActive";
field71.accessType = "outputOnly";
field71.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field71.type = "SFBool";
Script56.field[14] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "totalDuration";
field72.accessType = "outputOnly";
field72.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field72.type = "SFTime";
Script56.field[15] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "offlineRender";
field73.accessType = "inputOutput";
field73.appinfo = "OfflineRender node";
field73.type = "SFNode";
//initialization node (if any) goes here
Script56.field[16] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "ViewpointNode";
field74.accessType = "initializeOnly";
field74.appinfo = "node reference to permit getting setting fields from within Script";
field74.type = "SFNode";
let Viewpoint75 = browser.currentScene.createNode("Viewpoint");
Viewpoint75.USE = "CameraViewpoint";
field74.children = new MFNode();

field74.children[0] = Viewpoint75;

Script56.field[17] = field74;

let field76 = browser.currentScene.createNode("field");
field76.name = "NavInfoNode";
field76.accessType = "initializeOnly";
field76.appinfo = "node reference to permit getting setting fields from within Script";
field76.type = "SFNode";
let NavigationInfo77 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo77.USE = "CameraNavInfo";
field76.children = new MFNode();

field76.children[0] = NavigationInfo77;

Script56.field[18] = field76;

let field78 = browser.currentScene.createNode("field");
field78.name = "CameraPI";
field78.accessType = "initializeOnly";
field78.appinfo = "node reference to permit getting setting fields from within Script";
field78.type = "SFNode";
let PositionInterpolator79 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator79.USE = "CameraPositionInterpolator";
field78.children = new MFNode();

field78.children[0] = PositionInterpolator79;

Script56.field[19] = field78;

let field80 = browser.currentScene.createNode("field");
field80.name = "CameraOI";
field80.accessType = "initializeOnly";
field80.appinfo = "node reference to permit getting setting fields from within Script";
field80.type = "SFNode";
let OrientationInterpolator81 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator81.USE = "CameraOrientationInterpolator";
field80.children = new MFNode();

field80.children[0] = OrientationInterpolator81;

Script56.field[20] = field80;

let field82 = browser.currentScene.createNode("field");
field82.name = "key";
field82.accessType = "inputOutput";
field82.appinfo = "key array for interpolators";
field82.type = "MFFloat";
Script56.field[21] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "keyValuePosition";
field83.accessType = "inputOutput";
field83.appinfo = "keyValue array for PositionInterpolator";
field83.type = "MFVec3f";
Script56.field[22] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "keyValueOrientation";
field84.accessType = "inputOutput";
field84.appinfo = "keyValue array for OrientationInterpolator";
field84.type = "MFRotation";
Script56.field[23] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "animated";
field85.accessType = "inputOutput";
field85.appinfo = "whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events";
field85.type = "SFBool";
field85.value = "false";
Script56.field[24] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "initialized";
field86.accessType = "initializeOnly";
field86.appinfo = "perform checkShots() function once immediately after initialization";
field86.type = "SFBool";
field86.value = "false";
Script56.field[25] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "shotCount";
field87.accessType = "initializeOnly";
field87.appinfo = "how many CameraShot nodes are contained in shots array";
field87.type = "SFInt32";
field87.value = "0";
Script56.field[26] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "movesCount";
field88.accessType = "initializeOnly";
field88.appinfo = "how many CameraMove nodes are contained in moves array";
field88.type = "SFInt32";
field88.value = "0";
Script56.field[27] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "frameCount";
field89.accessType = "initializeOnly";
field89.appinfo = "how many frames were created in current loop";
field89.type = "SFFloat";
field89.value = "0";
Script56.field[28] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "startTime";
field90.accessType = "initializeOnly";
field90.appinfo = "holding variable";
field90.type = "SFTime";
field90.value = "0";
Script56.field[29] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "priorTraceTime";
field91.accessType = "initializeOnly";
field91.appinfo = "holding variable";
field91.type = "SFTime";
field91.value = "0";
Script56.field[30] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "traceEnabled";
field92.accessType = "initializeOnly";
field92.appinfo = "enable console output to trace script computations and prototype progress";
field92.type = "SFBool";
Script56.field[31] = field92;

let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "description";
connect94.protoField = "description";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "position";
connect95.protoField = "position";
IS93.connect[1] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "orientation";
connect96.protoField = "orientation";
IS93.connect[2] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "set_fraction";
connect97.protoField = "set_fraction";
IS93.connect[3] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "set_bind";
connect98.protoField = "set_bind";
IS93.connect[4] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "fieldOfView";
connect99.protoField = "fieldOfView";
IS93.connect[5] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "nearClipPlane";
connect100.protoField = "nearClipPlane";
IS93.connect[6] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "farClipPlane";
connect101.protoField = "farClipPlane";
IS93.connect[7] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "shots";
connect102.protoField = "shots";
IS93.connect[8] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "filterColor";
connect103.protoField = "filterColor";
IS93.connect[9] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "filterTransparency";
connect104.protoField = "filterTransparency";
IS93.connect[10] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "upVector";
connect105.protoField = "upVector";
IS93.connect[11] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "fStop";
connect106.protoField = "fStop";
IS93.connect[12] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "focusDistance";
connect107.protoField = "focusDistance";
IS93.connect[13] = connect107;

let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "isActive";
connect108.protoField = "isActive";
IS93.connect[14] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "totalDuration";
connect109.protoField = "totalDuration";
IS93.connect[15] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "offlineRender";
connect110.protoField = "offlineRender";
IS93.connect[16] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "traceEnabled";
connect111.protoField = "traceEnabled";
IS93.connect[17] = connect111;

Script56.iS = IS93;


Script56.setSourceCode(`ecmascript:\n"+
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
ProtoBody28.children[7] = Script56;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "position";
ROUTE112.fromNode = "CameraScript";
ROUTE112.toField = "position";
ROUTE112.toNode = "CameraViewpoint";
ProtoBody28.children[8] = ROUTE112;

let ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromField = "orientation";
ROUTE113.fromNode = "CameraScript";
ROUTE113.toField = "orientation";
ROUTE113.toNode = "CameraViewpoint";
ProtoBody28.children[9] = ROUTE113;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "isActive";
ROUTE114.fromNode = "CameraScript";
ROUTE114.toField = "set_bind";
ROUTE114.toNode = "CameraViewpoint";
ProtoBody28.children[10] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "isActive";
ROUTE115.fromNode = "CameraScript";
ROUTE115.toField = "set_bind";
ROUTE115.toNode = "CameraNavInfo";
ProtoBody28.children[11] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "isActive";
ROUTE116.fromNode = "CameraScript";
ROUTE116.toField = "on";
ROUTE116.toNode = "CameraDirectionalLight";
ProtoBody28.children[12] = ROUTE116;

ProtoDeclare3.protoBody = ProtoBody28;

browser.currentScene.children[1] = ProtoDeclare3;

//=============== CameraShot ==============
let ProtoDeclare117 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
ProtoDeclare117.name = "CameraShot";
ProtoDeclare117.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot.";
let ProtoInterface118 = browser.currentScene.createNode("ProtoInterface");
let field119 = browser.currentScene.createNode("field");
field119.name = "description";
field119.accessType = "inputOutput";
field119.appinfo = "Text description to be displayed for this CameraShot";
field119.type = "SFString";
ProtoInterface118.field = new MFNode();

ProtoInterface118.field[0] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "enabled";
field120.accessType = "inputOutput";
field120.appinfo = "Whether this CameraShot can be activated";
field120.type = "SFBool";
field120.value = "true";
ProtoInterface118.field[1] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "moves";
field121.accessType = "inputOutput";
field121.appinfo = "Set of CameraMovement nodes";
field121.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ProtoInterface118.field[2] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "initialPosition";
field122.accessType = "inputOutput";
field122.appinfo = "Setup to reinitialize camera position for this shot";
field122.type = "SFVec3f";
field122.value = "0 0 10";
ProtoInterface118.field[3] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "initialOrientation";
field123.accessType = "inputOutput";
field123.appinfo = "Setup to reinitialize camera rotation for this shot";
field123.type = "SFRotation";
field123.value = "0 0 1 0";
ProtoInterface118.field[4] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "initialAimPoint";
field124.accessType = "inputOutput";
field124.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field124.type = "SFVec3f";
field124.value = "0 0 0";
ProtoInterface118.field[5] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "initialFieldOfView";
field125.accessType = "inputOutput";
field125.appinfo = "pi/4";
field125.type = "SFFloat";
field125.value = "0.7854";
ProtoInterface118.field[6] = field125;

let field126 = browser.currentScene.createNode("field");
field126.name = "initialFStop";
field126.accessType = "inputOutput";
field126.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field126.type = "SFFloat";
field126.value = "5.6";
ProtoInterface118.field[7] = field126;

let field127 = browser.currentScene.createNode("field");
field127.name = "initialFocusDistance";
field127.accessType = "inputOutput";
field127.appinfo = "Distance to focal plane of sharpest focus";
field127.type = "SFFloat";
field127.value = "10";
ProtoInterface118.field[8] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "shotDuration";
field128.accessType = "outputOnly";
field128.appinfo = "Subtotal duration of contained CameraMovement move durations";
field128.type = "SFTime";
ProtoInterface118.field[9] = field128;

let field129 = browser.currentScene.createNode("field");
field129.name = "isActive";
field129.accessType = "outputOnly";
field129.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field129.type = "SFBool";
ProtoInterface118.field[10] = field129;

let field130 = browser.currentScene.createNode("field");
field130.name = "traceEnabled";
field130.accessType = "initializeOnly";
field130.appinfo = "enable console output to trace script computations and prototype progress";
field130.type = "SFBool";
field130.value = "false";
ProtoInterface118.field[11] = field130;

ProtoDeclare117.protoInterface = ProtoInterface118;

let ProtoBody131 = browser.currentScene.createNode("ProtoBody");
let Script132 = browser.currentScene.createNode("Script");
Script132.DEF = "CameraShotScript";
Script132.directOutput = True;
Script132.mustEvaluate = True;
let field133 = browser.currentScene.createNode("field");
field133.name = "description";
field133.accessType = "inputOutput";
field133.appinfo = "Text description to be displayed for this CameraShot";
field133.type = "SFString";
Script132.field = new MFNode();

Script132.field[0] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "enabled";
field134.accessType = "inputOutput";
field134.appinfo = "Whether this CameraShot can be activated";
field134.type = "SFBool";
Script132.field[1] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "moves";
field135.accessType = "inputOutput";
field135.appinfo = "Set of CameraMovement nodes";
field135.type = "MFNode";
//initialization nodes (if any) go here
Script132.field[2] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "initialPosition";
field136.accessType = "inputOutput";
field136.appinfo = "Setup to reinitialize camera position for this shot";
field136.type = "SFVec3f";
Script132.field[3] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "initialOrientation";
field137.accessType = "inputOutput";
field137.appinfo = "Setup to reinitialize camera rotation for this shot";
field137.type = "SFRotation";
Script132.field[4] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "initialAimPoint";
field138.accessType = "inputOutput";
field138.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field138.type = "SFVec3f";
Script132.field[5] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "initialFieldOfView";
field139.accessType = "inputOutput";
field139.appinfo = "pi/4";
field139.type = "SFFloat";
Script132.field[6] = field139;

let field140 = browser.currentScene.createNode("field");
field140.name = "initialFStop";
field140.accessType = "inputOutput";
field140.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field140.type = "SFFloat";
Script132.field[7] = field140;

let field141 = browser.currentScene.createNode("field");
field141.name = "initialFocusDistance";
field141.accessType = "inputOutput";
field141.appinfo = "Distance to focal plane of sharpest focus";
field141.type = "SFFloat";
Script132.field[8] = field141;

let field142 = browser.currentScene.createNode("field");
field142.name = "shotDuration";
field142.accessType = "outputOnly";
field142.appinfo = "Subtotal duration of contained CameraMovement move durations";
field142.type = "SFTime";
Script132.field[9] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "isActive";
field143.accessType = "outputOnly";
field143.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field143.type = "SFBool";
Script132.field[10] = field143;

let field144 = browser.currentScene.createNode("field");
field144.name = "traceEnabled";
field144.accessType = "initializeOnly";
field144.appinfo = "enable console output to trace script computations and prototype progress";
field144.type = "SFBool";
Script132.field[11] = field144;

let field145 = browser.currentScene.createNode("field");
field145.name = "key";
field145.accessType = "inputOutput";
field145.appinfo = "key array for interpolators";
field145.type = "MFFloat";
Script132.field[12] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "keyValuePosition";
field146.accessType = "inputOutput";
field146.appinfo = "keyValue array for PositionInterpolator";
field146.type = "MFVec3f";
Script132.field[13] = field146;

let field147 = browser.currentScene.createNode("field");
field147.name = "keyValueOrientation";
field147.accessType = "inputOutput";
field147.appinfo = "keyValue array for OrientationInterpolator";
field147.type = "MFRotation";
Script132.field[14] = field147;

let IS148 = browser.currentScene.createNode("IS");
let connect149 = browser.currentScene.createNode("connect");
connect149.nodeField = "description";
connect149.protoField = "description";
IS148.connect = new MFNode();

IS148.connect[0] = connect149;

let connect150 = browser.currentScene.createNode("connect");
connect150.nodeField = "enabled";
connect150.protoField = "enabled";
IS148.connect[1] = connect150;

let connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "moves";
connect151.protoField = "moves";
IS148.connect[2] = connect151;

let connect152 = browser.currentScene.createNode("connect");
connect152.nodeField = "initialPosition";
connect152.protoField = "initialPosition";
IS148.connect[3] = connect152;

let connect153 = browser.currentScene.createNode("connect");
connect153.nodeField = "initialOrientation";
connect153.protoField = "initialOrientation";
IS148.connect[4] = connect153;

let connect154 = browser.currentScene.createNode("connect");
connect154.nodeField = "initialAimPoint";
connect154.protoField = "initialAimPoint";
IS148.connect[5] = connect154;

let connect155 = browser.currentScene.createNode("connect");
connect155.nodeField = "initialFieldOfView";
connect155.protoField = "initialFieldOfView";
IS148.connect[6] = connect155;

let connect156 = browser.currentScene.createNode("connect");
connect156.nodeField = "initialFStop";
connect156.protoField = "initialFStop";
IS148.connect[7] = connect156;

let connect157 = browser.currentScene.createNode("connect");
connect157.nodeField = "initialFocusDistance";
connect157.protoField = "initialFocusDistance";
IS148.connect[8] = connect157;

let connect158 = browser.currentScene.createNode("connect");
connect158.nodeField = "shotDuration";
connect158.protoField = "shotDuration";
IS148.connect[9] = connect158;

let connect159 = browser.currentScene.createNode("connect");
connect159.nodeField = "isActive";
connect159.protoField = "isActive";
IS148.connect[10] = connect159;

let connect160 = browser.currentScene.createNode("connect");
connect160.nodeField = "traceEnabled";
connect160.protoField = "traceEnabled";
IS148.connect[11] = connect160;

Script132.iS = IS148;


Script132.setSourceCode(`ecmascript:\n"+
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
ProtoBody131.children = new MFNode();

ProtoBody131.children[0] = Script132;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare117.protoBody = ProtoBody131;

browser.currentScene.children[2] = ProtoDeclare117;

//=============== CameraMovement ==============
let ProtoDeclare161 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
ProtoDeclare161.name = "CameraMovement";
ProtoDeclare161.appinfo = "CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.";
let ProtoInterface162 = browser.currentScene.createNode("ProtoInterface");
let field163 = browser.currentScene.createNode("field");
field163.name = "description";
field163.accessType = "inputOutput";
field163.appinfo = "Text description to be displayed for this CameraMovement";
field163.type = "SFString";
ProtoInterface162.field = new MFNode();

ProtoInterface162.field[0] = field163;

let field164 = browser.currentScene.createNode("field");
field164.name = "enabled";
field164.accessType = "inputOutput";
field164.appinfo = "Whether this CameraMovement can be activated";
field164.type = "SFBool";
field164.value = "true";
ProtoInterface162.field[1] = field164;

let field165 = browser.currentScene.createNode("field");
field165.name = "duration";
field165.accessType = "inputOutput";
field165.appinfo = "Duration in seconds for this move";
field165.type = "SFFloat";
field165.value = "0";
ProtoInterface162.field[2] = field165;

let field166 = browser.currentScene.createNode("field");
field166.name = "goalPosition";
field166.accessType = "inputOutput";
field166.appinfo = "Goal camera position for this move";
field166.type = "SFVec3f";
field166.value = "0 0 10";
ProtoInterface162.field[3] = field166;

let field167 = browser.currentScene.createNode("field");
field167.name = "goalOrientation";
field167.accessType = "inputOutput";
field167.appinfo = "Goal camera rotation for this move";
field167.type = "SFRotation";
field167.value = "0 0 1 0";
ProtoInterface162.field[4] = field167;

let field168 = browser.currentScene.createNode("field");
field168.name = "tracking";
field168.accessType = "inputOutput";
field168.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field168.type = "SFBool";
field168.value = "false";
ProtoInterface162.field[5] = field168;

let field169 = browser.currentScene.createNode("field");
field169.name = "goalAimPoint";
field169.accessType = "inputOutput";
field169.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field169.type = "SFVec3f";
field169.value = "0 0 0";
ProtoInterface162.field[6] = field169;

let field170 = browser.currentScene.createNode("field");
field170.name = "goalFieldOfView";
field170.accessType = "inputOutput";
field170.appinfo = "Goal fieldOfView for this move";
field170.type = "SFFloat";
field170.value = "0.7854";
ProtoInterface162.field[7] = field170;

let field171 = browser.currentScene.createNode("field");
field171.name = "goalFStop";
field171.accessType = "inputOutput";
field171.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field171.type = "SFFloat";
field171.value = "5.6";
ProtoInterface162.field[8] = field171;

let field172 = browser.currentScene.createNode("field");
field172.name = "goalFocusDistance";
field172.accessType = "inputOutput";
field172.appinfo = "Distance to focal plane of sharpest focus";
field172.type = "SFFloat";
field172.value = "10";
ProtoInterface162.field[9] = field172;

let field173 = browser.currentScene.createNode("field");
field173.name = "isActive";
field173.accessType = "outputOnly";
field173.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field173.type = "SFBool";
ProtoInterface162.field[10] = field173;

let field174 = browser.currentScene.createNode("field");
field174.name = "traceEnabled";
field174.accessType = "initializeOnly";
field174.appinfo = "enable console output to trace script computations and prototype progress";
field174.type = "SFBool";
field174.value = "false";
ProtoInterface162.field[11] = field174;

ProtoDeclare161.protoInterface = ProtoInterface162;

let ProtoBody175 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
let Script176 = browser.currentScene.createNode("Script");
Script176.DEF = "CameraMovementScript";
Script176.directOutput = True;
Script176.mustEvaluate = True;
let field177 = browser.currentScene.createNode("field");
field177.name = "description";
field177.accessType = "inputOutput";
field177.appinfo = "Text description to be displayed for this CameraMovement";
field177.type = "SFString";
Script176.field = new MFNode();

Script176.field[0] = field177;

let field178 = browser.currentScene.createNode("field");
field178.name = "enabled";
field178.accessType = "inputOutput";
field178.appinfo = "Whether this CameraMovement can be activated";
field178.type = "SFBool";
Script176.field[1] = field178;

let field179 = browser.currentScene.createNode("field");
field179.name = "duration";
field179.accessType = "inputOutput";
field179.appinfo = "Duration in seconds for this move";
field179.type = "SFFloat";
Script176.field[2] = field179;

let field180 = browser.currentScene.createNode("field");
field180.name = "goalPosition";
field180.accessType = "inputOutput";
field180.appinfo = "Goal camera position for this move";
field180.type = "SFVec3f";
Script176.field[3] = field180;

let field181 = browser.currentScene.createNode("field");
field181.name = "goalOrientation";
field181.accessType = "inputOutput";
field181.appinfo = "Goal camera rotation for this move";
field181.type = "SFRotation";
Script176.field[4] = field181;

let field182 = browser.currentScene.createNode("field");
field182.name = "tracking";
field182.accessType = "inputOutput";
field182.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field182.type = "SFBool";
Script176.field[5] = field182;

let field183 = browser.currentScene.createNode("field");
field183.name = "goalAimPoint";
field183.accessType = "inputOutput";
field183.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field183.type = "SFVec3f";
Script176.field[6] = field183;

let field184 = browser.currentScene.createNode("field");
field184.name = "goalFieldOfView";
field184.accessType = "inputOutput";
field184.appinfo = "Goal fieldOfView for this move";
field184.type = "SFFloat";
Script176.field[7] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "goalFStop";
field185.accessType = "inputOutput";
field185.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field185.type = "SFFloat";
Script176.field[8] = field185;

let field186 = browser.currentScene.createNode("field");
field186.name = "goalFocusDistance";
field186.accessType = "inputOutput";
field186.appinfo = "Distance to focal plane of sharpest focus";
field186.type = "SFFloat";
Script176.field[9] = field186;

let field187 = browser.currentScene.createNode("field");
field187.name = "isActive";
field187.accessType = "outputOnly";
field187.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field187.type = "SFBool";
Script176.field[10] = field187;

let field188 = browser.currentScene.createNode("field");
field188.name = "traceEnabled";
field188.accessType = "initializeOnly";
field188.appinfo = "enable console output to trace script computations and prototype progress";
field188.type = "SFBool";
Script176.field[11] = field188;

let IS189 = browser.currentScene.createNode("IS");
let connect190 = browser.currentScene.createNode("connect");
connect190.nodeField = "description";
connect190.protoField = "description";
IS189.connect = new MFNode();

IS189.connect[0] = connect190;

let connect191 = browser.currentScene.createNode("connect");
connect191.nodeField = "enabled";
connect191.protoField = "enabled";
IS189.connect[1] = connect191;

let connect192 = browser.currentScene.createNode("connect");
connect192.nodeField = "duration";
connect192.protoField = "duration";
IS189.connect[2] = connect192;

let connect193 = browser.currentScene.createNode("connect");
connect193.nodeField = "goalPosition";
connect193.protoField = "goalPosition";
IS189.connect[3] = connect193;

let connect194 = browser.currentScene.createNode("connect");
connect194.nodeField = "goalOrientation";
connect194.protoField = "goalOrientation";
IS189.connect[4] = connect194;

let connect195 = browser.currentScene.createNode("connect");
connect195.nodeField = "tracking";
connect195.protoField = "tracking";
IS189.connect[5] = connect195;

let connect196 = browser.currentScene.createNode("connect");
connect196.nodeField = "goalAimPoint";
connect196.protoField = "goalAimPoint";
IS189.connect[6] = connect196;

let connect197 = browser.currentScene.createNode("connect");
connect197.nodeField = "goalFieldOfView";
connect197.protoField = "goalFieldOfView";
IS189.connect[7] = connect197;

let connect198 = browser.currentScene.createNode("connect");
connect198.nodeField = "goalFStop";
connect198.protoField = "goalFStop";
IS189.connect[8] = connect198;

let connect199 = browser.currentScene.createNode("connect");
connect199.nodeField = "goalFocusDistance";
connect199.protoField = "goalFocusDistance";
IS189.connect[9] = connect199;

let connect200 = browser.currentScene.createNode("connect");
connect200.nodeField = "isActive";
connect200.protoField = "isActive";
IS189.connect[10] = connect200;

let connect201 = browser.currentScene.createNode("connect");
connect201.nodeField = "traceEnabled";
connect201.protoField = "traceEnabled";
IS189.connect[11] = connect201;

Script176.iS = IS189;


Script176.setSourceCode(`ecmascript:\n"+
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
ProtoBody175.children = new MFNode();

ProtoBody175.children[0] = Script176;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare161.protoBody = ProtoBody175;

browser.currentScene.children[3] = ProtoDeclare161;

//=============== OfflineRender ==============
let ProtoDeclare202 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="OfflineRender" appinfo="OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)." ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="Text description to be displayed for this OfflineRender" type="SFString"></field>
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
<!--TODO non-photorealistic rendering (NPR) parameters--></ProtoInterface>
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
ProtoDeclare202.name = "OfflineRender";
ProtoDeclare202.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).";
let ProtoInterface203 = browser.currentScene.createNode("ProtoInterface");
let field204 = browser.currentScene.createNode("field");
field204.name = "description";
field204.accessType = "inputOutput";
field204.appinfo = "Text description to be displayed for this OfflineRender";
field204.type = "SFString";
ProtoInterface203.field = new MFNode();

ProtoInterface203.field[0] = field204;

let field205 = browser.currentScene.createNode("field");
field205.name = "enabled";
field205.accessType = "inputOutput";
field205.appinfo = "Whether this OfflineRender can be activated";
field205.type = "SFBool";
field205.value = "true";
ProtoInterface203.field[1] = field205;

let field206 = browser.currentScene.createNode("field");
field206.name = "frameRate";
field206.accessType = "inputOutput";
field206.appinfo = "Frames per second recorded for this rendering";
field206.type = "SFFloat";
field206.value = "30";
ProtoInterface203.field[2] = field206;

let field207 = browser.currentScene.createNode("field");
field207.name = "frameSize";
field207.accessType = "inputOutput";
field207.appinfo = "Size of frame in number of pixels width and height";
field207.type = "SFVec2f";
field207.value = "640 480";
ProtoInterface203.field[3] = field207;

let field208 = browser.currentScene.createNode("field");
field208.name = "pixelAspectRatio";
field208.accessType = "inputOutput";
field208.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field208.type = "SFFloat";
field208.value = "1.33";
ProtoInterface203.field[4] = field208;

let field209 = browser.currentScene.createNode("field");
field209.name = "set_startTime";
field209.accessType = "inputOnly";
field209.appinfo = "Begin render operation";
field209.type = "SFTime";
ProtoInterface203.field[5] = field209;

let field210 = browser.currentScene.createNode("field");
field210.name = "progress";
field210.accessType = "outputOnly";
field210.appinfo = "Progress performing render operation (0..1)";
field210.type = "SFFloat";
ProtoInterface203.field[6] = field210;

let field211 = browser.currentScene.createNode("field");
field211.name = "renderCompleteTime";
field211.accessType = "outputOnly";
field211.appinfo = "Render operation complete";
field211.type = "SFTime";
ProtoInterface203.field[7] = field211;

let field212 = browser.currentScene.createNode("field");
field212.name = "movieFormat";
field212.accessType = "initializeOnly";
field212.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field212.type = "MFString";
field212.value = "\"mpeg\"";
ProtoInterface203.field[8] = field212;

let field213 = browser.currentScene.createNode("field");
field213.name = "imageFormat";
field213.accessType = "initializeOnly";
field213.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field213.type = "MFString";
field213.value = "\"png\"";
ProtoInterface203.field[9] = field213;

let field214 = browser.currentScene.createNode("field");
field214.name = "traceEnabled";
field214.accessType = "initializeOnly";
field214.appinfo = "enable console output to trace script computations and prototype progress";
field214.type = "SFBool";
field214.value = "false";
ProtoInterface203.field[10] = field214;

//TODO non-photorealistic rendering (NPR) parameters
ProtoDeclare202.protoInterface = ProtoInterface203;

let ProtoBody215 = browser.currentScene.createNode("ProtoBody");
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
let Script216 = browser.currentScene.createNode("Script");
Script216.DEF = "OfflineRenderScript";
Script216.mustEvaluate = True;
let field217 = browser.currentScene.createNode("field");
field217.name = "description";
field217.accessType = "inputOutput";
field217.appinfo = "Text description to be displayed for this OfflineRender";
field217.type = "SFString";
Script216.field = new MFNode();

Script216.field[0] = field217;

let field218 = browser.currentScene.createNode("field");
field218.name = "enabled";
field218.accessType = "inputOutput";
field218.appinfo = "Whether this OfflineRender can be activated";
field218.type = "SFBool";
Script216.field[1] = field218;

let field219 = browser.currentScene.createNode("field");
field219.name = "frameRate";
field219.accessType = "inputOutput";
field219.appinfo = "Frames per second recorded for this rendering";
field219.type = "SFFloat";
Script216.field[2] = field219;

let field220 = browser.currentScene.createNode("field");
field220.name = "frameSize";
field220.accessType = "inputOutput";
field220.appinfo = "Size of frame in number of pixels width and height";
field220.type = "SFVec2f";
Script216.field[3] = field220;

let field221 = browser.currentScene.createNode("field");
field221.name = "pixelAspectRatio";
field221.accessType = "inputOutput";
field221.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field221.type = "SFFloat";
Script216.field[4] = field221;

let field222 = browser.currentScene.createNode("field");
field222.name = "set_startTime";
field222.accessType = "inputOnly";
field222.appinfo = "Begin render operation";
field222.type = "SFTime";
Script216.field[5] = field222;

let field223 = browser.currentScene.createNode("field");
field223.name = "progress";
field223.accessType = "outputOnly";
field223.appinfo = "Progress performing render operation (0..1)";
field223.type = "SFFloat";
Script216.field[6] = field223;

let field224 = browser.currentScene.createNode("field");
field224.name = "renderCompleteTime";
field224.accessType = "outputOnly";
field224.appinfo = "Render operation complete";
field224.type = "SFTime";
Script216.field[7] = field224;

let field225 = browser.currentScene.createNode("field");
field225.name = "movieFormat";
field225.accessType = "initializeOnly";
field225.appinfo = "Format of rendered output movie (mpeg mp4 etc.)";
field225.type = "MFString";
Script216.field[8] = field225;

let field226 = browser.currentScene.createNode("field");
field226.name = "imageFormat";
field226.accessType = "initializeOnly";
field226.appinfo = "Format of rendered output images (png jpeg gif tiff etc.)";
field226.type = "MFString";
Script216.field[9] = field226;

let field227 = browser.currentScene.createNode("field");
field227.name = "traceEnabled";
field227.accessType = "initializeOnly";
field227.appinfo = "enable console output to trace script computations and prototype progress";
field227.type = "SFBool";
Script216.field[10] = field227;

let IS228 = browser.currentScene.createNode("IS");
let connect229 = browser.currentScene.createNode("connect");
connect229.nodeField = "description";
connect229.protoField = "description";
IS228.connect = new MFNode();

IS228.connect[0] = connect229;

let connect230 = browser.currentScene.createNode("connect");
connect230.nodeField = "enabled";
connect230.protoField = "enabled";
IS228.connect[1] = connect230;

let connect231 = browser.currentScene.createNode("connect");
connect231.nodeField = "frameRate";
connect231.protoField = "frameRate";
IS228.connect[2] = connect231;

let connect232 = browser.currentScene.createNode("connect");
connect232.nodeField = "frameSize";
connect232.protoField = "frameSize";
IS228.connect[3] = connect232;

let connect233 = browser.currentScene.createNode("connect");
connect233.nodeField = "pixelAspectRatio";
connect233.protoField = "pixelAspectRatio";
IS228.connect[4] = connect233;

let connect234 = browser.currentScene.createNode("connect");
connect234.nodeField = "set_startTime";
connect234.protoField = "set_startTime";
IS228.connect[5] = connect234;

let connect235 = browser.currentScene.createNode("connect");
connect235.nodeField = "progress";
connect235.protoField = "progress";
IS228.connect[6] = connect235;

let connect236 = browser.currentScene.createNode("connect");
connect236.nodeField = "renderCompleteTime";
connect236.protoField = "renderCompleteTime";
IS228.connect[7] = connect236;

let connect237 = browser.currentScene.createNode("connect");
connect237.nodeField = "movieFormat";
connect237.protoField = "movieFormat";
IS228.connect[8] = connect237;

let connect238 = browser.currentScene.createNode("connect");
connect238.nodeField = "imageFormat";
connect238.protoField = "imageFormat";
IS228.connect[9] = connect238;

let connect239 = browser.currentScene.createNode("connect");
connect239.nodeField = "traceEnabled";
connect239.protoField = "traceEnabled";
IS228.connect[10] = connect239;

Script216.iS = IS228;


Script216.setSourceCode(`ecmascript:\n"+
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
ProtoBody215.children = new MFNode();

ProtoBody215.children[0] = Script216;

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
ProtoDeclare202.protoBody = ProtoBody215;

browser.currentScene.children[4] = ProtoDeclare202;

//=============== Launch Prototype Example ==============
let Background240 = browser.currentScene.createNode("Background");
Background240.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[5] = Background240;

let Anchor241 = browser.currentScene.createNode("Anchor");
Anchor241.description = "launch CameraExample scene";
Anchor241.url = new MFString(new java.lang.String["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]);
let Transform242 = browser.currentScene.createNode("Transform");
let Shape243 = browser.currentScene.createNode("Shape");
let Text244 = browser.currentScene.createNode("Text");
Text244.string = new MFString(new java.lang.String["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]);
let FontStyle245 = browser.currentScene.createNode("FontStyle");
FontStyle245.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text244.fontStyle = FontStyle245;

Shape243.geometry = Text244;

let Appearance246 = browser.currentScene.createNode("Appearance");
let Material247 = browser.currentScene.createNode("Material");
Material247.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance246.material = Material247;

Shape243.appearance = Appearance246;

Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

Anchor241.children = new MFNode();

Anchor241.children[0] = Transform242;

browser.currentScene.children[6] = Anchor241;

